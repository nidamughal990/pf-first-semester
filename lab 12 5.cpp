#include <iostream>
using namespace std;

int addition(int a, int b ){
	
	return a+b;
}

int subtraction(int a, int b){
	
return a-b;
}

int multiplication(int a, int b){ 

return a*b;
}
int division(int a, int b){

	return a/b;
}
int main(){
	
	int choice;
	cout<<"1. addition"<<endl;
	cout<<"2. subtraction"<<endl;
	cout<<"3.multiplication"<<endl;
	cout<<"4.division"<<endl;
	cout<<"5. invalid"<<endl;
	cout<<"enter your choice "<<endl;
	cin>>choice;
	int a; int b;
	int result;
	if (choice>=1&&choice<=4){
		cout<<"enter first number";
		cin>>a;
		cout<<"enter second number";
		cin>>b;
	}

switch (choice){
	case 1:
		result=a+b;
	cout<<"result:"<<a<<"+"<<b<<"="<<'result'<<endl;
	break;
	case 2:
		result=a-b;
	cout<<"result :"<<a<<"-"<<b<<"="<<result<<endl;
	break;
	case 3:
		result=a*b;
		cout<< "result :"<<a<<"*"<<b<<"="<<result<<endl;
		break;
	
case 4:
	result=a/b;
cout<<"result :"<<a<<"/"<<b<<"="<<result<<endl;
break;

default :
	cout<<"invalid";
	break;
	}

	
	 
}



