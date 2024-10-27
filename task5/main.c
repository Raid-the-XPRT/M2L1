#include <stdio.h>

int main(){
	int intCountA	=0;
	int intCountE	=0;
	int intCountI	=0;
	int intCountO	=0;
	int intCountU	=0;
	int intCountOther=0;

	char chrTemp	=0;
	int intCharachterCount	=0;

	printf("Enter the number of charachters: ");
	scanf("%d",&intCharachterCount);

	for(int i=0;i<intCharachterCount;i++){
		printf("Enter charachter #%d : ",i+1);
		scanf(" %c",&chrTemp);

		if(chrTemp=='A' || chrTemp=='a'){
			intCountA++;
		}
		else if(chrTemp=='E' || chrTemp=='e'){
			intCountE++;
		}
		else if(chrTemp=='I' || chrTemp=='i'){
			intCountI++;
		}
		else if(chrTemp=='O' || chrTemp=='o'){
			intCountO++;
		}
		else if(chrTemp=='U' || chrTemp=='u'){
			intCountU++;
		}
		else {
			intCountOther++;
		}
	}

	printf("Frequency of a: %d\nFrequency of e: %d\nFrequency of i: %d\nFrequency of o: %d\nFrequency of u: %d\nFrequency of Other: %d\n",intCountA,intCountE,intCountI,intCountO,intCountU,intCountOther);
return 0;
}
