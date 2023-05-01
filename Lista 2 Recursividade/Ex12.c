#include<math.h>
#include<stdio.h>
//(2n)!/n! num*fat(num-1);
int fat(int num)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        return num*fat(num-1);
    }
}

int fat4(int num)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        return fat(2*num)/fat(num);
    }
}

int main()
{
    int num;
    printf("Digite um n (!!!!)==>");
    scanf("%d",&num);
    printf("%d",fat4(num));

}
