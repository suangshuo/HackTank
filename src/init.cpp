#include"_init_.h"
using namespace std;
int init(){
    initscr();
    keypad(stdscr,true);
    noecho();
    raw();
    cbreak();

    endwin();

    return 0;
}
