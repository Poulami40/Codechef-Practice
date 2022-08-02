#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
	 cin>>t;
	 for(int i=1;i<=t;i++)
	 {
	     int x;
	     cin>>x;
	     if(x>=1&&x<100)
	     cout<<"Easy\n";
	     else if(x>=100&&x<200)
	     cout<<"Medium\n";
	     else
	     cout<<"Hard\n";
	 }
	return 0;
}
