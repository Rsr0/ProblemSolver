class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        
        // min array as first
        if(n1>n2) return findMedianSortedArrays(nums2,nums1);
        
        int lo=0, hi=n1;
        double ans=0.0;
        while(lo<=hi){
            int cut1=(lo+hi)>>1;
            int cut2=((n1+n2+1)>>1)-cut1;
            
            int l1=(cut1==0)? INT_MIN : nums1[cut1-1];
            int l2=(cut2==0)? INT_MIN : nums2[cut2-1];
            int r1=(cut1==n1)? INT_MAX : nums1[cut1];
            int r2=(cut2==n2)? INT_MAX : nums2[cut2];
            
            if(l1<=r2 && l2<=r1){
                if((n1+n2)%2==0)
                    ans=(max(l1,l2)+min(r1,r2))/2.0;
                else
                    ans=max(l1,l2);
                
                break;
            }
            
            else if(l1>r2)
                hi=cut1-1;
            else
                lo=cut1+1;
        }
        
        return ans;
    }
};