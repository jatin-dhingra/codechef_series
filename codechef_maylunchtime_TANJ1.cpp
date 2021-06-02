//this code belongs to jatin dhingra

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    int one=abs(a-c);
    int two=abs(b-d);
    int sum=one+two;
    if(sum>k)
    {
      cout<<"NO"<<endl;
    }
    else if(sum==k)
    {
      cout<<"YES"<<endl;
    }
    else if((k-sum)%2==0)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }

  }
}
