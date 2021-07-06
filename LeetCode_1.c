#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int *nums , int numsSize)
{
    if(numsSize ==0){
        return 0;
    }
    int j=0;
    for(int i=0 ;i<numsSize-1 ; i++)
    {
        if(nums[i]!= nums[i+1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    nums[j] = nums[numsSize-1];
    return j+1;

}
int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    int N=removeDuplicates(nums , n);
    printf("%d",N);

}
