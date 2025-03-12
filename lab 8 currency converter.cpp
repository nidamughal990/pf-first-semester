#include <iostream>
using namespace std;
int main(){
	int choice;
	cout<<"1. PKR";
	cout<<"2.INR";
	cout<<"3.Euros";
	cin>>choice;
	int USD;
	cout<<"enter the USD";
	cin>>USD;
	
	switch(choice){
		case 1:
			cout<<"PKR";
			cout<<"="<<278<<"*"<<USD<<"="<<278*USD;
						break;
			case 2:
				cout<<"INR";
				cout<<"="<<150<<"*"<<USD<<"="<<150*USD;
				break;
				case 3:
					cout<<"Euros";
					cout<<"="<<300<<"*"<<USD<<"="<<300*USD;
					break;
					default:
					cout<<"invalid";
					break;
	}
}