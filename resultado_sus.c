#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    float x,y,z;
   
    printf("Digite o valor de a:\n");
    scanf("%d",&a);
   
    printf("Digite o valor de b:\n");
    scanf("%d",&b);
   
    printf("Digite o valor de c:\n");
    scanf("%d",&c);
   
    printf("Digite o valor de d:\n");
    scanf("%d",&d);
   
    printf("Digite o valor de e:\n");
    scanf("%d",&e);
   
    printf("Digite o valor de f:\n");
    scanf("%d",&f);
   
    printf("Digite o valor de g:\n");
    scanf("%d",&g);
   
    printf("Digite o valor de h:\n");
    scanf("%d",&h);
   
    printf("Digite o valor de i:\n");
    scanf("%d",&i);
   
    printf("Digite o valor de j:\n");
    scanf("%d",&j);
   
    x = ((a-1)+(c-1)+(e-1)+(g-1)+(i-1));
   
    y = ((5-b)+(5-d)+(5-f)+(5-h)+(5-j));
   
    z = (x+y) * 2.5;
   
    printf("O valor final eh: %f",z);
   
   
    return 0;
}
