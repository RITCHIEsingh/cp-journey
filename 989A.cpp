#include <bits/stdc++.h>
using namespace std;
int main()
//2
{
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        int m=1;
        int ans;
        while(m<=INT_MAX){
            if(m>=a || m>=b){
                if(m%a == m%b){
                    ans = m;
                    break;
                }
            }
            m = m+1;
        }
        cout<<ans<<endl;
    }
 return 0;
}