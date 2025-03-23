#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> factors;
    
    // Find all factors using O(√n) approach
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) {  
                factors.push_back(n / i);
            }
        }
    }
    
    sort(factors.begin(), factors.end());  // Sort factors in ascending order
    
    // Find longest contiguous sequence
    ll maxLen = 1, currLen = 1;
    
    for (size_t i = 1; i < factors.size(); i++) {
        if (factors[i] == factors[i - 1] + 1) {  
            currLen++;
        } else {
            maxLen = max(maxLen, currLen);
            currLen = 1;
        }
    }
    maxLen = max(maxLen, currLen);  // Update max length
    
    cout << maxLen << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
