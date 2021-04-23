#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int p,q;
    cin>>p>>q;
    int maxx;
    if(p>q)
    {
      maxx=p;
    }
    else
    {
      maxx=q;
    }int flag{};
    for(int i{1};i<=maxx;i++)
    {
      if(p%i!=0 && q%i!=0)
      {
        flag=1;
      }
    }
    if(flag)
    {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}
