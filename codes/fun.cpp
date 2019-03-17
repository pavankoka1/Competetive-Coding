#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	string x,y;
	cin>>x>>y;
	int l1=x.length(),l2=y.length();
//	cout<<l1<<" "<<l2<<endl;
	int a[3][l1];
	int s1[l1+5],s2[l2+5];
	for(int i=0;i<l1;i++)
		s1[i]=(int)x[i]-96;
	for(int i=0;i<l2;i++)
		s2[i]=(int)y[i]-96;			
	for(int i=0;i<3;i++)
		for(int j=0;j<=l1;j++)
			a[i][j]=0;
	for(int i=1;i<=l2;i++)
	{
//		cout<<i<<endl;
		for(int j=1;j<=l1;j++)
		{
			a[1][0]=0;
		a[2][0]=0;
			if(i%2!=0)
			{
//				cout<<j-1<<" "<<i-1<<endl;
//				cout<<s1[j-1]<<" "<<s2[i-1]<<endl;
				if(s1[j-1]==s2[i-1])
				{
					a[1][j]=1+a[2][j-1];
//					cout<<a[1][j]<<" ";
				}
				else
				{
//					cout<<a[1][j-1]<<" "<<a[2][j]<<endl;
					if(a[1][j-1]>=a[2][j])
						a[1][j]=a[1][j-1];
					else
						a[1][j]=a[2][j];
//					cout<<a[1][j]<<" ";		
				}		
			}
			else
			{
				if(s1[j-1]==s2[i-1])
				{
					a[2][j]=1+a[1][j-1];
//					cout<<a[2][j]<<" ";
				}
				else
				{
					if(a[2][j-1]>=a[1][j])
					{
//						cout<<"iii"<<a[2][j-1]<<" "<<a[1][j]<<" ";
						a[2][j]=a[2][j-1];
					}
					else
						a[2][j]=a[1][j-1];	
//					cout<<a[2][j]<<" ";	
				}	
			}
//			cout<<"0"<<endl;
		}
		a[1][0]=0;
		a[2][0]=0;
	}
	if(l2%2!=0)
		cout<<a[1][l1]<<endl;
	else
		cout<<a[2][l1]<<endl;	
}

