#ifndef STREAMINGPIPELINE_H
#define STREAMINGPIPELINE_H

/*
name: Patrick Simuyemba
*/

class Pipeline; //forward declare 

//includes 
#include "Pipeline.h"


//
class StreamingPipeline : public Pipeline 
{
	//methods 
	protected:
		void extract() override;
		void load() override;
};


#endif