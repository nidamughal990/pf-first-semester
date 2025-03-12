#include <iostream>
using namespace std;
int main(){
	char grade;
	

	double basic_salary, bonus, gross_salary, tax, net_salary;
	cout<<"enter employee grade"<<endl;
	cin>>grade;
	
	//basic salary:
	if(grade=='A'||grade=='a')
	basic_salary=50000;
	if(grade=='B'||grade=='b')
	basic_salary=30000;
	if(grade=='C'||grade=='c')
basic_salary=20000;

		int  service;
	cout<<"enter the  service"<<endl;
	cin>>service;
	if(service>=10){
	bonus=basic_salary*0.1;}
	
	 if(service>=5&&service<=9){
	
		bonus=basic_salary*0.05;}
	if(service<5){
	
bonus=0;}

//grosssalarycalculation
	gross_salary=basic_salary+bonus;

		//tax based on gross salary:
	if(gross_salary>40000){
	tax=gross_salary*0.2;}
	 if(gross_salary>=30000&&gross_salary<=40000){
tax=gross_salary*0.1;}
	if(gross_salary<30000){
	tax=0;}

	//net salary calculation:
net_salary=gross_salary-tax;
cout<<"basic salary="<<basic_salary<<endl;
cout<<"bonus ="<<bonus<<endl;
cout<<"gross_salary ="<<gross_salary<<endl;
cout<<"tax ="<<tax<<endl;
	cout<<"net salary ="<<net_salary<<endl;
	
	return 0;
}