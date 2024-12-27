#include <bits/stdc++.h>
using namespace std;
//1 - update
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        sort(arr.begin() , arr.end() , greater<int>());
        int sum = 0;
        int toadd = 0;
        for(int i = 0 ; i<n ; i++){
            if(sum+arr[i] <= k){
                sum +=arr[i];
            }
            else{
                break;
            }
        }
        toadd = k-sum;
        cout<<toadd<<endl;
    }
 return 0;
}