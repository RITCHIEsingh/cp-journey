#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0 ; i<n ; i++){
            cin>>a[i];
        }
        unordered_map<int,int> map;
        for(int i = 0 ; i<n ; i++){
            map[a[i]]++;
        }
        if(n == 2){
            cout<<"Yes"<<endl;
        }
        else if(map.size() == 1){
            cout<<"Yes"<<endl;
        }
        else if(map.size() == 2){
            vector<int> y;
            for(auto x : map){
                y.push_back(x.second);
            }
            int diff = abs(y[0]-y[1]);
            if(diff == 1 || diff == 0){
                cout<<"Yes"<<endl;
            }
            else if(diff != 1 || diff != 0){
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
 return 0;
}