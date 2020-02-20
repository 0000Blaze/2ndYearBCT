//user defined manipulator

#include<iostream>

using std::cin;
using std::cout;
using std::ostream;
using std::flush;

class enigma{

private:
 int width, precision;
 char fill;

public:
 enigma(int W, int P, char F){
 width = W;
 precision = P;
 fill = F;
}

friend ostream& operator<<(ostream&, enigma);
};

ostream& operator <<(ostream& out,enigma hihi)
{
out.width(hihi.width);
out.precision(hihi.precision);
out.fill(hihi.fill);
out<<flush;
return out;
}

enigma setwpf(int w, int p , char f){
 return enigma(w, p, f);
}

int main()
{
cout<<setwpf(13,6,'$')<<243.434342;
return 0;
}
