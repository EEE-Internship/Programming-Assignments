//DATE: 27-06-2026
//CLASS_TASK_03
//CRICKET SCOREBOARD
#include<stdio.h>
int totalruns=0;//global variable
int totalballs=0;//''
int totalfours=0;//''
int totalsixes=0;//''

void cricketScore()
{
    int runs,balls,fours,sixes;
   char name[50];
   printf("enter the player name: ");
   scanf("%s",name);
   printf("Runs scored by the player: ");
   scanf("%d",&runs);
   totalruns=totalruns+runs;
   printf("Total number of balls faced by the player: ");
   scanf("%d",&balls);
   totalballs=totalballs+balls;
   printf("Number of fours hit by the player: ");
   scanf("%d",&fours);
   totalfours=totalfours+fours;
   printf("Number of sixes hit by the player: ");
   scanf("%d",&sixes);
   totalsixes=totalsixes+sixes;
}
int main()
{
    int n,i;
    float runrate;
    printf("Enter the number of players: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
   cricketScore();
   printf("\n\n");
    }
   runrate=((float)totalruns/totalballs)*6;
   printf("\n------ SCOREBOARD ------\n");
   printf("Total players: %d\n", n);
   printf("Total runs: %d\n",totalruns);
   printf("Total balls: %d\n",totalballs);
   printf("Total fours: %d\n",totalfours);
   printf("Total sixes: %d\n",totalsixes);
   printf("Runrate: %.0f\n",runrate); 
   return 0;
}