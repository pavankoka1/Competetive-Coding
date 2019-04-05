#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int l,b;
		cin>>l>>b;
		int a[b][l];
		for(int i=1;i<=b;i++)
			for(int j=1;j<=l;j++)
				cin>>a[i][j];
//		for(int i=1;i<=l;i++)
//		{
//			for(int j=1;j<=b;j++)
//				cout<<a[i][j]<<" ";
//			cout<<endl;	
//		}		
		int i=0,p=1,q=1;
		while(l>0 && b>0)
		{
			if(b==1)
			{
				if(i==0 || i==3)
				{
					for(int j=0;j<l;j++)
					{
						cout<<a[p][q]<<" ";
						q++;
					}
					q--;
					p++;
					i++;
					b--;
					break;
				}
				else
				{
					for(int j=0;j<l;j++)
					{
						cout<<a[p][q]<<" ";
						q--;
					}
//					cout<<"  "<<p<<" "<<q<<"  ";
					q++;
					p--;
					i++;
					b--;
					break;	
				}
			}
			if(l==1)
			{
				if(i==0 || i==1)
				{
					for(int j=0;j<b;j++)
				{
					cout<<a[p][q]<<" ";
					p++;
				}
				p--;
				q--;
				i++;
				l--;
				break;
				}
				else
				{
					for(int j=0;j<b;j++)
				{
					cout<<a[p][q]<<" ";
					p--;
				}
				p++;
				q++;
				i=0;
				l--;
				break;
				}
			}
			if(i==0)
			{
//				cout<<"in0";
				for(int j=0;j<l;j++)
				{
					cout<<a[p][q]<<" ";
					q++;
				}
				q--;
				p++;
				i++;
				b--;
				continue;
			}
			if(i==1)
			{
//				cout<<"in1";
				for(int j=0;j<b;j++)
				{
					cout<<a[p][q]<<" ";
					p++;
				}
				p--;
				q--;
				i++;
				l--;
				continue;
			}
			if(i==2)
			{
//				cout<<"in2";
				for(int j=0;j<l;j++)
				{
					cout<<a[p][q]<<" ";
					q--;
				}
//				cout<<"  "<<p<<" "<<q<<"  ";
				q++;
				p--;
				i++;
				b--;
				continue;
			}
			if(i==3)
			{
//				cout<<"in3";
				for(int j=0;j<b;j++)
				{
					cout<<a[p][q]<<" ";
					p--;
				}
				p++;
				q++;
				i=0;
				l--;
				continue;
			}
		}
		cout<<endl;		
	}
}

