https://www.codechef.com/START28C/problems/CARCHOICE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float x1,x2,y1,y2;
	    cin>>x1>>x2>>y1>>y2;
	    int ans=((y1/x1)<(y2/x2))?-1:((y1/x1)>(y2/x2))?1:0;
	    cout<<ans<<endl;
	}
	return 0;
}
