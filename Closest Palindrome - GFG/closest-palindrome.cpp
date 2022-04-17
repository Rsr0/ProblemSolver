// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:

  long long int make_pal(long long int num) {
        string s = to_string(num);
        int n = s.length();
         int i=0,j=n-1;
       while(i<j){
           s[j]=s[i];
           i++;
           j--;
       }
        return stoll(s);
    }

	long long int closestPalindrome(long long int num){
	    // Code here
	   long long int ans=make_pal(num); 
       int gap=abs(ans-num);     
        for(int i=0;i<15;i++){
            int z=pow(10,i);   
              if(num-z>0){       
                long long int temp=make_pal(num-z);
                if(gap>=abs(temp-num)){
                    if(gap==abs(temp-num)){
                        ans=min(temp,ans);            //if found same min diff two number then take min one
                    }
                    else
                        ans=temp;
                }

            }
        if(num+z<1e15){
           long long int temp=make_pal(num+z);
             if(gap>=abs(temp-num)){
                if(gap==abs(temp-num))
                    ans=min(temp,ans);            //if found same min diff two number then take min one
                else
                    ans=temp;
            }
        }
    }
        return ans;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int num;
		cin >> num;
		Solution obj;
		long long int ans = obj.closestPalindrome(num);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends