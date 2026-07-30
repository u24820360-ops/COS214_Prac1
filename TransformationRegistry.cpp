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
    auto it = this->prototypes.find(key);
    if (it == this->prototypes.end())
    {
        return nullptr;
    }
    
    return this->prototypes[key]->clone();
}

TransformationRegistry::~TransformationRegistry(){
    for (auto& pair : this->prototypes) {
        delete pair.second;
    }
    this->prototypes.clear();
}