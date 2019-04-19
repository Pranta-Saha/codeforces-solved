#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n,i=24,j,lo=1,hi=1000000,mid;
        string str;
        while(lo<=hi && i--)
        {
                mid=(lo+hi+1)/2;
                cout<<mid<<endl;
                cin>>str;
                if(str.size()==1) hi=mid-1;
                else lo=mid;
        }
        printf("! %d",mid);
	return 0;
}
