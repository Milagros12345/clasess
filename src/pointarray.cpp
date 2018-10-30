#include "pointarray.h"
#include <iostream>
#include "point.h"
using namespace std;
pointarray::pointarray()
{
    this->size =0;
    this->points=new Point[size];
}

pointarray::pointarray(const Point pts[], const int size)
{
    this->size=size;
    this->points= new Point[size];
    for (int i=0; i< size;i++)
        points[i]= pts[i];
}

pointarray::pointarray(pointarray &o)
{
    this->size=o.size;
    this->points= new Point[o.size];
    for (int i=0; i< size;i++)
        points[i]= o.points[i];
}
void pointarray::resize(int newSize){//envio la cantidad
    Point *pts=new Point[newSize];//reserba memoria para el nuevo
    int Minsize=(newSize>size)? size:newSize;
    for(int i=0;i<Minsize;i++)
        pts[i]=points[i];//le copias de points a pts
    delete[] points;
    size=newSize;
    points=pts;
    }
void pointarray::push_bac(const Point &p){
    resize(size +1);
    points[size-1]=p;
}
void pointarray::inserta(const int pos,const Point &p){//pos esl a posion en donde quieres ingresar el vector
    resize(size+1);
    for(int i=size-1;i>pos;i--)
        points[i]=points[i-1];
    points[pos]=p;
}
void pointarray::remov(const int){

    }
int pointarray::getSize()
{
    return this->size;
}
void pointarray::print(){
    for(int i=0;i<size;i++)
        points[i].print();
    }
pointarray::~pointarray()
{
    delete[] points;
}
