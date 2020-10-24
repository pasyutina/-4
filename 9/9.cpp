using namespace std;
#include <iostream>

void reverse(int mass[], int size)
{
	int k = size - 1;
	for (int i = 0; i < size / 2; i++, k--)
	{
		swap(mass[i], mass[k]);
	}
}

int main()
{
	int mass[10];
	for (int i = 0; i < size(mass); i++)
	{
		mass[i] = rand() % 10;
		cout << mass[i] << " ";
	}
	cout << endl;
	reverse(mass, 10);
	for (int i = 0; i < size(mass); i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
	return 0;
}
