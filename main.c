#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    //declaration of variables.
    int plane, passport_number, promocode,password,airline,login_sing_up,degree,go_go_and_back,last_choice,seats,payment,cridet,paypal;
    float main_price,weight, new_weight;
    char username[20] , nationality[20] ,email[20];


    //welcom section.
    printf("                    **************************\n");
    printf("                    *    welcom to our app   *\n");
    printf("                    **************************\n \n \n ");

    printf("******** \n");
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
    printf("                                   *******\n\n\n\n");

   //sign up or login section.
   start:
    printf("sign up==> 1    or    log_in==> 2\n==>");
    scanf("%d",&login_sing_up);
    switch(login_sing_up)
    {
    case 1 :
       printf("Enter your Username:\n==>");
    scanf("%s", username);

    printf("Enter your password:\n==>");
    scanf("%d", &password);

    printf("Enter your passport number:\n==>");
    scanf("%d", &passport_number);

    printf("Enter your nationality:\n==>");
    scanf("%s", nationality);

    printf("Enter your email:\n==>");
    scanf("%s", email);
        break;
    case 2 :
    user:
    printf("Enter your Username:\n==>");
    scanf("%s", username);
    if(strcmp(username,"sky_coders") == 0)
       {
       printf(" ");
       }
    else
    {
       printf("user name is not correct ): \n");
     goto user;
    }
    pass:
    printf("Enter your password:\n==>");
    scanf("%d", &password);
    if(password==2006)
       {
       printf(" ");
       }
    else
    {
    printf("password is not correct ): \n");
     goto pass;
    }
    printf("Enter your passport number:\n==>");
    scanf("%d", &passport_number);
    break;
    default:
    printf("the choice in not correct...\n");
    goto start;
    }


//air line section.
    plan:
    printf("select an air line... \n 1-Egypt air line. \n 2-Horus air lines.\n 3-Alex air lines. \n");
    scanf("%d",&airline);
    switch(airline)
    {
        case 1:
        printf("Egypt air lines\n");
    printf(" 1-  cairo ==> newyork    price 350$   time ==>9am  to 11am \n");
    printf(" 2-  cairo ==> hong kong  price 640$   time ==>10am to 11am\n");
    printf(" 3- cairo ==> spain      price 900$   time ==>9am  to 2am\n");
    printf(" 4-  cairo ==> dubai      price 780$   time ==>5pm  to 11pm\n");
    printf(" 5-  cairo ==> canada     price 520$   time ==>9am  to 3am\n\n");
    break;
        case 2:
         printf("Horus air lines\n");
    printf(" 6- luxor ==> newyork     price 350$   time ==>4am to 11am\n");
    printf(" 7-  luxor ==> hong kong  price 640$   time ==>5am to 11am\n");
    printf(" 8-  luxor ==> spain      price 900$   time ==>9pm to 8pm\n");
    printf(" 9- luxor ==> dubai       price 780$   time ==>7am to 7am\n");
    printf(" 10-  luxor ==> canada    price 520$   time ==>6am to 11am\n\n");
    break;
         case 3:
           printf("Alex air lines\n");
    printf(" 11- alex ==> newyork     price 350$   time ==>3am to 11pm\n");
    printf(" 12-  alex ==> hong kong  price 640$   time ==>7am to 2pm\n");
    printf(" 13-  alex ==> spain      price 900$   time ==>8am to 9am\n");
    printf(" 14-  alex ==> dubai      price 780$   time ==>3am to 1pm\n");
    printf(" 15-  alex ==> canada     price 520$   time ==>6am to 2am\n\n\n");
    break;
    default:
    printf("the choice in not correct...\n");
    goto plan;
    }


//the planes section.
    pri:
     printf("Enter the number of your plane...\n==>");
    scanf("%d",&plane);
    if(airline==1)
    {
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
            default:
    printf("Invalid plane number!\n");
    goto pri;
     }
    }
     else if(airline==2)
     {

        switch (plane)
     {
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
    default:
    printf("Invalid plane number!\n");
    goto pri;
     }
    }
    else if (airline==3)
    {
        switch (plane)
     {

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
        default:
    printf("Invalid plane number!\n");
    goto pri;
     }
    }


    //local or vip section.
     deg:
    printf("Enter the number of your degree \n 1- local \n 2- vip \n");
    scanf("%d",&degree);
    switch (degree)
     {
     case 1:
      break;
     case 2:
        main_price*= 2.9;
        break;
     default:
        printf("wrong select ....\n");
        goto deg;
     }




//type of seats section.
     set:
     printf("select your seat (A ==> 1 ) (B ==> 2) (c ==>3) \n==>");
     scanf("%d",&seats);
     switch(seats)
     {
     case 1:
        main_price*=1.5;
        break;
    case 2:
        main_price*=1.2;
        break;
    case 3:
        printf("");
        break;
    default:
         printf("wrong select ....\n");
        goto set;
     }



//weight of bags section.
     weig:
     printf("put the weight of your bags... \n (the maximum free weight is 30kg) \n(the plus weight is 10$ per kg) \n(maximum weight is 50kg )\n ==>");
     scanf("%f",&weight);
     if(weight<=30)
     {
         printf("");
     }
     else if(weight > 30 && weight <= 50)
     {
           new_weight=weight-30;
           main_price+= new_weight*10;
         printf("the price now is %f \n",main_price);
    }
    else
    {
        printf(" over weight....... put the weight again.");
    goto weig;
    }



    //go or go and back section.
     go:
    printf(" select you booking type \n 1- just go \n  2- go and back\n==>");
    scanf("%d",&go_go_and_back);
    switch(go_go_and_back)
    {
    case 1:
          printf("");
    break;
    case 2:
    main_price*=1.7;
      printf("");
    break;
     default:
        printf("wrong select ....\n");
        goto go;
    }




//promcode section. (40 or 60)
    promo:
    printf("Enter promocode (press 0 if you don't have one) ......\n==>");
    scanf("%d",&promocode);

    switch(promocode) {
        case 0:
            printf("You don't have a promocode\n");
            break;
        case 40:
            main_price*= 0.6;
            printf("Promocode 60% applied\n");
            break;
        case 60:
            main_price*= 0.4;
            printf("Promocode 40% applied \n");
            break;
        default:
            printf("Invalid promocode. \n");
            goto promo;
    }





//modify or keep going or cancle section.
    agin:
    printf("do you want to modify or cancle your booking ? \n 1- modify. \n  2-cancle. \n  3- continue\n==>");
    scanf("%d",&last_choice);
    switch(last_choice)
    {
    case 1:
        goto plan;
        break;
    case 2:
        printf("your booking has been canceled \n");
        goto end;
        break;
    case 3:
        printf(" ");
        break;
        default:
                printf("wrong select ....\n");
        goto agin;
    }



//payment method section.
       printf("select the payment method ... \n 1-cridet-card \n 2-pay pal \n ==>");
      scanf("%d",&payment);
      switch(payment)
      {
      case 1:
          printf("enter the cridet-card number..\n ==>");
          scanf("%d",&cridet);
    break;
      case 2:
           printf("enter the pay pal number..\n ==>");
          scanf("%d",&paypal);
        break;
      default:
                    printf("wrong select ....\n");
        goto agin;
      }

    //give the user informations about his booking .
    printf("*****************************************************************************\n");
    printf("your name is %s \n your passport number is %d \n",username,passport_number);
    printf("air line is : ");
    switch(airline)
    {
         case 1:
        printf("Egypt air lines\n");
        break;
          case 2:
        printf("Horus air lines\n");
         break;
                  case 3:
        printf("Alex air lines\n");
        break;
    }



        printf("Flight: ");
    switch(plane) {
        case 1:
         printf("Cairo ==> New York\n");
          break;
        case 2:
         printf("Cairo ==> London\n");
         break;
        case 3:
         printf("Cairo ==> Paris\n");
         break;
        case 4:
        printf("Cairo ==> Rome\n");
         break;
        case 5:
         printf("Cairo ==> Hong Kong\n");
          break;
          case 6:
         printf("luxor ==> New York\n");
          break;
        case 7:
         printf("luxor ==> London\n");
         break;
        case 8:
         printf("luxor ==> Paris\n");
         break;
        case 9:
        printf("luxor ==> Rome\n");
         break;
        case 10:
         printf("luxor ==> Hong Kong\n");
          break;
            case 11:
         printf("alex ==> New York\n");
          break;
        case 12:
         printf("alex==> London\n");
         break;
        case 13:
         printf("alex ==> Paris\n");
         break;
        case 14:
        printf("alex ==> Rome\n");
         break;
        case 15:
         printf("alex ==> Hong Kong\n");
          break;
    }



     switch(seats)
     {
     case 1:
        printf("your seat is A\n");
        break;
    case 2:
        printf("your seat is B\n");
        break;
    case 3:
        printf("your seat is c\n");
     }
     printf("the weight is : %f \n",weight);

    printf("your price now is %f \n", main_price);
    printf("your ticket has booked successfully (:\n");
    printf("*****************************************************************************");
   end:
    return 0;
    }
