#include <bits/stdc++.h>

int main(void) {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a[n],b[n];
	    
	    for (int i=0;i<n;i+++)
	    {
	        cin>>a[i];
	        b[i]=a[i];
	    }
	    
	    sort(b,b+n);
	    long long c=0;
	    long long k;
	    for (long long i=0;i<n;i++)
	    {
	        if (b[i]!=(i+1))
	        {
	             c++;
	        }
	    }
	    
	    if (c>1)
	    {
	        cout<<"NO\n";
	    }
	    else
	    {   
	        for (long long i=0;i<n;i++)
	        {
    	        if (a[i]!=(i+1))
    	        {
    	             k=i+1;
    	        }
	        }
	        long long r=a[k]/(a[k]+k);
	        cout<<r<<endl;
	    }
	}
	return 0;
}