#ifndef STREAMINGPIPELINE_H
#define STREAMINGPIPELINE_H

/*
name: Patrick Simuyemba
*/

class Pipeline; //forward declare 

//includes 
#include "Pipeline.h"
#include "ConnectorFactory.h"
#include "Connector.h"


//
class StreamingPipeline : public Pipeline 
{
	//methods 
	protected:
		void extract() override;
		void load() override;
};


#endif