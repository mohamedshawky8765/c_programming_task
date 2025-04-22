#include <stdio.h>
#include <stdlib.h>

int main() {
    int plane, passport_number, promocode,password,airline,airline_time;
    float main_price, price_after_discount;
    char username[20];
    
    printf("*******                    welcom :) \n");
    printf(" *      *\n");
    printf("  *      *\n");
    printf("***        ********************************************\n");
    printf(" *          A                                I RRR     ********\n");
    printf("  *        A A    V  V   i    aaa    n       I R   R    ********\n");
    printf("   *      AAAAA    V     ii    a     nnnnn   I RRRRR            *\n");
    printf("    *    A     A     V    iii  aaaaa  nn     I  RRR             *\n");
    printf("     *******        *********************           **********\n");
    printf("          *        *                   *           *\n");
    printf("        *       *                     *         *\n");
    printf("      ********                       *        * \n");
    printf("                                    *       *\n");
    printf("                                   *******\n");

    printf("Enter your Username:\n");
    scanf("%s", username);
    if(username=="mohamed")
       {
       printf(" ");
       }
    else
    {
    printf("user name is not correct ...");
     goto end;
    }
    printf("Enter your password:\n");
    scanf("%d", &password);
    if(password==2006)
       {
       printf(" ");
       }
    else
    {
    printf("password is not correct ...");
     goto end;
    }
    printf("Enter your passport number:\n");
    scanf("%d", &passport_number);
    printf("select an air line \n Egypt air lines ==> 1 \n Horus air lines ==> 2 \n Alex air lines ==> 3\n");
    scanf("%d",&airline);
    switch(airline)
    {
        case 1:
        printf("Egypt air lines\n");
    printf("plane 1  cairo ==> newyork  price 350$\n");
    printf("plane 2  cairo ==> hong kong  price 640$\n");
    printf("plane 3  cairo ==> spain price 900$\n");
    printf("plane 4  cairo ==> dubai price 780$\n");
    printf("plane 5  cairo ==> canada price 520$\n\n");
    break;
        case 2:
         printf("Horus air lines\n");
    printf("plane 6 luxor ==> newyork price 350$\n");
    printf("plane 7  luxor ==> hong kong price 640$\n");
    printf("plane 8  luxor ==> spain price 900$\n");
    printf("plane 9 luxor ==> dubai price 780$\n");
    printf("plane 10  luxor ==> canada price 520$\n\n");
    break;
         case 3:
           printf("Alex air lines\n");
    printf("plane  11 alex ==> newyork price 350$\n");
    printf("plane  12  alex ==> hong kong price 640$\n");
    printf("plane  13  alex ==> spain price 900$\n");
    printf("plane  14  alex ==> dubai price 780$\n");
    printf("plane  15  alex ==> canada price 520$\n\n\n");
    break;
    }

    printf("airline 1  from 8am to 4pm \n");
    printf("airline 2  from 4pm to 12am \n");
    printf("airline 3  from 12am to 8am \n\n");

    printf("Enter the number of your plane and the time :\n");
    scanf("%d %d",&plane,&airline_time);
    switch (plane)
     {
     case 1:
      main_price=350;
      break;
     case 2:
        main_price=640;
      break;
     case 3:
        main_price=900;
        break;
     case 4:
        main_price=780;
        break;
     case 5:
        main_price=520;
        break;
      case 6:
      main_price=350;
      break;
     case 7:
        main_price=640;
      break;
     case 8:
        main_price=900;
        break;
     case 9:
        main_price=780;
        break;
     case 10:
        main_price=520;
        break;
     case 11:
      main_price=350;
      break;
     case 12:
        main_price=640;
      break;
     case 13:
        main_price=900;
        break;
     case 14:
        main_price=780;
        break;
     case 15:
        main_price=520;
        break;
     }

    printf("Enter promocode (press 0 if you don't have one):\n");
    scanf("%d", &promocode);

    switch(promocode) {
        case 0:
            printf("You don't have a promocode. The price is %f\n", main_price);
            break;
        case 40:
            price_after_discount = main_price - (main_price * .4);
            printf("Promocode applied. The discounted price is %f\n", price_after_discount);
            break;
        case 60:
            price_after_discount = main_price - (main_price * .6);
            printf("Promocode applied. The discounted price is %f\n", price_after_discount);
            break;
        default:
            printf("Invalid promocode. The price remains %f\n", main_price);
    }
    printf("your ticket has booked");
    end:
    return 0;
}