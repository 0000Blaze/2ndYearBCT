//1.WAP to set a structure to hold values of mm,dd,yy and display from the structure by reference in format mm/dd/yy.
//passing structure to a function

#include<iostream>

typedef struct
{
 int year;
 int month;
 int day;
}date;

void displayDate(date* d)
{
    std::cout<<d->month<<"/"<<d->day<<"/"<<d->year;
}


int main()
{
    date dl ;
    std::cout<<"Enter day :";
    std::cin>>dl.day;
    std::cout<<"Enter year :";
    std::cin>>dl.year;
    std::cout<<"Enter month :";
    std::cin>>dl.month;
    displayDate(&dl);

    return 0;

}


