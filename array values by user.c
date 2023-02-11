#include<stdio.h>
void main()
{
 printf("The following program is to create an linear array of size=5 and value input by user\n\n\n");
 int arr[5];
 printf("Enter any 5 values in the array :-\n");
 for(int i=0;i<5;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The array provided will be :-\n\n");
 for(int i=0;i<5;i++)
 {
  printf("%d\t",arr[i]);
 }
}
