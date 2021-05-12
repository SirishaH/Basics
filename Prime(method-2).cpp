 #include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter number";
	cin>>n;
	for(int i=1;i<=n/2;i++) //i<=97/2 ; i<=48
	{
		if(n%i==0)
		{                  // n=97
			count++;
		}            
	}                
	if(count==1)     
	cout<<"Prime";   
	else //            
	cout<<"NOT PRIME"; 
}
