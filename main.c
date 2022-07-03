#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r,c,a;

    printf("Type a number:");
    scanf("%lf",&r);
    a=3.1415926*r*r;
    printf("The area of circle is :%.4f\n",a);
    c=2*3.1415926*r;
    printf("the perimeter is :%.4f\n",c);
    return 0;
}
