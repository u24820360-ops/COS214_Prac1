#ifndef RESTAPICONNECTOR_H
#define RESTAPICONNECTOR_H

#include "Connector.h"

class RestApiConnector : public Connector {
public:
    virtual vector<string> extract();
};

#endif