class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    
        int ans=0;
        int len=nums.size();
        unordered_map<int, int>prefix;
        int sum=0;
        for(int i=0;i<len;i++)
        {
            sum=sum+nums[i];
            if(sum==k)
            ans++;

            if(prefix.find(sum-k)!=prefix.end())
            ans+=prefix[sum-k];

            prefix[sum]++;
        }
           
        
        return ans;
    }

};