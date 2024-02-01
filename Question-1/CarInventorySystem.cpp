#include<bits/stdc++.h>
using namespace std;

class car{
public:
	string name;
	string model;
	int year;

	void car_input();
	void car_output();

};

class ElectricCar: public car{
public:
	double battery_capacity;

	void ElectricCar_input();
	void ElectricCar_output();

};

void ElectricCar:: ElectricCar_input(){
	cout<<"Enter battery capacity (kWh):"<<endl;
	cin>>battery_capacity;

}

void ElectricCar:: ElectricCar_output(){
	cout<<"\t"<<"Battery Capacity:"<<battery_capacity<<endl;
}



class GasCar: public car{
public:
	double fuel_capacity;

	void GasCar_input();
	void GasCar_output();

};

void GasCar:: GasCar_input(){
     cout<<"Enter fuel efficiency (MPG):"<<endl;
     cin>>fuel_capacity;
}

void GasCar:: GasCar_output(){
	cout<<"\t"<<"Fuel Efficiency:"<<fuel_capacity<<endl;
	
}

void car::car_input(){
	cout<<"Enter Name:"<<endl;
	cin>>name;

	cout<<"Enter model:"<<endl;
	cin.ignore();
	getline(cin, model);

	cout<<"Enter year:"<<endl;
	cin>>year;


}

void car::car_output(){
	cout<<"Car Information:"<<endl;
	cout<<"\t"<<year<<" "<<name<<" "<<model<<endl;
}


int main(){
	cout<<"Enter car type (Electric/Gas):"<<endl;
	string s;
	cin>>s;
	if(s=="Electric"){
       car a;
       ElectricCar b;
       a.car_input();
       a.car_output();
       b.ElectricCar_input();
       b.ElectricCar_output();
	}
	else{
       car a;
       GasCar b;
       a.car_input();
       a.car_output();
       b.GasCar_input();
       b.GasCar_output();
	}
}
