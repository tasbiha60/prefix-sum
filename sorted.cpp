#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;


    vector<long long int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];

    }
 int  flag =1;
 for(int i=1;i<=n;i++){
        if(v[i]<v[i-1]){
            flag=0;
            break;
        }
 }
 if(flag==1){
    cout<<"YES"<<endl;;
 }
 else{


 cout<<"NO"<<endl;
 }
 }
    return 0;
}
