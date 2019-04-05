#include<bits/stdc++.h>
using namespace std;
bool isSubSequence(vector<int> s1,vector<int> s2, int m, int n)
{
   
    if (m == 0) return true;
    if (n == 0) return false;
 
   
    if (s1[m-1] == s2[n-1])
        return isSubSequence(s1, s2, m-1, n-1);
 
  
    return isSubSequence(s1, s2, m, n-1);
}
vector<int> find3Numbers(vector<int> , int );
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a(n+1);
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		  vector<int> res = find3Numbers(a, n);
    
    	 
    	  
    	  if(res.size()==0)
    	  {
    	  	cout<<0<<endl;
    	  }
    	  else if(res[0]<res[1] and res[1]<res[2])
          cout<<isSubSequence(res,a,res.size(),n)<<endl;
          else
          cout<<0<<endl;
	}
    
  
    return 0;
}
vector<int> find3Numbers(vector<int> A, int N)
{
   int a[N],b[N];
   vector<int> v;
   int x=0;
   a[0]=-1;
   b[N-1]=-1;
   for(int i=1;i<N;i++){
       if(A[i]>A[x])
        a[i]=x;
       else
            a[i]=-1;
            
       if(A[i]<A[x])
            x=i;
   }
   x=N-1;
   for(int i=N-2;i>=0;i--){
       if(A[i]<A[x])
        b[i]=x;
        else
            b[i]=-1;
            
        if(A[i]>A[x])
            x=i;
   }
   for(int i=0;i<N;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<N;i++)
    cout<<b[i]<<" ";
    cout<<endl;
   for(int i=1;i<N-1;i++){
       if(a[i]!=-1 && b[i]!=-1){
       	cout<<"in"<<endl;
           v.push_back(A[a[i]]);
           v.push_back(A[i]);
           v.push_back(A[b[i]]);
           break;
       }
   }
   return v;
}
