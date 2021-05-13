#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;//9
	for(int i=1;i<n;i++)
	{
		int count=0;
		for(int j=1;j<n;j++)
		 if(i%j==0)//1%1-->0 ; 2%1
		{
			count++;//1
		}
			if(count==2)
	         cout<<"   "<<i;
    }
}
