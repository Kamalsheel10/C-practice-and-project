#include <stdio.h>
#include <string.h>
union stud
{
    int id;
    int marks;
    char favchar;
    char nam[122];
};
int main()
{
    union stud s1;
    s1.id = 1;
    s1.marks = 89;
    s1.favchar = 'K';
    strcpy(s1.nam, "RAM");
    // Syntax of union is similar to that of structure.
    // In union only the last line will code in a correct way.
    // In this case strcpy(s1.nam,"RAM").
    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The favchar is %d\n", s1.favchar);
    printf("The nam is %s\n", s1.nam);

    return 0;
}