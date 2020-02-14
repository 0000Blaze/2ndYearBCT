//returning by reference
#include<iostream>

int& funct(int &a, int &b)
{
    return (a>b) ? a : b;
}
int main()
{
    int a=5,b=3;
    funct(a,b) = 100;
    std::cout<<a<<std::endl<<b;

}
