//use of overloading operator of pre and post increment operators , since the syntax of pre and post increment operator is samme ,one everloaded function is enough for post and pre increment overloading
//since overloading is same for pre and post , the following program only uses pre increment for the object , if post is required the '++' operator may be shifted as post operator in main
//assumption of all month having 30 except february is done to make code simple
#include <iostream>

class Date{
private:
  int day,month,year;

public:
  Date(){}
  Date(int dd=23,int mm=11,int yy=2003);
  void showDate();

void operator ++()                        //overloaded post and pre increment operator function
    {
        ++this->day;

    if(this->day>30 && this->month !=2){         //all increment except month of february
        this->month++;
        this->day=1;
        }
    else if (this->month == 2 && this->day>28){   //increment for february
            this->month++;
            this->day =1;
        }

    if(this->month>12){
        this->year++;
        this->month=1;
        }

    if(((this->year)%4)==0 && this->day == 28 && this->month == 2){       //special increment for leap year
            this->day++;
        }
    }
};


Date::Date(int dd,int mm,int yy)        //constructor
{
    day=dd;
    month=mm;
    year=yy;
}

void Date::showDate()                   //display object member function
{
  std::cout << "\nThe date is :" << this->day <<"/"<<this->month<<"/"<<this->year;
}

int main() {
  Date obj1(28,12,2003);
  char ans;
  do {
    obj1.showDate();
    ++obj1;
    std::cout << "\nDo you want to add to day(y/n):";
    std::cin >> ans;
  }while(ans == 'y');
  return 0;
}
