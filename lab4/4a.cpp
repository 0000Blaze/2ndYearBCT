//default and parametrized constructor for time variable
#include <iostream>
class time
  {
  private:
    int hour , minute , second,temp=0;
    char tm;
  public:
    time()
      {
        hour = 0;
        minute = 0;
        second = 0;
      }
    time(int hh,int mm,int ss)
      {
        hour = hh;
        minute = mm;
        second = ss;
      }
    void showtime()
        {
            std::cout<<"The time is "<<hour<<" : "<<minute<<" : "<<second;
        }
    void formatChange()
    {
        std::cout<<"Is the time after noon(y/n):";
        std::cin>>tm;
        while(second>59)
        {
            minute++;
            temp=second/60;
            if (temp>1)
                second=(second%60)+(temp-1)*60;
            else
                second=second%60;
        }
        while(minute>59)
        {
            hour++;
            temp=minute/60;
            if (temp>1)
                minute=(minute%60)+(temp-1)*60;
            else
                minute=minute%60;
        }

        if (tm=='y')
        {
            hour = hour + 12;
        }
        while(hour>23)
            hour=hour%24;
    }

    };

int main()
  {
    char choice;
    int hh=0 , mm=0 , ss=0 ;
    std::cout << "Do you want to enter date(y/n):";
    std::cin >> choice;
    if (choice == 'y')
      {
        std::cout << "Enter hour:";
        std::cin >> hh ;
        std::cout << "Enter minute:";
        std::cin >> mm ;
        std::cout << "Enter second:";
        std::cin >> ss ;
      }

          time obj1(hh,mm,ss);

      obj1.formatChange();
      obj1.showtime();

    return 0;
  }
