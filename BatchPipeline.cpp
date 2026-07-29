
#include "BatchPipeline.h"

void BatchPipeline::extract()
{
	// obtain connector from factory
	Connector *connector=this->factory->createConnector();

	// set records to it's extract and print message accordingly
	this->records = connector->extract();
	std::cout << "Batch extract:" << this->records.size() << "records" << std::endl;
	
	this->stage = 2;
	
	//cleans up
	delete connector;
	connector=nullptr;
}

void BatchPipeline::load()
{
	std::cout << "Batch load: " << this->records.size() << " records written "<< std::endl;
	this->stage = 4;
}