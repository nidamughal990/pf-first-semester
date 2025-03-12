#include <iostream>
using namespace std;
int main(){
	int grade;
	cout<<"enter the grade";
	cin>>grade;
	if(grade>=90)
	cout<<"a+";
	if(grade>=80&&grade<=89)
	cout<<"a";
	if(grade>=70&&grade<=79)
	cout<<"b";
	if(grade>=60&&grade<=69)
	cout<<"c";
	if(grade<60)
	cout<<"fail";
	return 0;
}