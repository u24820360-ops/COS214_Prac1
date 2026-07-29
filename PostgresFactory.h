#ifndef POSTGRESFACTORY_H
#define POSTGRESFACTORY_H

#include "ConnectorFactory.h"

class PostgresFactory : public ConnectorFactory {
public:
    virtual Connector* createConnector();
};

#endif