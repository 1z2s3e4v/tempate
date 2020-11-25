#include "paramHdl.h"

ParamHdl_C::ParamHdl_C(int argc, char** argv){
    cout << "\033[94m[ParamHdl]\033[0m - argc=" << argc << "\n";
}

bool ParamHdl_C::isCmdValid(){
    return true;
}