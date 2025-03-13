#include <iostream>

using namespace std;

const double TAX_RATE = 0.08;

struct MenuItem {
    string name;
    double price;
};

void displayMenu(MenuItem menu[], int size) {
    cout << "MENU";
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ". " << menu[i].name << " - $" << menu[i].price << endl;
    }
}

int main() {
    int hour;
    cout << "Enter the current hour (0-23): ";
    cin >> hour;
    
    MenuItem breakfastMenu[] = { {"Pancakes", 5.99}, {"Omelette", 6.49}, {"Coffee", 2.99} };
    MenuItem lunchMenu[] = { {"Burger", 8.99}, {"Salad", 7.49}, {"Soda", 1.99} };
    MenuItem dinnerMenu[] = { {"Steak", 14.99}, {"Pasta", 12.49}, {"Biryani", 5.99} };
    
    MenuItem* selectedMenu;
    int menuSize;
    string mealType;
    
    if (hour >= 6 && hour < 11) {
        selectedMenu = breakfastMenu;
        menuSize = 3;
        mealType = "Breakfast";
    } else if (hour >= 11 && hour < 17) {
        selectedMenu = lunchMenu;
        menuSize = 3;
        mealType = "Lunch";
    } else {
        selectedMenu = dinnerMenu;
        menuSize = 3;
        mealType = "Dinner";
    }
    
    cout << "You are viewing the " << mealType << " menu." << endl;
    displayMenu(selectedMenu, menuSize);
    
    int choice, quantity;
    double total = 0;
    cout << "Enter item numbers to order and quantity (0 to finish):\n";
    while (true) {
        cout << "Enter item number: ";
        cin >> choice;
        if (choice == 0) break;
        if (choice > 0 && choice <= menuSize) {
            cout << "Enter quantity: ";
            cin >> quantity;
            total += selectedMenu[choice].price * quantity;
        } else {
            cout << "Invalid choice. Please select a valid item number." << endl;
        }
    }
    
    double tax = total * TAX_RATE;
    double grandTotal = total + tax;
    
    cout << "BILL";
    cout << "Subtotal: $" << total <<endl;
    cout << "Tax " << (TAX_RATE * 100) << "%: $" << tax << endl;
    cout << "Total Bill: $" << grandTotal << endl;
    
    cout << "Thank you for dining with us!";
    
    return 0;
}

