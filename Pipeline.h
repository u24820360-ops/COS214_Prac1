#ifndef PIPELINE_H
#define PIPELINE_H
// INCLUDES
// #include "ConnectorFactory"
#include <vector>
#include <string>
#include "Transformation.h"
#include "Pipeline.h"
#include "ConnectorFactory.h"
#include "Connector.h"
#include "RunCheckpoint.h"
// FORWARD DECLARED
class ConnectorFactory;
class Transformation;
class RunCheckpoint;

class Pipeline
{

	// methods
public: // public methods
	Pipeline(ConnectorFactory *);
	void run();
	void addStep(Transformation *);

	// after protected in UML
	RunCheckpoint *createCheckPoint();
	void restore(RunCheckpoint *);
	virtual ~Pipeline();

protected:
	void connect();
	virtual void extract() = 0;
	void transform();
	virtual void load() = 0;

	// member variables
protected:
	ConnectorFactory *factory;
	std::vector<Transformation *> steps;
	int stage;
	std::vector<std::string> records;
};

#endif