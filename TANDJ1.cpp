#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	int a,b,c,d,K;
	cin>>a>>b>>c>>d>>K;
	int dist=abs(a-c)+abs(b-d);
	if(K<dist)
	cout<<"NO\n";
	else if(K==dist)
	cout<<"YES\n";
	else
	{
	    if((K%2==0&&dist%2==0)||(K%2!=0&&dist%2!=0))
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
}
	return 0;
}
