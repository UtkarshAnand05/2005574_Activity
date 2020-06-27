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
    printf("Enter the elements of the array\n");
    arrayDataFill(ptr,n);//Calling function to fill the elements of the array
    printf("The entered array is :\n");
    arrayDisplay(ptr,n);//Calling function to display the elements of the array
    arraySumAndAverage(ptr,n);//Calling function to find the sum and average of the elements of the array
    arrayMinAndMax(ptr,n);//Calling function to find the minimum and maximum element of the array
    printf("The elements of the array in the reverse order is\n");
    arrayReverse(ptr,n);//Calling function to reverse the elements of the array
    printf("\nEnter the threshold value\n");
    int thresValue;
    scanf("%d",&thresValue);
    countGreaterThanTheThresholdValue(ptr,n,thresValue);//Calling function to count the no. of elements greater than the threshold value
    return 0;
}
//Function to fill the elements of the array
void arrayDataFill(int *ptr, int n)
{
    int *pcurr=ptr;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",(pcurr+i));

    }
}
//Function to display the elements of the array
void arrayDisplay( int *ptr, int n)
{
    int *pcurr=ptr;
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(pcurr+i));
    }
}
//Function to find the sum and average of the elements of the array
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
//Function to find the minimum and maximum element of the array
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
//Function to reverse the elements of the array
void arrayReverse(int *ptr, int n)
{
    int *pcurr=ptr;
    int i, temp;
    for(i=n-1;i>=0;i--)
    {
       printf("%d ",*(pcurr+i));
    }
}
//Function to count the no. of elements greater than the threshold value
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

