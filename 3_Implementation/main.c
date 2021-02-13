#include <stdio.h>
#include<math.h>

void Sin_function(double Degrees_Value);
void Cos_function(double Degrees_Value);
void Tan_function(double Degrees_Value);
void Cosec_function(double Degrees_Value);
void Sec_function(double Degrees_Value);
void Cot_function(double Degrees_Value);

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
        printf("Please Choose  only one option for Trigonometry Operation\n");
        printf(" 1. Sin\n 2. cos\n 3. Tan\n 4. Sec\n 5. Cosec \n 6. Cot\n");
        scanf("%d",&select_option);
        RadianValue=0.017*Degrees_Value;
        switch(select_option)
        {

            case 1: Sin_function(RadianValue);
            break;
            case 2: Cos_function(RadianValue);
            break;
            case 3: Tan_function(RadianValue);
            break;
            case 4: Sec_function(RadianValue);
            break;
            case 5: Cosec_function(RadianValue);
            break;
            case 6: Cot_function(RadianValue);
            break;
            default: printf("Inavlid Input!!!! Please choose Correct option\n");
            break;
        }

        printf("DO You want calculate again? \n1. Yes 2. No\n");
        scanf("%d",&ask_User);
    }
    while(ask_User==1);
}
    void Sin_function(double RadianValue ){
        printf("\n %lf\n",sin(RadianValue));
    }
    void Cos_function(double RadianValue ){
        printf("\n %lf\n",cos(RadianValue));
    }
    void Tan_function(double RadianValue ){
        printf("\n %lf\n",tan(RadianValue));
    }
    void Cosec_function(double RadianValue ){
        printf("\n %lf\n",(1.0/sin(RadianValue)));
    }
    void Sec_function(double RadianValue ){
        printf("\n %lf\n",(1.0/cos(RadianValue)));
    }
    void Cot_function(double RadianValue ){
        printf("\n %lf\n",(1.0/tan(RadianValue)));
    }
