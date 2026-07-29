#ifndef BATCHPIPELINE_H
#define BATCHPIPELINE_H

/*
name: Patrick Simuyemba
*/

class Pipeline; //forward declare 

//includes 
#include "Pipeline.h"


//
class BatchPipeline : public Pipeline 
{
	//methods 
	protected:
		void extract();
		void load();
};


#endif