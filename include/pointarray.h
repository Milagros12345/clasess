#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "point.h"
#include <iostream>
using namespace std;

class pointarray
{
    public:
        pointarray();
        pointarray(const Point pts[], const int size);
        pointarray(pointarray &o);
        ~pointarray();
        void print();
        int getSize();
        void push_bac(const Point &p);
        void inserta(const int,const Point &);
        void remov(const int);
    private:
        int size;
        Point *points;
        void resize(int newSize);//lo ubico en privado para que no ingresebn ortos

};

#endif // POINTARRAY_H
