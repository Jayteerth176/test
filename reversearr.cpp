#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void rvereseArray(vector<int> &arr, int start, int end)
{
    if (start >= end)
    return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}


int main()
{

	int n;
	cin>> n;
    vector<int> input(n,0);
	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;
		input.push_back(x);
	}


	rvereseArray(input, 0, n-1);

	for(int j: input) cout<<j<<" ";
}

