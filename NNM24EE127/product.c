/* **********************************************************************************************************
 * Author- Tilak Poojary                                                                                  *
 * USN- NNM24EE127                                                                                        *
 * Date- 25 June 2026                                                                                     *
 * Dept- Electrical and Electronics Engineering Department                                                *
 * College- NMAM Institute of Technology, Nitte                                                           *
 * Purpose- To process product order details with validation                                              *
 ********************************************************************************************************** */

#include <stdio.h>
#include <string.h>
int main()
{
    char product[50], product_id[50], choice;
    int quantity = 0, valid = 0, total = 0;
    float avg;

    while (1)
    {
        printf("Enter the Product name: ");
        scanf("%s", product);
        printf("Enter the Product ID: ");
        scanf("%s", product_id);
        printf("Enter the quantity: ");
        scanf("%d", &quantity);
        getchar();  // Clear newline from input buffer

        if (quantity <= 0)
        {
            printf("Invalid quantity\n\n");
            continue;
        }

        valid++;
        
        total += quantity;

        if (quantity >= 100)
        {
            printf("Maximum order limit reached\n\n");
            break;
        }

        printf("If you want to enter another product [y/n]: ");
        scanf("%c", &choice);
        printf("\n");
        if (choice == 'n')
            goto summary;
    }

    
    

    summary:
    avg = (float)total / valid;
    printf("\n========== ORDER SUMMARY ==========\n");
    printf("The total valid products are: %d\n", valid);
    printf("The total quantity ordered is: %d\n", total);
    printf("The average quantity per product is: %.2f\n", avg);
    printf("====================================\n");

    return 0;
}

/*Output:
1.
Enter the Product name: resistor
Enter the Product ID: yageo90890
Enter the quantity: 20
If you want to enter another product [y/n]: y

Enter the Product name: capacitor
Enter the Product ID: caps85uu789
Enter the quantity: 40
If you want to enter another product [y/n]: y

Enter the Product name: opamp
Enter the Product ID: lm741ti7894
Enter the quantity: 40
Maximum order limit reached


========== ORDER SUMMARY ==========
The total valid products are: 3
The total quantity ordered is: 100
The average quantity per product is: 33.33
====================================

2.
Enter the Product name: resistor
Enter the Product ID: res8520
Enter the quantity: 10
If you want to enter another product [y/n]: y

Enter the Product name: opamp
Enter the Product ID: ti7895213
Enter the quantity: 30
If you want to enter another product [y/n]: n


========== ORDER SUMMARY ==========
The total valid products are: 2
The total quantity ordered is: 40
The average quantity per product is: 20.00
====================================

3.
Enter the Product name: resistor
Enter the Product ID: res8520
Enter the quantity: 0
Invalid quantity

Enter the Product name: capacitor
Enter the Product ID: caps0987
Enter the quantity: -9
Invalid quantity

Enter the Product name: opamp
Enter the Product ID: ti85132
Enter the quantity: 80
If you want to enter another product [y/n]: n


========== ORDER SUMMARY ==========
The total valid products are: 1
The total quantity ordered is: 80
The average quantity per product is: 80.00
====================================
*/