int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    int product=1;
    int count=0;
    int start=0;

    for(int i=0;i<numsSize;i++)
    {
        product*=nums[i];
        while(product>=k && start<=i)
        {
         product/=nums[start];
         start++;
        }
        count+=(i-start)+1;
    }
    return count;
}