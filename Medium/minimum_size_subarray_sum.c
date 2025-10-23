int minSubArrayLen(int target, int* nums, int numsSize) {
    int sum=0;
    int start=0;
    int minlen=INT_MAX;
    for(int i=0;i<numsSize;i++)
    {
        sum+=nums[i];
        while(sum>=target)
        {
            int len=i-start+1;
            if(len<minlen)
               minlen=len;
            sum-=nums[start];
            start++;
        }
        
    }
    return (minlen==INT_MAX)?0:minlen;
}