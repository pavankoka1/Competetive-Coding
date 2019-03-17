#include<iostream>
using namespace std;
int main()
{
  long long int t,n,k,ctr;
   int a[100000];
  cin>>t;
 
   for(int i=0;i<t;i++)
   {
   	cin>>n>>k;
   	ctr=0;
   	for(int j=0;j<n;j++)
   	cin>>a[j];
   	for(int j=0;j<n;j++)
   	{  if(a[j]>=k)
   		{
		   if((a[j]%k)<=(((a[j]/k)+1)*k-a[j]))
   		ctr+=a[j]%k;
   		else
   		ctr+=(((a[j]/k)+1)*k-a[j]);
	   }
	  else if(a[j]<k)
	   ctr+=k-a[j];
}
	   cout<<ctr;
   	cout<<"\n";
   }
 
  return 0;
}
