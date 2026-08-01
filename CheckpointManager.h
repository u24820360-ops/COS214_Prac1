#ifndef CHECKPOINTMANAGER_H
#define CHECKPOINTMANAGER_H
#include <vector>
#include <string>
#include "Transformation.h"
#include "Pipeline.h"
#include "ConnectorFactory.h"
#include "Connector.h"

class ConnectorFactory;
class Transformation;
class RunCheckpoint;

class CheckpointManager 
{
	public: 
		void save(RunCheckpoint*);
		RunCheckpoint* undo();
		~CheckpointManager();
	
	private:
	 std::vector<RunCheckpoint*> history;
	
};


#endif