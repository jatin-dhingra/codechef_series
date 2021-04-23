#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s1;
    string s2;
    cin>>s1>>s2;
    int sum1{};
    int sum2{};
    for(int i{};i<s1.size();i++)
    {
      sum1+=int(s1[i]);
    }
    for(int i{};i<s2.size();i++)
    {
      sum2+=int(s2[i]);
    }
    
    int d=sum2-sum1;
    if(d>=1 && d<=10)
    {
      cout<<"Rashmi"<<endl;
    }
    else if(d==0)
    {
      cout<<"No One"<<endl;
    }
    else
    {
      cout<<"Mohit"<<endl;
    }
  }
}
