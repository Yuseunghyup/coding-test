#include <iostream>
using namespace std;

int arr[31];
int n;

int main()
{
	for (int i = 1; i <= 28; i++)
	{
		cin >> n;
		arr[n] = 1;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (arr[i] == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}