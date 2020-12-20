#include<stdio.h>

// buiness logic
void findPair(int numberArray[], int length, int requestedSum)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (numberArray[i] + numberArray[j] == requestedSum)
            {
                printf("[%d, %d]", numberArray[i], numberArray[j]);
                return;
            }
        }
    }

    for (int i = 0; i < length - 2; i++)
    {
        for (int j = i + 1; j < length - 1; j++)
        {
            for (int k = j + 1; k < length; k++)
            {
                if (numberArray[i] + numberArray[j] + numberArray[k] == requestedSum)
                {
                    printf("[%d, %d, %d]", numberArray[i], numberArray[j], numberArray[k]);
                    return;
                }
            }
        }
    }

    for (int i = 0; i < length - 3; i++)
    {
        for (int j = i + 1; j < length - 2; j++)
        {
            for (int k = j + 1; k < length - 1; k++)
            {
                for (int l = 0; l < length; l++)
                {
                    if (numberArray[i] + numberArray[j] + numberArray[k] + numberArray[l] == requestedSum)
                    {
                        printf("[%d, %d, %d, %d]", numberArray[i], numberArray[j], numberArray[k], numberArray[l]);
                        return;
                    }
                }
            }
        }
    }

    printf("Not found");
}

int main() {
    int sum = 0;
    int length = 5;
    int requestedSum;
    int numberArray[5];

    for (int i = 0; i < length; i++)
    {
        printf("Enter a number for index %d\t", i);
        scanf("%d", &numberArray[i]);
    }
    
    printf("Enter the sum to get an Array\t");
    scanf("%d", &requestedSum);

    for (int i = 0; i < length; i++)
    {
        sum += numberArray[i];
        if (numberArray[i] == requestedSum) {
            printf("[%d]", requestedSum);
            return 0;
        }
    }

    if (sum == requestedSum) {
        printf("[");
        for (int i = 0; i < length; i++)
        {
            printf("%d, ", numberArray[i]);
        }
        printf("]");
        
        return 0;
    }
    
    findPair(numberArray, length, requestedSum);    
}
