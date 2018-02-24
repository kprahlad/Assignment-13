#include<iostream>
using namespace std;
void binsearch(int a[],int l,int u,int data)
{
	int flag=1,mid=-1;
	while(mid!=l&&flag)
	{
		mid=(l+u)/2;
		if(a[mid]>data) u=mid;
		else if(a[mid]<data) l=mid;
		else flag=0;
	}
	if(!flag) cout<<mid+1<<" is where the data is at!";
	else cout<<"Nope.";
}
int main()
{
	int a[]={1,2,3,4,5,6};
	binsearch(a,0,5,2);
	return 0;
}
