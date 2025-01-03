#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n , x;
        cin>>n>>x;
        vector<int> stations(n);
        for(int i = 0 ; i<n ; i++){
            cin>>stations[i];
        }

        int ans = 0 ;
        int prev = 0;
        vector<int> distances;
        for(int i = 0 ; i<n ; i++){
            ans = max(ans , stations[i]-prev);
            prev = stations[i];
        }
        ans = max(ans , 2*(x-prev));
        cout<<ans<<endl;
    }
 return 0;
}