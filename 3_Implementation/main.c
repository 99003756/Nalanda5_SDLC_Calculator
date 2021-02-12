#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//#define pi 3.14

void Sin(double Degree_Value);
void Cos(double Degree_Value);
void Tan(double Degree_Value);

int main()
{
    int select_option;
    double RadianValue;
    double Degrees_Value;
    int ask_User;
    do
    {
        printf("Enter Degrees Value\n");
        scanf("%lf",&Degrees_Value);
        printf("Please only one option for Trigonometry Operation\n");
        printf(" 1. Sin\n 2. cos\n 3. Tan\n ");
        scanf("%d",&select_option);
        RadianValue=0.017*Degrees_Value;
        switch(select_option)
        {

            case 1: Sin(RadianValue);
            break;
            case 2: Cos(RadianValue);
            break;
            case 3: Tan(RadianValue);
            break;
            default: printf("Inavlid Input!!!! Please choose Correct option\n");
            break;
        }

        printf("DO You want calculate again? \n1. Yes 2. No\n");
        scanf("%d",&ask_User);
    }
    while(ask_User==1);
}
    void Sin(double RadianValue ){
        printf("\n %lf\n",sin(RadianValue));
    }
    void Cos(double RadianValue ){
        printf("\n %lf\n",cos(RadianValue));
    }
    void Tan(double RadianValue ){
        printf("\n %lf\n",tan(RadianValue));
    }
