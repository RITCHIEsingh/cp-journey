#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

void solve() {
    int n, q;
    cin >> n >> q;
    vi a(n);
    vi prefixsum(n + 1, 0);
    vi suffixsum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefixsum[i + 1] = prefixsum[i] + a[i]; 
    }

    for (int i = n - 1; i >= 0; i--) {
        suffixsum[i] = suffixsum[i + 1] + a[i]; 
    }

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        ll removed_sum = prefixsum[r] - prefixsum[l - 1];  
        ll new_sum = prefixsum[l - 1] + suffixsum[r] + (ll)(r - l + 1) * k; 

        cout << (new_sum % 2 ? "YES" : "NO") << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
