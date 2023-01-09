#include <iostream>
using namespace std;

int main()
{
	int n, v;
	int arr[101];
	cin >> n;
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cin >> v;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == v)
		{
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}