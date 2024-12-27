//A. Alyona and a Square Jigsaw Puzzle contest
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i = 0 ; i<n ; i++){
        cin>>a[i];
      }
      int k;
      vector<int> x;
      x.push_back(1);
      for(int i = 2 ; i<=n ; i++){
        k = 8*i-8;
        x.push_back(k);
      }
      int sum = 0;
      int count = 0;
      int j = 0;
      for (int i = 0; i < n; i++) {
            sum += a[i];
            while (j < x.size() && sum >= x[j]) {
                sum = x[j]-sum;
                j++;
            }
            if (j < x.size() && sum == 0) {
                count++;
            }
        }
      cout<<count<<endl;
    }
 return 0;
}