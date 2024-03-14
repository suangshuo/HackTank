#include"../_init_.h"
using namespace std;
typedef struct{
    char q,e,z,c,x,a,d,w;
    //q w e 键盘
    //a s d
    //z x c
}SYMBOLS;
class window{
    private:
        struct{
            WINDOW* win;
        }self;
    public:
        int __init__(int ht,int wh,int y,int x,SYMBOLS symbol){
            self.win=newwin(ht,wh,y,x);
            wborder(self.win,
                    symbol.a,
                    symbol.d,
                    symbol.w,
                    symbol.x,
                    symbol.q,
                    symbol.e,
                    symbol.z,
                    symbol.c
                    );
            wrefresh(self.win);
            return 0;
        }int __delete__(){
            delwin(self.win);
            return 0;
        }int printf(const char* _format_,va_list arge){
            return vw_printw(self.win,_format_,arge);
        }int scanf(const char* _format_,va_list arge){
            return vw_scanw(self.win,_format_,arge);
        }
};
