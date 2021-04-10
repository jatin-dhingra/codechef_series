/*
author: Jatin Dhingra;
college:VIT Vellore;
*/




#include <iostream>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n{};
        cin>>n;
        long long k{},d{};
        cin>>k>>d;
        long  long a[n];
        long long sum{};
        for(long long i{};i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        
        if(sum>=k){
            long long ans=sum/k;
            if(ans<d){
                cout<<ans<<endl;
            }
            else if(ans>=d)
            {
                cout<<d<<endl;
            }
        }
        if(sum<k)
        {
            cout<<0<<endl;
        }
    }
}
