#include<iostream>
using namespace std;
int main(){

	int min_bill;
	int conn_size;
	cout<<"\nenter connection size = ";
	cin>>conn_size;
	if(conn_size==1){
		min_bill=1300;
	}
	if(conn_size==2){
		min_bill=1600;
	}
	if(conn_size==3){
		min_bill=2000;
	}
	if(conn_size==4){
		min_bill=3000;
	}
	if(conn_size==5){
		min_bill=5500;
	}
	int ccf;
	cout<<"\nenter ccf = ";
	cin>>ccf;
	int rem_ccf;
	if(ccf>2){
		rem_ccf=ccf-2;
		cout<<"remaining ccf = "<<rem_ccf;
	}
	float vol_ch;
	vol_ch=rem_ccf*22*10;
	cout<<"\n\nvolume charges = "<<vol_ch;
	float total_bill=vol_ch+min_bill;
	cout<<"\n\ntotal bill = "<<total_bill;
}
