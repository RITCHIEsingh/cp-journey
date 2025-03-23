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
        unordered_map<string,int> map;
        vector<string> b = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", 
                    "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", 
                    "u", "v", "w", "x", "y", "z"};

        int j = 0;
        string s = "";
        for(int i = 0 ; i<n ; i++){
            if(a[i] == 0){
                s +=b[j];
                map[b[j]]++;
                j++;
            }
            else{
                for(auto x : map){
                    if(x.second == a[i]){
                        s += x.first;
                        map[x.first]++;
                        break;
                    }
                }
            }
        }
        cout<<s<<endl;
    }
 return 0;
}