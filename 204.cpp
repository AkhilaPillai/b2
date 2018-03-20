#include <stdio.h>

#define MAX_SIZE 100 

int main(void)
{
    int arr[MAX_SIZE]; 
    int i, N,sum=0;
    printf("Enter size of the array : \n");
    scanf("%d", &N);
    printf("Enter elements in array :\n ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

   for(i=0;i<N;i++)
   {
   	if(arr[i]<0)
   	sum=sum+arr[i];
   }
   printf("\nSum of negative numbers:%d",sum);

    return 0;
}
