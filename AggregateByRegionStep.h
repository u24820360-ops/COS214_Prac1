#ifndef AGGREGATEBYREGIONSTEP_H
#define AGGREGATEBYREGIONSTEP_H

#include "Transformation.h"
#include <string>
#include <vector>

class Transformation;

class AggregateByRegionStep : public Transformation {
public:
	AggregateByRegionStep() : Transformation("aggregate") {}
	virtual Transformation* clone();
	virtual std::vector<std::string> apply(std::vector<std::string>);
};

#endif