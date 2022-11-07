#include<stdio.h>
#include<math.h>

int sumSeries();
void main(){
    sumSeries();
} 

int sumSeries() {
    int x,n;
    float sum;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the limit of the series:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=pow(-1,i-1)*pow(x,i);
    }
    printf("The sum of the series is %.2f",sum);
    return 1;
}