#include"../_init_.h"
#include"../class.h"
using namespace std;
SYMBOLS win_chr={
    ACS_ULCORNER,
    ACS_URCORNER,
    ACS_LLCORNER,
    ACS_LRCORNER,
    ACS_LTEE,
    ACS_RTEE,
    ACS_TTEE,
    ACS_BTEE
};
int start(){
    window a;
    a.__init__(3,10,0,0,win_chr);

    return 0;
}
