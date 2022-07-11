// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    sort(a,a+n);
    
    if(n>1 && a[0]==a[n-1])    return {-1};
    vector<int> ans(n,0);
    int x=0,y=n-1;
    // for(int i=1;i<n;i+=2){
    //     ans[i]=a[k++];
    // }
    int i=0;
    while(x<=y){
        if(i&1)
            ans[i]=a[x++];
        
        else
            ans[i]=a[y--];
        i++;
    }
    return ans;
}
