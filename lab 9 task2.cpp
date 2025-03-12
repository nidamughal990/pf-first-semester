#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a numberof your choice to display multiplication table of that number : ";
	cin>>num;
	int i=1;
	
	while(i<=10)  {
		cout << num <<" * " << i <<" = " <<num * i<<endl;
		i++;
	}
}