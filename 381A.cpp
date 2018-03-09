#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,i,arr[1005],sereja=0,dima=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    deque<int> dqe(arr,arr+n);

    while(!dqe.empty())
    {
        if(dqe.front()>dqe.back())
        {
            sereja+=dqe.front();
            dqe.pop_front();
        }
        else
        {
            sereja+=dqe.back();
            dqe.pop_back();

        }

        if( !dqe.empty())
           if(dqe.front() > dqe.back() )
            {
                dima+=dqe.front();
                dqe.pop_front();
            }
            else
            {
                dima+=dqe.back();
                dqe.pop_back();
            }

    }

    cout<<sereja<<" "<<dima<<endl;

    return 0;
}
