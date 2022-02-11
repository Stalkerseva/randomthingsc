#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char **argv)
{
	int Cwins,Pwins,i,x,pc;
	char ans[4];
	printf("Welcome to RPS!\nPlaying to the BO9\n");
	Cwins=0;
	Pwins=0;
	for(i=0;i<9;i++){
		srand(time(NULL));
		if(Pwins ==5 || Cwins==5){
			printf("The last score is Player %d x Computer %d \n ",Pwins,Cwins);
			if(Pwins>Cwins){
				printf("Player wins!");
			}else{ printf("Computer wins!");
			}
			break;
		}
		x=rand()%3;
		printf("Please choose what to play!(rock(r),paper(p),scissors(s))\n");
		scanf("%s",ans);
		if(!strcmp(ans, "r")) {
			pc=0;
		}else if (!strcmp(ans, "p")) {
			pc=1;
		}else if(!strcmp(ans, "s")) {
			pc=2;
		}
		if(x==pc){
			printf("Tie!\nRestarting Round\n");
			i--;
		}else{
			switch(pc){
				case 0:
				if(x==2){
					printf("Player won this round\n ");
					Pwins++;
				}else{
					printf("Computer won this round\n ");
					Cwins++;
				}
				break;
				case 1:
				if(x==0){
					printf("Player won this round\n ");
					Pwins++;
				}else{
					printf("Computer won this round\n ");
					Cwins++;
				}
				break;
				case 2:
				if(x==1){
					printf("Player won this round\n ");
					Pwins++;
				}else{
					printf("Computer won this round \n");
					Cwins++;
				}
				default:
				break;
			}
	}
}
return 0;
}
