#include<stdio.h>
//Author name : Utkarsh Anand
//Unique id   : 2005574
//Program     : To perform operations on 1D array

void arrayDataFill(int *, int );
void arrayDisplay( int *, int );
void arraySumAndAverage( int *, int );
void arrayMinAndMax( int *, int );
void arrayReverse(int *, int );
void countGreaterThanTheThresholdValue( int *, int , int );

int main()
{
    printf("Enter the total no. of elements of the array\n");
    int n;
    scanf("%d",&n);
    int ar[n];
    int *ptr=ar;
    int *ptr1=ar[n];
    printf("Enter the elements of the array\n");
    arrayDataFill(ptr,n);
    printf("The entered array is :\n");
    arrayDisplay(ptr,n);
    arraySumAndAverage(ptr,n);
    arrayMinAndMax(ptr,n);
    printf("The elements of the array in the reverse order is\n");
    arrayReverse(ptr,n);
    printf("\nEnter the threshold value\n");
    int thresValue;
    scanf("%d",&thresValue);
    countGreaterThanTheThresholdValue(ptr,n,thresValue);
    return 0;
}
void arrayDataFill(int *ptr, int n)
{
    int *pcurr=ptr;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",(pcurr+i));

    }
}
void arrayDisplay( int *ptr, int n)
{
    int *pcurr=ptr;
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(pcurr+i));
    }
}
void arraySumAndAverage( int *ptr, int n)
{
    int *pcurr=ptr;
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=*(pcurr+i);
    }
    float avg=(float)sum/n;
    printf("\nThe sum of the elements of the array is %d and the average of the elements of the array is %f\n",sum,avg);
}
void arrayMinAndMax( int *ptr, int n)
{
    int *pcurr=ptr;
    int mini=*pcurr,maxi=*pcurr;
    int i;
    for(i=0;i<n;i++)
    {
        if(mini>*(pcurr+i))
            mini=*(pcurr+i);
        if(maxi<*(pcurr+i))
            maxi=*(pcurr+i);
    }
    printf("The minimum element of the array is %d and the maximum element of the array is %d\n",mini,maxi);
}
void arrayReverse(int *ptr, int n)
{
    int *pcurr=ptr;
    int i, temp;
    for(i=n-1;i>=0;i--)
    {
       printf("%d ",*(pcurr+i));
    }
}
void countGreaterThanTheThresholdValue( int *ptr, int n, int tval)
{
    int *pcurr=ptr;
    int i, cnt=0;
    for(i=0;i<n;i++)
    {
        if(*(pcurr+i)>tval)
            cnt++;
    }
    printf("The no. of elements greater than the threshold value is %d\n",cnt);
}

