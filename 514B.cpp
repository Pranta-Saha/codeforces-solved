
#include<bits/stdc++.h>
using namespace std;

struct point{
      int x,y;
};

vector<point>vec;

int n,x,y;
bool chkinline(point p1, point p2)
{
      return (x-p1.x)*(p1.y-p2.y)==(y-p1.y)*(p1.x-p2.x);
}


void solv(point p)
{
      size_t len=vec.size();
      for(size_t i=0;i<len;i++)
      {
            if(chkinline(vec[i],p)) return;
      }

      vec.push_back(p);
}



int main()
{
      cin>>n>>x>>y;
      point p;

      while(n--)
      {
            cin>>p.x>>p.y;
            solv(p);
      }
      cout<<vec.size();

      return 0;
}

