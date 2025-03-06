#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Part 1: Vertical Output

    float x, y, z;
        x = 3.00;
        y = 15.73;
        z = x + y;

    cout << fixed << setprecision(2) << setw(7);

    cout << x << endl;
    cout << "+ " << y << endl;
    cout << "-------" << endl;
    cout << "  " << z << endl;

// Part 2: Interactive Input

    float a, b, c;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;

    c = a + b;

    cout << setw(7);
    cout << a << endl;
    cout << "+ " << b << endl;
    cout << "-------" << endl;
    cout << " " << c << endl;

    return 0;

}