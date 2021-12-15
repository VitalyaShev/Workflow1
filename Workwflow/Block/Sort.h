#ifndef HASH_TABLE_SORT_H
#define HASH_TABLE_SORT_H

#include "Worker.h"
class Sort : public Worker{
private:
    list<string> words;

    static bool size_comp(const string& first, const string& second);


    void get_words(const string& str);


    void parse_args() override;
public:
    explicit Sort(const string& args);
    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};

#endif //HASH_TABLE_SORT_H
