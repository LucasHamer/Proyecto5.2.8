#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantprimos=0,posprimo=2,ver,esprimo,posdiv;

    do
    {
        printf("Ingrese la cantidad de primos desados: ");
        scanf("%d",&ver);
        fflush(stdin);
    }
    while(ver<=0);

    while(cantprimos<ver)
    {
        esprimo=1;
        posdiv=2;

        while(esprimo==1&&posdiv<posprimo)
        {
            if(posprimo%posdiv==0)
            {
                esprimo=0;
            }
            else
            {
                posdiv++;
            }
        }
        if(esprimo==1)
        {

            printf("%d ",posprimo);
            cantprimos++;
        }
        posprimo++;
    }

    return 0;
}
