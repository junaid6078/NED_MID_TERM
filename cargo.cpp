#include<iostream>
using namespace std;
int main(){
	int cargo_container;
	cout<<"\nenter number of cargo container in a week = ";
	cin>>cargo_container;
	int total_bags;
	int wooden_box=10;
	int bags=20;
	int bag_kg=50;
	total_bags=cargo_container*wooden_box*bags;
	cout<<"\ntotal bags of suger in  week of container = "<<total_bags;
	int price=32;//preice per kg
	int total_price=total_bags*bag_kg*price;
	int total_kg=total_bags*bag_kg;
	cout<<"\ntotal kg present in cargo = "<<total_kg;
	cout<<"\ntotal price of suger present inside the cargo = "<<total_price;
	float profit;
	profit=32*0.3;
	cout<<"\nprofit per kg = "<<profit;
	float total_profit;
	total_profit=profit*total_kg;
	cout<<"\ntotal profit or cargo = "<<total_profit;
	
	
	
	return 0;

	
	
	
}
