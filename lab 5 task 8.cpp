#include <iostream>
using namespace std;
int main(){
	int salary, service;
	cout<<"enter your salary";
	cin>>salary;
	cout<<"enter your service";
	cin>>service;
	if(service>5&&salary==20000||salary>=25000)
	cout<<"you are eligible for loan";
	else
	cout<<"not eligible";
	return 0;
}