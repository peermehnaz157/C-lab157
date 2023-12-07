#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter number to check");
    scanf("%d",&a);
    b=2;
    c=0; 

    while (b<=a){    
        if (a%b==0){
            c++;
        }
        b++;
    }
    if(c==1){
        printf("yes");

    }
    else{
        printf("no");

    }
}