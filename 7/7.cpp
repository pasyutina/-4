using namespace std;
#include <iostream>

int factor(int n)
{
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        j *= i;
    }
    return j;
}
int main()
{
    setlocale(0, "");
    double number;
    cout << "Введите число. Когда вы введете 0, то программа завершится. " << endl;
    do
    {
        cin >> number;
        if (number == 0)
            break;
        cout << "Факториал числа " << number << " = " << factor(number) << endl;
    }
    while (number != 0);
    return 0;
}
