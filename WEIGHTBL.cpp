#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int w1,w2,x1,x2,m,r;
	    cin>>w1>>w2>>x1>>x2>>m;
	    if((w2-w1)>=x1*m&(w2-w1)<=x2*m)
	     r=1;
	    else
	     r=0;
	    cout<<r<<endl;
	}
	return 0;
}
