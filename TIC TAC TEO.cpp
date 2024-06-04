#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void design();
char num[10]={'0','1','2','3','4','5','6','7','8','9'};
int winner();
int main (){
	design();
	int player=1,input,status=-1;
	while(status=-1){  
	
	
		player =(player%2==0) ? 2: 1;
		printf ("turn of player %d",player);
		char mark =(player==1) ? 'X' : 'O';
		printf("enter where you want to put mark");
		scanf("%d",&input);
		if(input<1 || input>9){
			printf("please print number 1 to 9");
		}
		else
		num[input]=mark;
		design();
		player++;
		int result = winner();
		if(result ==1){
			printf("congratulation you won the game",player);
			return 0;
		}
		else if(result ==0){
			printf("draw");
			return 0;
		}
	}
}
void design (){
	system("cls");
		printf("=== TIC TAC TEO===\n\n\n");
	printf("     |     |    \n");
	printf("  %c  |  %c  | %c \n",num[1], num[2], num[3]);
	printf("_____|_____|____\n");
	printf("     |     |    \n");
	printf("  %c  |  %c  | %c \n",num[4], num[5], num[6]);
	printf("_____|_____|_____\n");
	printf("     |     |    \n");
	printf("  %c  |  %c  | %c \n",num[7], num[8], num[9]);
	printf("     |     |    \n");
}
int winner (){
	if(num[1]==num[2] && num[2]==num[3]) {
		return 1;
	}
	if(num[4]==num[5] && num[5]==num[6]) {
		return 1;
	}
	if(num[7]==num[8] && num[8]==num[9]) {
		return 1;
	}
	if(num[1]==num[4] && num[4]==num[7]) {
		return 1;
	}
	if(num[2]==num[5] && num[5]==num[8]) {
		return 1;
	}
	if(num[3]==num[6] && num[6]==num[9]) {
		return 1;
	}
	if(num[1]==num[2] && num[2]==num[3]) {
		return 1;
	}
	if(num[1]==num[5] && num[5]==num[9]) {
		return 1;
	}
	if(num[3]==num[5] && num[5]==num[7]) {
		return 1;
	}
	int count;
	for(int i=1;i<=9;i++){
		if(num[i]=='X'|| num[i]=='O'){
			count++;
		}
		if(count==9){
			return 0;
		}
	}
return -1;}
