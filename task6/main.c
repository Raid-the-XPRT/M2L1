#include <stdio.h>

int main(){
	int intN	=0;
	int intNum	=1;
	int intNumPlus1	=1;
	int intSum	=0;



	printf("Enter the number of N terms of the fibonacci sequence to display: ");
	scanf("%d",&intN);

	printf("Fibonacci Series up to %d terms are: %d, %d, ",intN,intNum,intNumPlus1);
	for(int i=1;i<intN;i++){
		intSum=intNum+intNumPlus1;
		intNum=intNumPlus1;
		intNumPlus1=intSum;
		printf("%d, ",intSum);
	}
	printf("\n");
return 0;

}
