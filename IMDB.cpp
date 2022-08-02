#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n,x,k=0;
	    cin>>n>>x;
	    int a[n],b[n];
	    for(int j=1;j<=n;j++)
	    {
	        int s,r;
	        cin>>s>>r;
	        a[j-1]=r;
	        b[j-1]=s;
	    }
	    int max=-1;
	    for( k=0;k<n;k++)
	    {
	        if(b[k]<=x&&a[k]>=max)
	        max=a[k];
	    }
	    cout<<max<<endl;
	    
	}
	return 0;
}
