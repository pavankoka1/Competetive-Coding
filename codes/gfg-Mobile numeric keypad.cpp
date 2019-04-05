#include<bits/stdc++.h>
using namespace std;

long long int a[10][30]={0};
long long int count(int x,int n){
	if(n==0)
		return 1;
	if(a[x][n]!=0)
		return a[x][n];	
	if(x==1)
		a[x][n]=count(1,n-1)+count(2,n-1)+count(4,n-1);
	else if(x==2)
		a[x][n]=count(2,n-1)+count(1,n-1)+count(3,n-1)+count(5,n-1);
	else if(x==3)
		a[x][n]=count(6,n-1)+count(2,n-1)+count(3,n-1);
	else if(x==4)
		a[x][n]=count(4,n-1)+count(5,n-1)+count(7,n-1)+count(1,n-1);
	else if(x==5)
		a[x][n]=count(6,n-1)+count(8,n-1)+count(2,n-1)+count(5,n-1)+count(4,n-1);
	else if(x==6)
		a[x][n]=count(6,n-1)+count(3,n-1)+count(5,n-1)+count(9,n-1);
	else if(x==7)
		a[x][n]=count(7,n-1)+count(4,n-1)+count(8,n-1);
	else if(x==8)
		a[x][n]=count(8,n-1)+count(7,n-1)+count(9,n-1)+count(5,n-1)+count(0,n-1);
	else if(x==9)
		a[x][n]=count(6,n-1)+count(8,n-1)+count(9,n-1);
	else if(x==0)
		a[x][n]=count(0,n-1)+count(8,n-1);
	
	return a[x][n];			
}

long long int get(int n){
	long long int c=0;
	for(int i=0;i<10;i++)
		c+=count(i,n-1);
	return c;	
}

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<get(n)<<endl;
	}
}

