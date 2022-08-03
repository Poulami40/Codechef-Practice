#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    long long c=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        c=c+a[i];
	    }
	    cout<<(c%k)<<endl;
	}
	return 0;
}
