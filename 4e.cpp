#include <iostream>

class ww3
{
private:
  int num;
  int sum;
public:
    ww3(){}
    ww3(int x);
    int add(int);    //normal function
    int show()const;  //constant function
};

ww3::ww3(int x)
{
  num =x;
}

int ww3::add(int y)
{
  sum= num + y;        //changing given value
  return sum;
}

int ww3::show() const
{
    return num;
}

int main()
{
  const ww3 constantObj(10);  //constant object
  ww3 normalObj(20);          //normal object
  std::cout << "Value of non constant object:" <<normalObj.show() <<'\n'; //4.non constant object and constant object
  std::cout << "Value of constant object:" <<constantObj.show() <<'\n';  //2.constant object and constant function
  std::cout << "Changing value of non constant object:" <<normalObj.add(5) <<'\n'; //3.non constant object and non constant function
//  std::cout << "Changing value of constant object:"<<constantObj.add(6)<<std::endl;
  return 0;
} //no changes allowed in constant object , hence constant object and non constant function is not allowed
