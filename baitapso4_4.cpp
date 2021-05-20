#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,cv,p,s;
	do{
	
	printf("Nhap lan luot 3 so a b c\n");
	printf("Nhap a=");
	scanf("%f",&a);
	printf("Nhap b=");
	scanf("%f",&b);
	printf("Nhap c=");
	scanf("%f",&c);
	}
	while (a+b<c || a+c<b || b+c<a);{
		cv=(a+b+c);
	    p = cv/2;
	    s = sqrt(p*(p-a)*(p-b)*(p-c));
	
	 printf("Chu vi tam giac la: %f\n",cv);
	 printf("Dien tich cua tam giac la: %f\n",s);
	 
     }
	return 0;
}
	
