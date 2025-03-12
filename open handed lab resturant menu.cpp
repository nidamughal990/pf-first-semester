#include <iostream>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;

struct MenuItem {
    string name;
    double price;
};

const double TAX_RATE = 0.08;

void displayMenu(const vector<MenuItem>& menu) {
    cout << " MENUn";
    for (size_t i = 0; i < menu.size(); ++i) {
        cout << i + 1 << ". " << menu[i].name << " - $" << fixed << setprecision(2) << menu[i].price << "\n";
    }

   
}

int main() {
    int hour;
    cout << "Enter the current hour (0-23): ";
    cin >> hour;
    
    map<string, vector<MenuItem>> menus = {
        {"breakfast", {{"Pancakes", 5.99}, {"Omelette", 6.49}, {"Coffee", 2.99}}},
        {"lunch", {{"Burger", 8.99}, {"Salad", 7.49}, {"Soda", 1.99}}},
        {"dinner", {{"Steak", 14.99}, {"Pasta", 12.49}, {"biryani", 5.99}}}
    };
    
    vector<MenuItem> selectedMenu;
    string mealType;
    if (hour >= 6 && hour < 11) {
        selectedMenu = menus["breakfast"];
        mealType = "Breakfast";
    } else if (hour >= 11 && hour < 17) {
        selectedMenu = menus["lunch"];
        mealType = "Lunch";
    } else {
        selectedMenu = menus["dinner"];
        mealType = "Dinner";
    }
    
    cout << "You are viewing the " << mealType << " menu."<<endl;
    displayMenu(selectedMenu);
    
    int choice, quantity;
    double total = 0;
    cout << "Enter item numbers to order and quantity (0 to finish):\n";
    while (true) {
        cout << "Enter item number: ";
        cin >> choice;
        if (choice == 0) break;
        if (choice > 0 && choice <= selectedMenu.size()) {
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
    cout << "Subtotal: $" << fixed << setprecision(2) << total ;
    cout << "Tax " << (TAX_RATE * 100) << "%: $" << tax ;
    cout << "Total Bill: $" << grandTotal ;
    
    cout << "Thank you for dining with us!\n";
    
    return 0;
}