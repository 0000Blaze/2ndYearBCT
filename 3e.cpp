// employee array of objects
#include<iostream>
using namespace std;

class employee
{
    public:
        int empId,year;
        float oT,total;
        void setpara()
        {
            cout<<"Enter year: ";
            cin>>year;
            cout<<"Enter your employee ID: ";
            cin>>empId;
            cout<<"Enter total bonus of the given year: ";
            cin>>total;
            cout<<"Enter over time hours of given year: ";
            cin>>oT;
        }
        void displayreport(int id,int yr,float ot, float bonus)
        {
            cout<<"Employee with id:"<<id<<" has received Rs."<<bonus<<" as bonus and had worked "<<ot<<" hours as over time in year"<<yr<<endl;
        }

};

int main()
{
    employee emp[100];
    char ck;
    int i=0,j;
    cout<<"**************Setting up employee list ************"<<endl;
    do
    {
        emp[i].setpara();
        i++;
        cout<<"Do you want to add more records(y/n)";
        cin>>ck;
    }while (ck == 'y' || ck == 'Y');
    cout<<"************Display Reports*********"<<endl;
    for(j=0;j<i;j++)
        emp[j].displayreport(emp[j].empId,emp[j].year,emp[j].oT,emp[j].total);
}
