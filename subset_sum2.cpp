class Solution {
public:
    
    void solve(int ind, vector<int>&nums, vector<int>&v, vector<vector<int>>&ans)
    {
        ans.push_back(v);
        
        for(int i=ind;i<nums.size();i++)
        {    
            if(i!=ind and nums[i] == nums[i-1]) continue; // To avoid duplicate subsets
            
            v.push_back(nums[i]);
            solve(i+1, nums, v, ans);
            v.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {    
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(), nums.end()); // sorting is most important --- so that order of duplicate subsets is same
        solve(0, nums, v , ans);    // [1,4,4] == [4,1,4] , both are same so no need to include both in answer
        return ans; 
    }
};