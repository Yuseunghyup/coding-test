#include <iostream>
using namespace std;

int main()
{
    int  X;
    cin >> X;

    int N;
    cin >> N;

    int a, b;
    int sum = 0;
    
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        sum += a * b;
    }

    if (X == sum)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}