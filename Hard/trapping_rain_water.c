int max(int a,int b)
{
    return a>b?a:b;

}
int min(int a,int b)
{
    return a<b?a:b;
}
int trap(int* height, int heightSize) {
    if(heightSIze==0) return 0;

    int result=0;
    int* leftmax=(int*)malloc(heightSize*sizeof(int));
    int* rightmax=(int*)malloc(heightSize*sizeof(int));

    leftmax[0]=height[0];
    for(int i=1;i<heightSize;i++)
    {
        leftmax[i]=max(leftmax[i-1],height[i]);
    }

    rightmax[heightSize-1]=height[heightSize-1];
    for(int i=heightSize-2;i>=0;i--)
    {
        rightmax[i]=max(rightmax[i+1],height[i]);
    }

    for (int i = 0; i < heightSize; i++) {

        result=result+(min(leftmax[i],rightmax[i])-height[i]);
    }
    
    free(leftmax);
    free(rightmax);

    return result;
    
}