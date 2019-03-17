#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2,s;
		int l1,l2;
		
		cin>>s1>>s2;
		
		l1=s1.length();
		l2=s2.length();
		
		s=s1;
		
		for(int i=0;i<l1;i++)
			s1[l1-i-1]=s[i];
		
		s=s2;
		for(int i=0;i<l2;i++)
			s2[l2-1-i]=s[i];
		
		int a[300]={0},b[300]={0};
		
		for(int i=0;i<l1;i++)
			a[i]=(int)s1[i]-48;
			
		for(int i=0;i<l2;i++)
			b[i]=(int)s2[i]-48;
			
		int c1=l1-1,c2=l2-1,k=299;
//			cout<<c1<<" "<<c2<<endl;
		for(;;)
		{
			k=299;
			for(;;)
			{
				if(a[k]!=0)
				{
					c1=k;
					break;
				}
				k--;
			}
			k=299;
			for(;;)
			{
				if(b[k]!=0)
				{
					c2=k;
					break;
				}
				k--;
			}
		
//			cout<<c1<<" "<<c2<<endl;
			int c=0;
			for(int i=0;i<300;i++)
			{
				if(a[i]==b[i])
					c++;
			}
//			cout<<c<<endl;
			if(c==300)
			{
//				cout<<a[1]<<a[0]<<endl;
//				cout<<b[1]<<b[0]<<endl;
//				cout<<c1<<endl;
				for(int i=c1;i>=0;i--)
					cout<<a[i];
				cout<<endl;
				break;	
			}
			else
			{
				
			
				if(c1>c2)
				{
					for(int i=0;i<300;i++)
					{
						if(a[i]<b[i])
						{
							a[i]=a[i]+10;
							a[i+1]=a[i+1]-1;
						}
						a[i]=a[i]-b[i];
					}
				}
				else if(c1<c2)
				{
					for(int i=0;i<300;i++)
					{
						if(a[i]>b[i])
						{
							b[i]=b[i]+10;
							b[i+1]=b[i+1]-1;
						}
						b[i]=b[i]-a[i];
					}
				}
				else if(c1==c2)
				{
					for(int j=299;j>=0;j--)
					{
						if(a[j]>b[j])
						{
							for(int i=0;i<300;i++)
							{
								if(a[i]<b[i])
								{
									a[i]=a[i]+10;
									a[i+1]=a[i+1]-1;
								}
								a[i]=a[i]-b[i];
							}
							break;
						}
						else if(b[j]>a[j])
						{
							for(int i=0;i<300;i++)
							{
								if(a[i]>b[i])
								{
									b[i]=b[i]+10;
									b[i+1]=b[i+1]-1;
								}
								b[i]=b[i]-a[i];
							}
							break;
						}
					}
	//				cout<<a[1]<<a[0]<<endl;
	//				cout<<b[1]<<b[0]<<endl;
				}
			}
		}
	}
	return 0;
}

