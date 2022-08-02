#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,s;
	for(int i=1;i<=t;i++)
	{
	    
	    cin>>n>>s;
	if(n>=s)
	cout<<s<<endl;
	else
	cout<<n-(s-n)<<endl;
	}
	return 0;

}
