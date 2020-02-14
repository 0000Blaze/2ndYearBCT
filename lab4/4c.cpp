//invocation of constructor and destructor
#include <iostream>

class department
{
private:
  char* depId=new char[9];
  char* depName=new char[39];
public:
  department();
  ~department();
};

department::department()
{
  std::cout << "Constructor invoked." << '\n';
  depId="076HR078";
  depName="Department of human resource management.";
  std::cout << " ID: " << depId << "\n Department: "<<depName<<std::endl;
}

department::~department()
{
  std::cout << "\nDestructor invoked." << '\n';
  std::cout << "\n Object goes out of scope" << std::endl ;
    delete[] depId;
    delete[] depName;
}
int main() {
  department d1;
  return 0;
}
