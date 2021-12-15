#ifndef HASH_TABLE_FACTORY_H
#define HASH_TABLE_FACTORY_H
#include "Worker.h"


class Factory {
public:
    Worker* createWorker(const string& Worker_name, const string& arguments);
};


#endif //HASH_TABLE_FACTORY_H
