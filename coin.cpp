#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,d;
        cin>>n>>d;
        vector<int> ans;
        ans.push_back(1);
        if(d%3 == 0 || n>=3){
            ans.push_back(3);
        }
        if(d==5 ){
            ans.push_back(5);
        }
        if(n>=3 || d==7){
            ans.push_back(7);
        }
        if((d%3 == 0 && n>=3) || n>=6 || d==9){
            ans.push_back(9);
        }
        for(auto x : ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
 return 0;
}