#include<bits/stdc++.h>
using namespace std;

void func(long n){
    while(n>1){
        cout<<n<<" ";
        if(n&1) n = 3*n + 1;
        else    n >>= 1;
    }
    cout<<n;
}

int main(){
    // int t;
    // cin>>t;
    // for(t; t>0; t--){
    //     cout<<"Test #"<<t<<" : ";
        long n;
        cin>>n;
        func(n);
    //     cout<<endl;
    // }
    return 0;
}