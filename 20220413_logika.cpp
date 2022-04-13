#include <iostream>
using namespace std;

int main(){
    /*
    jika nilai dengan sisa bagi (%) = 0, bilangan genap jika bukan, bilangan ganjil
    */
    int nilai;
    cout<<"masukan nilai = ";cin>>nilai;
    if (nilai % 2 == 0){
        cout<<"bilangan genap";
    }
    else {
        cout<<"bilangan ganjil";
    }
}
