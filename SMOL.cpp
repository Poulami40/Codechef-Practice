#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n,k,c=0;
	    cin>>n>>k;
	    if(n>=k&&k!=0)
	    {
	        cout<<n%k<<endl;
	    }
	    
	    else
	    cout<<n<<endl;
	}
	return 0;
}
