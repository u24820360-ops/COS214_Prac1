#include "RunCheckpoint.h"

RunCheckpoint::RunCheckpoint(int stage, std::vector<std::string> records)
{
	this->records = records;
	this->stage = stage;
}

int RunCheckpoint::getStage()
{
	return this->stage;
}

std::vector<std::string> RunCheckpoint::getRecords()
{
	return this->records;
}