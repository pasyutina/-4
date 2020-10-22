using namespace std;
#include <iostream>

int main()
{
    setlocale(0, "");
    float A, B, x;
    cout << "Ax = B" << endl;
    cout << "Введите A:\n";
    cin >> A;
    cout << "Введите B:\n";
    cin >> B;
    x = B/A;
    cout << "x = ";
    cout << x;
    system("pause");
}