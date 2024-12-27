#include <bits/stdc++.h>
using namespace std;
int main()
//1
{
    int n;
    cin>>n;
    int X = 0;
    for(int i = 0 ; i<n ; i++){
        string operation;
        cin>>operation;
        cout<<endl;
        if(operation == "++X" || operation == "X++"){
            ++X;
        }
        else if(operation == "--X" || operation == "X--"){
            --X;
        }
    }
    cout<<X;
 return 0;
}