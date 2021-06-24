#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *id;
    int i1, i2, i3, n;
    printf("How many letter does your id have?\n");
    scanf("%d", &i1);
    id = (char *)malloc(i1 * sizeof(char));
    for (int i = 0; i < i1; i++)
    {
        printf("Enter your id's character one by one\n");
        scanf("%s", &id[i]);
    }
    printf("Id is %s\n", id);

    printf("\n\nHow many letter does your id have?\n");
    scanf("%d", &i2);
    id = (char *)malloc(i2 * sizeof(char));
    for (int i = 0; i < i2; i++)
    {
        printf("Enter your id's character one by one\n");
        scanf("%s", &id[i]);
    }
    printf("Id is %s\n", id);

    printf("\n\nHow many letter does your id have?\n");
    scanf("%d", &i3);
    id = (char *)malloc(i3 * sizeof(char));
    for (int i = 0; i < i3; i++)
    {
        printf("Enter your id's character one by one\n");
        scanf("%s", &id[i]);
    }
    printf("Id is %s\n", id);

    // printf("First id is %s\n", i1);
    // printf("Second id is %s\n", i2);
    // printf("Third Id is %s\n", i3);

    // Doesn't work.Above code works.
    // printf("How many employee's id do you want to store?\n");
    // scanf("%d", &n);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("How many letters does your employee's id has?\n");
    //     scanf("%d", &i1);
    //     id = (char *)calloc(i1, sizeof(char));
    //     printf("Enter the name of the employee\n");
    //     scanf("%s", id);
    //     printf("The name of the employee is %s\n", id);
    //     free(id);
    // }

    return 0;
}