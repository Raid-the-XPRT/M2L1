#include <stdio.h>

int main(){
	int	intDivisionsCounts	=0;
	int	intN			=0;

	printf("Enter an Integer number N larger than or equal to one: \n");
	scanf("%d",&intN);

	for(int i=1;i<=intN;i++){
		if(intN%i==0){
			intDivisionsCounts++;
	}
	}
	if(intDivisionsCounts==2){
		printf("%d is a prime number\n",intN);
	}
	else{
		printf("%d is not a prime number\n",intN);

	intDivisionsCounts=0;
	}

	printf("\n");

return 0;
}
