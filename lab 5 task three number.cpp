#include <iostream>
using namespace std;
int main(){
	int num1;
	cout<<"enter number1";
	cin>>num1;
	int num2;
	cout<<"enter number2";
	cin>>num2;
	int num3;
	cout<<"enter number3";
	cin>>num3;
	if(num1>num2&&num1>num3){
	cout<<"number1 is largest";}
	if(num2>num3&&num2>num1){
	cout<<"number2 is largest";}
	if(num3>num1&&num3>num2){
	cout<<"number3 is largest";}
	return 0;
}