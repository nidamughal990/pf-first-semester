#include <iostream>
using namespace std;

int main() {
    string username;
    cout << "Enter username: ";
    cin >> username;
    string password;
    cout << "Enter the password: ";
    cin >> password;
    string role;
    cout<<"enter the role :";
    cin>>role;
    if (username=="admin" && password=="password123") {
        cout << "Authentication successful\n";
        if (role =="admin") {
            cout << "Full access\n";
        } else if (role =="guest") {
            cout << "Limited access\n";
        } else {
            cout << "No access\n";
        }
    } else {
        cout << "Access denied\n";
    }
    
    return 0;
}
