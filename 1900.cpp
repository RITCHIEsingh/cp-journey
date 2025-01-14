#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++) {
            char x;
            cin >> x;
            s += x; // Append character directly to the string
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') { // Correctly compare char with '.'
                count++;
            }
        }

        if (s.find("...") != string::npos) { // Search for "..."
            cout << 2 << endl;
        } else {
            cout << count << endl; // Print the count of '.' with newline
        }
    }
    return 0;
}
