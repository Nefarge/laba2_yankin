#include <iostream>

using namespace std;

double f(double x);
bool IsinArea(double x,double y);

int main()
{
    double x, y;
    int k;
    cout << "vibor task 1 or 2 \n";
    cin >> k;
    switch (k)
    {
    case 1:
        cout << "vvedite x = ";
        cin >> x;
        cout << "vvedite y = ";
        cin >> y;
        if (IsinArea(x, y) == 1)
            cout << "vi popali";
        else
            cout << "vi ne popali";
        break;
    case 2:
        cout << "vvedite x = ";
        cin >> x;
        cout << "Funkciya = " << f(x);
        break;
    default:
        cout << "Neverniy vvod keysa";
        break;
    }
    return 0;
}
bool IsinArea(double x, double y)
{
    if (x <= 1 && x < 0 && y <= 1 && y>0)
        return true;
    else if (x >= 0 && y <= 0)
        return (pow(x, 2) + pow(y, 2) <= 1);
    else
        return false;
}
double f(double x)
{
    if (x <= 3)
        return pow(x, 2) - 3 * x + 9;
    else
        return 1/(pow(x, 3) + 6);
} 
