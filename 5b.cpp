//friend function and overloading operator + and -
#include <iostream>

class coordinate{

private:
  float x,y,z;
public:
  coordinate(){}
  coordinate(float num1=0, float num2=0, float num3=0);

  friend void add(coordinate,coordinate);    //declaring friend
  friend void sub(coordinate,coordinate);    //declaring friend
  friend coordinate operator+(coordinate const &obj1,coordinate const &obj2);
  friend coordinate operator -(coordinate const &obj1,coordinate const &obj2);
};

  coordinate operator+(coordinate const &obj1,coordinate const &obj2)  //overloading operator function
  {
    coordinate temp(0,0,0);
    temp.x= obj1.x+ obj2.x;
    temp.y= obj1.y+ obj2.y;
    temp.z= obj1.z+ obj2.z;
    return temp;
  }

  coordinate operator -(coordinate const &obj1,coordinate const &obj2)   //overloading operator function
  {
    coordinate temp(0,0,0);
    temp.x= obj1.x- obj2.x;
    temp.y= obj1.y- obj2.y;
    temp.z= obj1.z- obj2.z;
    return temp;
  }

coordinate::coordinate(float num1,float num2, float num3)  //constructor with default arguement
{
  x=num1;
  y=num2;
  z=num3;
}

void add(coordinate obj1,coordinate obj2){
  coordinate res= obj1 + obj2 ;
  std::cout << "Addition:" << '\n'<<res.x <<", "<<res.y<<", "<<res.z<<std::endl;
}

void sub(coordinate obj1,coordinate obj2){
  coordinate res= obj1 - obj2 ;
  std::cout << "Difference:" << '\n'<<res.x <<", "<<res.y<<", "<<res.z<<std::endl;
}
int main() {
  float x,y,z;
  std::cout << "Enter first x , y and z coordinate :";
  std::cin >> x >> y >> z;
  coordinate obj1(x,y,z);
  std::cout << "Enter second x , y and z coordinate :";
  std::cin >> x >> y >> z;
  coordinate obj2(x,y,z);
  add(obj1,obj2);
  sub(obj1,obj2);
  return 0;
}
