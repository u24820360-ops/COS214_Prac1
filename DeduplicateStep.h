#ifndef DEDUPLICATESTEP_H
#define DEDUPLICATESTEP_H

#include "Transformation.h"

class DeduplicateStep : public Transformation {
public:
    DeduplicateStep() : Transformation("dedup") {}
    virtual Transformation* clone();
    virtual vector<string> apply(vector<string>);
};

#endif