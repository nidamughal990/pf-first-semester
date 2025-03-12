#include <iostream>
using namespace std;
int main(){
	int num1;
	cout<<"enter number1";
	cin>>num1;
	int num2;
	cout<<"enter number2";
	cin>>num2;
    char operatore;
	cout<<"enter operatore";
	cin>>operatore;
	switch(operatore){
	    case '+':
		cout<<num1<<"+"<<num2<<"="<<num1+num2;
		break;
		case '-':
			{
			cout<<num1<<"-"<<num2<<"="<<num1-num2;}
				break;
				case '*':
					cout<<num1<<"*"<<num2<<"="<<num1*num2;
					break;
					case '/':
						cout<<num1<<"/"<<num2<<"="<<num1/num2;
						break;
						default:
							cout<<"wrong operator";
							break;
					}
					return 0;
}