    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int T;
        cin>>T;
        while(T--){
            int n;
            cin>>n;
            vector<int> arr(n);
            for(int i = 0 ; i<n ; i++){
                cin>>arr[i];
            }
            int ans = 0;
            sort(arr.begin() , arr.end());
            if(n == 1){
                cout<<0;
            }
            for(int i = 0 ; i<n ; i++){
                for(int j = i+1 ; j<n ; j++){
                        if(arr[i] == arr[j]){
                        ans++;
                    }
                }
            }
            cout<<ans;
    }
     return 0;
    }