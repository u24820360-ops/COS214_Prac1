
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
	//  connect();
}

void Pipeline::addStep(Transformation *transformation)
{
	this->steps.push_back(transformation);
}

// after protected in UML
RunCheckpoint *Pipeline::createCheckPoint()
{
	// task 4
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
	// ConnectorFactory connector = this->factory.getSource?
}

void Pipeline::transform()
{
	auto i = this->steps.begin();
	auto j = this->records.begin();
	while (i != this->steps.end() && j != this->records.end())
	{
		Transformation *transformation = (*i);
		std::string replacement = transformation->getName();
		(*j)=replacement;
		// increment
		++i;
		++j;
	}

	this->stage = 3;
}
