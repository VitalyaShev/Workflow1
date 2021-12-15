#include "Grep.h"
Grep::Grep(const string& arguments) {
    string s;
    args.push_back(s);
    for (char i : arguments){
        args[0].push_back(i);
    }
}


void Grep::parse_args() {
    word = args[0];
}


void Grep::do_work(vector<string> txt){
    parse_args();
    string word1;
    for (const auto& iter : txt){
        for (const auto& iter1 : iter){
            if(iter1 != ' ' && iter1 != '\n'){
                word1 += it1;
            }
            else{
                if (word1 == word){
                    text.push_back(iter);
                    word1 = "";
                    break;
                }
                else{
                    word1 = "";
                }
            }
        }
    }
}


vector<string> Grep::get_result() {
    return text;
}