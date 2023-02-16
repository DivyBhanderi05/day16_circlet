#include<stdio.h>

main(){
	int i , j , k;
	
	for(i=5 ; i>0 ; i--){
		for(k=i ; k>1 ; k--){
			printf(" ");
		}
		for(j=i ; j<5 ; j++){
			printf("%d",j);
		}
		for(j=5 ; j>=1 ; j--){
			printf("%d",j);
			
		}
		printf("\n");
	}
}
