#ifndef POSTGRESCONNECTOR_H
#define POSTGRESCONNECTOR_H

#include "Connector.h"

class PostgresConnector : public Connector {
public:
    PostgresConnector() : Connector("postgres") {}
    virtual vector<string> extract();
};

#endif