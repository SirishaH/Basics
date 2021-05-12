#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter Number : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    if(n%i==0) 
		{
		   count++;
		}
	}
		if(count==2)
		   	cout<<"Given number is PRIME";
		   else
		   	cout<<"Given number is Not PRIME";			
}
