#include <iostream>
using namespace std;
void evenorodd(int num){
	if(num%2==0){
		cout<<"even number";
		
	}
	else{
		cout<<"odd number"<<endl;
	}
}

int main(){
	int num;
	cout<<"number: ";
	cin>>num;
	evenorodd(num);
	
	
}	


