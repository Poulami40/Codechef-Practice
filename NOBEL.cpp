#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,c=1;
	    cin>>n>>m;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    c=1;
	    for(int j=0;j<n-1;j++)
	    {
	        if(a[j]!=a[j+1])
	        c++;
	    }
	    if(c==m)
	    cout<<"NO\n";
	    else
	    cout<<"Yes\n";
	}
	return 0;
}
