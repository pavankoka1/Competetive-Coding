#include<iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	
	for(int i=0;;i++)
	{
		if(a==0)
			break;
		
		cout<<a%2<<endl;
		a=a/2;	
	}
}
