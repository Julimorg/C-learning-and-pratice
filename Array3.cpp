#include<stdio.h>
int main()
{
	int n ;
	printf("input N:  ");
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n ;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int maxValue = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > maxValue) {
            maxValue = a[i];
        }
    }
    printf("Max value is : %d ",maxValue);
    printf("\n--------------\n");
    int minValue = a[n-1];
    for(int i = 0 ;i < n ; i++)
    {
    	if(a[i] < minValue){
    		minValue  = a[i];
		}
	}
	 printf("Min value is : %d ",minValue);
    return 0;
}
