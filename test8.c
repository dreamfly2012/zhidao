#include "string.h"
#include "stdio.h"

void *strrp(char *src,char *sub,char *rp,char *p)
{
    int sub_len=strlen(sub);
    char *po=NULL,*q=src;
    while((po=strstr(q,sub))!=NULL)
    {
        strncat(p,q,po-q);
        strcat(p,rp);
        q+=po-q+sub_len;
    }
    strcat(p,q);
}

int main(int argc, const char *argv[])
{
    char *src="aaBBccBdBeehBB";
    char *sub="B";
    char *rp="G";
    char s[100];
    memset(s,0,100);
    strrp(src,sub,rp,s);
    printf("%s\n",src);
    printf("%s\n",s);
    return 0;
}
