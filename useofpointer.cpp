#include<iostream>
using namespace std;

class Result{
    int no;
    int mrk[5];
public:
    Result();
    ~Result(){}
    void setData();
    void display();
    int calculateTotal(); // Changed function name to avoid conflict with member variable
};

Result::Result() {
    no = 0;
    for(int i = 0; i < 5; i++) {
        mrk[i] = 0;
    }
}

void Result::setData() {
    cout << "\nROLL NO:";
    cin >> no;
    cout << "\nMARKS:";
    for(int i = 0; i < 5; i++) {
        cin >> mrk[i];
    }
}

void Result::display() {
    cout << "\nROLL NO: " << no;
    cout << "\nMARKS:\n";
    for(int i = 0; i < 5; i++) {
        cout << " " << mrk[i];
    }
}

int Result::calculateTotal() { // Changed function name to avoid conflict with member variable
    int tot = mrk[0], i = 1;
    while(i < 5)
        tot += mrk[i++];
    return tot;
}

int main() {
    Result a;
    a.setData();
    a.display();
    cout << "\nTOTAL: " << a.calculateTotal(); // Corrected function call
    return 0;
}
