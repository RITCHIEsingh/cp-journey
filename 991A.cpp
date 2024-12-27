#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        vector<string> str(n);
        for(int i = 0 ; i<n ; i++){
            cin>>str[i];
        }
        int x = 0;
            for(int i = 0 ; i<n ; i++){
                if(str[i].size() <= m){
                    m = m-str[i].size();
                    x++;
                }
                else{
                    break;
                }
            }
        cout<<x<<endl;
    }
 return 0;
}
