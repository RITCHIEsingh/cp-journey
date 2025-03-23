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
    int n , q;
    cin>>n>>q;
    vi a(n);
    vi prefixsum(n);
    vi suffixsum;
    ll sum = 0;
    for0(i,n){
        cin>>a[i];
        sum += a[i];
        prefixsum[i] = sum;
    }
    ll sum2 = 0;
    for(int i = n-1 ; i>=0 ; i--){
        sum2 += a[i];
        suffixsum.pb(sum2);
    }
    
    
    for(int it = 1 ; it<=q ; it++){
        int l,r,k;
        cin>>l>>r>>k;
        ll x = (r-l+1)*k;
        ll y = prefixsum[l-1];
        ll z = suffixsum[r-1];
        ll final = x+y+z;
        if(final%2 != 0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
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