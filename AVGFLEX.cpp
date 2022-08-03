#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int b=0;
	    for(int i=0;i<n;i++)
	    {
	        int c=0,d=0;
	        for(int k=0;k<n;k++)
	        {
	            if(k!=i)
	            {
	                if(a[k]>a[i])
	                c++;
	                else
	                d++;
	            }
	            
	            }
	            if(d>=c)
	            b++;
	        }
	        cout<<b<<endl;
	    
	}
	return 0;
}
