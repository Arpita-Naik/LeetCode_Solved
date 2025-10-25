int maxSubArray(int* nums, int numsSize) {
    int res=nums[0];
    int maxending=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        maxending=(maxending+nums[i]>nums[i])? maxending+nums[i]:nums[i];

        res=(res>maxending)?res:maxending;
    }
    return res;
}