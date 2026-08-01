#include "AggregateByRegionStep.h"

Transformation* AggregateByRegionStep::clone(){
    return new AggregateByRegionStep();
}

std::vector<std::string> AggregateByRegionStep::apply( std::vector<std::string> temp){
    return {"COUNT=" + std::to_string(temp.size())};
}