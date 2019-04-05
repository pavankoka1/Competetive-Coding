#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		int b[n][n];
		int lu=0,ru=n-1,ld=n-1,rd=n-1;
		while(lu<ru && lu<rd)
		{
			for(int i=lu;i<=ru;i++)
//				cout<<ld+lu-i<<" "<<lu<<" "<<lu<<" "<<i<<endl;
				b[ld+lu-i][lu]=a[lu][i];
			for(int i=lu;i<=ld;i++)
//				cout<<lu<<" "<<i<<" "<<i<<" "<<ru<<endl;
				b[lu][i]=a[i][ru];
			for(int i=rd;i>=lu;i--)
//				cout<<rd+lu-i<<" "<<ru<<" "<<ld<<" "<<i<<endl;
				b[lu+rd-i][ru]=a[ld][i];
			for(int i=ld;i>=lu;i--)
//				cout<<rd<<" "<<rd+i-ld<<" "<<i<<" "<<lu<<endl;
				b[rd][rd+i-ld]=a[i][lu];
			lu++;
			ru--;
			ld--;
			rd--;				
		}
		for(int i=lu;i<=ru;i++)
			for(int j=lu;j<=ru;j++)
				b[i][j]=a[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cout<<b[i][j]<<" ";	
		cout<<endl;			
	}
}

