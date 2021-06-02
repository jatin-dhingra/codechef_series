//THIS CODE BELONGS TO JATIN DHINGRA

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,k;
    cin>>n>>k;
    long long int arr[n];
    for(int i{};i<n;i++)
    {
      cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int one=k;
    long long int two=k;
    long long int ans1{},ans2{};
    long long int x=n;
    long long int y=k;
    long long int lol=n;
    while(one!=0 && two!=0)
    {
      ans1+=arr[n-1];
      ans2+=arr[n-2];
      n-=2;
      one--;
      two--;
      
      
    }
    if(lol>y*2)
      {
          ans2+=arr[x-(2*y)-1];
      }
    
    cout<<max(ans1,(ans2))<<endl;
  }
}
//+arr[x-(2*y)-1]
