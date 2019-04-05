#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	for(;;)
	{
			int n,a[100000]={0},b[100000]={0};
	bool flag=0;
	cin>>n;
	if(n==0)
	break;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]=i;
	}
	for(int i=1;i<n+1;i++)
	{
		if(b[i]!=a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"ambiguous"<<endl;
	else
		cout<<"not ambiguous"<<endl;
			}		
}

