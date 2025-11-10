#include <stdio.h>
int main()
{
    int num[]={15,25,35,45,55,65};
    int search;
    printf("Enter Number: ");
    scanf("%d", &search);
     int i;
    for (i = 0; i < 6; i++)
    {
        if (num[i]==search)
        {
            printf("%d is found at location %d\n", num[i], i+1);
            break;
        }

    }
    if (num[i]!= search)
    {
        printf("Not Found!");
    }
    return 0;
}
