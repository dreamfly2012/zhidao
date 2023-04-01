#include "string.h"
#include "stdio.h"

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


    int i;
    for(i=1;i<=50;i++){
        if(i%2!=0){
            printf("奇数是%d\n", i);
        }
    }
    return 0;
}
