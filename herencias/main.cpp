#include <iostream>
using namespace std;
class square{
    friend class rectangle;
private:
    int side;
public:
    square(int a):side(a){}
};
class rectangle{
    int height,width;
public:
    rectangle(){};
    rectangle(int x,int y):width(x),height(y){}
    int area(){return height*width;}
    //friend rectangle duplicado(const rectangle&);
    void convert(square a);
};

/*rectangle duplicado(const rectangle& param){
    rectangle res;
    res.width=param.width*2;
    res.height=param.height*2;
    return res;
}*/
void rectangle::convert(square a){
    width=a.side;
    height=a.side;
}
class poligono{
protected:
    int width,height;
public:
    poligono(int a,int b):width(a),height(b){}
    void set_values(int a,int b){width=a;height=b;}
    //virtual int area(){return 0;}//polimorfismo no puro/sino lo pones virtual no es polimorfismo la cual dara cero a todos
    virtual int area(void)=0;//virtual pura y el poligono no tiene instancia es decir no puede crear objetor en main de tipo poligono
    void printarea(){cout<<this->area()<<endl;}//puede imprimir porque ya tiene area
};
class Rectangulo:public poligono{
public:
    Rectangulo(int a,int b):poligono(a,b){}//agramos constructor para new
    //int area(){return width*height;}
    int area(void){return width*height;}//para virtual puro
};
class Triangle:public poligono{
public:
    Triangle(int a,int b):poligono(a,b){}
    //int area(){return width*height/2;}
    int area(void){return width*height/2;}
};
int main()
{
    rectangle foo;
    //rectangle bar(2,3);
    //foo=duplicado(bar);
    //herancia
    rectangle rect;
    square sqr(4);
    rect.convert(sqr);
    //cout<<foo.area()<<endl;
    cout<<rect.area()<<endl;
    //creando objetos de poligono
/*   Rectangulo rec;
    //Triangle tri;

    rec.set_values(4,5);
    tri.set_values(4,5);
    cout<<rec.area()<<endl;
    cout<<tri.area()<<endl;
    Rectangulo *ptr=&rec;//punteros
    Triangle &refe=tri;
    refe.set_values(4,5);
    ptr->set_values(4,5);
    cout<<ptr->area()<<endl;
    cout<<refe.area()<<endl;//con referncia

    poligono *pol1=&rec;
    poligono *pol2=&tri;
    pol1->set_values(3,7);
    pol2->set_values(6,3);
    cout<<rec.area()<<endl;
    cout<<tri.area()<<endl;
    //polimorfismo
    Rectangulo re;
    Triangle tr;
    //poligono polig;no va en virtual por eso comentamos
    poligono &po1=re;// poligono *po1=&re;//&po1=re;
    poligono &po2=tr;//poligono *po2=&tr;//&po2=tr;
//    poligono &po3=polig;//poligono *po3=&polig;//&po3=polig;
    po1->set_values(2,9);//va a rectangulo po1
    po2->set_values(2,9);//va a triangulos
    po3->set_values(2,9);//va a poligo a sus areas
    cout<<po1->area()<<endl;
    cout<<po2->area()<<endl;
    cout<<po3->area()<<endl;*/
    //po1.set_values(2,9);//va a rectangulo po1
    //po2.set_values(2,9);//va a triangulos
    //po3.set_values(2,9);//va a poligo a sus areas
   // cout<<po1.area()<<endl;
   // cout<<po2.area()<<endl;
   // cout<<po3.area()<<endl;
    //vitual puro
   /* Rectangulo r;
    Triangle t;
    poligono *p1=&r;
    poligono *p2=&t;
    p1->set_values(6,9);
    p2->set_values(6,9);
    p1->printarea();//cout<<p1->area()<<endl;
    p2->printarea();//cout<<p2->area()<<endl;*/
    //probamos con new dinamica
    poligono *p11= new Rectangulo(6,9);
    poligono *p22= new Triangle(6,9);
    p11->printarea();
    p22->printarea();
    delete p11;
    delete p22;//polimorfismo plusplus
    return 0;
}
