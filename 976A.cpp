#include <bits/stdc++.h>
//This will work only for g++ compiler.
#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based
// Short hand for usual tokens
#define pb push_back
#define fi first
#define se second
// To be used with algorithms that process a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() // Forward traversal
#define rall(x) (x).rbegin(), (x).rend() // Reverse traversal
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
        int n,k;
        cin>>n>>k;
       here:
        int x = 0;
        int s = k;
        int count= 0;
        
        if(n>k){
            while(n>s){
                s = pow(k,x);
                x++;
            }
            n = n-pow(k,x-1);
            count++;
        }
        if(n<k){
            count += n;
        }
        cout<<count<<endl;
    }
    return 0;
}