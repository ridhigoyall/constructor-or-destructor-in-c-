#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int a, b;
    friend void distance(point, point);

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void displayPoint()
    {
        cout << "The two points are : (" << a << "," << b << ")" << endl;
    }
};

void distance(point p1, point p2)
{
    int x_diff = (p2.a - p1.a);
    int y_diff = (p2.b - p1.b);
    int diff = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "The diff btw 2 points is : " << diff << endl;
}

int main()
{
    point p(1, 0);
    // p.displayPoint();
    point q(70, 0);
    distance(p, q);
    return 0;
}