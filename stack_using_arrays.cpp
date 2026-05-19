#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int value) {
        if (topIndex == 99) {
            cout << "Stack overflow\n";
            return;
        }
        arr[++topIndex] = value;
        cout << value << " pushed\n";
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack underflow\n";
            return;
        }
        cout << arr[topIndex--] << " popped\n";
    }

    void peek() {
        if (topIndex == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << arr[topIndex] << "\n";
    }

    void display() {
        if (topIndex == -1) {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Stack elements:\n";
        for (int i = topIndex; i >= 0; --i) cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    Stack st;
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        if (!(cin >> choice)) return 0;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                st.push(value);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.peek();
                break;
            case 4:
                st.display();
                break;
            case 5:
                cout << "Exiting\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}
