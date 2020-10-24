using namespace std;
#include <cmath>
#include <iostream>
int a, b, c;
float x;

void Discrim(int a, int b, int c)
{
    if ((b * b - 4 * a * c) >= 0)
    {
        x = ((-1) * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "1 корень = " << x << endl;
        x = ((-1) * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "2 корень = " << x << endl;
    }
    else
    {
        cout << "Дискриминант < 0, корней нет." << endl;
    }
}
void Vieta(int a, int b, int c)
{
    int n = 0;
    float x1, x2 = c / a;
    if (c / a >= 0)
        for (; x2 >= -c / a; x2 -= 0.00001)
        {
            x1 = (c / a) / x2;
            if (x1 + x2 == -b / a)
            {
                n = 1;
                break;
            }
        }
    else
        for (; x2 <= -c / a; x2 += 0.00001)
        {
            x1 = (c / a) / x2;
            if (x1 + x2 == -b / a)
            {
                n = 1;
                break;
            }
        }
    if (n == 1)
        cout << "x1= " << x1 << "\nx2= " << x2;
    else cout << "нет корней";
}
void output()
{
    cout << "Метод решения?\n\t1) Через дискриминант\n\t2) через виета" << endl;
    int num;
    cin >> num;
    switch (num)
    {
    case 1:
    {
        Discrim(a, b, c);
        break;
    }
    case 2:
    {
        Vieta(a, b, c);
        break;
    }
    default:
        break;
    }
}
void input()
{
    cout << "Ax^2 + Bx + C = 0" << endl;
    cout << endl << "Введите A: " << endl;
    cin >> a;
    cout << "Введите B: " << endl;
    cin >> b;
    cout << "Введите C: " << endl;
    cin >> c;
}

int main()
{
	setlocale(0, "");
    input();
    output();
    return 0;
}
