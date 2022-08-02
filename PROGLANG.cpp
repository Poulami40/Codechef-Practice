#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,a1,b1,a2,b2,r;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if((a==a1||a==b1)&&(b==b1||b==a1))
	    r=1;
	    else if((a==a2||a==b2)&&(b==a2||b==b2))
	    r=2;
	    else
	    r=0;
	    cout<<r<<endl;
	}
	return 0;
}
