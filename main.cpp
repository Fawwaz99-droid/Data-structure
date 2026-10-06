#include <iostream>
using namespace std;

int main() {
    int queue[10];
    int front = 0;
    int rear = 0;
    int choice;

    do {
        cout << "\n\n===== BANK TOKEN SYSTEM =====";
        cout << "\n1. Issue Token";
        cout << "\n2. Display Tokens";
        cout << "\n3. Serve Customer";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        // Issue Token
        if (choice == 1) {
            if (rear < 10) {
                cout << "\nEnter Token Number: ";
                cin >> queue[rear];
                rear++;
                cout << "Token Issued!";
            }
            else {
                cout << "\nQueue is full!";
            }
        }

        // Display Tokens
        else if (choice == 2) {
            cout << "\n===== WAITING CUSTOMERS =====\n";

            if (front < rear) {
                for (int i = front; i < rear; i++) {
                    cout << "Token: " << queue[i] << endl;
                }
            }
            else {
                cout << "No customers waiting!";
            }
        }

        // Serve Customer
        else if (choice == 3) {
            if (front < rear) {
                cout << "\nServing Token: " << queue[front];
                front++;
            }
            else {
                cout << "\nNo customers waiting!";
            }
        }

        // Exit
        else if (choice == 4) {
            cout << "\nThank you!";
        }

        // Invalid Choice
        else {
            cout << "\nInvalid Choice!";
        }

    } while (choice != 4);

    return 0;
}
