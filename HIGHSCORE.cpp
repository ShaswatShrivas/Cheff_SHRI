#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a>=b && a>=c && a>=d) cout<<a<<endl;
	    else if(b>=a && b>=c && b>=d) cout<<b<<endl;
	    else if(c>=a && c>=b && c>=d) cout<<c<<endl;
	    else cout<<d<<endl;
 	}
	return 0;
}
