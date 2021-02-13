#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Arithmetic_operations()
{
    double ip1,ip2,total;
    printf("Enter two nos for addition");
    scanf("%lf%lf",&ip1,&ip2);
    total = ip1+ip2;
    printf("Addition result=%lf",total);
    total = ip1-ip2;
    printf("Substraction result=%lf",total);
    total = ip1*ip2;
    printf("Multiplication result=%lf",total);
    if(ip2==0)
    {
        printf("error");
    }
    else
    {
        total = ip1/ip2;
        printf("Division result=%lf",total);
    }
    printf("Enter num to calculate square root");
    scanf("%lf",&ip1);
    total = sqrt(ip1);
    printf("Squareroot result=%lf",total);
}
    /* printf("Enter num to calculate square");
    scanf("%lf",&ip1);
    total = ip1*ip1;
    printf("Square result=%lf",total);
}

void Relational_operations()
{
    double ip1,ip2,total;
    if(ip1>ip2)
    printf("%lf is greater",ip1);
    else
    printf("%lf is greater",ip2);

    if(ip1<ip2)
    printf("%lf is smaller",ip1);
    else
    printf("%lf is smaller",ip2);

    if(ip1>=ip2)
    printf("%lf is greater",ip1);
    else
    printf("%lf is greater",ip2);

    if(ip1<=ip2)
    printf("%lf is smaller",ip1);
    else
    printf("%lf is smaller",ip2);

    if(ip1==ip2)
    printf("Both are equal");
    else
    printf("Both are not equal");
}

int main()
{
    Arithmetic_operations();
    Relational_operations();
}
*/
    