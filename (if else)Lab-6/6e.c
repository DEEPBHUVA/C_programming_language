#include<stdio.h>
void main()
{
    float bs,gs,hra,da;
    printf("Enter your basic salary:");
    scanf("%f", &bs);

    if(bs>=10000)
{
        if(bs<20000);
        {
        hra=(20/100.00)*bs;
        da=(80/100.00)*bs;
        gs=bs+hra+da;
        printf("1 gross salary is %f\n",gs); 
        }
        
}
    if(bs>=20000)
{
       (bs<30000);
        {
        hra=(25.00/100)*bs;
        da=(90.00/100)*bs;
        gs=bs+hra+da;
        printf("2 gross salary is %f\n",gs);
        }
}
    if(bs>=30000)
    {
        hra=(30/100.00)*bs;
        da=(95/100.00)*bs;
        gs=bs+hra+da;
        printf("3 gross salary is %f\n",gs);
    }

}
