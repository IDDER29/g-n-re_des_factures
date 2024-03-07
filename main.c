#include <stdio.h>
#include <stdlib.h>


float TVA_price;
char First_name[20], payment_method[20];
float totalPrice_TTC;
float Original_price_HT, TVA_rate;
float total_price_of_HT = 0;

char creat_a_invoice()
{

   printf("\n#################################\n\n");
   printf("The invoice\n\n");
    printf("The name of the Customer : %s\n", First_name);
    printf("__________________________\n");
    printf("Total price of the products (HT) : %.2fDH\n", total_price_of_HT);
    printf("__________________________\n");
    printf("The TVA rate : %.2f%%\n", TVA_rate);
    printf("__________________________\n");
    printf("Amount of TVA : %.2fDH\n", TVA_price);
    printf("__________________________\n");
    printf("Payment method : %s\n", payment_method);
    printf("__________________________\n");
    printf("Total Price : %.2fDH\n", totalPrice_TTC);
    printf("\n#################################\n\n");


}

float calculateTheTotalPrice(float original_price_HT, float TVA_rate)
{

    TVA_price = total_price_of_HT * (TVA_rate/100);

    totalPrice_TTC = original_price_HT + TVA_price  ;


}

float calculat_The_total_price_of_HT()
{
    char permision;
    int i=1;
    do {
        printf("Enter The original price of the product %d : ", i);
        scanf("%f", &Original_price_HT);
        total_price_of_HT += Original_price_HT;

        printf("Do you want to add another product Y/n: ");

        scanf(" %c", &permision);
        i++;
    } while (permision == 'Y' || permision == 'y');




}




int main()
{

    printf("Enter First Name of the clint : ");
    scanf("%s", &First_name);
    printf("Enter the payment method : ");
    scanf("%s", &payment_method);

    calculat_The_total_price_of_HT();

    printf("Enter The TVA rate : ");
    scanf("%f", &TVA_rate);
    calculateTheTotalPrice(Original_price_HT, TVA_rate);

    creat_a_invoice();

    return 0;
}



