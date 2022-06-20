#include<stdio.h>
#include<string.h>

int getNumber(char str[], int len, int number, int i){
    if(str[i] > '0' && str[i] < '9' && i < len) {
        number = number * 10 + (str[i] - '0');
        printf("i:%d-str[i]:%c-number:%d\n", i, str[i], number);
        i++;
        getNumber(str, len, number, i);
    }
    return number;
}

void convert(char str[],int *dp)
{
    int i=0;
    int number = 0;//x+y=234-z+2ik34
    int len = strlen(str);
    while(i<len){
        number = getNumber(str,len, number, i);
        printf("number:%d\n",number);
        if(number>0){
            break;
        }
        i++;
    }
    printf("number:%d\n",number);
    dp = &number;
}

int main(void){
    int i,number;
    char str[80];
    char c;
    printf("Enter a string:");
    i=0;
    c = getchar();
    while(c!='\n'){
        str[i] = c;
        c = getchar();
        i++;
    }
    i=0;// x+y=234-z+234324
    int dp;
    convert(str, &dp);
    printf("number=%d\n",dp);
    return 0;

}
