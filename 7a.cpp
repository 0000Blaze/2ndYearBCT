//virtual functions and virtual destructor

#include<iostream>

class shape{
public:
  shape(){
    std::cout << "Base Constructor" << '\n';
  }
//virtual functions
  virtual void area(){
    std::cout << "Base Area function" << '\n';
  }
  virtual void display(){
    std::cout << "Base display function" << '\n';
  }
//virtual destructor
  virtual ~shape(){
    std::cout << "Base Destructor" << '\n';
  }

};

class circle:public shape{

float radius,areaC;

public:
  circle(float r=0){
    radius=r;
  }
  void area(){
    areaC=3.1415*radius*radius;
  }
  void display(){
    std::cout << "Area of circle is " <<areaC <<'\n';
  }
  ~circle(){
    std::cout << "\nCircle Destructor" << '\n';
  }
};

class rectangle:public shape{

float length , breadth, areaR;

public:
  rectangle(float l=0,float b=0){
    length=l;
    breadth=b;
  }
  void area(){
    areaR=length*breadth;
  }
  void display(){
    std::cout << "Area of rectangle is"<<areaR << '\n';
  }
  ~rectangle(){
    std::cout << "\nRectangle Destructor" << '\n';
  }
};

class trapezoid:public shape{

float longBase,shortBase,altitude,areaT;
public:

  trapezoid(int a=0,int b=0,float h=0){
    longBase=a;
    shortBase=b;
    altitude=h;
  }
  void area(){
    areaT=((longBase+shortBase)/2)*altitude;
  }
  void display(){
    std::cout << "Area of trapezoid is "<<areaT << '\n';
  }
  ~trapezoid(){
    std::cout << "\nTrapezoid Destructor" << '\n';
  }
};


int main() {
//pointer of base class(i.e. shape class)
  shape* ptr;

//circle class
  circle c(1.5);
  ptr =&c;
  ptr->area();
  ptr->display();

//rectangle class
  rectangle r(2.5,4);
  ptr=&r;
  ptr->area();
  ptr->display();

//trapezoid class
  trapezoid t(2,4,2.5);
  ptr=&t;
  ptr->area();
  ptr->display();

  return 0;
}
