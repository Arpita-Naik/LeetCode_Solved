bool canAliceWin(int* nums, int numsSize) {
    int sum=0;
    int sum1=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>=-9 && nums[i]<=9)
        {
           sum+=nums[i];
        }
        else if((nums[i]>=-99 && nums[i]<=-10) || (nums[i]>=10 && nums[i]<=99))
        {
          sum1+=nums[i];
        }
    }
    if(sum>sum1 || sum1>sum)
       return true;
    else
       return false;
}