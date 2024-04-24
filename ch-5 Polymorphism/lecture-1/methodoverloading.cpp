#include <iostream>
using namespace std;

class Calculat {
public:
    int calculat(int a, int b) {
        return a / b;
    }

    int calculat(int a, int b, int c) {
        return a - b - c;
    }

    int calculat(int a, int b, int c, int d) {
        return a * b * c * d;
    }

    int calculat(int a, int b, int c, int d ,int e) {
        return a + b + c + d;
    }
};

class cal : public Calculat {
public:
    void calculate() {
        cout << "Division: " << calculat(10, 2) << endl;
        cout << "Subtraction: " << calculat(20, 5, 3) << endl;
        cout << "Multiplication: " << calculat(2, 3, 4, 5) << endl;
        cout << "Addition: " << calculat(1, 2, 3, 4, 6) << endl;
    }
};

int main() {
    cal c;
    c.calculate();
    return 0;
}


