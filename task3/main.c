#include <stdio.h>

int main(){
	int intMaxPopulation	=0;
	int intMinPopulation	=0;
	int intMean		=0;
	int intNumberOfCities	=0;
	int intSum		=0;
	int intInput		=0;

	int dumbCounter		=0;
	printf("Enter the number of cities: ");
	scanf("%d",&intNumberOfCities);

	printf("\n");

	for (int i=1;i<=intNumberOfCities;i++){
		printf("Enter the Population of city %d: ",i);
		scanf("%d",&intInput);

		dumbCounter++;
		if(dumbCounter==1){
		intMaxPopulation=intInput;
		intMinPopulation=intInput;
		}

		intSum=intSum+intInput;
		if(intInput>intMaxPopulation){
			intMaxPopulation=intInput;
		}

		if(intInput<intMinPopulation){
			intMinPopulation=intInput;
		}
	}

	intMean=intSum/intNumberOfCities;

	printf("The Average population in the cities is: %d\n",intMean);
	printf("The Maximum population in a city is: %d\n",intMaxPopulation);
	printf("The Minimum population is a city is: %d\n",intMinPopulation);

return 0;
}
