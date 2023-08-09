// constructor
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}