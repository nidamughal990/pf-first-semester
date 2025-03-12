#include <iostream>
using namespace std;
void displaymenu(){
	cout<<"resturant menu"<<endl;
	cout<<"1.Burger(50)"<<endl;
	cout<<"2.pizza(150)"<<endl;
	cout<<"3. salad(30)"<<endl;
	cout<<"4.sandwitch(40)"<<endl;
	cout<<"5.fries(45)"<<endl;
	cout<<"6. EXIT"<<endl;
}
double cost(double price,int quantity){
	return price*quantity;
	
}
double finalbill(double total){
	const double Tax_rate=0.10;
	return total+(total*Tax_rate);
}
int main(){

int choice;
int quantity;
double total;
double price;
displaymenu();
cout<<"enter your choice";
cin>>choice;
if (choice>=1&&choice<=5){

switch(choice){
	case 1:
		cout<<price;
			cout<<"="<<50;
		break;
		case 2:
				cout<<price<<"="<<150;
			break;
			case 3:
				cout<<price<<"="<<30;
				break;
				case 4:
					cout<<price<<"="<<40<<"="<<40<<endl;
					break;
					case 5:
							cout<<price<<"="<<45;
						break;
						default :
							cout<<"invalid";
					
				}



cout<<"enter the quantity";
cin>>quantity;
cost(price, quantity);
cout<<"total:"<<total<<endl;}



finalbill(total);

cout<<"finalbill:"<<finalbill<<endl;

}
