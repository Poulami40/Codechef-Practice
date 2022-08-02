#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    if((a+c)>=n&&b>=n)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
