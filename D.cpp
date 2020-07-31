#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1<<28
#define endl "\n"
#define test() int tc; cin>>tc; while(tc--)
#define vec vector<int>
#define pb push_back
#define bn begin()
#define ed end()
void solve()
{
    ll n,k,tem,i;
    cin>>n>>k;
    if(k>=n)
        cout<<1<<endl;
    else
    {
       for( i=ceil(sqrt(n));i>0;i--)
       {
           if(n%i==0&&i<=k){
            tem=n/i;
            break;
           }
       }
       cout<<tem/i<<endl;
    }
}

main()
{
    test()
    {
        solve();
    }
    return 0;
}
//for(int i=1;i<=5;i++)
//    cout<<ar[i]<<" ";
//cout<<endl;
