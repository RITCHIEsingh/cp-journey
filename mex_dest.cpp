#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define sz(a) (a).size()

// Function to find the maximum value in the deque
ll MAX(const deque<ll>& a) {
    return *max_element(a.begin(), a.end());
}

// Function to find the minimum value in the deque
ll MIN(const deque<ll>& a) {
    return *min_element(a.begin(), a.end());
}

void solve() {
    ll n;
    cin >> n;
    deque<ll> a(n);  // Create a deque of size 'n'

    // Input elements into the deque
    rep(i, n) cin >> a[i];

    // Check if the maximum element is zero
    if (MAX(a) == 0) {
        cout << 0 << "\n";
    } else {
        // Remove leading zeros from the front of the deque
        while (!a.empty()) {
            if (a.front() == 0) a.pop_front();
            else break;
        }

        // Remove trailing zeros from the back of the deque
        while (!a.empty()) {
            if (a.back() == 0) a.pop_back();
            else break;
        }

        // Check if the minimum element is zero and print the result accordingly
        if (MIN(a) == 0) {
            cout << 2 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t = 1;
    cin >> t;  // Read number of test cases

    // Solve for each test case
    rep(i, t) solve();

    return 0;
}
