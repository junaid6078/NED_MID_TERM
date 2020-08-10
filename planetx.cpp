#include<iostream>
using namespace std;
int main(){
	float total_rev=22*1000;
	float rev_per_year=total_rev/365;
	cout<<"\nrevolution per year = "<<rev_per_year;
	cout<<"\n after one year...";
	float one_year;
	one_year=4*365;
	cout<<"\nfirst year revolution 4 x times = "<<one_year;
	cout<<"\nfirst year = "<<one_year/365;
	float rem_rev=total_rev-one_year;
	cout<<"\nremaing year = "<<rem_rev;
	float rem_year;
	do{
		float rem_year;
		rem_year=2*365;
		cout<<"\nremaining year revolution 2 x times = "<<rem_year;
		float rem_rev=rem_rev-rem_year;
		cout<<"\nremaining year = "<<rem_year/365;

	}while(rem_rev==0);
	
	cout<<"\n\nafter "<<one_year/365+rem_year/365;
}
