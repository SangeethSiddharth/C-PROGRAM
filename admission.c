#include<stdio.h>
int main()
{
    int maths,physics,chemistry,total,totalmathsphysics;
    printf("Enter the physics marks:");
    scanf("%d",&physics);
    printf("Enter the chemistry marks:");
    scanf("%d",&chemistry);
    printf("Enter the maths marks:");
    scanf("%d",&maths);
    total=physics+chemistry+maths;
    totalmathsphysics=physics+maths;
    if((maths>=65 && physics >=55 && chemistry>=50 && total>=190) || totalmathsphysics>=140)
    {
        printf("The candidate is eligible for admission.\n");
    }
    else
    {
        printf("The candidate is not eligible for admission.\n");
    }
    return 0;
}