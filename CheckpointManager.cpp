#include "CheckpointManager.h"

void CheckpointManager::save(RunCheckpoint *cp)
{
	this->history.push_back(cp);
}

//returns the most recently checkpointed stage and records
RunCheckpoint *CheckpointManager::undo()
{
	if(this->history.empty()) return nullptr;
	RunCheckpoint* cp = this->history.front();
	this->history.pop_back();
	return cp;
}

CheckpointManager::~CheckpointManager()
{
	auto iterator=this->history.begin(); //RunCheckpoint* cp in history
	while(iterator != this->history.end()) 
	{
		delete (*iterator);
		++iterator;
	}
}