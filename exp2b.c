 #include<stdio.h>
int main(){
#define pi 3.14
float r,s,l,w;
float ca, cp, sa, sp, ra, rp;
//circle
printf("Enter the radius of the circle:");
scanf("%f", &r);
ca= pi*r*r;
cp= 2*pi*r;
//square
printf("Enter the side of the square:");
scanf("%f",&s);
sa=s*s;
sp=4*s;
//rectangle
printf("Enter the length and width of the rectangle:");
scanf("%f %f", &l,&w);
ra=l*w;
rp=2*(l+w);
//results
printf("\n Circle:\nArea=%lf\nPerimeter=%2f\n",ca,cp);
printf("\n Square:\nArea=%lf\nPerimeter=%2f\n",sa,sp);
printf("\n Rectangle:\nArea=%lf\nPerimeter=%2f\n",ra,rp);
return 0;
}
