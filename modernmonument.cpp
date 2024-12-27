#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<endl;
        vector<int> pillars(n);
        for(int i = 0 ; i<n ; i++){
            cin>>pillars[i];
        }
        cout<<endl;
        int operations = 0;
        for(int i = 1 ; i<n ; i++){
            if(pillars[i-1] > pillars[i]){
                operations++;
            }
        }
        cout<<operations;
    }
 return 0;
}