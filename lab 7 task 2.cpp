#include <iostream>
using namespace std;
int main(){
	int temperature;
	cout<<"enter the temperature :";
	cin>>temperature;
	if(temperature>=40)
	cout<<"extremely hot and dangerous for health";
	else if(temperature>=30&&temperature<=39)
	cout<<"drink plenty of water to stay hydrated";
	else if(temperature>=20&&temperature<=29)
	cout<<"weather is pleasent";
	else
	cout<<"wear warm clothes to stay comfortable";
	return 0;
}