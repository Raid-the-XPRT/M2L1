#include <stdio.h>

int main(){
	int	intN		=0;
	float	fltIncrement	=0;
	float	fltMulDetect	=0;
	int	intSequence	=0;
	float	fltIncrementer	=0;


	printf("Enter an Integer N: \n");
	scanf("%d",&intN);

	printf("Enter an Increment: \n");
	scanf("%f",&fltIncrement);

	if (fltIncrement>=1){
		printf("ERROR! Increment equals to or bigger than 1. TERMINATING...\n");
		return 0;
	}
	printf("Numbers from N to 0 in decending order: ");
	for (int i=intN;i>=0;i--){
		printf("%d,",i);
	}

	printf("\n");

//	fltMulDetect=intN/10;
//	res=nember-(fltMulDetect*10);

	printf("Printing numbers according to sequence: \n");

	for(int i=0;i<=intN;i++){
		fltMulDetect=i/10;
		intSequence=i-(fltMulDetect*10);

		if(intSequence==4 || intSequence==7)
			continue;
		printf("%d, ",i);
	}

	printf("\n");

	printf("Print Numbers from 0 to N with the increment: ");

	while(fltIncrementer<=intN){
		printf("%.2f, ",fltIncrementer);
		fltIncrementer=fltIncrementer+fltIncrement;
	}

	printf("\n");

return 0;

}
