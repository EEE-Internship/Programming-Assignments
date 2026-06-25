//Name:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 25 June 2026
//Department: Electrical and Electronics Engineering
//College: NMAM Institute of Technology
//Topic: use of goto, break, continue statements
#include<stdio.h>
struct product
{
    char product_name[50];
    int product_id, quantity;
};
int main()
{
    struct product p;
    int n,i;
    int total=0;
    int count=0;
    float average;
    printf("enter the number of product: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the details of the product %d\n",i);
        printf("enter the product name: ");
        scanf("%s", p.product_name);
        printf("Enter the product ID: ");
        scanf("%d",&p.product_id);
        printf("enter the product Quantity: ");
        scanf("%d",&p.quantity);
        if(p.quantity<=0)
        {
            printf("invalid quantity!\n");
            continue;
        }
        if(p.quantity>=100)
        {
            printf("maximum order limit reached!!\n");
            break;
        }
        count++;
        total+=p.quantity;
    }
    goto summary;
    summary:
    if(count>0)
    {
    average=(float)total/count;
    }
    else
    {
    average=0;
    }
    printf("**ORDER SUMMARY**\n");
    printf("Number of valid products: %d\n",count);
    printf("total quantity ordered: %d\n",total);
    printf("Average quantity per product: %.2f\n",average);
    return 0;
}