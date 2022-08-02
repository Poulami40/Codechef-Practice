#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    int a[n],c=0,res=0,d=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==1)
	        c++;
	        if(i<m&&a[i]==1)
	        d++;
	    }
	        if(c==n)
	        res=100;
	        else if(d==m)
	        res=k;
	        else
	        res=0;
	        cout<<res<<endl;
	    
	
	}
	return 0;
}
