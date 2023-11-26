#include<stdio.h>
int main (){
    int a,b,sum,sub,multi,reminder;
    scanf("%d%d",&a,&b,&sum,&sub,&multi,&reminder);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    reminder=a%b;
    printf("%d\n %d\n %d\n %d\n",sum,sub,multi,reminder);
    return 0;
}