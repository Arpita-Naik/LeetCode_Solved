bool canJump(int* nums, int numsSize) {
    if (numsSize<=1)  return true;
    if (nums[0] == 0) return false; 
    int jump=1;
    int current=nums[0];
    int farthest=nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (i > farthest) {
          
            return false;
        }

        if (i + nums[i] > farthest)
            farthest = i + nums[i];

        if (farthest >= numsSize - 1)
            return true;
    }

    return false; 
}