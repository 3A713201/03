#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float b,x,a,BMI; 
    printf("======�ӨϥΪ̪�BMI��T======\n"); 
    printf("�z���������G");
    scanf("%f",&b);
    printf("�z���魫���G");
    scanf("%f",&a);
    printf("=============================\n");
    x=b/100;
    BMI=a/(x*x);
    printf("BMI = %.2f\n\n",BMI);
 	system("pause");
 	return 0;
}
