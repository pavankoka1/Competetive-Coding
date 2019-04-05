#include<bits/stdc++.h>
using namespace std;

void sort(int a[][2],int b[][2],int l,int r)
{
//	cout<<l<<" "<<r<<endl;
	int m=(l+r)/2;
	if(l==r)
		return;
	sort(a,b,l,m);
	sort(a,b,m+1,r);
	for(int i=l;i<=r;i++)
	{
		b[i][1]=a[i][1];
		b[i][0]=a[i][0];
	}
	int i=l,j=m+1,k=l;
	for(;;)
	{
		if(k>r)
			break;
		if(i>m)
		{
			for(;j<=r;j++)
			{
				a[k][0]=b[j][0];
				a[k][1]=b[j][1];
				k++;
			}
			break;
		}
		if(j>r)
		{
			for(;i<=m;i++)
			{
				a[k][0]=b[i][0];
				a[k][1]=b[i][1];
				k++;
			}
			break;
		}	
		if(b[i][0]<=b[j][0])
		{
			a[k][0]=b[i][0];
			a[k][1]=b[i][1];
			k++;
			i++;
		}
		else if(b[j][0]<b[i][0])
		{
			a[k][0]=b[j][0];
			a[k][1]=b[j][1];
			k++;
			j++;
		}
	}
//	cout<<" ";
//	for(int i=l;i<=r;i++)
//		cout<<a[i][1]<<" ";
//	cout<<endl;
//	cout<<" ";
//	for(int i=l;i<=r;i++)
//		cout<<a[i][0]<<" ";
//	cout<<endl;
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n][2],b[n][2];
		for(int i=0;i<n;i++)
		{
			cin>>a[i][1];
			a[i][0]=abs(a[i][1]-x);
		}
//		for(int i=0;i<n;i++)
//			cout<<a[i][1]<<" ";
//		cout<<endl;
//		for(int i=0;i<n;i++)
//			cout<<a[i][0]<<" ";
//		cout<<endl;	
		sort(a,b,0,n-1);
		for(int i=0;i<n;i++)
			cout<<a[i][1]<<" ";
		cout<<endl;
//		for(int i=0;i<n;i++)
//			cout<<a[i][0]<<" ";
//		cout<<endl;		
	}
}

