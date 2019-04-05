#include<bits/stdc++.h>
using namespace std;

int getB(int n,int r){
    int ans = 1, div = 2;
    for(int i=r+1;i<=n;i++){
        ans*=i;
        while(ans%div==0 && div<=n-r)
            ans/=div++;
    }
    return ans;        
}

int solve(int A, int B, int C) {
    int c=0;
    for(int i=0;4*i<=A;i++){
        if((A-4*i)%6==0){
        	cout<<i<<" "<<(A-4*i)/6<<endl;
            c+=getB(B,max(i+C+(A-4*i)/6,B-i-C-(A-4*i)/6));
        }
    }
    return c;
}


int main()
{
//	freopen("input.txt","r",stdin);
	cout<<solve(10,2,9);
}

