https://www.codechef.com/problems/TACHSTCK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	    int n,d,count=0;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i+1]-arr[i]<=d)
	        {
	            count++;
	            i++;
	        }
	    }
	    cout<<count<<endl;
	    
	return 0;
}
