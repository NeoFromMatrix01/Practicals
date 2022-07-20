#include <stdio.h>
int main()
{
	int A[100][4]; 
	int i, j, n, index, temp;
	printf("Enter number of process: ");
	scanf("%d", &n);
	printf("Enter Burst Time:\n");
	
	for (i = 0; i < n; i++) 
    {
		printf("P%d: ", i + 1);
		scanf("%d", &A[i][1]);
		A[i][0] = i + 1;
	}
	
	for (i = 0; i < n; i++) 
    {
		index = i;
		for (j = i + 1; j < n; j++)
			if (A[j][1] < A[index][1])
				index = j;
		temp = A[i][1];
		A[i][1] = A[index][1];
		A[index][1] = temp;

		temp = A[i][0];
		A[i][0] = A[index][0];
		A[index][0] = temp;
	}
	A[0][2] = 0;

	for (i = 1; i < n; i++) 
    {
		A[i][2] = 0;
		for (j = 0; j < i; j++)
			A[i][2] += A[j][1];
	}

    for(int i = 0; i < n; i++)
        A[i][3] = A[i][1] + A[i][2];


	printf("\nProcess	 Burst Time	 Waiting Time	 Turn around time\n");
	for (i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++)
        {
            if(A[j][0] == i+1)
            {
		        printf("P%d	 \t%d	 \t%d	 \t%d\n", A[j][0],A[j][1], A[j][2], A[j][3]);

            }
        }
	}

}
