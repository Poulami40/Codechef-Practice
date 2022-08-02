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
	    int p=a[0],c=0;
	    for(int i=1;i<n;i++)
	    {
	        if(p==0)
	        break;
	        p=p-1+a[i];
	        c++;
	        
	    }
	    cout<<c+p<<endl;
	}
	return 0;
}
