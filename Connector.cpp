#include "Connector.h"

Connector::Connector(std::string source){
    this->source = source;
}
    
std::string Connector::getSource(){
    return this->source;
}

Connector::~Connector(){}