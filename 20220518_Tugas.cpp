
#include <iostream>
using namespace std;

int main(){
	float aray[4];
	float tambah;
	float mean;
	cout<<"Array ke - 1 = ";cin>>aray[0];
    cout<<"Array ke - 2 = ";cin>>aray[1];
	cout<<"Array ke - 3 = ";cin>>aray[2];
	cout<<"Array ke - 4 = ";cin>>aray[3];
	cout<<"Array ke - 5 = ";cin>>aray[4];
	tambah = aray[0]+aray[1]+aray[2]+aray[3]+aray[4];
	mean = tambah/5;
	cout<<"Mean = "<<mean;
}
