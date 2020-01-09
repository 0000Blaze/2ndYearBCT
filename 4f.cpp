//satatic data member and static member function
#include<iostream>
using namespace std;
class Serial
{
private:
       static int count;   //static data member
       int num;
public:
    Serial();       //constructor
    static int getcount()  //static member function
    {
        return count;
    }
};
Serial::Serial()
       {
            ++count;     //increment to static data member
            cout<<count<<".Object Created"<<"\n";
       }

int Serial::count =0;  //initialize static data member
int main()
       {
           Serial obj1,obj2,obj3;
           cout<<"The total objects created are: "<<Serial::getcount();
       }
