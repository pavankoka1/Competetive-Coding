#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int a[n1+n2+n3],b[50005],c=0;
	for(int i=0;i<n1+n2+n3;i++)
		cin>>a[i];
	sort(a,a+n1+n2+n3);
	
	for(int i=0;i<n1+n2+n3;i++)
	{
		if(i!=0&&a[i]==a[i-1])
			continue;
		if(a[i]==a[i+1])
		{
			b[c]=a[i];
			c++;
		}
	}	
	cout<<c<<endl;
	for(int i=0;i<c;i++)
		cout<<b[i]<<endl;
	return 0;
}

