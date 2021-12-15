#ifndef HASH_TABLE_READFILE_H
#define HASH_TABLE_READFILE_H
#include "Worker.h"

class ReadFile : public Worker{
private:
    ifstream file;
    void parse_args() override;
public:
    explicit ReadFile(const string& arguments);


    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};


#endif //HASH_TABLE_READFILE_H
