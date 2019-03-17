#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int l1,l2,l3,a[100000]={0},c=0;
	cin>>l1>>l2>>l3;
	int a1[l1],a2[l2],a3[l3];
	
	for(int i=0;i<l1;i++)
		cin>>a1[i];
	for(int i=0;i<l2;i++)
		cin>>a2[i];
	for(int i=0;i<l3;i++)
		cin>>a3[i];
	
	for(int i=0;i<l1;i++)
	{
		if(a1[i]==-1)
			continue;
			
		for(int j=0;j<l2;j++)
		{
			if(a1[i]==-1)
				break;
			
			if(a1[i]==a2[j])
			{
				a[c]=a1[i];
				a2[j]=-1;
				a1[i]=-1;
//				cout<<a[c]<<endl;
				c++;
				break;
			}
		}
		
		for(int j=0;j<l3;j++)
		{
			if(a1[i]==-1)
				break;
			if(a1[i]==a3[j])
			{
				a[c]=a1[i];
				a1[i]=-1;
				a3[j]=-1;
//				cout<<a[c]<<endl;
				c++;
				break;
			}
		}
	}
	
	for(int i=0;i<l2;i++)
	{		
		for(int j=0;j<l3;j++)
		{
			if(a2[i]==-1)
				break;
				
			if(a2[i]==a3[j])
			{
				a[c]=a2[i];
				a2[i]=-1;
				a3[j]=-1;
//				cout<<a[c]<<endl;
				c++;
				break;
			}
		}
	}	
	sort(a,a+c);
	cout<<c<<endl;
	for(int i=0;i<c;i++)
		cout<<a[i]<<endl;	
	return 0;
}

