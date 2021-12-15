#ifndef HASH_TABLE_WORKFLOW_H
#define HASH_TABLE_WORKFLOW_H

#include "Block/Factory.h"
#include "ConfigR.h"

class Workflow {
private:
    Worker* worker{};
    list<pair<string, string>> prior;
    string filename;
    vector<string> text;
    Factory fact;

    void parse_config();
public:
    explicit Workflow(const string& file);


    void execute();

};


#endif //HASH_TABLE_WORKFLOW_H
