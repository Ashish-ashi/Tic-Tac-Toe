#include<stdio.h>
#include<conio.h>
#include<stdlib.h>a
char b[]={'0','1','2','3','4','5','6','7','8','9'};
void board(){
	system("cls");
    printf("\n\n");
    printf("=== TIC TAC TOE ===\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",b[1],b[2],b[3]);
    printf(" ____|_____|____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",b[4],b[5],b[6]);
    printf(" ____|_____|____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",b[7],b[8],b[9]);
    printf("     |     |     \n");
    printf("\n\n");
}
int check(char place[]){
	int i,c=0;
	if(place[1]==place[2]&&place[2]==place[3])
	return 1;
	if(place[4]==place[5]&&place[5]==place[6])
	return 1;
	if(place[7]==place[8]&&place[8]==place[9])
	return 1;
	if(place[1]==place[4]&&place[7]==place[7])
	return 1;
	if(place[2]==place[5]&&place[5]==place[8])
	return 1;
	if(place[3]==place[6]&&place[6]==place[9])
	return 1;
	if(place[1]==place[5]&&place[5]==place[9])
	return 1;
	if(place[3]==place[5]&&place[5]==place[7])
	return 1;
	for(i=1;i<=9;i++)
	if(place[i]=='X'||place[i]=='O')
	c++;
	if(c==9)
	return 0;
	return 2;
}
int main(){
	int p=1,in,r;
	char m;
	board();
	while(1){
		p=(p%2==0)?2:1;
		m=(p==1)?'X':'O';
		printf("\n please enter number for player %d(%c):",p,m);
		scanf("%d",&in);
		if(in<1||in>9)
		printf("\n Invalid Input");
		b[in]=m;
		board();
		r=check(b);
		if(r==1){
		printf("congratulation!! player %d is winner.",p);
		return;
		}
		if(r==0){
		printf("oops!! draw.");
		return;
		}
		p++;
	}

}
