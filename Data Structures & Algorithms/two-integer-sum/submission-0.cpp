class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int val=target-nums[i];
            if(mp.count(val)){
                ans.push_back(i);
                ans.push_back(mp[val]);
            }
            else mp[nums[i]]=i;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
