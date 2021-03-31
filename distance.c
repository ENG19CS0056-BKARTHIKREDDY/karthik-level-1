//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

void inp(float *x1,float *y1,float *x2,float *y2)
{
	printf("enter the value of x1:");
	scanf("%f",x1);
   	printf("enter the value of y1:");
	scanf("%f",y1);
    printf("enter the value of x2:");
	scanf("%f",x2);
	printf("enter the value of y2:");
	scanf("%f",y2);

}

float Distance(float x1, float y1,  float x2, float y2)
{
	float d;
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return d;
}


void out(float x1,float y1,float x2,float y2,float sq)
{
	printf("The Distance between (%.3f ,%.3f) ,(%.3f ,%.3f) Is %.3f .",x1,y1,x2,y2,sq);
}



int main()
{
	float x1,x2,y1,y2,square_root;
    	inp(&x1,&y1,&x2,&y2);
	square_root=Distance(x1,x2,y1,y2);
	out(x1,y1,x2,y2,square_root);
	return 0;
}

