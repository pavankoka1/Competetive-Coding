#include<iostream>
using namespace std;

int a[100005];

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int count=1,b,c;
		
		for(int i=0;i<n;i++)
			cin>>a[i];
			
		for(int i=0;i<n;i++)
		{
		 	count=1;
		 	for(int j=i;j<n-1;j++)
		 	{
		 		b=a[j];
		 		c=a[j+1];
		 		if(b>0&&c<0)
		 		count++;
		 		
		 		else if(b<0&&c>0)
		 		count++;
		 		else
		 		break;
		 		
			}
			cout<<count<<" ";
		}
		cout<<endl;
		
	}
}

/*
3
4
1 2 3 4
4
1 -5 1 -5
6
-5 -1 -1 2 -2 -3
*/
