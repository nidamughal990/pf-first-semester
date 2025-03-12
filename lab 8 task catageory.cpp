#include <iostream>
using namespace std;

int main() {
    char category, item;
    int quantity;
    double purchase = 0;
    cout << "Enter the category (E: Electronics, C: Clothing, G: Groceries): ";
    cin >> category;

    switch (category) {
        case 'E':
            cout << "Electronics" << endl;
            cout << "Enter the item (L: Laptop, S: Smartphone, H: Headphone): ";
            cin >> item;
            switch (item) {
                case 'L':
                    cout << "Laptop" << endl;
                    purchase = 1000;
                    break;
                case 'S':
                    cout << "Smartphone" << endl;
                    purchase = 700;
                    break;
                case 'H':
                    cout << "Headphone" << endl;
                    purchase = 150;
                    break;
                default:
                    cout << "Invalid item in Electronics" << endl;
                    return 0;
            }
            break;
        
        case 'C':
            cout << "Clothing" << endl;
            cout << "Enter the item (J: Jacket, T: T-Shirt, j: Jeans): ";
            cin >> item;
            switch (item) {
                case 'J':
                    cout << "Jacket" << endl;
                    purchase = 120;
                    break;
                case 'T':
                    cout << "T-Shirt" << endl;
                    purchase = 40;
                    break;
                case 'j':
                    cout << "Jeans" << endl;
                    purchase = 60;
                    break;
                default:
                    cout << "Invalid item in Clothing" << endl;
                    return 0;
            }
            break;
        
        case 'G':
            cout << "Groceries" << endl;
            cout << "Enter the item (M: Milk, B: Bread, e: Eggs): ";
            cin >> item;
            switch (item) {
                case 'M':
                    cout << "Milk" << endl;
                    purchase = 2;
                    break;
                case 'B':
                    cout << "Bread" << endl;
                    purchase = 3;
                    break;
                case 'e':
                    cout << "Eggs" << endl;
                    purchase = 5;
                    break;
                default:
                    cout << "Invalid item in Groceries" << endl;
                    return 0;
            }
            break;
        
        default:
            cout << "Invalid category" << endl;
            return 0;
    }

    
    cout << "Enter the quantity: ";
    cin >> quantity;
    double totalPurchase = purchase * quantity;
    cout << "Total Purchase: " << totalPurchase << endl;

    
    double discount = 0;
    if (totalPurchase >= 100 && totalPurchase <= 500) {
        discount = totalPurchase * 0.1;
    } else if (totalPurchase > 500) {
        discount = totalPurchase * 0.2;
    }
    
    cout << "Discount: " << discount << endl;
    cout << "Final Amount: " << totalPurchase - discount << endl;
    
    return 0;
}