#include "AggregateByRegionStep.h"

Transformation* AggregateByRegionStep::clone(){
    return new AggregateByRegionStep();
}

vector<string> AggregateByRegionStep::apply(vector<string> temp){
    return {"COUNT=" + to_string(temp.size())};
}