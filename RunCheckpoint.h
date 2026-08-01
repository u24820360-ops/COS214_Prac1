#ifndef RUNCHECKPOINT_H
#define RUNCHECKPOINT_H
#include <vector>
#include <string>

class RunCheckpoint;

class RunCheckpoint
{
public:
	RunCheckpoint(int,  std::vector<std::string>);
	int getStage();
	 std::vector<std::string> getRecords();

private:
	int stage;
	 std::vector<std::string> records;
};

#endif