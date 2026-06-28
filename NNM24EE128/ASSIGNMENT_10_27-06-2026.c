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
//Output
//Enter the number of players: 5                                                                                                                                                  
//enter the player name: Virat               
//Runs scored by the player: 96
//Total number of balls faced by the player: 56
//Number of fours hit by the player: 4
//Number of sixes hit by the player: 2


//enter the player name: Rohit
//Runs scored by the player: 46
//Total number of balls faced by the player: 12
//Number of fours hit by the player: 3
//Number of sixes hit by the player: 1


//enter the player name: ABD   
//Runs scored by the player: 106
//Total number of balls faced by the player: 42
//Number of fours hit by the player: 6
//Number of sixes hit by the player: 2


//enter the player name: Dev
//Runs scored by the player: 36
//Total number of balls faced by the player: 14
//Number of fours hit by the player: 2
//Number of sixes hit by the player: 0


//enter the player name: Rajat
//Runs scored by the player: 89
//Total number of balls faced by the player: 23
//Number of fours hit by the player: 5
//Number of sixes hit by the player: 3



//------ SCOREBOARD ------
//Total players: 5
//Total runs: 373
//Total balls: 147
//Total fours: 20
//Total sixes: 8
//Runrate: 15
