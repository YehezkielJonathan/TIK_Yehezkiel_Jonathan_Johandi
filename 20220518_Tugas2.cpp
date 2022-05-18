#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x,y;
	float nilai;
	string c[5] = {"","detik","menit","jam","hari"};
	cout<<"1. detik"<<endl;
	cout<<"2. menit"<<endl;
	cout<<"3. jam"<<endl;
	cout<<"4. hari"<<endl;
	cout<<"Pilih satuan: ";
	cin>>x;
	cout<<"Masukan "<<c[x]<<": ";cin>>nilai;
	cout<<"1. detik"<<endl;
	cout<<"2. menit"<<endl;
	cout<<"3. jam"<<endl;
	cout<<"4. hari"<<endl;
	cout<<"Pilih konversi: ";
	cin>>y;
	if(x==4||y==4){
		if(x==4){
			x -=1;
			nilai *= 24;
			if(x<y){
				int temp = y-x;
				cout<<"Hasil: "<<nilai/pow(60,temp)<<" "<<c[y];
			}else if(x>y){
				int temp = x-y;
				cout<<"Hasil: "<<nilai*pow(60,temp)<<" "<<c[y];
			}
		}else if(y==4){
			int temp1 = y - 1;
			if(x<temp1){
				int temp = temp1-x;
				cout<<"Hasil: "<<nilai/pow(60,temp)/24<<" "<<c[y];
			}else if(x>temp1){
				int temp = x-temp1;
				cout<<"Hasil: "<<nilai*pow(60,temp)/24<<" "<<c[y];
			}
			if(x==temp1){
				nilai /= 24;
				cout<<"Hasil: "<<nilai<<" "<<c[y];
			}
		}
	}
	if(x<y && y>3 && x>3){
		int temp = y-x;
		cout<<"Hasil: "<<nilai/pow(60,temp)<<" "<<c[y];
	}else if(x>y && y>3 && x>3){
		int temp = x-y;
		cout<<"Hasil: "<<nilai*pow(60,temp)<<" "<<c[y];
	}else if(x==y){
		cout<<"Hasil: "<<nilai<<" "<<c[y];
	}
}
