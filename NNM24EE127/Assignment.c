/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 24 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To demonstrate teh use of different data types and operators                                           *
   ********************************************************************************************************** */

#include<stdio.h>

int main()
{
  char name[50];
  float subject1, subject2, subject3, subject4, subject5, subject6;
  int roll_no, Result;
  double result;

  printf("Enter the Name: ");
  scanf("%s",name);

  printf("\nEnter the Roll_NO: ");
  scanf("%d",&roll_no);

  printf("Enter the Marks for six subjects in 100: ");
  scanf("%f %f %f %f %f %f",&subject1, &subject2, &subject3, &subject4, &subject5, &subject6);

  result=(subject1+ subject2+ subject3+ subject4+ subject5+ subject6)/6;

  printf("The total result is: %lf",result);

  if(result>=40)
  printf("The candidate is passed");
  else
  printf("The candidate is failed");
  
  Result= (int)result;
  printf("The integer result is: %d",Result);
  
  sizeof(result);
  sizeof(name);
  sizeof(Result);
  sizeof(subject1);
  
  roll_no++;
  roll_no--;

  return 0;
}

//output:
/*Enter the Name: Tilak

Enter the Roll_NO: 127
Enter the Marks for six subjects in 100: 96.325
84.56234
77.856
56
99.54
85.2365
The total result is: 83.253311The candidate is passedThe integer result is: 83

=== Code Execution Successful ===   */