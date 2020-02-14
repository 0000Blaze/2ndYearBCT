//using inline function
#include<iostream>

inline void payment(int salary)
{
    salary*=0.9;
    std::cout<<salary;
}

int main()
{
    int salary;
    std::cout<<"enter salary ";
    std::cin>>salary;
    payment(salary);
}
