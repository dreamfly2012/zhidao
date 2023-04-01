#include <stdio.h>
int main()
{
    void copy_m(char *p1, char *p2, int m);
    char str1[100], *p1=str1, str2[100], *p2=str2;
    int m;
    printf("请随便输入一个字符串：");
    fgets(p1);
    printf("您输入的字符串为：\n%s\n\n", p1);
    printf("您打算从第几个字符开始复制呢？\n");
    scanf("%d", &m);
    copy_m(p1, p2, m);
    printf("\n复制得到的另一个字符串为:\n%s", p2);
    return 0;
}
void copy_m(char *p1, char *p2, int m)
{
    int i;
    char *temp=p1+m-1;
    while(*temp!='\0'){
        *p2++ = *temp++;
    }
}
