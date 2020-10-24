using namespace std;
#include <iostream>

int main()
{
    setlocale(0, "");
    cout << "Введите число" << endl;
    int number;
    cin >> number;
    cout << "\nТаблица умножения на " << number << ":";
    for (int i = 0; i <= 10; i++) {
        cout << "\n\t" << number << " x " << i << " = " << number * i;
    }
    cout << endl;
    system("pause");
}
