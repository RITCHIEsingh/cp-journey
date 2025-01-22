#include <bits/stdc++.h>
// This will work only for g++ compiler.
#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interval from l to r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based
// Short hand for usual tokens
#define pb push_back
#define fi first
#define se second
// To be used with algorithms that process a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() // Forward traversal
#define rall(x) (x).rbegin(), (x).rend() // Reverse traversal
// Traversal function to avoid long template definitions
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
// Find if a given value is present in a container (container version).
// Runs in O(log(n)) for set and map.
#define present(c,x) ((c).find(x) != (c).end())
// Find version works for all containers (std::find usage).
#define cpresent(c,x) (find(all(c),x) != (c).end())
// Avoiding wrap-around of size()-1 where size is unsigned int.
#define sz(a) int((a).size())
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
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        vi odd;
        vi even;
        for0(i,n){
            cin>>a[i];
            if(a[i] %2 == 0){
                even.pb(a[i]);
            }
            if(a[i]%2 == 1){
                odd.pb(a[i]);
            }
        }
        int sum1 = 0;
        int sum2 = 0;
        for0(i,odd.size()){
            sum2+=odd[i];
        }
        for0(i,even.size()){
            sum1+=even[i];
        }
        if(sum1%2 == sum2%2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }


    return 0;
}