#include <stdio.h>
struct drivr
{
    char Nameofthedriver[39];
    char DrivingLicenseNumber[39];
    char Route[39];
    int Kms;
};
int main()
{
    struct drivr d1, d2, d3;

    printf("For driver d1\n");
    printf("Enter the Name of the driver\n");
    scanf("%s", &d1.Nameofthedriver);
    printf("Enter the Driving License Number\n");
    scanf("%s", &d1.DrivingLicenseNumber);
    printf("Enter the Route\n");
    scanf("%s", &d1.Route);
    printf("Enter the Kms\n");
    scanf("%d", &d1.Kms);
    printf("For driver d2\n");
    printf("Enter the Name of the driver\n");
    scanf("%s", &d2.Nameofthedriver);
    printf("Enter the Driving License Number\n");
    scanf("%s", &d2.DrivingLicenseNumber);
    printf("Enter the Route\n");
    scanf("%s", &d2.Route);
    printf("Enter the Kms\n");
    scanf("%d", &d2.Kms);
    printf("For driver d3\n");
    printf("Enter the Name of the driver\n");
    scanf("%s", &d3.Nameofthedriver);
    printf("Enter the Driving License Number\n");
    scanf("%s", &d3.DrivingLicenseNumber);
    printf("Enter the Route\n");
    scanf("%s", &d3.Route);
    printf("Enter the Kms\n");
    scanf("%d", &d3.Kms);
    printf("******DATA OF DRIVERS**************\n");
    printf("The name of first driver is:%s\n", d1.Nameofthedriver);
    printf("The Driving License Number is:%s\n", d1.DrivingLicenseNumber);
    printf("The Route is:%s\n", d1.Route);
    printf("The distance travelled in Kms is:%d\n", d1.Kms);
    printf("The name of second driver is:%s\n", d2.Nameofthedriver);
    printf("The Driving License Number is:%s\n", d2.DrivingLicenseNumber);
    printf("The Route is:%s\n", d2.Route);
    printf("The distance travelled in Kms is:%d\n", d2.Kms);
    printf("The name of third driver is:%s\n", d3.Nameofthedriver);
    printf("The Driving License Number is:%s\n", d3.DrivingLicenseNumber);
    printf("The Route is:%s\n", d3.Route);
    printf("The distance travelled in Kms is:%d\n", d3.Kms);

    return 0;
}