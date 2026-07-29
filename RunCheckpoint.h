#ifndef RUNCHECKPOINT_H
#define RUNCHECKPOINT_H
#include <vector>
#include <string>
#include "Transformation.h"
#include "Pipeline.h"
#include "ConnectorFactory.h"
#include "Connector.h"

class ConnectorFactory;
class Transformation;
class RunCheckpoint;

class RunCheckpoint
{
public:
	RunCheckpoint(int, std::vector<std::string>);
	int getStage();
	std::vector<std::string> getRecords();

private:
	int stage;
	std::vector<string> records;
};

#endif