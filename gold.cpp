#include<iostream>
using namespace std;
int main()
{
	int b,c,d,e,f,g,h,i;
	char a;
	cout<<"Mr. Ali has to secure his gold mine "<<endl;
	cout<<"He has following 3 ways to secure his mine"<<endl;
	cout<<"a. With the help of police he has to pay 200,000 RS, it will take 3 days to secure and locals will have 2 days to loot"<<endl;
	cout<<"b. With the help of ABC company he will have to pay 500,000 and 2 days will be  left for locals to loot"<<endl;
	cout<<"c. With the help of government he will not pay anything but it will take 1 day to secure and locals will have 3 days to loot"<<endl;
	cout<<"Select your security plan ";
	cin>>a;
	cout<<"Price of gold per 10 grams is 110,000"<<endl;
	b=110000/10;
	cout<<"Enter amount of gold (in grams) stolen per hour : ";
	cin>>c;
	if(a=='a'||a=='A')
	{
		d=24*2;
		e=b*d;
		cout<<"You have to pay 200,000 to the police and locals will loot "<<e<<" amount of gold";
	}
	if(a=='b'||a=='B')
	{
		f=24*2;
		g=b*g;
		cout<<"You have to pay 500,000 to the ABC company and locals will loot "<<g<<" amount of gold";
	}
	if(a=='c'||a=='C')
	{
		h=24*3;
		i=b*h;
		cout<<"You will not have to pay anything to government and locals will loot "<<i<<" amount of gold";
	}
	return 0;
}
