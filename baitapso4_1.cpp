#include<stdio.h>
int main(){
	float n,tong;
	printf("Nhap n : ");
	scanf("%f",&n);
	
	int i=1;
	while(i<=n){
		tong=tong+1/(float)i;
		i=i+1;
	}
		printf("Ket qua bang:%f",tong);
		
		return 0;
	}
	
