#include <iostream>
using namespace std;

int main() {
    int choice;
   double totalBill;
    
    do {
        cout << "Menu" << endl;
        cout << "1. Chicken Karahi (2kg = 10)" << endl;
        cout << "2. Beef Biryani (1kg = 8)" << endl;
        cout << "3. Vegetable Curry (1kg = 5)" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        
        switch(choice) {
            case 1: {
                int chickenQuantity;
                cout << "How many kg of chicken you want to order? ";
                cin >> chickenQuantity;
                double chickenBill = chickenQuantity * 5;
                  totalBill += chickenBill;
                cout << "Bill = " << chickenQuantity << " * 5 = " << chickenBill << endl;
                break;
            }
            case 2: {
                int biryaniQuantity;
                cout << "How many kg of biryani you want to order? ";
                cin >> biryaniQuantity;
                double biryaniBill = biryaniQuantity * 8;
                 totalBill += biryaniBill;
                cout << "Bill = " << biryaniQuantity << " * 8 = " << biryaniBill << endl;
                break;
            }
            case 3: {
                int curryQuantity;
                cout << "How many kg of curry you want to order? ";
                cin >> curryQuantity;
                double curryBill = curryQuantity * 5;
                 totalBill += curryBill;
                cout << "Bill = " << curryQuantity << " * 5 = " << curryBill << endl;
                break;
            }
            case 4:
                cout << "Thank you for your order! Your total bill is: " << totalBill << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    } while(choice != 4); 

    return 0;
}
