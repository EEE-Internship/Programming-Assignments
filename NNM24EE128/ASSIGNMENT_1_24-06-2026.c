//Name:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 24 June 2026
//Department: Electrical and Electronics Engineering
//College: NMAM Institute of Technology
int main()
{
    int marks1,marks2,a=10;
    float b=25.79;
    char c='V';
    char name[20];
    char usn[10];
    char department[50];
    //READING THE STUDENT INFO
    printf("enter the name of the Student: ");
    scanf("%s",name);
    printf("enter the USN of the student: ");
    scanf("%s",usn);
    printf("Department: ");
    scanf("%s",department);
    printf("enter the CIE marks: ");//out of 50
    scanf("%d",&marks1);
    printf("enter the SEE marks: ");//out of 50
    scanf("%d",&marks2);
    //ARITHMETIC OPERATION
    printf("Total Marks= %d\n ",marks1+marks2);
    printf("marks2-marks1=%d\n ",marks2-marks1);
    printf("marks2*2=%d\n ",marks2*2);
    printf("(marks1+marks2)/10=%.2f\n",(float)(marks1+marks2)/10);
    //RELATIONAL OPERATORS
    printf("result: ");
    if (marks1>=20)//use of nested if cnditions
    {
        if(marks2>=20)
        {
        printf("PASS\n");
        }
        else
        {
            printf("Failed! SEE is less then 20");
        }
    }
    else
    {
        printf("FAIL\n\n");
    }
    //INCREMENT AND DECREMENT
    marks2++;//increment
    printf("SEE marks after increment: %d\n",marks2);
    marks2--;//decrement
    printf("SEE marks after decrement: %d\n",marks2);
    //size of data types
    printf("size of int= %zu bytes\n",sizeof(a));//prints the size of a(integer variable)
    printf("size of float= %zu bytes\n",sizeof(b)); //prints the size of b(float variable)
    printf("size of char= %zu bytes\n",sizeof(c)); //prints the value of c(character variable)

return 0;
}
