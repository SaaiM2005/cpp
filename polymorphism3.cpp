#include<iostream>
using namespace std;

class Result {
    int rno;
    int mrk[5]; // Changed to size 5 since you're taking 5 subjects
public:
    void setData();
    void setData(int);
    void setMarks();
    void display();
    int totalMarks();
    float avg(); // Changed to float for average calculation
};

void Result::setMarks() {
    cout << "\nMarks:";
    for(int i=0;i<5;i++) {
        cin >> mrk[i];
    }
}

int Result::totalMarks() {
    int tot = 0; // Initialize total marks to 0
    for(int i=0;i<5;i++) {
        tot += mrk[i];
    }
    return tot;
}

float Result::avg() {
    return totalMarks() / 5.0; // Return average as float
}

void Result::display() {
    cout<<"\nRoll No.:"<<rno;
    cout<<"\nMarks\n";
    for(int i=0;i<5;i++) {
        cout<<" "<<mrk[i];
    }
    cout<<"\nTotal:"<<totalMarks();
    cout<<"\nAverage:"<<avg();
}

void Result::setData() {
    cout<<"\nRoll No.:";
    cin>>rno;
    setMarks();
}

void Result::setData(int n) {
    rno = n;
    setMarks();
}

int main() {
    Result k;
    k.setData(18);
    k.display();
    Result p;
    p.setData();
    p.display();
    return 0;
}
