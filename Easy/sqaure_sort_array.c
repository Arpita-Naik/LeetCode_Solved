/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void*a,const void*b)
{
   return (*(int*)a-*(int*)b);
}
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
 
    for(int i=0;i<numsSize;i++)
    {
        res[i]=nums[i]*nums[i];
    }
     
    qsort(res,numsSize,sizeof(int),compare);

    return res;
}