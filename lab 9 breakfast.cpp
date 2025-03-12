#include <iostream>
using namespace std;

int main() {
    int choice;
    bool loop = true;
    double totalBill = 0;

    do {
        cout << "\nMain Menu" << endl;
        cout << "1. Breakfast" << endl;
        cout << "2. Lunch" << endl;
        cout << "3. Dinner" << endl;
        cout << "4. Exit" << endl;
        cout << "5. Bill" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        int itemChoice, quantity;
        double price = 0;

        switch (choice) {
            case 1:
                cout << "\nBreakfast Menu" << endl;
                cout << "1. Anda Pratha (RS.40)" << endl;
                cout << "2. Nan Channy (RS.60)" << endl;
                cout << "3. Siri Paye (RS.150)" << endl;
                cout << "4. Tea (RS.15)" << endl;
                cout << "Enter your choice: ";
                cin >> itemChoice;
                if (itemChoice == 1) price = 40;
                else if (itemChoice == 2) price = 60;
                else if (itemChoice == 3) price = 150;
                else if (itemChoice == 4) price = 15;
                break;

            case 2:
                cout << "\nLunch Menu" << endl;
                cout << "1. Chicken Karahi (RS.1050/kg)" << endl;
                cout << "2. Mutton Karahi (RS.1800/kg)" << endl;
                cout << "3. Egg Fried Rice (RS.450/plate)" << endl;
                cout << "4. BBQ (RS.1050/dozen)" << endl;
                cout << "Enter your choice: ";
                cin >> itemChoice;
                if (itemChoice == 1) price = 1050;
                else if (itemChoice == 2) price = 1800;
                else if (itemChoice == 3) price = 450;
                else if (itemChoice == 4) price = 1050;
                break;

            case 3:
                cout << "\nDinner Menu" << endl;
                cout << "1. Chicken Karahi (RS.1050/kg)" << endl;
                cout << "2. Mutton Karahi (RS.1800/kg)" << endl;
                cout << "3. Egg Fried Rice (RS.450/plate)" << endl;
                cout << "4. BBQ (RS.1050/dozen)" << endl;
                cout << "5. Saji (RS.800/kg)" << endl;
                cout << "Enter your choice: ";
                cin >> itemChoice;
                if (itemChoice == 1) price = 1050;
                else if (itemChoice == 2) price = 1800;
                else if (itemChoice == 3) price = 450;
                else if (itemChoice == 4) price = 1050;
                else if (itemChoice == 5) price = 800;
                break;

            case 4:
                cout << "Exiting the program..." << endl;
                loop = false;
                continue;

            case 5:
                cout << "Total Bill: RS." << totalBill << endl;
                continue;

            default:
                cout << "Invalid choice! Try again." << endl;
                continue;
        }

        if (price > 0) {
            cout << "Enter the quantity: ";
            cin >> quantity;
            totalBill += price * quantity;
            cout << "Item added to bill. Current total: RS." << totalBill << endl;
        }

    } while (loop);

    return 0;
}
