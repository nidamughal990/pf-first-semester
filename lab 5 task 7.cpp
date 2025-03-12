#include <iostream>
using namespace std;
int main(){
	int accbalance, widthdrawalamount;
	cout<<"enter your account balance";
	cin>>accbalance;
	cout<<"enter your widthdrawal amount";
	cin>>widthdrawalamount;
	if(widthdrawalamount<=accbalance){
	
	cout<<"Remaining balance"<<endl;
	cout<<"="<<accbalance<<"-"<<widthdrawalamount<<"="<<accbalance-widthdrawalamount<<endl;}
	else
	cout<<"insufficent balance";
	
}