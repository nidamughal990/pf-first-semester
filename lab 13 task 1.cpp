#include <iostream>
using namespace std;
int main(){
	//task1
//	int a=10;
//	int	*ptr=&a;
//	*( ptr)=a;
//	
//	cout<<ptr<<endl;
//	cout<<*ptr<<endl;
	
//	task2

//int val=80;
//int *ptr=&val;
//*ptr=90;
//cout<<val<<endl;
//task 3

//int arr[5]={1,2,3,4,5};
//int *ptr;
//ptr=arr;
//for(int i=0;i<5; i++){
//	cout<<ptr[i]<<endl;
//}
//task4 
//void swap(int *X, int*Y){
//	 
//	int Z=*X;
//	*X=*Y;
//	*Y=Z;	
//}
//int main(){
//	int X=5; int Y=6;
//	cout<<"before swapping"<<X<<" "<<Y<<endl;
//	swap(&X, &Y);
//	cout<<"after swapping"<<X<<" "<<Y<<endl;
//}
//task5
//int *ptr=NULL;
//if (ptr==NULL){
//	cout<<"invalid";}
//	else{
//		cout<<&ptr<<endl;
//		
//	}
	int var=8;
	void *ptr=&var;
	cout<<ptr<<endl;
	*(int *)ptr=var;
	cout<<var<<endl;
	return 0;
}
	
	


