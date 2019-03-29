#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float b,x,a,BMI; 
    printf("======該使用者的BMI資訊======\n"); 
    printf("您的身高為：");
    scanf("%f",&b);
    printf("您的體重為：");
    scanf("%f",&a);
    printf("=============================\n");
    x=b/100;
    BMI=a/(x*x);
    printf("BMI = %.2f\n\n",BMI);
 	system("pause");
 	return 0;
}
