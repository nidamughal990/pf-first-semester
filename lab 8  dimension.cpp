#include <iostream>
using namespace std;
int main(){
	int choice;
	int area;
	cout<<"shape area calculator"<<endl;
	cout<<"1.Circle"<<endl;
	cout<<"2.Rectangle"<<endl;
	cout<<"3.Triangle"<<endl;
	cout<<"enter your choice(1-3)"<<endl;
	cin>>choice;
	switch(choice){
		case 1:{
			
			 double PI=3.14;
			double radius;
			cout<<"enter circle radius"<<endl;
			cin>>radius;
			cout<<"circle area";
			cout<<" "<<"="<<3.14<<"*"<<radius<<"*"<<radius<<"="<<3.14*radius*radius;
			break;}
			case 2:{
				double length, width;
				cout<<"enter rectangle length"<<endl;
				cin>>length;
				cout<<"enter rectangle width"<<endl;
				cin>>width;
				cout<<"rectangle area";
				cout<<" "<<"="<<length<<"*"<<width<<"="<<length*width<<endl;
				break;}
				case 3:{
					double base, height;
					cout<<"enter triangle base"<<endl;
					cin>>base;
					cout<<"enter triangle height"<<endl;
					cin>>height;
					cout<<"triangle area";
					cout<<" "<<"="<<0.5<<"*"<<base<<"*"<<height<<"="<<0.5*base*height<<endl;
					break;
				}
	}
}