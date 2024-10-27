#include <stdio.h>

int main(){

	int	intXpos		=1;
	int	intYpos		=1;
	char	chrUserInput	=0;

	printf("This is a simple game that has a grid of 4x4 cells. you can input your starting position in the grid by entering your X and Y coordinates. once done successfully, you can move UP, DOWN, RIGHT and LEFT until you hit a grid boundry.\n");

	printf("Please enter your starting X point: ");
	scanf("%d",&intXpos);

	printf("Please enter your starting Y point: ");
	scanf("%d",&intYpos);

	if(intYpos > 4 || intYpos <1 ||intXpos>4 ||intXpos<1){
		printf("WRONG POSITION INPUT, TERMINATING!");
		return 0;
	}
	printf("Your starting point is : (%d,%d)\n",intXpos,intYpos);
	printf("You can move by entering U(UP), D(DOWN), L(LEFT) and R(RIGHT)\n");

	while (1){
		printf("%d",intYpos);
		printf("Enter your next move:");
		scanf(" %c",&chrUserInput);
		if(chrUserInput=='u' ||chrUserInput=='U'){
			intYpos--;
		}
		else if(chrUserInput=='d' ||chrUserInput=='D'){
			intYpos++;
		}
		else if(chrUserInput=='l' ||chrUserInput=='L'){
			intXpos--;
		}
		else if(chrUserInput=='r' ||chrUserInput=='R'){
			intXpos++;
		}
		else {
			printf("INVALID INPUT, TERMINATING PROGRAM!");
			return 0;
		}

		if(intXpos==0){
			printf("You hit the left boundry at (%d,%d), YOU LOST!\n",intXpos,intYpos);
			return 0;
		}
                else if(intXpos==5){
                        printf("You hit the right boundry at (%d,%d), YOU LOST!\n",intXpos,intYpos);
			return 0;
                }
                else if(intYpos==0){
                        printf("You hit the up boundry at (%d,%d), YOU LOST!\n",intXpos,intYpos);
			return 0;
                }
                else if(intYpos==5){
                        printf("You hit the down boundry at (%d,%d), YOU LOST!\n",intXpos,intYpos);
			return 0;
                }
		}


return 0;
}


