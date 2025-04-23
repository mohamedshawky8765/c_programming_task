#include <stdio.h>
#include <stdlib.h>

int main() {
    int plane, passport_number, promocode,password,airline,login_sing_up,degree;
    float main_price, price_after_discount;
    char username[20];
    void log_in(char,int,int);
     void sign_up(char,int,int);


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

    printf(" sign up==> 1 \n   log_in==> 2\n");
    scanf("%d",&login_sing_up);
    switch(login_sing_up)
    {
    /*case 1 :
        log_in(username,password,passport_number);
        break;*/
    case 1 :
        sign_up(username,password,passport_number);
        break;
    }

    printf("select an air line \n Egypt air lines ==> 1 \n Horus air lines ==> 2 \n Alex air lines ==> 3\n");
    scanf("%d",&airline);
    switch(airline)
    {
        case 1:
        printf("Egypt air lines\n");
    printf("plane 1  cairo ==> newyork  price 350$   time ==>9am to 11am \n");
    printf("plane 2  cairo ==> hong kong  price 640$ time ==>10am to 11am\n");
    printf("plane 3  cairo ==> spain price 900$ time ==>9am to 2am\n");
    printf("plane 4  cairo ==> dubai price 780$ time ==>5pm to 11pm\n");
    printf("plane 5  cairo ==> canada price 520$ time ==>9am to 3am\n\n");
    break;
        case 2:
         printf("Horus air lines\n");
    printf("plane 6 luxor ==> newyork price 350$ time ==>4am to 11am\n");
    printf("plane 7  luxor ==> hong kong price 640$ time ==>5am to 11am\n");
    printf("plane 8  luxor ==> spain price 900$time ==>9pm to 8pm\n");
    printf("plane 9 luxor ==> dubai price 780$ time ==>7am to 7am\n");
    printf("plane 10  luxor ==> canada price 520$ time ==>6am to 11am\n\n");
    break;
         case 3:
           printf("Alex air lines\n");
    printf("plane  11 alex ==> newyork price 350$ time ==>3am to 11pm\n");
    printf("plane  12  alex ==> hong kong price 640$ time ==>7am to 2pm\n");
    printf("plane  13  alex ==> spain price 900$ time ==>8am to 9am\n");
    printf("plane  14  alex ==> dubai price 780$ time ==>3am to 1pm\n");
    printf("plane  15  alex ==> canada price 520$ time ==>6am to 2am\n\n\n");
    break;
    }

    printf("Enter the number of your plane :\n");
    scanf("%d ",&plane);
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
         printf("Enter the number of your degree ( 1 ==> local) ( 2 ==vip ):\n");
    scanf("%f",&degree);
    switch (degree)
     {
     case 2:
        main_price+= 500;
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

void sign_up(char username,int password,int passport_number)
{
    printf("Enter your Username:\n");
    scanf("%s", username);

    printf("Enter your password:\n");
    scanf("%d", &password);


    printf("Enter your passport number:\n");
    scanf("%d", &passport_number);

}
/*void log_in(char username,int password,int passport_number)
{
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
}*/

