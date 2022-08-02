#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n,sum=0,c=0;
	    cin>>n;
	    for(int j=1;j<=n;j++)
	    {
	       sum=sum+j;
	       c++;
	    }
	    int f=n,k,j=0;
	    if(sum%2!=0)
	    {
	        c=n-1;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
