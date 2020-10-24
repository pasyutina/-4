using namespace std;
#include <iostream>

int main()
{
    setlocale(0, "");
    int num;
    cout << "Введите число: " ;
    cin >> num;
    cout << "\nТаблица умножения: " << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << "\n\t" << num << " x " << i << " = " << num * i;
    }
    cout << endl;
    return 0;
}
