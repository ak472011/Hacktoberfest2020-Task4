#include<stdio.h>
#include<stdbool.h>


int main()
{
    bool swap;
    int n=5,j;
    int m;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        int temp;
        swap=true;
        for(j=0;j<n;j++)
        {
            if (arr[j]>arr[j+1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp ;
                swap=false;
            }
        }
    }while(swap);
    
    for(m=0;m<n;m++)
        {
            printf("%d ",arr[m]);
        }
}
