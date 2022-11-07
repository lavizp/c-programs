/* 
A bank accepts deposits for one year or more and the policy it adopts on interest rate is as
follows:
a) If a deposit is less than Rs. 1,000 and for 2 or more years the interest rate is 5 percent
compounded annually.
b) If a deposit is Rs. 1,000 or more but less than Rs. 5,000 and for 2 or more years the
interest rate is 7 percent compounded annually.
c) If a deposit is more than Rs. 5,000 and is for 1 year or more the interest rate is 8 percent
compounded annually.
d) On all deposits for 5 years or more interest is 10 percent compounded annually
e) On all other deposits not covered by the above conditions the interest is 3 percent
compounded annually.
At the time of withdrawal a customer data is given with the amount deposited and the
number of years the money has been with the bank. Write a program to obtain the money in
the customer’s account and the interest credited at the time on withdrawal. */
#include<stdio.h>
#include<math.h>
void main(){
    float p,t,r;
    printf("Enter the principle amount:");
    scanf("%f",&p);
    printf("Enter the time:");
    scanf("%f",&t);
    if(t>=5){
        r=0.1;
    }
    else if(p<1000&&t<=2){
        r=0.05;
    }
    else if(p>=1000&&p<5000&&t<=2){
        r=0.07;
    }else if(p>=5000&&t>=1){
        r=0.08;
    }else{
        r=0.03;
    }
    float ca = p*pow((1+r),t);
    printf("The amount during withdrawal is %.2f",ca);
}