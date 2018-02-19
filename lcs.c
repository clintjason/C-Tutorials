#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,j,size,len,rlen,mlen,m,k;
	printf("\n***************************************************************************\n");
	printf("A program to render the longest contiguous subsequence from given sequence\n");
	printf("***************************************************************************\n\n");

	printf("Please enter the size of your array of integers: ");
	scanf("%d",&size);
	printf("\nNow enter an array of contiguous integers and terminate with -1: \n");

	int sequence[size];

 	for(i=0;i<size;i++)
	{
		printf("Enter the Element no %d : ",i+1);
		scanf("%d",&sequence[i]);
	}
	//check if the last input is -1
	if (sequence[size-1] != -1)
	{
		printf("\nInvalid inputs: Please end your array with -1\n");
	}
	else
	{
		//check the elements of your array
		printf("Elements of the array of integers are: \n");
		for (i = 0; i < size; ++i)
		{
			printf("%d\n",sequence[i] );
		}
	/* 

     * Compare on integers on the basis that if the same integer is repeated then check 

     * next integer and so on Increment a counter when consecutive integers are repeated

     */
		len = 0;
		for (i = 0;i <= size;i++)
		{
	        for (j = i+1;j <= size-1;j++)
	        {
	            if (sequence[i] != sequence[j])
	            {
	                continue;
	            }

	            else if (sequence[i] == sequence[j])
	            {
	                len++;

	                for (k = i+1, m = j+1;k < j;k++, m++)
	                {

	                    if (sequence[k] == sequence[m])
	                    {
	                        len++;
	                        continue;
	                    }
	                    else
	                    {   
	                        break;
	                    }
	                }

	            }

	        }

    	}

    	printf("\nLength of Longest Repeating Sequence:%d\n", len);
	}

	return 0;
}