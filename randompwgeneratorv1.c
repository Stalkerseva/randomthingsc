#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size1 26
#define size2 28
#define pwsize 30
void menu();
void printpassword(int a,int b,int c, char *letter[],char *specialnum[]);
int main(int argc, char *argv[]){
	int choice;
	char ans[4];
	char  *letters[size1]= {"q","w","e","r","t","y","u","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m","i",};
	char *special[size2]={"é","\"","!",">","<","\'","#","%","+","$","&","/","\{","(","[",")","]","=","}","?","\\","_","|",",","`",".","˙","*"};
	srand(time(NULL));
	 int z=1;
	 int y=0;
	 int x=0;
	
while(choice !=5){
	menu();
	scanf("%d",&choice);
	switch(choice){
		case 1:{
		printf("Toggle letters ? (yes/no)\n");
		scanf("%s",ans);
		if(!strcmp(ans, "yes")){
			z=1;
		}else if(!strcmp(ans, "no")) {
			z=0;
			}
		break;
	}
		case 2:{
		printf("Toggle numbers ? (yes/no)\n");
		scanf("%s",ans);
		if(!strcmp(ans, "yes")) {
			y=1;
		}else if(!strcmp(ans, "no")) {
			y=0;
		}
		break;
	}
		case 3:{
		printf("Toggle special numbers ? (yes/no)\n");
		scanf("%s",ans);
		if(!strcmp(ans, "yes")) {
			x=1;
		}else if(!strcmp(ans, "no")) {
			x=0;
		}
		break;
	}
		case 4:{
		if(z==0 && y==0 && x==0){
			printf("Please choose atleast 1 option!\n");
			break;}
			
		printpassword(z,y,x,letters,special);
		break;
	}
		default:
		break;
	}
	
	
	
	}
	
	

	return 0;
}


void menu(){
	printf("Select the options you wanna use.\n[1]Letters (Default)\n[2]Numbers\n[3]Special Characters\n[4]Print the password with selected options \n[5]Exit\n");
}
void printpassword(int a,int b,int c, char *letter[],char *specialnum[]){
	int i,randomnum;
	int sum=0;
	sum=a+b+c;
	switch(sum){
		case 1:{
		srand(time(NULL));
		if(a==1){
			for(i=0;i<pwsize;i++){
			randomnum= rand()%26;
			printf("%s",letter[randomnum]);}
		}
		if(b==1){
			for(i=0;i<pwsize;i++){
			randomnum= rand()%10;
			printf("%d",randomnum);}
		}
		if(c==1){
			for(i=0;i<pwsize;i++){
			randomnum= rand()%28;
			printf("%s",specialnum[randomnum]);}
		}
		printf("\n");
		break;
	}
		case 2:{
		srand(time(NULL));
		if(a==0){
			for(i=0;i<pwsize;i++){
		randomnum= rand()%38;
		if(randomnum>9){
			printf("%s",specialnum[randomnum-10]);
		}else{
		printf("%d",randomnum);
	}
	}
	printf("\n");
	}
		if(b==0){
		for(i=0;i<pwsize;i++){
		randomnum= rand()%52;
		if(randomnum>=26){
			printf("%s",specialnum[randomnum-26]);
		}else{
		    printf("%s",letter[randomnum]);
		}
	}
	printf("\n");
}
		if(c==0){
			for(i=0;i<pwsize;i++){
		randomnum= rand()%36;
		if(randomnum>9){
			printf("%s",letter[randomnum-10]);
		}else{
		printf("%d",randomnum);
	    }
}
			printf("\n");
		}
		break;
	
		case 3:{
	     srand(time(NULL));
	for(i=0;i<pwsize;i++){
		randomnum= rand()%64;
		if(randomnum>9){
			if(randomnum>=36){
				printf("%s",specialnum[randomnum-36]);
				}else{
					printf("%s",letter[randomnum-10]);}
		}else{
		printf("%d",randomnum);
	}
	}
	printf("\n");
	
	    break;
	}
	    default:{
	    break;
	}
	}
}
}
/*
	int a;
	for(a=0;a<size2;a++){
		printf("%s",special[a]);
	}
	srand(time(NULL));
	int x,i,SIZE;
	printf("What size password do you want?");
	scanf("%d",&SIZE);
	for(i=0;i<pwsize;i++){
		randomnum= rand()%36;
		if(randomnum>9){
			printf("%s",letters[randomnum-10]);
		}else{
		printf("%d",randomnum);
	}
	}
 
*/
