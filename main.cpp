#include <string>
#include <iostream>
#include <map>
#include <vector>

#include "AggregateByRegionStep.h"
#include "TransformationRegistry.h"
#include "DeduplicateStep.h"
#include "BatchPipeline.h"
#include "PostgresFactory.h"
#include "CheckpointManager.h"




int main () 
{
	std::cout << std::endl << "Program is running..." << std::endl <<std::endl;
	//all tests come here
	TransformationRegistry* tr = new TransformationRegistry();
	tr->registerStep("dedup", new DeduplicateStep());
	tr->registerStep("aggregate", new AggregateByRegionStep());

	BatchPipeline* bp = new BatchPipeline(new PostgresFactory);

	Transformation* dedupStep = tr->create("dedup");
	Transformation* aggStep = tr->create("aggregate");

	bp->addStep(dedupStep);
	bp->addStep(aggStep);

	CheckpointManager* cm = new CheckpointManager();
	
	bp->run();

	RunCheckpoint* rcp = bp->createCheckpoint();
	cm->save(rcp);

	delete bp;
	delete tr;
	delete cm;
	std::cout << std::endl << std::endl<< "Program has finished executing" << std::endl;
	return 0;
}
