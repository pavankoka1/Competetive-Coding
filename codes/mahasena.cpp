#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],c1=0,c2=0;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			c1++;
		
		if(a[i]%2!=0)
			c2++;	
	}	
	
	if(c1>c2)
		cout<<"READY FOR BATTLE"<<endl;
	
	else
		cout<<"NOT READY"<<endl;	
}
