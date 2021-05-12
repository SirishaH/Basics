#include<iostream>
using namespace std;
int main()
{
	int n,r,res=0;
	cin>>n;
	int temp=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=res*10+r;
	}
		if(temp==res){
		cout<<"Palindrome";
	    }
	   else
	    {
	    	cout<<"Not palindrome";
		}
}
