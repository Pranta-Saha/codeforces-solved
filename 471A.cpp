#include<bits/stdc++.h>
using namespace std;

int i,arr[10],tmp,cnt=0,chk4;

int main()
{



    for(i=1;i<=6;i++)
    {
        cin>>tmp;
        arr[tmp]++;
    }

    for(i=1;i<=9;i++)
    {
        if(arr[i]>0)
        {
            cnt++;
        }

        if(arr[i]==4) chk4=1;
        if(arr[i]==5) { cout<<"Bear"; return 0; }
        if(arr[i]==6) { cout<<"Elephant"; return 0; }
    }


    if(chk4==1){

    if(cnt<=2) { cout<<"Elephant"; return 0; }
    else { cout<<"Bear"; return 0; }

    }

    cout<<"Alien";
}
