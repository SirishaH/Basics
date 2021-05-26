#include<iostream>
using namespace std;
int main()
{
	int n=10,a[n]={10,20,30,52},x,pos;                    
	cout<<"Enter number to get insert : ";         
	cin>>x;                                        
	cout<<"Enter position to insert the value : ";
	cin>>pos;
	int index=pos-1;
	for(int i=0;i<n;i++)
	{
		if(i==index)
		{
		a[i+2]=a[i+1];
		a[i+1]=a[i];
		a[i]=x;
	    }
		cout<<a[i]<<" ";
	}
	
}
