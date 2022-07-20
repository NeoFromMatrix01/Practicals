#include<stdio.h>

int main()
{
	int m, n, i, j;
	printf("Enter number of blocks in the memory :");
    scanf("%d",&m);
    printf("Enter number of processes in the input queue :");
    scanf("%d",&n);
    int blockSize[m], processSize[n], allocation[n];
    printf("Enter the block size in the memory one by one : \n");
    for(i = 0; i < m; i++)
        scanf("%d",&blockSize[i]);

    printf("Enter the memory require by process one by one : \n");
    for(i = 0; i < n; i++)
        scanf("%d",&processSize[i]);

	for(i = 0; i < n; i++)
	{
		allocation[i] = -1;
	}

	for (i = 0; i < n; i++)	 
	{
		for (j = 0; j < m; j++)	 
		{
			if (blockSize[j] >= processSize[i])
			{
				allocation[i] = j;
				blockSize[j] -= processSize[i];
				break;
			}
		}
	}

	printf("\nProcess No.\tProcess Size\t  Block no.\n");
	for (int i = 0; i < n; i++)
	{
		printf(" %d\t\t", i+1);
		printf("%d\t\t\t", processSize[i]);
		if (allocation[i] != -1)
			printf("%d", allocation[i] + 1);
		else
			printf("Not Allocated");
		printf("\n");
	}

	return 0 ;
}
r number of blocks in the memory :");
    scanf("%d",&m);
    printf("Enter number of processes in the input queue :");
    scanf("%d",&n);
    int blockSize[m], processSize[n], allocation[n];
    printf("Enter the block size in the memory one by one : \n");
    for(i = 0; i < m; i++)
        scanf("%d",&blockSize[i]);

    printf("Enter the memory require by process one by one : \n");
    for(i = 0; i < n; i++)
        scanf("%d",&processSize[i]);

	for(i = 0; i < n; i++)
	{
		allocation[i] = -1;
	}

	for (i = 0; i < n; i++)	 
	{
		for (j = 0; j < m; j++)	 
		{
			if (blockSize[j] >= processSize[i])
			{
				allocation[i] = j;
				blockSize[j] -= processSize[i];
				break;
			}
		}
	}

	printf("\nProcess No.\tProcess Size\t  Block no.\n");
	for (int i = 0; i < n; i++)
	{
		printf(" %d\t\t", i+1);
		printf("%d\t\t\t", processSize[i]);
		if (allocation[i] != -1)
			printf("%d", allocation[i] + 1);
		else
	