#include "paramHdl.h"
#include "dm.h"
#include "parser.h"

using namespace std;

int main(int argc, char** argv){
    /*Preliminary Information*/
    cout << "     #############################################################" << endl;
    cout << "     #                                                           #" << endl;
    cout << "     #                         [VDA LAB]                         #" << endl;
    cout << "     #-----------------------------------------------------------#" << endl;
    cout << "     #                     Cap Array Generator                   #" << endl;
    cout << "     #                                                           #" << endl;
    cout << "     #############################################################" << endl;
    cout << endl;

    // Pointers 
    ParamHdl_C *pParamHdl;
    Parser_C *pParser;
    DmMgr_C *pDmMgr;
    
    // Random seed
    srand( time(NULL) );

    // start Recording
    clock_t start, end;
    start = clock();
    
    pParamHdl = new ParamHdl_C(argc,argv);
    // usage
    if(!pParamHdl->isCmdValid()){
        cout << "cmd Error.\n";
        cout << "usage: ./gen_capArray -simpleInput <input.txt>   // Generate layout automatically.\n";
        cout << "or:    ./gen_capArray -sp <netlist.sp>           // Generate layout automatically.\n";
        cout << "or:    ./gen_capArray -spf <parasitic.spf>       // Get total parasitic for all finger cap.\n";
        return 0;
    }

    // parse input file
    pParser = new Parser_C(pParamHdl);
    //pParser->print_info();
    pDmMgr = new DmMgr_C(pParser,start);


    end = clock();
    printf("Execution Time: %f seconds\n", (double)(end-start)/CLOCKS_PER_SEC);
    delete pDmMgr;
    delete pParser;
    delete pParamHdl;
    return 0;
}