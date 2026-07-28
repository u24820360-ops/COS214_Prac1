#include "Transformation.h"

Transformation::Transformation(string name){
    this->name = name;
}

string Transformation::getName(){
    return this->name;
}

Transformation::~Transformation(){}