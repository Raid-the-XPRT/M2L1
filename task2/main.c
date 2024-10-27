#include <stdio.h>

int main(){
	int	intDivisionsCounts	=0;
	int	intN			=0;

	printf("Enter an Integer number N larger than or equal to one: \n");
	scanf("%d",&intN);

	printf("The prime numbers from 1 to N are: ");

	for(int i=1;i<=intN;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0){
				intDivisionsCounts++;
			}
		}

	if(intDivisionsCounts==2){
		printf("%d, ",i);
	}

	intDivisionsCounts=0;
	}

	printf("\n");

return 0;
}
