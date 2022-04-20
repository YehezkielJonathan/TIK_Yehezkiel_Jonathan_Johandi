#include <iostream>
using namespace std;

int main (){
    /* nilai akhir = 30% nilai uts + nilai tugas = 30% + nilai uas = 40%
    JIKA SALAH SATU NILAI LEBIH DARI 100 program akan langsung berhenti
    dengan memberikan statement tidak boleh lebih dari 100
    */
    int nilaitugas;
    int nilaiuts;
    int nilaiuas;
    float nilaiakhir;
    cout<<"masukan nilai tugas = ";cin>>nilaitugas;
    if (nilaitugas > 100){
        cout<<"nilai tidak boleh melebihi 100"<<endl;
        cout<<"silahkan diulang kembali program"<<endl;
        return 0;
    }
    cout<<"masukan nilai uts = ";cin>>nilaiuts;
    if (nilaiuts > 100){
        cout<<"nilai tidak boleh melebihi 100"<<endl;
        cout<<"silahkan diulang kembali program"<<endl;
        return 0;
    }
    cout<<"masukan nilai uas = ";cin>>nilaiuas;
    if (nilaiuas > 100){
        cout<<"nilai tidak boleh melebihi 100"<<endl;
        cout<<"silahkan diulang kembali program"<<endl;
        return 0;
    }
    nilaiakhir = nilaitugas*0.3 + nilaiuts*0.3 + nilaiuas*0.4;
    cout<<nilaiakhir;
}
