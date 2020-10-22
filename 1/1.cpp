#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int k;
    cout << "Введите целое число:\n";
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        if(k % i == 0)
        cout << i<<'\t';
    }
    return 0;
}