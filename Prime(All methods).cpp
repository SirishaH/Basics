//PRIME NUMBER METHOD---- 1
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

//PRIME NUMBER METHOD----2
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

//PRIME NUMBER METHOD----3
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

//PRIME NUMBER METHOD----4
 #include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flage=0;
	cout<<"Enter number";
	cin>>n;
	for(int i=2;i<=n-1;i++) //i<=97/2 ; i<=48
	{
		if(n%i==0)
		{                  // n=97
		flage=1;
		break;
		}           
	} 
	if(flage==1)
	       {
		     cout<<"Not Prime";
     	   }             
			else if(n==1)
			{
				cout<<"Not prime";
			  }  
			  else
			  cout<<"prime";
} 
