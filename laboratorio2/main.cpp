#include <iostream>
#include "polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "dinamicArray.h"
/*ostream& operator<<(ostream &output,polygon *a){
    output<<" ("<<a->getw()<<","<<a->geth()<<")";
    return output;
}
ostream &operator<<(ostream &o,dinamicArray p){
    for(int i=0;i<p.size;i++)
        o<<"["<<p.arr<<"]";
}*/
int main(){
    Rectangle rect;
    Triangle tri;
    Rectangle tri1;
    Triangle rect1;
    polygon *pol1=&rect;
    polygon *pol2=&tri;
    polygon *pol3=&tri1;
    polygon *pol4=&rect1;
    pol1->set_value(3,6);
    pol2->set_value(4,7);
    pol3->set_value(3,7);
    pol4->set_value(1,9);
    pol1->area();
    pol2->area();
    pol3->area();
    pol4->area();
    pol1->print();
    pol2->print();
    std::cout<<std::endl;
    polygon *p[4]={pol1,pol2,pol3,pol4};
    polygon *p2[4]={&rect,&tri,&tri1,&rect1};
    dinamicArray a1(p2,4);
    a1.print();
    dinamicArray a(p,4);
    a.print();


    return 0;
}
