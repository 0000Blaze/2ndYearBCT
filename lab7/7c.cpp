//abstract class
#include<iostream>

class student{
protected:
  char* name;
  int age;
  float marks;
public:
  void setData(){
    name= new char[20];
    std::cout << "Enter name:";std::cin >> name;
    std::cout << "Enter age:";std::cin >> age;
    std::cout << "Enter marks:";std::cin >> marks;
    std::cout<<"\n";
  }
//pure virtial function
  virtual void display()=0;

  ~student(){
    delete[]name;
  }
};
class engineering:public student{

char field;
public:
  void setData(){
    student::setData();

  }
  void display(){
    field ='E';
    std::cout << "\nName:" <<name<<"\nAge:"<<age<<"\nMarks:"<<marks<<"\nField:"<<field<<'\n';
  }
};

class medicine:public student{

char field;
public:
  void setData(){
    student::setData();

  }
  void display(){
    field ='M';
    std::cout << "\nName:" <<name<<"\nAge:"<<age<<"\nMarks:"<<marks<<"\nField:"<<field<<'\n';
  }
};

class science:public student{

char field;
public:
  void setData(){
    student::setData();

  }
  void display(){
    field='S';
    std::cout << "\nName:" <<name<<"\nAge:"<<age<<"\nMarks:"<<marks<<"\nField:"<<field<<'\n';
  }
};

int main() {
//create derived class objects
  engineering e;
  medicine m;
  science s;
//base class pointer array
  student *ptr[3];
//assign pointer to derived objects
  ptr[0]=&e;
  ptr[1]=&m;
  ptr[2]=&s;
//set values
  ptr[0]->setData();
  ptr[1]->setData();
  ptr[2]->setData();
//show values
  ptr[0]->display();
  ptr[1]->display();
  ptr[2]->display();

  return 0;
}
