#include <iostream>
using namespace std;

int main()
{
	int a;
	int b[42] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		b[a % 42]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (b[i] != 0)
		{
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}