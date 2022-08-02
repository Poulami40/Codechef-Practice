#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int ma=a[0];
	    int mi=a[0];
	    for(int i=1;i<n;i++)
	    {
	        ma=max(a[i],ma);
	        mi=min(a[i],mi);
	    }
	    cout<<ma-mi<<endl;
	}
	return 0;
}
