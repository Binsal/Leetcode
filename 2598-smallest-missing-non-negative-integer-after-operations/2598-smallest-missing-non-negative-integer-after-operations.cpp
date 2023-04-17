class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value)
    {
        int n = nums.size();

        vector<int> hash(value,0);

        for(auto i : nums)
        {
            int md = i%value;

            if(md<0)
            {
                hash[md+value]++;
            }
            else
            {
                hash[md]++;
            }
        }

        int ans = 0;

        for(int i=0;i<=n;i++)
        {
            if(hash[i%value]>0) hash[i%value]--;
            else 
            {
                ans = i;
                break;
            }
        }

        return ans;
    }
};