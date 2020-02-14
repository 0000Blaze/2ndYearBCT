//using default value in a function

#include<iostream>

int salaryIncrement(int* salary ,int increment =0)
{
    *salary += (*salary*increment/100);
}

int main()
{
    int CEOsalary =35000;
    int IOsalary = 25000;
    int SAsalary = 24000;
    int Psalary = 18000;

    std::cout<<CEOsalary<<"\t"<<IOsalary<<"\t"<<SAsalary<<"\t"<<Psalary;

    salaryIncrement(&CEOsalary,9);
    salaryIncrement(&IOsalary,10);
    salaryIncrement(&SAsalary,12);
    salaryIncrement(&Psalary,12);

    std::cout<<"\n"<<CEOsalary<<"\t"<<IOsalary<<"\t"<<SAsalary<<"\t"<<Psalary;
}
