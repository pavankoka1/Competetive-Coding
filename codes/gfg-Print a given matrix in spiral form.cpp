#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int m=4,n=4;
//		cin>>m>>n;
		int a[m][n];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		int rc=n,cc=m-1,f=1,rk=0,ck=0;		
		while(rc!=0 && cc!=0)
		{
			if(f==1)
			{
				for(int i=0;i<rc;i++)
					cout<<a[rk][ck+i]<<" ";
				ck+=rc-1;
				rc--;
				f++;
				rk++;
			}
//			cout<<endl<<rk<<" "<<ck<<endl;
			if(f==2)
			{
				for(int i=0;i<cc;i++)
					cout<<a[rk+i][ck]<<" ";
				rk+=cc-1;
				cc--;
				f++;
				ck--;	
			}
//			cout<<endl<<rk<<" "<<ck<<endl;
			if(f==3)
			{
				for(int i=0;i<rc;i++)
					cout<<a[rk][ck-i]<<" ";
				ck-=rc-1;
				rc--;
				f++;
				rk--;	
			}
//			cout<<endl<<rk<<" "<<ck<<endl;
			if(f==4)
			{
				for(int i=0;i<cc;i++)
					cout<<a[rk-i][ck]<<" ";
				rk-=cc-1;
				cc--;
				f=1;
				ck++;	
			}
//			cout<<endl<<rc<<" "<<cc<<endl;
		}
		if(rc==0)
		{
			for(int i=0;i<cc;i++)
				cout<<a[rk+i][ck]<<" ";
		}
		if(cc==0)
		{
			for(int i=0;i<rc;i++)
				cout<<a[rk][ck+i]<<" ";
		}		
	}
}

