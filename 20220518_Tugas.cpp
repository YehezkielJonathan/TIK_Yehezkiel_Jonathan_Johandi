#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x,y;
	float nilai;
	string c[5] = {"","detik","menit","jam","hari"};
	cout<<"Pilih Satuan awal"<<endl;
	cout<<"1. detik"<<endl;
	cout<<"2. menit"<<endl;
	cout<<"3. jam"<<endl;
	cout<<"4. hari"<<endl;
	cout<<"Pilih satuan: ";
	cin>>x;
	cout<<"Masukan nilai: ";cin>>nilai;
	cout<<"Pilih Konversi"<<endl;
	cout<<"1. detik"<<endl;
	cout<<"2. menit"<<endl;
	cout<<"3. jam"<<endl;
	cout<<"4. hari"<<endl;
	cout<<"Pilih konversi: ";
	cin>>y;
	if(x<y){
		int temp = y-x;
		cout<<"Hasil: "<<nilai/pow(60,temp)<<" "<<c[y];
	}else if(x>y){
		int temp = x-y;
		cout<<"Hasil: "<<nilai*pow(60,temp)<<" "<<c[y];
	}else if(x==y){
		cout<<"Hasil: "<<nilai<<" "<<c[x];
	}
}
