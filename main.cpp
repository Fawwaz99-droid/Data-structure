#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n\n===== RESTAURANT MENU =====";
        cout << "\n1. Pizza";
        cout << "\n2. Burger";
        cout << "\n3. Pasta";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nYou selected Pizza.";
                break;

            case 2:
                cout << "\nYou selected Burger.";
                break;

            case 3:
                cout << "\nYou selected Pasta.";
                break;

            case 4:
                cout << "\nThank you for visiting!";
                break;

            default:
                cout << "\nInvalid choice! Please try again.";
        }

    } while (choice != 4);

    return 0;
}
