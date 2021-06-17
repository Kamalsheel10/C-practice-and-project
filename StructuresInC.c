#include <stdio.h>
#include <string.h>
struct std
{
    int id;
    int marks;
    char fav_char;
    char name[69];
};
struct std Ram, Hari, Sita;
int main()
{

    Ram.id = 1;
    Sita.id = 2;
    Hari.id = 3;
    Ram.marks = 189;
    Sita.marks = 180;
    Hari.marks = 192;
    strcpy(Ram.name, "This is test\n");
    printf("ID of Ram is %d\n", Ram.id);
    printf("ID of Hari is %d\n", Hari.id);
    printf("ID of Sita is %d\n", Sita.id);
    printf("Marks of Ram is %d\n", Ram.marks);
    printf("Marks of Hari is %d\n", Hari.marks);
    printf("Marks of Sita is %d\n", Sita.marks);
    printf("%s", Ram.name);

    return 0;
}