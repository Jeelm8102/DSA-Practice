#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll int a, b, c, d, n, i, p, q, count = 0, j, t, temp;

	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c >> d;
		cout << max(a + b, c + d) << endl;
	}
}
