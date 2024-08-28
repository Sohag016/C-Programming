#include<stdio.h>
main()
{


     printf("1.celsius to fahrenheit:\n ");
     printf("2.fahrenheit to celsius:\n ");
     printf("enter to choice: \n");
     int choice;
     scanf("%d",&choice);

     if(choice==1)
     {
         double f,c;
         printf("enter to celsius temprature:");
         scanf("%lf",&c);
         f=9/5*c+32;
         printf("fahrenheit:%lf\n",f);
     }
     else if(choice==2)
     {
      double f,c;
         printf("enter to fahrenheit temprature:");
         scanf("%lf",&f);
         c=(f-32)*5/9;
         printf("celsius:%lf\n",c);
     }
     else
     {
        printf("invalid insert:\n");

     }
     return 0;


}


