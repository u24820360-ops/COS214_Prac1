#ifndef DEDUPLICATESTEP_H
#define DEDUPLICATESTEP_H

#include "Transformation.h"

class DeduplicateStep : public Transformation {
public:
    DeduplicateStep() : Transformation("dedup") {}
    virtual Transformation* clone();
    virtual std::vector<std::string> apply( std::vector<std::string>);
};

#endif