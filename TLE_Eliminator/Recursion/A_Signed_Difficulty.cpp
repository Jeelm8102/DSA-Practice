#include<bits/stdc++.h> 
using namespace std;

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


void solve1(){
double d;
cin>>d;
int x=d*10.0;
int y=x%10;

if(0<=y && y<=2)
    cout<<x/10<<'-'<<endl;
    else if(3<=y && y<=6)
    cout<<x/10<<endl;
    else
    cout<<x/10<<'+'<<endl;
}

int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve1();
  
return 0;
}