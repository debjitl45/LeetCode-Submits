class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int ans=0;
		// check for all size 1 subarray
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) ans++;
        }
		// check for greater then 1 size subarray
        for(int i=0;i<nums.size();i++){
            bool flg = false;
            int gcd = nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]%k!=0) break;
                gcd = __gcd(gcd,nums[j]);
                if(gcd==k) flg = true;
                if(flg) ans+=1;
                // cout<<nums[i]<<" ";
            }
            // cout<<"\n";
        }
        return ans;
    }
};