https://www.codechef.com/COOK139C/problems/JMARKET

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,a[3];
	    cin>>x>>a[0]>>a[1]>>a[2];
	   sort(a,a+3);
	    int sum=0;
	    x-=1;
	    while(x--)
	    {
	        sum+=a[0];
	    }
	    sum+=a[1];
	    cout<<sum<<endl;
	}
	return 0;
}
