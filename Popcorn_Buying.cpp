#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tk;
    cin >> tk;

    int res = tk - 100;

    if (res >= 50)
        cout << res / 50;
    else    
        cout << 0;
}
