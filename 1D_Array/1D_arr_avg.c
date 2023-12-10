//3. WAP to find the average of the 1D array.

#includ

int main()
{
	int n,i;
	float sum=0;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter the elements of array  \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n\nThe avarage of all elements of array is : %.2f",sum/n);
	
	return 0;
}
