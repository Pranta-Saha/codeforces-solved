
#include<bits/stdc++.h>
using namespace std;

int main()
{
      long long n,asum=0,bsum=0,i,tmp;
      priority_queue<long long>apq,bpq;
      cin>>n;
      for(i=0;i<n;i++)
      {
            cin>>tmp;
            apq.push(tmp);
      }

      for(i=0;i<n;i++)
      {
            cin>>tmp;
            bpq.push(tmp);
      }

      while(!apq.empty() || !bpq.empty())
      {
            if(!apq.empty() && !bpq.empty())
            {
                  if(apq.top()<bpq.top())
                  {
                        bpq.pop();
                  }else
                  {
                        asum+=apq.top();
                        apq.pop();
                  }
            }else
            {
                  if(!apq.empty())
                  {
                        asum+=apq.top();
                        apq.pop();
                  }else
                  {
                        bpq.pop();
                  }
            }

            if(apq.empty() && bpq.empty()) break;
            //for b;
            if(!apq.empty() && !bpq.empty())
            {
                  if(bpq.top()<apq.top())
                  {
                        apq.pop();
                  }else
                  {
                        bsum+=bpq.top();
                        bpq.pop();
                  }
            }else
            {
                  if(!bpq.empty())
                  {
                        bsum+=bpq.top();
                        bpq.pop();
                  }else
                  {
                        apq.pop();
                  }
            }

      }

      cout<<asum-bsum;

      return 0;
}

