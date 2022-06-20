#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024

int main(){
    FILE *fp=NULL;
    fp = fopen("test.csv","r");
    char a[1024];
    char *p;
    char *q;
    int len;
    int i = 0;
    int j = 0;
    fseek(fp,0L,0);
    while(fgets(a,MAX_LINE,fp) != NULL)
    {
        p = &a[0];
        q = &a[0];
        //printf("%s\n", a);
        while(*p!='\0'){
            while(*p !=','&&*p!='\0'&& *p != '\r' && *p != '\n'){ 
                p++;
            }
            char *part = (char *)malloc(100 * sizeof(char));
            int length = p - q;
            if (length>0){
                printf("%d",length);
                memcpy(part, q, length);
                part[length]= '\0';
                printf("%s\n",part);
            }
            p = p+1;
            q = p;
        }
    }
    return 0;
}
