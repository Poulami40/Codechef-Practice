#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int l,r,n=0;
	    cin>>l>>r;
	    int res=abs(2*r-2*l+1);
	    cout<<res<<endl;
	}
	return 0;
}
