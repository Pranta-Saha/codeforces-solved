#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        if(a[i]<a[j]) swap(a[i],a[j]);
    }
  }
  for(i=0;i<n;i++) cout<<a[i]<<" ";

}
