#include<bits/stdc++.h>
using namespace std;

struct po{
	int x,y;
};

int dis(po p1,po p2){
	return ((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
int check(po p1,po p2,po p3,po p4){
	int d[3];
	d[0]=dis(p1,p2);
	d[1]=dis(p1,p3);
	d[2]=dis(p1,p4);
	
	sort(d,d+3);
	if(d[0]==d[1] && d[1]*2==d[2])
		return d[2];
	else
		return 0;	
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		po p1,p2,p3,p4;
		cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y>>p4.x>>p4.y;
		int d1=check(p1,p2,p3,p4),d2=check(p2,p3,p4,p1);
		if(d1 && d1==d2)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;	
		
	}
}

