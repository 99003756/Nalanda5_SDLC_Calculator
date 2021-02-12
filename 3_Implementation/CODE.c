#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Area_calculation()
{
    double ip1,ip2,total;
    printf("\nFor Circle enter radius input");
    scanf("%lf",&ip1);
    total = pi * ip1 * ip1;
    printf("\nArea of circle = %lf",total);
    printf("\nFor Rectangle enter length and breadth");
    scanf("%lf%lf",&ip1,&ip2);
    total = ip1* ip2;
     printf("\nArea of rectangle = %lf",total);
      printf("\nFor Square enter side");
    scanf("%lf",&ip1);
    total = ip1 * ip1;
     printf("\nArea of square = %lf",total);
      printf("\nFor triangle enter base and height");
    scanf("%lf%lf",&ip1,&ip2);
    total = 0.5 * ip1 * ip2;
     printf("\nArea of triangle = %lf",total);
}

void Volume_calculation()
{
    double ip1,ip2,total;
     printf("\nFor Cube enter side");
    scanf("%lf",&ip1);
    total = ip1* ip1 * ip1;
     printf("\nVolume of cube = %lf",total);
      printf("\nFor Cylinder enter radius and height");
    scanf("%lf%lf",&ip1,&ip2);
    total = pi * ip1 * ip1 * ip2;
     printf("\nVolume of cylinder = %lf",total);
      printf("\nFor Cone enter radius and height");
    scanf("%lf%lf",&ip1,&ip2);
    total = (1/3)* pi *ip1 * ip1 * ip2;
     printf("\nVolume of cone = %lf",total);
      printf("\nFor Sphere enter radius");
    scanf("%lf",&ip1);
    total = (4/3)* pi * ip1* ip1 * ip1;
     printf("\nVolume of sphere = %lf",total);
}
int main()
{
    int ch;
    do
    {
            printf("Enter choice 1->Arithmetic operations \n 2->Relational operations\n 3-
            >Logical operations\n 4->Area calculation\n 5->Volume calculation \n 6->Factorial\n");
            scanf("%d",&ch);

            switch(ch)
            {
                /*case 1:Arithmetic_operations();
                        break;
                case 2:Relational_operations();
                        break;
                case 3:Logical_operations();
                        break;*/
                case 1:Area_calculations();
                        break;
                case 2:Volume_calculations();
                        break;
                /*case 6:Factorial_calculations();
                        break;*/
                default:printf("Do nothing\n");
            }
    }while(ch!=3);
    return 0;
}

