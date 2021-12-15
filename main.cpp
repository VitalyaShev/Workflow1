#include <iostream>
#include <string>
#include <fstream>
#include <utility>
#include <vector>
#include <list>
#include "Workwflow/Workflow.h"
#include <typeinfo>

using namespace std;



int main() {
    string s;
    int k;
    cout << typeid(k).name() << endl;
    vector<string> h (3, "lol \n");
    Workflow w1("config.txt");
    w1.execute();
    return 0;
}
