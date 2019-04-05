#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159

int main()
{
//	freopen("input.txt","r",stdin);
	for(;;)
	{
		double n,a;
		cin>>n;
		if(n==0)
			break;
		a=(n*n)/(2*PI);
		cout<<fixed<<setprecision(2)<<a<<endl;	
	}
}

