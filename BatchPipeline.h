#ifndef BATCHPIPELINE_H
#define BATCHPIPELINE_H
class Pipeline; //forward declare 

//includes 
#include "Pipeline.h"
#include "ConnectorFactory.h"
#include "Connector.h"


//
class BatchPipeline : public Pipeline 
{
	public:
		BatchPipeline(ConnectorFactory* factory) : Pipeline(factory) {}
	//methods 
	protected:
		void extract();
		void load();
};


#endif