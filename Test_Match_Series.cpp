#include<bits/stdc++.h> 
using namespace std;

// https://www.codechef.com/SNCKQL21/problems/TESTSERIES
#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void solve(){
int n,k,i,p,q,r,count1=0, count2=0, count0=0,j,flag,ans=0;
    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    vi a(5);
    read(a,5);
    sort(a.begin(),a.end());
    f(i, 0, 5){
        if(a[i]==0){
            count0++;
        }
        else if(a[i]==1){
            count1++;
        }
        else if(a[i]==2){
            count2++;
        }
    }
    if(count1>count2)
        cout<<"INDIA\n";
    else if(count1<count2)
    cout<<"ENGLAND\n";
    else if (count1==count2)
    cout<<"DRAW\n";
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}