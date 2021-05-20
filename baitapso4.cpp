#include<stdio.h>
int main(){
	int n,tong;
	printf("Nhap n : ");
	scanf("%d",&n);
	
	int i=0;
	while(i<=n){
		tong=tong+i;
		i=i+1;
	}
		printf("Ket qua bang:%d",tong);
		
		return 0;
	}
	
