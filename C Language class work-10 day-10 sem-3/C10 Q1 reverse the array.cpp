#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], i;
    printf("Enter any 10 elements: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array elements in reverse order:\n");
    for(i=9; i>=0; i--){
    	printf("    %d", arr[i]);
	}
    return 0;
}
