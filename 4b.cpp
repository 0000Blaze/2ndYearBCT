//dynamic memory allocation utilized to concatinate two character arrays , also use of destructor to free up heap
#include<iostream>

using namespace std;

class data
{
private:
        int i,j;
public:
    char* str1=new char[14];
    char* str2=new char[18];
    char* resStr= new char[33];
    data();
    void join(char*,char*);
    void displayString( );
    ~data();
};

data::data()
    {
        str1="Engineers are ";
        str2="Creatures of logic";
    }
void data::join(char* a, char* b)
    {
        for (i=0;i<14;i++)
        {
            resStr[i]=a[i];
        }
        for (j=0;j<18;j++)
        {
            resStr[j+14]=b[j];
        }
        resStr[32]='\0';
    }
void data::displayString()
    {
        cout<<resStr;
    }
data::~data()
    {
        delete  str1;
        delete  str2;
        delete resStr;
    }
int main()
{
    data obj1;
    obj1.join(obj1.str1,obj1.str2);
    obj1.displayString();
    return 0;
}
