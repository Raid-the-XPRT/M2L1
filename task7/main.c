#include <stdio.h>

int main(){

	int	intPassword	=1234;
	float	fltBalance	=0.0;

	int	intTempPassword	=0;
	char	chrTemp		=0;
	float	fltMoney	=0;

	while (1){
		printf("Welcome to the big bank & co. Please enter your PIN to login: ");
		scanf("%d",&intTempPassword);

		if(intTempPassword!=intPassword){
			printf("WRONG PIN ENTERED! Exiting...\n");
			return 0;
		}
		else{
			printf("Access Granted! Welcome\nPlease enter your desired operation, C to check for Balance, D to make a deposit, W to withdraw money and E to Exit\n");
			scanf(" %c",&chrTemp);

			if(chrTemp=='c' ||chrTemp=='C'){
				printf("Current Balance: %.2fSAR\n",fltBalance);
			}
			else if(chrTemp=='d' ||chrTemp=='D'){
				printf("Enter how much you wish to deposit?\n");
				scanf("%f",&fltMoney);
				fltBalance=fltBalance+fltMoney;
				printf("An amount of %.2f has been deposited to your account successfully!\n",fltMoney);
				fltMoney=0;
			}
			else if(chrTemp=='w' ||chrTemp=='W'){
				printf("Enter how much you wish to withdraw?\n");
				scanf("%f",&fltMoney);
				fltBalance=fltBalance-fltMoney;
				printf("An amount of %.2f has been withdrawn from your account\n",fltMoney);
				fltMoney=0;
			}
			else if(chrTemp=='e' ||chrTemp=='E'){
				printf("Exiting, Good bye!\n");
				return 0;
			}
			else {
				printf("INVALID INPUT, EXITING...\n");
				return 0;
			}
		}
	}
return 0;
}
