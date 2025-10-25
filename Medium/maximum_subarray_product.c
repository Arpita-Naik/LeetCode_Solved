int maxProduct(int* nums, int numsSize) {
    int res=nums[0];
    int maxending=nums[0];
    int minending=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        int temp=maxending;
        maxending=fmax(fmax(nums[i],maxending*nums[i]),minending*nums[i]);
        minending=fmin(fmin(nums[i],temp*nums[i]),minending*nums[i]);

        res=fmax(res,maxending);
    }
    return res;
}