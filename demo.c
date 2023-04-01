#include <stdio.h>

void convert(char str[],int *dp)
{

    sscanf(str,"%*[^0-9]%d",dp);

}

int main()
{
    char s[100];

    int d;

    scanf("%s",s);

    convert(s,&d);

    printf("%d",d);

    return 0;

}
