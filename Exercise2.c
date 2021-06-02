#include <stdio.h>

int main()
{
    float num;
    float miles, foot, inches, kgs, meters, kms;
    float pounds, cms, kilometers;
    printf("What do you want to convert?\n");
    printf("\nChoose from the followiing\n");
    printf("\n1.kms-miles\n2.inches-foot\n3.cms-inches\n4.pounds-kgs\n5.inches-meters\n");
    scanf("%f", &num);
    if (num == 1)
    {

        printf("Enter kms you want to convert to miles\n");
        scanf("%f", &kilometers);
        miles = kilometers * 0.621371192;
        printf("The kilometers is : %.2f\n", miles);
    }
    else if (num == 2)
    {
        printf("Enter inches  you want to convert to foot\n");
        scanf("%f", &inches);
        float foot;
        foot = 0.0833333333 * inches;
        printf("The foot is  : %.2f\n", foot);
    }
    else if (num == 3)
    {
        printf("Enter cms you want to convert to inches\n");
        scanf("%f", &cms);
        inches = cms * 0.393700787;
        printf("Th inches is : %.2f\n", inches);
    }
    else if (num == 4)
    {
        printf("Enter pounds you want to convert to kgs\n");
        scanf("%f", &pounds);
        kgs = pounds * 0.45359237;
        printf("The kgs is : %.2f\n", kgs);
    }
    else if (num == 5)
    {
        printf("Enter inches you want to convert to meters\n");
        scanf("%f", &inches);
        meters = inches * 0.0254;
        printf("Th meters is : %.2f\n", meters);
    }

    return 0;
}