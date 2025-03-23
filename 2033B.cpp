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
    vvi matrix(n , vector<int>(n));
    unordered_map<int , vector<int>> map;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>matrix[i][j];
            if(matrix[i][j] <= 0){
                map[(i-j)].push_back(abs(matrix[i][j]));
            }
        }
    }
    int ans = 0;
    for(auto x : map){
        ans += *max_element(x.second.begin(), x.second.end());
    }
    cout<<ans<<endl;

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