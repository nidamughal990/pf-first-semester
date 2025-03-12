#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter your age";
	cin>>age;
	int salary;
	cout<<"enter your salary";
	cin>>salary;
	if(age>=18){
		if(salary>=30000&&age>=18){
		
			cout<<"you are eligible for loan";}
			else{
				cout<<"you meet the age requirement but your income is low";
				}
			}
        else{
 	cout<<"you are not eligible because you are under 18";
}

return 0;
}
