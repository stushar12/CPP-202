#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int size=0;
	long long int sum=0;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
	{
	cin>>arr[i];
	if(arr[i]>=0)
	{
		sum+=arr[i];
		size++;
	}
	}

	sort(arr,arr+n);

	if(size==0)
	{
		cout<<arr[n-1]<<" "<<"1";
	}
	else
	{
		cout<<sum<<" "<<size;
	}

}