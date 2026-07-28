#ifndef AGGREGATEBYREGIONSTEP_H
#define AGGREGATEBYREGIONSTEP_H

#include "Transformation.h"

class AggregateByRegionStep : public Transformation {
public:
    virtual Transformation* clone();
    virtual vector<string> apply(vector<string>);
};

#endif