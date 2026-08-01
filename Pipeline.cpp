
#include "Pipeline.h"

Pipeline::Pipeline(ConnectorFactory *factory)
{
	// story the factory and set stage to 0
	this->factory = factory;
	this->stage = 0;
}

void Pipeline::run()
{
	// calls the relevant methods in the given order
	this->connect();
	this->extract();
	this->transform();
	this->load();
	// std::cout << "RUN COMPLETE"<<std::endl;
}

void Pipeline::addStep(Transformation *transformation)
{
	this->steps.push_back(transformation);
}

// after protected in UML
RunCheckpoint *Pipeline::createCheckpoint()
{
	// task 4
	return new RunCheckpoint(this->stage, this->records);
}

void Pipeline::restore(RunCheckpoint* cp)
{
	// task 4
	this->stage=cp->getStage();
	this->records=cp->getRecords();
}

Pipeline::~Pipeline()
{
	delete this->factory;
	factory = nullptr;
	for (auto iterator = this->steps.begin(); iterator != this->steps.end(); ++iterator)
	{
		delete *iterator;
		*iterator = nullptr;
	}
}

void Pipeline::connect()
{

	Connector *connector = this->factory->createConnector();
	std::cout << "Connecting to " << connector->getSource() << std::endl;
	this->stage = 1;
	delete connector;
	connector = nullptr;
}

void Pipeline::transform()
{

	auto iterator = this->steps.begin();
	while (iterator != this->steps.end())
	{
		Transformation *transformation = (*iterator);
		this->records = transformation->apply(this->records);
		// increment
		++iterator;
	}
	this->stage = 3;
}
