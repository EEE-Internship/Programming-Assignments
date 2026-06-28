/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 27 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To manage simple circket leaderboard.                                                         *
   ********************************************************************************************************** */
   


#include<stdio.h>


int main()
{
    int runs[5],balls[5],No_4[5],No_6[5],i,j,Total_runs=0,Total_balls=0,Total_score=0,Total_No_4=0,Total_No_6=0;
    float Run_rate=0;

    printf("Enter the runs scored by five members: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&runs[i]);
    }
    
    printf("Enter the balls faced by five members: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&balls[i]);
    }
   
    printf("Enter the No. of 4's by five members: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&No_4[i]);
    }

    printf("Enter the No. of 6's by five members: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&No_6[i]);
    }

    
    for(i=0;i<5;i++)
    {
        Total_runs+=runs[i];
        Total_balls+=balls[i];
        Total_score+=runs[i]+No_4[i]+No_6[i];
        Total_No_4+=No_4[i];
        Total_No_6+=No_6[i];
    }
    
    Run_rate=((float)Total_score*6/Total_balls);

    printf("Total runs       : %d\n",Total_runs);
    printf("Total balls      : %d\n",Total_balls);
    printf("Total score      : %d\n",Total_score);
    printf("Total No. of 4's : %d\n",Total_No_4);
    printf("Total No. of 6's : %d\n",Total_No_6);
    printf("Run rate         : %f\n",Run_rate);
}