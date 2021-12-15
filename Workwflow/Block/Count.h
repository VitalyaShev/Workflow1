#ifndef HASH_TABLE_COUNT_H
#define HASH_TABLE_COUNT_H
#include "Worker.h"

class Count : public Worker{
private:
    int amount;
    vector<string> words;
    string word;


    void get_words(const string& str);


    void parse_args() override;

public:
    explicit Count(const string& args);


    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};


#endif //HASH_TABLE_COUNT_H
