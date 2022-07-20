#include <stdio.h>
int main()
{
	int size, m, n, s, pages, pageFaults = 0,frames;
	printf("Enter the no of pages : ");
	scanf("%d",&size);
	printf("Enter the pages : \n");
	int refString[size];
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&refString[i]);
	}

	printf("Enter the no frames : ");
	scanf("%d",&frames);
    
    pages = sizeof(refString)/sizeof(refString[0]);

    printf("\nIncoming \t Frame 1 \t Frame 2 \t Frame 3");
    int temp[frames];
    for(m = 0; m < frames; m++)
    {
        temp[m] = -1;
    }

    for(m = 0; m < pages; m++)
    {
        s = 0;

        for(n = 0; n < frames; n++)
        {
            if(refString[m] == temp[n])
            {
                s++;
                pageFaults--;
            }
        }
        pageFaults++;
        
        if((pageFaults <= frames) && (s == 0))
        {
            temp[m] = refString[m];
        }
        else if(s == 0)
        {
            temp[(pageFaults - 1) % frames] = refString[m];
        }
      
        printf("\n");
        printf("%d\t\t",refString[m]);
        for(n = 0; n < frames; n++)
        {
            if(temp[n] != -1)
                printf(" %d\t\t", temp[n]);
            else
                printf(" - \t\t");
        }
    }

    printf("\n\nTotal Page Faults: %d\n", pageFaults);
    return 0;
}eof(refString)/sizeof(refString[0]);

    printf("\nIncoming \t Frame 1 \t Frame 2 \t Frame 3");
    int temp[frames];
    for(m = 0; m < frames; m++)
    {
        temp[m] = -1;
    }

    for(m = 0; m < pages; m++)
    {
        s = 0;

        for(n = 0; n < frames; n++)
        {
            if(refString[m] == temp[n])
            {
                s++;
                pageFaults--;
            }
        }
        pageFaults++;
        
        if((pageFaults <= frames) && (s == 0))
        {
            temp[m] = refString[m];
        }
        else if(s == 0)
        {
            temp[(pageFaults - 1) % frames] = refString[m];