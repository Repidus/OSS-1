#include <iostream>

using namespace std;

int main()
{
	for (int i = 2; i <= 8; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	for (int i = 1; i <= 9; i++)
	{
		cout << 9 << " x " << i << " = " << 9 * i << endl;
	}
}