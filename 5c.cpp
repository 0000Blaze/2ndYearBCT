//overload comparison operators with objects that contain integer
#include <iostream>

class comp{
public:
    int num;
    comp(){}
    comp(int x);
};

comp::comp(int x=0)
{
  num = x ;
}

bool operator ==(const comp a,const comp b)
{
    if(a.num==b.num)
      return 1;
    else
      return 0;
}

bool operator !=(const comp a,const comp b)
{
    if(a.num!=b.num)
      return 1;
    else
      return 0;
}


bool operator <(const comp a,const comp b)
{
    if(a.num<b.num)
      return 1;
    else
      return 0;
}

bool operator >(const comp a,const comp b)
{
    if(a.num>b.num)
      return 1;
    else
      return 0;
}

bool operator <=(const comp a,const comp b)
{
    if(a.num<=b.num)
      return 1;
    else
      return 0;
}

bool operator >=(const comp a,const comp b)
{
    if(a.num>=b.num)
      return 1;
    else
      return 0;
}

int main() {
  int a1,a2;
  std::cout << "Enter first object integer:";
  std::cin >> a1;
  std::cout << "Enter second object integer:";
  std::cin >> a2;
  comp obj1(a1),obj2(a2);

  std::cout << "\n" <<"First Comparision:";
  if(obj1<obj2)
    std::cout << "\n"<<"Second object is greater.";
  else if(obj1>obj2)
    std::cout << "\n"<<"First object is greater.";

  std::cout <<'\n'<< "Second Comparision:";
  if(obj1 != obj2)
    std::cout <<"\n"<< "First and second object are not equal.";
  else if(obj1 == obj2)
    std::cout <<"\n" <<"Objects are equal.";

  std::cout <<'\n'<< "Third Comparision:";
  if(obj1 <= obj2)
    std::cout <<"\n" <<"Second object is greater than or equal to object one.";
  else if(obj1 >= obj2)
    std::cout <<"\n" <<"First object is greater than or equal to object two.";

  return 0;
}
