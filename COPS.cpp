#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m,x,y;
	    cin>>m>>x>>y;
	    int a[m];
	    int dist=x*y;
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    int c=0;
	    for(int i=1;i<=100;i++)
	    {
	        bool s=true;
	        for(int j=0;j<m;j++)
	        {
	            int lr=max((a[j]-dist),1);
	            int rr=min((a[j]+dist),100);
	            if(i>=lr&&i<=rr)
	            s=false;
	        }
	        if(s)
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
