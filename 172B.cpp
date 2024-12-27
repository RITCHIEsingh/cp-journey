#include <bits/stdc++.h>
using namespace std;
int main()
//1 - update
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> arr(n);
        unordered_map<int,int> map;
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
            map[arr[i]]++;
        }
        int ones = 0;
        int groups = 0;
        for(auto x : map){
            if(x.second == 1){
                ones++;
            }
            else{
                groups++;
            }
        }
        int ans = groups + ((ones+1)/2)*2;
        cout<<ans<<endl;
    }
 return 0;
}