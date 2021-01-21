#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
#include<string.h>

void show_record();
void reset_score();
void help();
void edit_score(float , char []);

int quiz()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     time_t t;
	 time(&t);
     mainhome:
     system("cls");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t        WELCOME ");
     printf("\n\t\t\t          TO ");
     printf("\n\t\t\t       QUIZ GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t    TEST YOUR GK..SET YOUR HIGHSCORES!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t -> Press S to start the game");
     printf("\n\t\t -> Press V to view the highest score  ");
     printf("\n\t\t -> Press R to reset score");
     printf("\n\t\t -> Press H for help            ");
     printf("\n\t\t -> Press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     	for(i=0;i<80;i++)
		printf("=");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("=");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked total 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.23232");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Switzerland");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hyena");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Power");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Cobalt");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nHow many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.7");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Orange");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
		printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.AB");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWind speed is measure by__________?");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Anemometer");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Kathmandu");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Valves");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
		printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
		printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Serena Williams");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
		printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.The King's Speech");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}};
	

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
char maze[100][100];
int i,j,h1,h2,t1,t2,score,f1,f2,b1=1,b2=1,n=1,bonus,count;
int tail_x[1000],tail_y[1000];
char name[100];


int intro(){
	int ch;
	printf("\t\t A project brought to you by \n\t\tZAKI IMRAN k20-0415\n\t\tMAIN MENU\n\t\tPress 1 for snake game \n\t\tPress 2 for quiz game\n ");
	scanf(" %d",&ch);
	if(ch==1){
		menu();
	}
	else if(ch==2){
		quiz();
	}
}
int menu()
{
system("cls");
printf("\n\n\t\tWELCOME TO THE SNAKE GAME!\n                         ");
printf("\n\n");
printf("\n\n\t\tEnter your name: ");
gets(name);  
}

void assign_maze()
{

    for(i=0;i<=20;i++)
     {
      for(j=0;j<=30;j++)
      {
      if(i==0 || i==20 || j==0 || j==30)
      {
      maze[i][j]=219;
}
else maze[i][j]=' ';
}
}

}

void print_maze()
{
print_score();
printf("\n");

for(i=0;i<=20;i++)
     {printf("\t\t\t");
      for(j=0;j<=30;j++)
      {

      printf("%c",maze[i][j]);
      
}
printf("\n");
} 

}


void print_food()
{
if(score%4==0 && score!=0)
{
bonus_food();
}
f1=rand()%(18+1-2)+2;
f2=rand()%(28+1-2)+2;
maze[f1][f2]='O';

}

int bonus_food()
{
count=0;
b1=rand()%(18+1-2)+2;
b2=rand()%(28+1-2)+2;
maze[b1][b2]='@';
}

void move_tail()
{
    int i,x,y,temp1,temp2;

    x=tail_x[0];
    y=tail_y[0];

    tail_x[0]=h1;
    tail_y[0]=h2;
    
    for(i=1;i<=score;i++)
    {   temp1=0;
   temp2=0;
    
        maze[x][y]='-';
        temp1 = tail_x[i];
        temp2 = tail_y[i];

        tail_x[i]=x; 
        tail_y[i]=y;

        x=temp1; 
        y=temp2;
       
    }

}
void remove_tail()
{
    int x,y;
    for(x=0;x<=20;x++)
        for(y=0;y<=30;y++)
    {
        if(maze[x][y]=='-')
            maze[x][y]=' ';
    }

}

int print_score(){


printf("Score: %d count= %d bonus(%d,%d) food(%d,%d) head(%d,%d) tail(%d,%d)",score,count,b1,b2,f1,f2,h1,h2,tail_x[1],tail_y[1]);
printf("\nPress any key accept WASD to pause. Press ESC key to end game.\n");


}

void music(){
Beep (800,100);
Beep (400,100);
Beep (500,100);
    Beep (400,100);
    Beep (800,100);
Beep (400,100);
Beep (500,100);
    Beep (400,100);
    Beep (100,675);
}

void up(){
char y;
if(maze[h1][h2]==maze[f1][f2])
{print_food();
score++;

Beep(10000,50);

}
if(count==30)
{
maze[b1][b2]=' ';
b1=1;
b2=1;
}
if(maze[h1][h2]==maze[b1][b2])
{

score+=3; 
Beep(10000,50);

}


maze[h1][h2]=' ';
        maze[h1-1][h2]='^';
        h1--;
        if(count>40){
        count=0;
}
        else count++;

}
void down(){
if(maze[h1][h2]==maze[f1][f2])
{ print_food();
score++;

Beep(10000,50);
}
if(count==30)
{
maze[b1][b2]=' ';
b1=1;
b2=1;
}
if(maze[h1][h2]==maze[b1][b2])
{

score+=3; 
Beep(10000,50);
}

maze[h1][h2]=' ';
        maze[h1+1][h2]='V';
        h1++;
         if(count>40){
        count=0;
}
        else count++;
}
void right(){
if(maze[h1][h2]==maze[f1][f2])
{
print_food();
score++;
Beep(10000,50);
}
if(count==30)
{
maze[b1][b2]=' ';
b1=1;
b2=1;
}
if(maze[h1][h2]==maze[b1][b2])
{
score+=3; 
Beep(10000,50);
}

maze[h1][h2]=' ';
        maze[h1][h2+1]='>';
        h2++;
         if(count>40){
        count=0;
}
        else count++;
}
void left(){
if(maze[h1][h2]==maze[f1][f2])
{
print_food();
score++;
   Beep(10000,50);
}
if(count==30)
{
maze[b1][b2]=' ';
b1=1;
b2=1;

}
if(maze[h1][h2]==maze[b1][b2])
{

score+=3; 
Beep(10000,50);
}

   maze[h1][h2]=' ';
        maze[h1][h2-1]='<';
        h2--;
         if(count>40){
        count=0;
}
        else count++;
}

void gameover()
{   
    if(maze[h1][h2]=='-'){
music();
end();
    exit(0);}
if(maze[h1][h2]==maze[0][h2]){
   music();
   end();
exit(0);}
    if(maze[h1][h2]==maze[h1][0]){
music();
end();
        exit(0);}
    if(maze[h1][h2]==maze[20][h2]){
music();
end();
        exit(0);}
    if(maze[h1][h2]==maze[h1][30]){
music();
end();
        exit(0);}
    

}

int end()
{
system("cls");
printf("Name :");
puts(name);
printf("\n");
printf("Score: %d",score);
getch();
printf("\n\nDo you want to play again? Y or N");
char y=getch();
switch(y)
{
case 'Y':
{

main();
break;
}

default:
{
exit(0);}
}

}


void rules()
{
n=1;
printf("\t\tRules:\n");
printf("1. Control the snake by WASD keys.\n");
printf("2. As the snake eats food its length will grow and so will the score.\n");
printf("3. If the snake hits the walls or its body.. its game over!\n");
printf("4. Normal Food score = +1, Bonus Food score = +3");
printf("\n\n\t Select your Difficulty: ");
printf("\n\n\t%d.Easy(E)",n++);
printf("\n\n\t%d.Medium(M)",n++);
printf("\n\n\t%d.Hard(H)\n",n++);


}


int main()
{
count=0;
char ch;
int x;
score=0;
     intro();
     system("cls");
     rules();
     label:
     printf("\n\nEnter here: ");
     ch=getche();
     switch(ch){
      case 'E':
      {
      x=300;
      printf("\n\nPress any key too continue.....");
      break;
}
case 'M':
      {
      x=100;
      printf("\n\nPress any key too continue.....");
      break;
}
case 'H':
      {
      x=50;
      printf("\n\nPress any key too continue.....");
      break;
}
default:
{
printf("\n\nPlease enter a valid key ");
goto label;
}
   
}
     assign_maze();
     h1=15;
     h2=15;
     print_food();
     maze[15][15]='>';
     char y;
     do{

y=getch(); 
switch(y)
{
case 'w':
 {
 
  while(!kbhit())
  {
  up();
  system("cls");
remove_tail();
move_tail();
print_maze();
gameover();
Sleep(x);

  
  }
break;
}
  case 's':
 {
  while(!kbhit())
  {
  down();
  system("cls");
remove_tail();
move_tail();
print_maze();
gameover();
Sleep(x);
  
  }
  
  break;
 }
  case 'a':
 {
  while(!kbhit())
  {
  left();
  system("cls");
remove_tail();
move_tail();
print_maze();
gameover();
Sleep(x);
  
  }
  
  break;
 }
  case 'd':
 {
  while(!kbhit())
  {
  right();
  system("cls");
remove_tail();
move_tail();
print_maze();
gameover();
Sleep(x);
  
  }
  
  break;
 }
 default:
 break;
 
}
system("cls");
print_maze();
gameover();

}while(y!=27);
end();
}
