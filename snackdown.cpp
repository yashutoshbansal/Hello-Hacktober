#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int a[n],j,l=0;
		for(j=0;j<n;j++)
		cin>>a[j];
		int h = sizeof(a)/sizeof(a[0]); 
		sort(a, a+h, greater<int>());
		for(j=0;j<n;j++)
		{
			if(a[j]>=a[k-1])
			l++;
		}
		cout<<l<<endl;
	}
}
