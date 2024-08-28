
#include <stdio.h>

int main() {

    float x,avg,sum=0;
    int i,j=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&x);

        if(x>0){

        sum=sum+x;
        j++;
        }
    }
    avg = sum/j;
        printf("%d valores positivos\n",j);
    printf("%.1f\n",avg);


    return 0;
}
