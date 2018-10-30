#include <iostream>
#include "point.h"
#include "VECTOR.H"
#include "pointarray.h"
using namespace std;
void swap(Point &p,Point &q){
    Point aux = p;
    p = q;
    q = aux;
}
void swappuntero(Point *p,Point *q){
    Point aux = *p;
    *p = *q;
    *q = aux;
}
int main()
{
    /*Point p;
    p.print();
    Point q(6,7);
    //Point z=q;
    q.print();
    //z.print();
    //usando punteros
    cout << "usando punteros" << endl;
    Point *ptr1=&p;
    Point *ptr2=&q;
    (*ptr1).print();//o ptr1->print();
    ptr1->print();
    (*ptr2).print();
    ptr2->print();

    //s
    cout << "swap" << endl;
    //swap(p,q);
    p.print();
    q.print();
    cout << "swap puntero" << endl;
    swappuntero(&p,&q);
    p.print();
    q.print();*/
    //reservando memoria
    /*cout << "reservando memoria" << endl;
    Point *easy = new Point;
    (*easy).print();
    easy->offset(10,10);
    easy->print();
    delete easy;*/



    Point p(1,3);
    Point q(3,3);
    Point r(3,1);
    Point s(7,9);
    Point arr[]={p,q,r};
    int size =sizeof(arr)/sizeof(arr[0]);
    pointarray pa2(arr, size);
    pa2.print();
    //pointarray pa= pa2;
    cout<<endl;
    pa2.push_bac(p);//inserto el p
    cout<<endl;
    //pa2.print();
    //cout << pa2.getSize() << endl;
    pa2.inserta(2,s);//el 1 es la posicion
    pa2.print();

    return 0;
}
