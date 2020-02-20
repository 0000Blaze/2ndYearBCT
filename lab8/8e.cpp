//random access file

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Transaction{      //class for transaction data

 private:
  char firstName[25], lastName[25];
  int accountNumber, totalBalance;

 public:
  Transaction(){};

  Transaction(char fnm[], char lnm[], int anm, int tb):accountNumber(anm),totalBalance(tb)
  {
    strncpy(firstName,fnm,25);
    strncpy(lastName,lnm,25);
  }

  friend istream& operator>>(istream&, Transaction&);
  friend ostream& operator<<(ostream&, Transaction);

};
istream& operator>>(istream& in, Transaction &obj)
{
  cout <<endl <<"First Name: ";
  in >> obj.firstName;
  cout << "Last Name: ";
  in >> obj.lastName;
  cout << "Account Number: ";
  in >> obj.accountNumber;
  cout << "Total Balance: ";
  in >> obj.totalBalance;
  cout<<endl;
  return in;
}

ostream &operator<<(ostream &out, Transaction obj)
{
  cout <<endl;
  out << "First Name: " << obj.firstName << endl;
  out << "Last Name: " << obj.lastName << endl;
  out << "Account Number: " << obj.accountNumber << endl;
  out << "Total Balance: " << obj.totalBalance << endl;
  cout <<endl;
  return out;
}

int main()
{
  int choice;

  do
  {
    cout << "Choose:" << endl;
    cout << "1.create record" << endl;
    cout << "2.add record" << endl;
    cout << "3.delete record" << endl;
    cout << "4.edit record" << endl;
    cout << "5.display record" << endl;
    cout << "6.exit" << endl;
    cout << "Enter your choice: ";

    cin >> choice;

    fstream file;

    if(choice== 1)
    {
        char ans;
        file.open("account.txt",ios::out|ios::binary);

        do
        {
            Transaction obj;
            cin >> obj;
            file.write(reinterpret_cast<char *>(&obj),sizeof(obj));
            if (!file)
            {
                cerr << "Could not write the data to the file";
                return 1;
            }
            cout << "Do you want to continue (y/n) : ";
            cin >> ans;
        }while(ans=='y');

        file.close();
    }
  else if(choice == 2)
    {
        char ans;
        file.open("account.txt",ios::out|ios::app|ios::binary);
        do
        {
            Transaction obj;
            cin >> obj;
            file.write(reinterpret_cast<char *>(&obj),sizeof(obj));
            if (!file)
            {
                cerr << "Could not modify the data of the file";
                return 2;
            }
            cout << "Do you want to continue (y/n) : ";
            cin >> ans;
        }while(ans=='y');

    file.close();
  }
  else if(choice == 3)
  {
        char ns;
        Transaction obj;
        file.open("account.txt",ios::in|ios::binary);

        fstream newfile;
        newfile.open("tmp.txt",ios::out|ios::binary);
        if(!newfile)
        {
        cerr << "could not create tmp record file";
        }

        while(!file.eof())
        {
            file.read(reinterpret_cast<char *>(&obj),sizeof(obj));
            if (file)
            {
                cout << obj;
                cout << "Do you want to delete this record (y/n) :";
                cin >> ns;

                if (ns != 'y')
                {
                    newfile.write(reinterpret_cast<char *>(&obj),sizeof(obj));

                    if(!newfile)
                    {
                        cerr << "unable to write to a temp file";
                        return 3;
                    }
                }
                else
                {
                    cout << "record deleted" << endl;
                }
            }
        }

        file.close();
        newfile.close();

        remove("account.txt");
        rename("tmp.txt","account.txt");
  }
  else if(choice == 4)
  {
        char ans;
        file.open("account.txt",ios::in|ios::binary|ios::out);
        while(!file.eof())
        {
        Transaction obj;
        int pos = file.tellg();

        file.read(reinterpret_cast<char *>(&obj),sizeof(obj));
        if (file)
        {
            cout << obj;
            cout << "Do you want to edit this record (y/n):";
            cin >> ans;
            if (ans == 'y')
            {
                cin >> obj;
                file.seekp(pos);
                file.write(reinterpret_cast<char *>(&obj),sizeof(obj));

                if(file)
                {
                    cout << "Record sucessfully edited"<< endl;
                }
                else
                {
                    cerr<< "Unable to modify the record";
                    return 4;
                }
            }
        }
    }

    file.close();
  }

  else if (choice == 5)
  {
        file.open("account.txt",ios::in|ios::binary);
        while(!file.eof())
        {
            Transaction obj;
            file.read(reinterpret_cast<char *>(&obj),sizeof(obj));
            if(file)
            {
                cout << obj;
            }
            else
            {
                cerr << "Could not read through the file" << endl;
            }
        }
    file.close();
  }

}while(choice <= 5 && choice > 0 );
  return 0;
}
