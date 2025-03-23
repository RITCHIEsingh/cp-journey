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
    int n;
    cin>>n;
    vi a(n);
    vi b(n);
    vi c(n);
    priority_queue<pair<int,int>> pqa;
    priority_queue<pair<int,int>> pqb;
    priority_queue<pair<int,int>> pqc;
    for0(i,n){
        cin>>a[i];
        pqa.push({a[i] , i});
    }
    for0(i,n){
        cin>>b[i];
        pqb.push({b[i] , i});
    }
    for0(i,n){
        cin>>c[i];
        pqc.push({c[i] , i});
    }

    int ans = 0;
    set<int> s;
    
    s.insert(pqa.top().se);
    ans += pqa.top().fi;


    while(!pqb.empty()){
        if(s.find(pqb.top().se) != s.end()){
            pqb.pop();
        }
        if(s.find(pqb.top().se) == s.end()){
            s.insert(pqb.top().se);
            ans += pqb.top().fi;
            break;
        }
    }
    
    while(!pqc.empty()){
        if(s.find(pqb.top().se) != s.end()){
            pqc.pop();
        }
        if(s.find(pqc.top().se) == s.end()){
            ans += pqc.top().fi;
            break;
            
        }
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