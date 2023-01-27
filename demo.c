#include "string.h"
#include "stdio.h"

int main(){
    int i;
    for(i=1;i<=50;i++){
        if(i%2!=0){
            printf("奇数是%d\n", i);
        }
    }
}
