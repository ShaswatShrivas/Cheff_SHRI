#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,temp=0,count=0,max1=0,max2=0;
	    cin >> n;
	    for (int i=0; i<n ; i++) {
	        cin >> temp;
	        if (temp == 0) {
	            if (count > max1)
	                max1 = count;
	            count = 0;
	        }
	        else 
	            count++;
	    }
	    if (count > max1)
                max1 = count;
        count = 0;
	    for (int i=0;i <n ; i++) {
	        cin >> temp;
	        if (temp == 0) {
	           if (count > max2)
	                max2 = count;
	           count =0;
	        }
	        else 
	            count++;
	    }
	    if (count > max2)
	            max2 = count;
        if (max1 == max2) 
            cout << "Draw" << endl;
        else if (max1 > max2)
            cout << "Om" << endl;
        else 
            cout << "Addy" << endl;
	}
	return 0;
}