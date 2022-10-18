//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
		int n=A.size();
		for(int i=0;i<n;i++ ){
		    int r=0;
		    for(int j=i;j>=0;j--){
		        ans.push_back(A[r++][j]);
		    }
		}
		
		for(int i=1;i<n;i++){
		    int r=i;
		    for(int j=n-1;j>=i;j--){
		          ans.push_back(A[r++][j]);
		    }
		}
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends