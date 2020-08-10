#include<iostream>
using namespace std;
int main(){
		int cd_min=60;
		int cd_sec=60;

	do{
		
		int number;
		cout<<"\nenter speech number = ";
		cin>>number;
		cout<<"\nenter number of minutes = ";
		cin>>cd_min;
		cout<<"\nenter number of second = ";
		cin>>cd_sec;
		cout<<"speech "<<number<<",minutes  "<<cd_min<<",seconds  "<<cd_sec;
		int rem_min=60-cd_min;
		cd_min=rem_min;
		int rem_sec=60-cd_sec;
		
		cout<<"\n\ntotal speech time "<<cd_min<<"minutes"<<"and"<<cd_sec<<"seconds";
		cout<<"\ntime remaining on cd "<<rem_min<<"minutes"<<rem_sec<<"seconds";
	}while(cd_min!=0);
}
