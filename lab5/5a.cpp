//friend class and friend function
#include<iostream>

class work;

class cartesianCoordinate
{
private:
  float x;
  float y;
public:
  cartesianCoordinate(){}
  cartesianCoordinate(float num1 , float num2);

  friend void addition(cartesianCoordinate, cartesianCoordinate,float*,float*);    //friend function
  friend class work;                                //friend class
};

class work
{
public:
  void addition(cartesianCoordinate, cartesianCoordinate,float*,float*);
  void subtraction(cartesianCoordinate, cartesianCoordinate,float*,float*);
  void multiplication(cartesianCoordinate, cartesianCoordinate,float*,float*);
  void division(cartesianCoordinate, cartesianCoordinate,float*,float*);

};

cartesianCoordinate::cartesianCoordinate(float num1,float num2)
{
  x=num1;
  y=num2;
}

void work::addition(cartesianCoordinate a,cartesianCoordinate b,float* sumX,float* sumY)
{
  *sumX =a.x+b.x;
  *sumY =a.y+b.y;

}

void work::subtraction(cartesianCoordinate a,cartesianCoordinate b,float* subX,float* subY)
{
  *subX =a.x-b.x;
  *subY =a.y-b.y;

}

void work::multiplication(cartesianCoordinate a,cartesianCoordinate b,float* mulX,float* mulY)
{
  *mulX =a.x*b.x;
  *mulY =a.y*b.y;

}

void work::division(cartesianCoordinate a,cartesianCoordinate b,float* divX,float* divY)
{
  *divX =a.x/b.x;
  *divY =a.y/b.y;

}

void setdata(float* x,float* y)                                    //initialize value of x and y
{
  std::cout <<"Enter x-coordinate:";
  std::cin >> *x ;
  std::cout << "Enter y-coordinate:";
  std::cin >> *y ;
}

int main() {
  float x,y,sumX,sumY,subX,subY,mulX,mulY,divX,divY;

  setdata(&x,&y);
  cartesianCoordinate obj1(x,y);
  std::cout << "First object created" << '\n';

  setdata(&x,&y);
  cartesianCoordinate obj2(x,y);
  std::cout << "Second object created" << '\n';

  work object;
  object.addition(obj1,obj2,&sumX,&sumY);
  object.subtraction(obj1,obj2,&subX,&subY);
  object.multiplication(obj1,obj2,&mulX,&mulY);
  object.division(obj1,obj2,&divX,&divY);

  std::cout << "Sum=" << sumX<<" , "<<sumY<<" Difference="<< subX<<" , "<<subY << " Product= "<<mulX<<" , "<<mulY <<" Quotient= "<<divX<<" , "<<divY<<'\n';
  return 0;
}
