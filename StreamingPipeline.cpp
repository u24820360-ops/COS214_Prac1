
#include "StreamingPipeline.h"

void StreamingPipeline::extract()
{
	// obtain connector from factory
	Connector *connector=this->factory->createConnector();

	// set records to it's extract and print message accordingly
	this->records = connector->extract();
	std::cout << "Streaming extract:" << this->records.size() << "records" << std::endl;
	this->stage = 2;
	//cleans up
	delete connector;
	connector=nullptr;
}

void StreamingPipeline::load()
{
	std::cout << "Streaming load: " << this->records.size() << " records written "<< std::endl;
	this->stage = 4;
}