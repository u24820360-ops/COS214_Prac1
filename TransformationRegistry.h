#ifndef TRANSFORMATIONREGISTRY_H
#define TRANSFORMATIONREGISTRY_H

#include "Transformation.h"

class TransformationRegistry {
private:
    map<string, Transformation*> prototypes;

public:
    void registerStep(string, Transformation*);
    Transformation* create(string);
    virtual ~TransformationRegistry();
};

#endif