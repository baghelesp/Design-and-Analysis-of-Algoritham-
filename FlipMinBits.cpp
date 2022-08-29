//You need to do minimum number of bits flip in 
//A and B such that A OR B = C

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  
  while(t--)
  {
    int a,b,c,x,y,z,total=0;
    cin>>a>>b>>c;
   
    for(int i=0; i<10; i++)
    {
      x=a&(1<<i);
      y=b&(1<<i);
      z=c&(1<<i);
      
      if(z!=0 && x==0 && y==0)
          total++;
      else if(z==0 && x!=0 && y!=0)
          total+=2;
      else if(z==0 && x!=0 && y==0)
          total++;
      else if(z==0 && x==0 && y!=0)
          total++;
    }
    cout<<total<<endl;
  }
  
  return 0;
}