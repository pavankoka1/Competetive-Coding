#include<bits/stdc++.h>
using namespace std;

// #define NULL 0
struct node
{
	int val,i,j,check;
	struct node *l,*r;
//	l=(struct node *)malloc(sizeof(struct node));
//	r=(struct node *)malloc(sizeof(struct node));
	struct node *prev;
//	prev=(struct node *)malloc(sizeof(struct node));
};
int main()
{
	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int t;
	cin>>t;
	while(t--)
	{
		int ii,jj;
		cin>>ii>>jj;
		struct node *start,*use;
		start=0;
//		start->val=0;
//		cout<<start<<endl;
//	start=(struct node *)malloc(sizeof(struct node));
	use=(struct node *)malloc(sizeof(struct node));
//	start=NULL;
	for(;;)
	{
		if(start->check==0)
			break;
		struct node *ex;
		ex=(struct node *)malloc(sizeof(struct node));
		if(start==0)
		{
			start->prev=0;
			start->i=ii;
			start->j=jj;
			use=start;
		}
		else
		{
			if(use->l->check==0 && use->r->check==0)
			{
				if(use->l->val>=0 && use->r->val>=0)
					use->val=(use->l->val)+(use->r->val);
				else
				{
					if(use->l->val <= use->r->val)
						use->val=use->r->val;
					else
						use->val=use->l->val;	
				}	
				use->check=0;
				use=use->prev;
			}
			else if(use->l->check==0)
			{
				ex->i=((use->i)+(use->j)+2)/2;
				ex->j=use->j;
				ex->prev=use;
				use->r=ex;
				use=ex;
			}
			
			if(use->i!=use->j)
			{
				ex->i=use->i;
				ex->j=((use->i)+(use->j))/2;
				ex->prev=use;
				use->l=ex;
				use=ex;
			}
			else
			{
				use->val=a[use->i];
				use->l=0;
				use->r=0;
				use->check=0;
				use=use->prev;
			}
			if(use->l==0 && use->r==0)
				use=use->prev;
		}
	}
	cout<<start->val<<endl;
	}
}
