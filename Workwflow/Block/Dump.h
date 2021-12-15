#ifndef HASH_TABLE_DUMP_H
#define HASH_TABLE_DUMP_H
#include "Worker.h"

class Dump : public Worker{
private:
    ofstream file;

    void parse_args() override;
public:
    explicit Dump(const string& arguments);





    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};




#endif //HASH_TABLE_DUMP_H
