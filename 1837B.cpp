#include <bits/stdc++.h>
//Author : ritchie_s
#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based
// Short hand for usual tokens
#define pb push_back
#define fi first
#define se second
#define sp " "
// Shorthand for commonly used types
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
void solve(){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    ll count = 1;
    ll ans = 1;
    for(ll i = 1 ; i<n ; i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        ans = max(count , ans);
    }
    cout<<ans+1<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
     int t;
     cin>>t;
     while(t--){
        solve();
     }
    return 0;
}