#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice;

    while (true) {
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements:\n";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
        }
        else if (choice == 2) {
            if (n == 0) cout << "Array is empty!\n";
            else {
                cout << "Array elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
        else if (choice == 3) {
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            if (pos < 1 || pos > n + 1) cout << "Invalid position!\n";
            else {
                for (int i = n; i >= pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = val;
                n++;
                cout << "Element inserted.\n";
            }
        }
        else if (choice == 4) {
            int pos;
            cout << "Enter position to delete: ";
            cin >> pos;
            if (pos < 1 || pos > n) cout << "Invalid position!\n";
            else {
                cout << "Deleted element: " << arr[pos - 1] << endl;
                for (int i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
        }
        else if (choice == 5) {
            int key, found = 0;
            cout << "Enter element to search: ";
            cin >> key;
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at position " << i + 1 << endl;
                    found = 1;
                    break;
                }
            }
            if (!found) cout << "Element not found!\n";
        }
        else if (choice == 6) {
            cout << "Exiting program...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
