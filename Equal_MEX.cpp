

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	   int val = 1;
    if(n == 1) 
    {
        cout<<"1\n";
    }else{
          for(int i =0 ; i<n-1 ; i+=2)
    {
    a[i] = val;
    a[i+1] = 2*val;
    val += 2;
    }
    if(n%2 != 0)
    {
    a[n-1] = a[n-2] + 1;}
    
    for(int i =0 ; i < n ; ++i) {
    cout<<a[i]<<" ";
    }
    
    cout<<endl;
    }
    }
 
    	
	return 0;
}
