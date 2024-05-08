#include<iostream>
using namespace std;

class Number {
protected:
    int no;
public:
    Number() {
        no = 0;
    }
    ~Number() {}
    void setNo() {
        cout << "\nROLL NO:";
        cin >> no;
    }
    void display() {
        cout << "\nROLL N0:";
        cout << no;
    }
};

class Marks : public Number {
protected:
    int m1, m2, m3;
public:
    Marks() : Number() {
        m1 = m2 = m3 = 0;
    }
    ~Marks() {}
    void setMarks() {
        setNo();//changes
        cout << "\nENTER MARKS:";
        cin >> m1 >> m2 >> m3;
    }
    void displayMarks() {
        display();//changes
        cout << "\nMARKS\n";
        cout << m1 << "\t" << m2 << "\t" << m3;
    }
    int total() {
        return m1 + m2 + m3;
    }
};

class Result : public Marks {
protected:
    int tot, avg;
public:
    Result() : Marks() {
        tot = avg = 0;
    }
    ~Result() {}
    void setAvg() {
        setMarks();//changes
        tot = total();
        avg = tot / 3;
    }
    void displayAvg() {
        displayMarks();//changes
        cout << "\nTOTAL:" << tot;
        cout << "\nAVG:" << avg;
    }
};

int main() {
    Marks p;
    p.setMarks();
    p.displayMarks();
    Result r;
    r.setAvg();
    r.displayAvg();
    return 0;
}
