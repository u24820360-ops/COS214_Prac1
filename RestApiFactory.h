#ifndef RESTAPIFACTORY_H
#define RESTAPIFACTORY_H

#include "ConnectorFactory.h"
#include "RestApiConnector.h"

class RestApiFactory : public ConnectorFactory {
public:
    virtual Connector* createConnector();
};

#endif