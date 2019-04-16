#include<stdio.h>
int main()
{
    int a[]={125,143,86,1470,913,1774,948,1509,1022,1750,130};
    int size=11,i,distance=0,p=0,j=1;
    for(i=0;i<size-1;i++)
    {
        if(a[p]>a[j])
        {
        distance=distance+(a[p]-a[j]);
        }
        else
        {
            distance=distance+(a[j]-a[p]);
        }
        p++;
        j++;
    }

    printf("                         ************C-LOOK DISK SCHEDULING ALGORITHM*************\n");
    printf(" CURRENT SERVING REQUEST AT CYLINDER:    143\n");
    printf(" PREVIOUS REQUEST WAS AT CYLINDER:       125\n");
    printf(" PENDING REQUESTS  :\n");
    for(i=2;i<size;i++)
    {
        printf(" %d   ",a[i]);
    }
    printf("\n\n");

    printf("TOTAL DISTANCE THAT THE DISK ARM MOVES TO SATISFY ALL PENDING REQUESTS:  ");
    printf("%d ",distance);
}
