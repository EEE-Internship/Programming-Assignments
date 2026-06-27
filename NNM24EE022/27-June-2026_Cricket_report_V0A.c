/*
Anwitha Bhat
NNM24EE022
27-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which which gives info about a cricket match using functions */

#include<stdio.h>

void cricket()
{
   int total_run=0;
   int total_balls=0;
   int total_fours=0;
   int total_sixes=0;


int i,runs,balls,four,six;

float runrate;

for(i=1;i<=5;i++)
{
    printf("Enter the details Player %d\n",i);

    printf("Runs=");
    scanf("%d",&runs);
    printf("Balls=");
    scanf("%d",&balls);
    printf("Fours=");
    scanf("%d",&four);
    printf("Sixes=");
    scanf("%d",&six);

   total_run=total_run+runs;
    total_balls=total_balls+balls;
     total_fours=total_run+four;
      total_sixes=total_run+six;
}
      
      runrate=total_run/total_balls*6;

      printf("Total runs=%d\n",total_run);
      printf("Total balls=%d\n",total_balls);
      printf("Total fours=%d\n",total_fours);
      printf("Total sixes=%d\n",total_sixes);

      printf("Runrate=%f",runrate);
}


int main()
{
    cricket();

    return 0;
}



output

Enter the details Player 1
Runs=50
Balls=20
Fours=2
Sixes=2
Enter the details Player 2
Runs=60
Balls=30
Fours=4
Sixes=5
Enter the details Player 3
Runs=89
Balls=40
Fours=5
Sixes=6
Enter the details Player 4
Runs=70
Balls=34
Fours=5
Sixes=4
Enter the details Player 5
Runs=90
Balls=34
Fours=6
Sixes=7
Total runs=359
Total balls=158
Total fours=365
Total sixes=366
Runrate=12.000000
