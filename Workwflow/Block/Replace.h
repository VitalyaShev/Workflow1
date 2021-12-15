#ifndef HASH_TABLE_REPLACE_H
#define HASH_TABLE_REPLACE_H
#include "Worker.h"

class Replace : public Worker{
private:
    string word1, word2;


    vector<string> words;


    void get_words(const string& str);


    string replace_words();


    void parse_args() override;
public:
    explicit Replace(const string& arguments);


    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};
#endif //HASH_TABLE_REPLACE_H
