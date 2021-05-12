#include<iostream>
using namespace std;
int main()
{
	int n,count_odd=0,count_even=0,r;
	cin>>n;//423
	while(n)
	{
		r=n%10;//r=423%10--->3 ; r=42%10-->2 ; r=4%10--->4
		n=n/10;//n=423/10--->42 ; n=42/10--->4 ; n=4/10-->0
		if(r%2==0) //3%2-->F ; 2%2--->T ;4%2--->T
		{
			count_even++;
		}
		else //3%2-->T
		{
			count_odd++;
		}
	}
	cout<<"Odd: "<<count_odd<<"    "<<"Even : "<<count_even;
	return 0;
}
