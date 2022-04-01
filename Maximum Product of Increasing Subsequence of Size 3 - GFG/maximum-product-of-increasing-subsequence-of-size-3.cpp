// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 



 // } Driver Code Ends


class Solution{
  public:
    vector<int> maxProductSubsequence(int *arr , int n) 
    { 
        // Complete the function
        set<long int> st;
        long int res=-1, curr;
        vector<int>r_max(n);
        vector<int> ans;
        long int ele;
        
        r_max[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
            r_max[i]=max(r_max[i+1], arr[i]);
        
        st.insert(arr[0]);
        for(int i=1;i<n;i++){
            st.insert(arr[i]);
            auto it=st.find(arr[i]);
            if(it!=st.begin()){
                it--;
                ele=*it;
                if(arr[i]<r_max[i]){
                    curr=(long) arr[i]*r_max[i]*ele;
                    if(curr>res){
                        ans={ele,arr[i],r_max[i]};
                        res=curr;
                    }
                }
            }
        }
        
        // for(auto it:st)
        //     cout<<it<<" ";
        if(ans.size()==0)  return {-1};
        return ans;
    }

};

// { Driver Code Starts.
// Driver Program 
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; ++i)
	        cin>>arr[i];
	    
	    vector<int> res;
	    Solution obj;
	    res = obj.maxProductSubsequence(arr, num);
	    
	    if(res[0] == -1)
	        cout<<"Not Present\n";
	    else{
    	    for(int i = 0; i<3; ++i)
    	        cout<<res[i]<<" ";
    	    cout<<"\n";
	    }
	    
	}
} 
  // } Driver Code Ends