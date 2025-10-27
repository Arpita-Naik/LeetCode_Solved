int findPeakElement(int* nums, int numsSize) {
    
    if(numsSize==1) return 0;
    for(int i=1;i<numsSize;i++)
    {
        if((i==0 || nums[i] > nums[i-1] ) && (i==numsSize-1 || nums[i]>nums[i+1]))
        {
            return i;
        }
    }
   return 0;
}