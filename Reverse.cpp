 #include<iostream>
using namespace std;
int main()
{
	int n;
	int r,res=0;
	cout<<"Enter number";
	cin>>n;//2436
	while(n)
	{
		r=n%10;//r=2436%10--->6 ; r=243%10-->3 ; r=24%10-->4 ; r=2%10-->2
		n=n/10;//n=2436/10--->243 ; n=243/10-->24 ; n=24/10=2 ; n=2/10---->0(END OF LOOP)
		res=res*10+r;//res=0*10+6--->6 ; res=6*10+3-->63 ; res=63*10+4-->634 ; res=634*10+2--->6342
	}
	cout<<res;
}
