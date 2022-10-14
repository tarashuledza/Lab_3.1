#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double A;
    double B;

    cout << "x= "; cin >> x;

    A = 5 * exp(3 * x);
    // спосіб 1: розгалуження в скороченій формі
    if (x <= -1)
        B = 3 + sin(abs(x));
    if (x > -1  && x <= 3)
        B = 2 * exp(x / 4 - 1);
    if (x > 3)
        B = 7 - sqrt(2) * pow(x, 3);

    y = A - B;

    cout << "1) y = " << y << endl;
    // спосіб 2: розгалуження в повній формі

    if (x <= -1)
        B = 3 + sin(abs(x));
    else
        if (x > -1 && x <= 3)
            B = 2 * exp(x / 4 - 1);
        else
            B = 7 - sqrt(2) * pow(x, 3);
    y = A - B;
    cout << "2) y = " << y << endl;
 
    cin.get();
    return 0;
}
