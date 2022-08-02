#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n,p,x,y,sum=0;
	    cin>>n>>p>>x>>y;
	    int a[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[i];
	    }
	    sum=0;
	    for(int j=0;j<p;j++)
	    {
	        if(a[j]==1)
	        sum+=y;
	        else
	        sum+=x;
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
