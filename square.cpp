#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    
    long long x = static_cast<double>(n) / a;
    long long y = static_cast<double>(m) / a;

    cout << ceil(x) * ceil(y) << endl; 
    return 0;
}
