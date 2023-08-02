class Solution {
    vector<vector<int>> ans;
    
    void recursion(int n, vector<int> &comb, vector<int>& nums){
        if(n == 0)
            ans.push_back(comb);
        
        for(int i = 0; i < n; i++){
            int temp = nums[i];
            
            comb.push_back(temp);
            nums.erase(nums.begin() + i);
			
            recursion(n-1, comb, nums);
			
            nums.insert(nums.begin()+i, temp);
            comb.pop_back();
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> comb;
        int n = nums.size();
        recursion(n, comb, nums);
        
        return ans;
    }
};