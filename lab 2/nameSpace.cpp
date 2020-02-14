//using namespaces
#include<iostream>
#include<iomanip>
namespace square
{
    int num;

    int fun(int num1)
    {
        return num1*num1;
    }
};

namespace cube
{
    int num;

    int fun(int num2)
    {
        return num2*num2*num2;
    }
};

int main()
{
    square::num = 2;
    std::cout<<square::fun(cube::num)<<"\n";
    cube::num = 3;
    std::cout<<cube::fun(square::num);
}

