#include <iostream>
using namespace std;

class Search {
private:
    int a[100];   
    int n;        
    int x;        

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    }

    // Display array
    void output() {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }


    void search(int value) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == value) {
                cout << "Element " << value << " found at position " << (i + 1) << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Element " << value << " not found in array.\n";
        }
    }


    void add(int value) {
        if (n < 100) {
            a[n] = value;
            n++;
            cout << "Element " << value << " added successfully.\n";
        } else {
            cout << "Array is full! Cannot add more elements.\n";
        }
    }
};

int main() {
    Search s;
    int choice, val;

    s.input();
    s.output();

    do {
        cout << "\n MENU \n";
        cout << "1. Search Element\n";
        cout << "2. Add Element\n";
        cout << "3. Display Array\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter element to search: ";
            cin >> val;
            s.search(val);
            break;
        case 2:
            cout << "Enter element to add: ";
            cin >> val;
            s.add(val);
            break;
        case 3:
            s.output();
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}

