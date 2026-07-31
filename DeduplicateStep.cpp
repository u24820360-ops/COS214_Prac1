#include "DeduplicateStep.h"

Transformation* DeduplicateStep::clone(){
    return new DeduplicateStep();
}

vector<string> DeduplicateStep::apply(vector<string> temp){
    vector<string> fin = {};

    if (temp.empty())
    {
        return fin;
    }

    string check = temp[0];
    fin.push_back(check);

    for (size_t i = 1; i < temp.size(); i++)
    {
        if (check != temp[i])
        {
            check = temp[i];
            fin.push_back(temp[i]);
        }
    }
    
    return fin;
}