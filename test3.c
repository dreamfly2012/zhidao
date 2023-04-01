#include "stdio.h"

int main()
{
    int a,b,c,even=0,num=0,odd=1;
    scanf("%d%d%d",&a,&b,&c);
    if(a%2){
        num +=1;
        odd = a;
    }else{
        even = a;
    }
    if(b%2){
        num +=1;
        odd *= b;
    }else{
        even += b;
    }
    if(c%2){
        num +=1;
        odd *= c;
    }else{
        even += c;
    }
    if (num==0){
        odd = 0;
    }
    printf("偶数和=%d，奇数积=%d\n", even, odd);
}
