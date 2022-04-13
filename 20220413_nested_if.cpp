//nested if
//percabangan bersarang
//if didalam if

#include <iostream>
using namespace std;
int main ()
{
    int nilai;
    cout<<"masukan nilai = "; cin>>nilai;
    if (nilai % 2 == 0 ) {
        cout<<"bilangan genap"<<endl;
        if (nilai <10){
            cout<<"bilangan genap kurang dari 10";
        }
        else {
            cout<<"bilangan genap lebih dari 10";
        }
    }
    else{
        cout<<"bilangan ganjil"<<endl;
        if (nilai <10) {
            cout<<"bilangan ganjil kurang dari 10";
        }
        else {
            cout<<"bilangan ganjil lebih dari 10";
        }
    }
    return 0;
}
