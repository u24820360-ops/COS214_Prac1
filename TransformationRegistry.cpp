#include "TransformationRegistry.h"

void TransformationRegistry::registerStep(string key, Transformation* prototype){
    auto it = this->prototypes.find(key);
    if (it != this->prototypes.end())
    {
        delete it->second;
        this->prototypes.erase(it);
    }
    
    this->prototypes[key] = prototype;
}

Transformation* TransformationRegistry::create(string key){
    //
}

TransformationRegistry::~TransformationRegistry(){
    //
}