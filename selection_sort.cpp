#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

/*	SELECTION SORT ALGORITHM */

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll int n, i, p, q, count, j, t;

	cin >> n;
	int arr[n];

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];  //taking input
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])/*To get the descending sorted array,son't write this if condition.*/
			{	/*Learned this ascending-descending from practice program ownself.*/
				swap(arr[i], arr[j]); //use this!
				/*don't do that laborious work,
				int temp = arr[j]; arr[j] = arr[i];arr[i] = temp;*/
			}
		}
	}

	fo(i, n)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}