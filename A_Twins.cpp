#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define ll long long 
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
    ll int sum=0,n,k,t,i,p,q,r,s,count=0,j;

    while (cin >> n) {  //*!This is to be learnt! while(cin>>n),if we don't do this, program willl give TLE!!!*/
      long long arr[n];
      sum = 0;
      fo(i, n) {
        cin >> arr[i];
        sum += arr[i];
      }  // end of for
      sum = sum / 2;
      sort(arr, arr + n);
      count = 0;
      int ans = 0;
      fo(i, n) {
        ans += arr[i];
        count++;
        if (ans > sum)
          break;
      }
      cout << count << endl;
    }  // end of while
 return 0;
}