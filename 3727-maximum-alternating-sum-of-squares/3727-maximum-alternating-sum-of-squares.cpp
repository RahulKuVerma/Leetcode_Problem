class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>nums2 = nums;
        int len=nums.size();
        for(int i=0;i<len;i++){
          nums2[i]=nums[i]*nums[i];
        }
        sort(nums2.begin(),nums2.end());
        long long sum=0;
        int i=0,j=len-1;
        while(i<j){
            sum=sum+nums2[j]-nums2[i];
            i++;
            j--;
        }
        if(len%2!=0){
            sum=sum+nums2[i];
        }
        return sum;
    }
};