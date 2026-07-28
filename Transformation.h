#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <string>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Transformation {
protected:
    string name;

public:
    Transformation(string);
    virtual Transformation* clone() = 0;
    virtual vector<string> apply(vector<string>) = 0;
    string getName();
    virtual ~Transformation();
};

#endif