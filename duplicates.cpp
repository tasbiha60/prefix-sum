#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    sort(v.begin(),v.end());
  for(int i=0;i<n;i++){
        if(v[i]==v[i-1]){
            cout<<"YES"<<endl;
            return 0;
        }
  }
  cout<<"NO"<<endl;

    return 0;
}
