#ifndef RESTAPICONNECTOR_H
#define RESTAPICONNECTOR_H

#include "Connector.h"

class RestApiConnector : public Connector {
public:
    RestApiConnector() : Connector("restapi") {}
    virtual vector<string> extract();
};

#endif