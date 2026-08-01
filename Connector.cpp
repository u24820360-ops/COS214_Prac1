#include "Connector.h"

Connector::Connector(string source){
    this->source = source;
}
    
string Connector::getSource(){
    return this->source;
}

Connector::~Connector(){}