#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int d,l,r;
	    cin>>d>>l>>r;
	    if(d>=l&&d<=r)
	    cout<<"Take second dose now\n";
	    else if(d>r)
	    cout<<"Too Late\n";
	    else
	    cout<<"Too Early\n";
	}
	return 0;
}
