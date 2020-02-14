//virtual base
#include<iostream>

class person{
protected:
  char* name;
  int age;
public:
  void setData(){
    name=new char[20];
    std::cout << "Enter name:";std::cin >> name;
    std::cout << "Enter age:";std::cin >> age;
  }
  void display(){
    std::cout << "Name:" <<name<<"\n"<<"Age:"<<age<<"\n";
  }
  virtual ~person(){
    delete []name;
  }
};

class employee:public virtual person{
protected:
  int salary;
public:
  void setDataE(){
    std::cout << "Enter salary:";std::cin >> salary;
  }
  void displayE(){
    std::cout << "Salary:"<<salary << '\n';
  }
};

class student:public virtual person{
protected:
  char grade;
public:
  void setDataS(){
    std::cout << "Enter grade:";std::cin >> grade;
  }
  void displayS(){
    std::cout << "Grade:"<<grade << '\n';
  }
};

class manager:public employee,public student{
protected:
  char* company;
public:
  void setData(){
    person::setData();
    employee::setDataE();
    student::setDataS();
    company= new char[20];
    std::cout << "Enter company:";std::cin >> company;
  }
  void display(){
    person::display();
    employee::displayE();
    student::displayS();
    std::cout << "Company:" <<company <<'\n';
  }
  ~manager(){
    delete []company;
  }
};

int main() {
  manager m;
  m.setData();
  m.display();
  return 0;
}
