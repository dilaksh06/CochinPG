#include <stdio.h>

void main()
{

    // ((a -b / c * d + e) * (f +g))
    printf ("it can be evaluate the expression -> (a-b/c*d+e)*(f+g)");
    float a,b,c,d,e,f,g;
    printf("enter the value for a\n enter the value for b\n enter the value for c\n enter the value for d\n enter the value for e\n enter the value for f\n enter the for g\n");
    scanf("%f %f %f %F %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    float result=(a-b/c*d+e)*(f+g);
    printf("the result of the evaluation is : %.2f",result);

}
