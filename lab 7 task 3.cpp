#include <iostream>
using namespace std;
int main(){
	string username;
	cout<<"enter the username :";
	cin>>username;
	string password;
	cout<<"enter your password :";
	cin>>password;
	if(password=="12345"&&username=="admin")
	cout<<"access granted";
	else if(password!="12345"&&username=="admin")
	cout<<"wrong password";
	else
	cout<<"user not found";
	return 0;	
}