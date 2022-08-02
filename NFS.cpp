#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int u,v,a,s;
	    
	    cin>>u>>v>>a>>s;
	    if((u*u-(2*a*s))<=v*v)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
