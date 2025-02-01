#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (a[0] == a[n - 1]) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << a[n - 1] << " "; // Print last element first
        for (int i = 0; i < n - 1; i++) {
            cout << a[i] << " "; // Print remaining elements
        }
        cout << "\n";
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
