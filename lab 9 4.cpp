#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the number from first five natural number whose sum  you want to calculate";
	cin>>num;
	int i=1;
	while (num>5){
	cout<<"the number is greater then five! try again:";
	cin>>num;}
	cout<<num<<"+"<<i<<"="<<num+i;
}
