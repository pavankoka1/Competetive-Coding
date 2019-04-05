#include<bits/stdc++.h>
using namespace std;

void replace(int a[],int n)
{
	int pos=0;
	for(int i=0;i<n;i++)
	{
		a[pos++]=a[i];
		while(pos>1 && a[pos-1]==a[pos-2])
		{
			pos--;
			a[pos-1]++;
		}
	}
	for(int i=0;i<pos;i++)
		cout<<a[i]<<" ";
	cout<<endl;	
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		replace(a,n);	
	}
}

