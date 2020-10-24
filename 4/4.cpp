#include <cmath>
using namespace std;
#include <iostream>

int factorial(int i)
{
    if (i == 0) return 1;
    else return i * factorial(i - 1);
}
int main()
{
    setlocale(0, "");
    double x, sin;
    int n;
    cout << "Введите x = ";
    cin >> x;
    cout << "Введите n = ";
    cin >> n;
    sin = x;
    for (int i = 1; i <= n; i++)
    {
        sin += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    cout << "sin(x) = " << sin << endl;
    return 0;
}
