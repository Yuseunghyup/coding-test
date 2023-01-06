#include <iostream>
using namespace std;

int main()
{
    int A, B, C; 
    int H, M; 

    cin >> A >> B;
    cin >> C;

    if (B + C < 60)
    {
        H = A;
        M = B + C;
    }
    else
    {
        H = (A + int((B + C) / 60)) % 24;
        M = (B + C) % 60;
    }

    cout << H << " " << M;
    return 0;
}