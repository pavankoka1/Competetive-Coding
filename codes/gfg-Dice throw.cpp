#include<iostream>
using namespace std;

long long int a[51][51][51]={0};
long long int dice(int d,int c,int s){
    if(a[d][c][s]!=0)
        return a[d][c][s];
        
    if(s<=0)
        return 0;
    if(c==1){
        if(s<=d)
            return 1;
        else
            return 0;
    }    
    long long int n=0;
    for(int i=1;i<=d;i++){
        if(a[d][c-1][s-i]==0)
            a[d][c-1][s-i]=dice(d,c-1,s-i);
        n+=dice(d,c-1,s-i);
    }
    a[d][c][s]=n;
    return n;
}
int main()
 {
 	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int d,c,s;
	    cin>>d>>c>>s;
	    cout<<dice(d,c,s)<<endl;
	}
	return 0;
}
