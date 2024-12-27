#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n_lights;
        cin>>n_lights;

        vector<int> switches(2*n_lights);
        for(int i = 0 ; i<2*n_lights ; i++){
            cin>>switches[i];
        }
        int on_switches = 0;
        for(int i = 0 ; i <2*n_lights ; i++){
            on_switches = on_switches + switches[i];
        }

        int max = on_switches;
        int min = 0;
        for(int i = 0 ; i<2*n_lights ; i = i+2){
            if(switches[i] != switches[i+1]) min++;
        }
        min = min/2;
        cout<<min<<" "<<max<<endl;
    }
 return 0;
}