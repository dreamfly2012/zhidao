#include "stdio.h"

int main(){
    int a[100];
    int n;

    //
    //put 10 nums to array
    printf("please input n value:");
    scanf("%d",&n);
    printf("the n is %d", n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("the reverse sort is \n");
    for(int i=n-1;i>=0;i--){
        printf("%d ", a[i]);
    }

    printf("\n\nthe regular sort is:\n");
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
