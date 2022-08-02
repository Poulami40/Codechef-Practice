#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m,k,t,q,c=0;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
	    int sum=0;
	    int a[k+1];
	    for(int j=0;j<k+1;j++)
	    {
	        cin>>a[k];
	        if(j<k)
	        sum=sum+a[k];
	    }
	    if (sum>=m&&a[k]<=10)
	    c++;
	}
	cout<<c;
	return 0;
}
