#ifndef PARAMDDL_H
#define PARAMDDL_H

#include <string>
#include <map>
#include <sstream>
#include <iostream>

using namespace std;

class ParamHdl_C{
public:
    ParamHdl_C(int argc, char** argv);
    
    bool isCmdValid();
    string getVal(string option);
private:
    map<string,string> m_opt2val;
};

#endif