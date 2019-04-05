#include<bits/stdc++.h>
using namespace std;

struct node
{
	int a,b,f=0,s=0;
	struct node *l,*r;
};

struct node *create(int a1,int b1,struct node *start,int arr[])
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp=start;
	tmp->a=a1;
	tmp->b=b1;
	
	if(tmp->a == tmp->b)
	{
		tmp->l=NULL;
		tmp->r=NULL;
		tmp->s=arr[tmp->a];
		tmp->f=1;
		return start;
	}
	create(tmp->a,(tmp->a+tmp->b)/2,tmp->l,arr);
	create((tmp->a+tmp->b)/2+1,tmp->b,tmp->r,arr);
	return start;
}

struct node *call(struct node *start)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp=start;
	cout<<tmp->s<<endl;
	if(tmp->l->f != 1)
		call(tmp->l);
	if(tmp->r->f != 1)
		call(tmp->r);
	if(tmp->l->f==1 && tmp->r->f==1)
	{
		if(tmp->l->s + tmp->r->s >= tmp->l->s && tmp->l->s + tmp->r->s >= tmp->r->s)
			tmp->s=tmp->l->s+tmp->r->s;
		else
		{
			if(tmp->l->s >= tmp->r->s)
				tmp->s= tmp->l->s;
			else
				tmp->s=tmp->r->s;					
		}
		return start;	
	}		
}
int main()
{
	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int arr[n+5];
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<a<<b<<endl;
		struct node *start=NULL;
//		start=(struct node *)malloc(sizeof(struct node));
		start=create(a,b,start,arr);
		start=call(start);
		cout<<start->s<<endl;
	}
}

