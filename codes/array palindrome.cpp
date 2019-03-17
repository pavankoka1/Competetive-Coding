#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
   while(t--)
   {
	//freopen("input.txt","r",stdin);
	string s;
	cin>>s;
	
	int l,c,d=0;
	l=s.length();
	
	int a[100002],b[100002];
	
	for(int i=0;i<l;i++)
		a[l-i-1]=(int)s[i]-48;
	    
		for(int i=0;i<l;i++)
		{
			if(a[i]==9)
				d++; 	
		}     
		if(d==l)
		{
			l++;
			for(int i=0;i<l-1;i++)
				a[i]=0;
			
			a[l-1]=1;	
	    }               	
	for(;;)
	{
		c=0;
		a[0]++;
		
		for(int i=0;i<l;i++)
		{
			if(a[i]>9)
			{
				a[i+1]++;
				a[i]=a[i]%10;
			}
		}
		
		for(int i=0;i<l;i++)
			b[l-i-1]=a[i];	
		
		for(int i=0;i<l;i++)
		{
			if(a[i]==b[i])
				c++;
		}
		
		if(c==l)
		{
			for(int i=l-1;i>=0;i--)
				cout<<a[i];
				cout<<endl;
			break;
		}
	}	
   }
}
