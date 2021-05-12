#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=0,r;
	cin>>n;//13
	while(n)
	{
		r=n%10;//r=13%10-->3 ; r=1%10-->1
		n=n/10;//n=1 ; n=1/10-->0
		res=res+r*r;//res=0+3*3-->9 ; res=9+1*1-->10
		if(n==0)
		{
			n=res;//n=10
		}
		if(n==1)
		{
				cout<<"Happy number";
			break;
		}
		if(n!=1)
     	{
		cout<<"Not a happy number";
		break;
	    }
	}
}

