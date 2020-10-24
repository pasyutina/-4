using namespace std;
#include <iostream>

int main()
{
    setlocale(0, "");
    double x, ln;
    int n;
    bool znak = false;
    cout << "Введите x = ";
    cin >> x;
    cout << "Введите n = ";
    cin >> n;
    ln = x;
    for (int i = 2; i <= n; i++) 
    {
        if (!znak)
        {
            ln -= pow(x, i) / i;
        }
        else
        {
            ln += pow(x, i) / i;
            znak = !znak;
        }
    }
    cout << "ln(1+x) = " << ln << endl;
    return 0;
}