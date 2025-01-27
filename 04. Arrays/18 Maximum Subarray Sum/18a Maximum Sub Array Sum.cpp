#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int n) //time comp. O(n^2) ; space comp. O(1)
{
	int res = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		int curr = 0;
		for (int j = i; j < n; j++)
		{
			curr = curr + a[j];
			res = max(res, curr);
		}
	}

	return res;
}

int main()
{
	int arr[] = {2, 3, -8, 7, -1, 2, 3};
	int n = sizeof(arr) / sizeof(int);

	cout << maxSubArraySum(arr, n);
	return 0;
}