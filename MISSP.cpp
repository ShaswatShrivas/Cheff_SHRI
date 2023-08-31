#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int val=0;
        for (int i=0;i<n;i++){
            int a;
            cin>>a;
            val ^= a;
        }
        cout<<val<<endl;
    }
	// your code goes here
	return 0;
}
