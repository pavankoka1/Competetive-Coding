#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(b>a)
		{
			b=a+b;
			a=b-a;
			b=b-a;
		}
		cout<<a<<" "<<a+b<<endl;
	}
}
