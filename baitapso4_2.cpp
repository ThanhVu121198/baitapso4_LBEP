#include<stdio.h>
//1*2*3*...*n
int main(){
	long long int n,tich;
	printf("Nhap n : ");
	scanf("%lli",&n);
	
   int i=1;tich=1;
	while(i<=n){
		tich=tich*i;
		i=i+1;
	}
		printf("Ket qua bang:%lli",tich);
		return 0;
	}
	
