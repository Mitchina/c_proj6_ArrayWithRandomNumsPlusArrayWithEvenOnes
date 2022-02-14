#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    //DECLARATION
    int vectorSize = 0;
    srand(time(NULL));
    int randomNum = 0;

    int evenCount;

    // ASSIGNMENT (INPUT)
    printf("Type the vector's size: \n");
    scanf("%d", &vectorSize);
    int randomNumVector[vectorSize];

    //PROCESSING
    for(int i = 0; i <vectorSize; i ++)
    {
        randomNum = rand()%10;
        randomNumVector[i] = randomNum;
    }
    for(int i = 0; i <vectorSize; i ++)
    {
        // printf ("randomNumVector[%d]: %d\n", i, randomNumVector[i]);
        // create a new vector that contains the even elements
        if(randomNumVector[i]%2 == 0)
        {
            printf("vector[%d] is even: %d\n", i, randomNumVector[i]);
            evenCount++;
        }
        else{
            printf("vector[%d]: %d\n", i, randomNumVector[i]);
        }
    }
    printf("-----------------\n");
    printf("Quantity of even elements in your vector[] array above: %d\n", evenCount);
    printf("Your new vector[] array with those even numbers is: \n");

    int evenVector[evenCount];
    int j = 0;
    for(int i = 0; i <vectorSize; i ++)
    {
        if(randomNumVector[i]%2 == 0)
        {
            evenVector[j] = randomNumVector[i];
            printf("evenVector[%d]: %d\n", j, evenVector[j]);
            j++;
        }
    }

    printf("\n");

    system("PAUSE");
    return 0;

}
