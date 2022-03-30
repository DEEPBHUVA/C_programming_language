#include<stdio.h>

int main()
{
    int r,c,n;
    char ch;
    printf("Enter n:");
    scanf("%d",&n);
    ch='A';
    for(r=1;r<=n;r++)
        {

            for(c=n;c>=r;c--)
            {
                printf(" ");
            }
            for (c=1;c<=(2*r)-1;c++)
            {
                if(r%2==0)
                printf("%c",ch++);
                else
                printf("%d",c);
            }
            printf("\n");
        }
}
