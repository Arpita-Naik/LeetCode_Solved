int isbeautiful(int num)
{
      int count[10]={0};
    int temp=num;
    while(temp>0)
    {
        int digit=temp%10;
        count[digit]++;
        temp/=10;
    }
    for(int i=0;i<10;i++)
    {
        if(count[i]!=0 && count[i]!=i)
        {
            return 0;

        }
    }
    return 1;
}
int nextBeautifulNumber(int n) {
    for(int i=n+1; ; i++)
    {
        if(isbeautiful(i))
        {
            return i;
        }
    }
}