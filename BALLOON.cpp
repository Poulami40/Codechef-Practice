#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0,i;
	    cin>>n;
	    int a[n];
	    for( i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>=1&&a[i]<=7)
	        c++;
	        if(c==7)
	        break;
	    }
	    cout<<i+1<<endl;
	}
	return 0;
}
