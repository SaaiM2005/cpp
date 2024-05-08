#include<iostream>
using namespace std;

class Result {
    int no, nos;
    int *ptr;
public:
    Result();
    ~Result() { delete[] ptr; }
    void setData();
    void display();
    int calculateTotal();
};

Result::Result() {
    no = nos = 0;
    ptr = nullptr; // Correct initialization
}

void Result::setData() {
    cout << "\nROLL NO:";
    cin >> no;
    cout << "\nSUBJECT COUNT:";
    cin >> nos;
    ptr = new int[nos]; // Allocate memory for subject marks
    cout << "\nMARKS:";
    for (int i = 0; i < nos; i++) { // Change loop condition to use 'nos'
        cin >> ptr[i]; // Store marks in dynamically allocated array
    }
}

int Result::calculateTotal() {
    int tot = 0;
    for (int i = 0; i < nos; i++) { // Loop through all subjects
        tot += ptr[i]; // Accumulate marks
    }
    return tot;
}

void Result::display() {
    cout << "\nROLL NO: " << no;
    cout << "\nMARKS:\n";
    for (int i = 0; i < nos; i++) {
        cout << " " << ptr[i];
    }
    cout << "\nTOTAL:" << calculateTotal(); // Corrected function call
}

int main() {
    Result a;
    a.setData();
    a.display();
    return 0;
}
