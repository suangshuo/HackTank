#include"_init_.h"
#ifndef _CLASS_H_
#define _CLASS_H_

typedef struct{
    char q,e,z,c,a,d,w,x;
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
        int __init__(int ht,int wh,int y,int x,SYMBOLS symbol);
        int __delete__();
        int printf(const char* _format_,va_list arge);
        int scanf(const char* _format_,va_list arge);
};

#endif
