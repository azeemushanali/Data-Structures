#include<STDIO.H>
void main()
{
    int i,len;
    int arr2[9] = {1,9,2,870,7,4,6,5,99};
    len = sizeof(arr2)/sizeof(arr2[0]);
    printf("Array before sorting - ");
    for(int i = 0; i < len; i++)
    {
        printf(" %d ",arr2[i]);
    } 
    selectionSort(arr2,9);
    printf("\nArray After sorting - ");
    for(int i = 0; i < len; i++)
    {
        printf("%d , ",arr2[i]);
    }
}
void selectionSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {    
        int indexOfSmallest = i;
        for (int j=i+1;j<n;j++)
        {
            //printf("In for %d \n",i);
            if(arr[j]<arr[indexOfSmallest])
            {
                indexOfSmallest = j;                
            }
        }
        int temp = arr[i];
        arr[i] = arr[indexOfSmallest];
        arr[indexOfSmallest] = temp;
    }
}