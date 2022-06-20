#include"stdio.h"

int main(){
    int a[5][3], i,j,max=-1,min=200,sum=0;
    float score[5][3];
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            sum = sum + a[i][j];
            if(max<a[i][j]) max = a[i][j];
            if(min>a[i][j]) min = a[i][j];
        }
        score[i][0] = (float)sum /3;
        score[i][1] = max;
        score[i][2] = min;
        sum = 0;
        max = -1;
        min = 200;
    }

    for(i=0;i<5;i++){
        printf("第%d个同学平均分:%.2f", i+1, score[i][0]);
        printf("最高分:%d", (int)score[i][1]);
        printf("最低分:%d", (int)score[i][2]);
        printf("\n");
    }
    return 0;
}
