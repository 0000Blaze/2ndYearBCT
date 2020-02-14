//inheritance and this pointer
#include<iostream>

using namespace std;

class person{
//base class
protected:
  char *name;
  int age;
public:
  void setData(){
//input name and age
    name= new char[15];
    cout << "\nEnter name:";
    cin >> name;
    cout << "Enter age:";
    cin >> age;
  }
  void resetData(){
//reset
    delete []name;
    this->age=0;
  }
  void printAddress(){
//address print
    cout << "Address is:" <<this<<endl;
  }
};

class student:public person{
private:
  int rollNo;
  char* faculty;
public:

  void setData(){
    person::setData();
    faculty = new char[25];
    cout << "Enter roll number:";
    cin >> rollNo;
    cout << "Enter faculty:";
    cin >> faculty;
  }

  void resetData(){
    person::resetData();
    delete []faculty;
    rollNo=0;
  }
};

class employee:public person{
private:
  int salary;
public:

  void setData(){
    person::setData();
    cout << "Enter salary:";
    cin >> salary;
  }

  void resetData(){
    person::resetData();
    salary=0;
  }
};


int main() {
//creating objects
    person p1,p2;
    student s1,s2;
    employee e1,e2;
//person objects
    p1.setData();
    p1.printAddress();
    p1.resetData();

    p2.setData();
    p2.printAddress();
    p2.resetData();

//student objects
    s1.setData();
    s1.printAddress();
    s1.resetData();

    s2.setData();
    s2.printAddress();
    s2.resetData();

//employee objects
    e1.setData();
    e1.printAddress();
    e1.resetData();

    e2.setData();
    e2.printAddress();
    e2.resetData();

  return 0;
}
