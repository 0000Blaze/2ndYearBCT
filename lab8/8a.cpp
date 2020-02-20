//demonstration of different ios flags and functions to the output, bill invoice of department store

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]) {

  std::cout<<std::setw(25)<<std::setfill('*')<<"ABC Department store"<<std::endl;

  std::cout.width(17);
  std::cout<<std::setfill(' ')<< "Invoice" <<std::endl<<std::endl;

  std::cout<<std::left<<" Description || Item || ";

  std::cout<<std::right<<" Quantity || Price  "<<std::endl ;


  std::cout<<std::endl<<std::endl;
  std::cout<<"\tThank you!!\t"<<std::endl;
  return 0;
}
