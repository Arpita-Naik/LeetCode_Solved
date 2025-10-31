/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(numsSize*sizeof(int));
    *returnSize=0;

    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                res[*returnSize]=nums[i];
                (*returnSize)++;
                break;
            }
        }
        if(*returnSize==2)
     break;
    }
    return res;
}