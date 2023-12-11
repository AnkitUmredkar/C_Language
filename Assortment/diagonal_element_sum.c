//9. Wap to find sum of diagonal element in 2d array.

#include <stdio.h>

int main() 
{
    int n,i,j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
    }

    printf("Element  Frequency\n");

    for (int i = 0; i < n; i++)
	 {
        if (arr[i] != -1) 
		{
            int count = 1;

            for (int j = i + 1; j < n; j++)
			 {
                if (arr[i] == arr[j]) 
				{
                    count++;
                    arr[j] = -1;  
                }
            }

            printf("%d %d\n", arr[i], count);
        }
    }

    return 0;
}

	