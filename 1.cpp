class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hashmap;
        vector<int> res;
        for(int i = 0;i < nums.size();i++)
        {
            int a = target - nums[i];
            if(hashmap.count(a))
            {
                res.push_back(hashmap[a]);
                res.push_back(i);
                return res;
            }
            hashmap[nums[i]] = i;
        }
    }
};
