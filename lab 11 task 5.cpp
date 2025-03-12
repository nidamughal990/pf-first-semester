#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of array";
	cin>>n;
	int arr[n];
	int largest=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	if(arr[i]>largest){
	largest=arr[i];
	}
		}
		cout<<"largest="<<largest<<endl;
		
	
	}