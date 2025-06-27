#include<bits/stdc++.h>
using namespace std;
int main(){

            int n;
    cin>>n;


    vector<long long int>vA(n);
    for(int i=0;i<n;i++){
        cin>>vA[i];

    }
   int m;
   cin>>m;
   vector<long long int>vB(m);
    for(int i=0;i<m;i++){
        cin>>vB[i];

    }
   int x;
   cin>>x;

   vA.insert(vA.begin()+x,vB.begin(),vB.end());
for(long long int result: vA){


   cout<<result<<" ";
   }
   cout<<endl;

    return 0;
}
