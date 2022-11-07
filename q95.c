#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp=fopen("values.dat","r");
    int arr[20],total=0;
    float average;
    if(fp==NULL){
        printf("Error openning file.");
        exit(1);
    }
    else{
        for(int i=0;i<10;i++){
            fscanf(fp,"%d",&arr[i]);
            total+=arr[i];
        }
        average=total/10;
    fclose(fp);
    fp=fopen("average.res","w");
    fprintf(fp,"The average of the number is %f",average);
    }

}