#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter number : ";
	cin>>n;//100 
	for(int i=1;i<=sqrt(n);i++)//sqrt(100)--->10
	{
		if(n%i==0)
		{
			count++;
		}
    }
    if(count==1)
    cout<<"Prime";
    else{
    	cout<<"Not prime";
	}
}
