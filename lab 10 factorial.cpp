#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the positive number whose factorial you want to print";
	cin>>num;
	int factorial=1;
	while(num<0){
	cout<<"the factorial of negative number is not given";
	cin>>num;}
	for(int i=1;i<=num;i++){
	factorial*=i;}
	cout<<"factorial of"<<num<<"="<<factorial;
	

}