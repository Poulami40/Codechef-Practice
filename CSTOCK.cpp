#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    float p=(s+s*0.01*c);
	    if(p>=a&&p<=b)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
