#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,s,e,l;
	cin>>t;
	
	while(t--){
	    cin>>s;
	    
	    int q[s]={};
	    for(int i=0;i<s;i++)
	    cin>>q[i];
	    
	    long sum=0;
	    for(int i=0;i<s;i++){
	        cin>>e;
	        
	        for(int j=0;j<e;j++)
	        {
	            cin>>l;
	            if(j==0)
	            sum+=l;
	            else
	            sum+=l-q[i];
	        }
	    }
	    
	    cout<<sum<<endl;
	}
	return 0;
}
