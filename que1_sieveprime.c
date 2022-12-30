#include <stdio.h>
#define uptowhere 20

//function to initialize the array as 2,3,4,...
void initialize(int a[])
{
    for( int i=0 ; i<uptowhere-1; i++)
    {
        a[i]=i+2;
    }
}

//function to print an array
void printarr(int a[])
{
    for(int i=0;i<uptowhere-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

//funtion which separately prints the prime numbers in an array
void sieve(int a[])
{
    int i,j;
    //if the number is composite then assign it as zero
    for(j=0;j<uptowhere-1;j++)
    {
        if(a[j] ==0)
            continue;
        for(i=1; (a[j]*i+j)<uptowhere-1 ;i++)
        {
            a[a[j]*i+j]= 0;    
        }
    }
    printf("prime no. are\n");
    //only the non zero numbers are printed
    for(int k=0;k<uptowhere-1;k++)    
    {
        if(a[k]!=0)
        {
            printf("%d ",a[k]);
        }
    }
    printf("\n");
}
void main()
{
    int a[uptowhere-1];
    initialize(a);
    printarr(a);
    sieve(a);
}