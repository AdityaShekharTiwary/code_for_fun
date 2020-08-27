#include <iostream>
using namespace std;

int main() {
	int i,t;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    int l,k,m,ans;
	    cin>>l>>k;
	    if(k>l)
	      cout<<"Case "<<i<<": 0"<<endl;
	    else {
	    m=l-k+1;
	    ans= (m*(m+1))/2;
	    cout<<"Case "<<i<<": "<<ans<<endl;
	    }
	}
	return 0;
}

