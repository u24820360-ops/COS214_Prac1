#ifndef POSTGRESCONNECTOR_H
#define POSTGRESCONNECTOR_H

#include "Connector.h"

class PostgresConnector : public Connector {
public:
    PostgresConnector() : Connector("postgres") {}
    virtual std::vector<std::string> extract();
};

#endif