#include<iostream>
using namespace std;

class dimension {
protected:
    int w, h;
public:
    dimension() {
        w = h = 0;
    }
    dimension(int a, int b) {
        w = a;
        h = b;
    }
    ~dimension() {}
    void setData() {
        cout << "\nWIDTH:";
        cin >> w;
        cout << "\nHEIGHT:";
        cin >> h;
    }
    void display() {
        cout << "\nWIDTH:" << w << "\nHEIGHT:" << h;
    }
    virtual void area(){} // Virtual function for achieving runtime polymorphism
};

class Rect : public dimension {
public:
    Rect() : dimension() {}
    Rect(int a, int b) : dimension(a, b) {}
    ~Rect() {}
    void area() override {
        cout << "\nRECTANGLE AREA:" << (w * h);
    }
};

class Trang : public Rect {
public:
    Trang() : Rect() {}
    Trang(int a, int b) : Rect(a, b) {}
    ~Trang() {}
    void area() override {
        cout << "\nTRIANGLE AREA:" << (w * h) / 2;
    }
};

int main() {
    dimension* ptr = new Rect(5, 7);
    ptr->area(); // Call the area() function
    delete ptr; // Freeing the memory allocated to Rect

    ptr = new Trang(10, 12);
    ptr->area(); // Call the area() function for Trang
    delete ptr; // Freeing the memory allocated to Trang

    return 0;
}
