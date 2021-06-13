#include<stdio.h>
#include<conio.h>

main()

{int c,r,s,a,ph,q;
char z[50],ch,p[50]={"Guest"},ad[100],pa[20]={"no password"};
system("color 27");
printf("\n\n\t\t\t\t\tWelcome to our online shopping app\n\n");
aa:printf("\n1.Login\n2.Sign up\n3.Skip\n4.Exit\n:");
scanf("%u",&s);
if(s==1){fflush(stdin);
printf("Please Enter your Name :");fflush(stdin);
gets(p);fflush(stdin);
printf("Password:");
gets(pa);fflush(stdin);
printf("You are now logged in\n\n");
goto a;
}
if(s==2)
{printf("Please Enter your Name :");
fflush(stdin);
gets(p);
    printf("create a Password which includes combination of symbols,alphebets,numbers:");fflush(stdin);
gets(pa);
printf("Enter your address:");fflush(stdin);
gets(ad);
printf("Your Account has been created successfully\n\n");
goto a;
}
if(s==3)
    goto a;
if(s==4)
    goto e;
else
    {printf("Please choose correct option!\n");
        goto aa;}
a:printf("\nPlease choose one option\n");
abc:printf("1.Shopping\n2.Account settings\n3.About\n4.Main menu\n5.exit\n:");
scanf("%u",&c);
switch (c)
{
case 1 :{ka:
    printf("\n1.Smart Phones\n2.Personal health & wellness\n3.Laptops\n4.Recharge\n: ");
scanf("%u",&s);
switch(s)
{//SMART PHONES
    case 1:aq:printf("choose a brand\n1.Mi\n2.Samsung\n3.oppo\n4.Apple\n");
    scanf("%u",&s);
    switch(s)
    {//MI SMARTPHONES
       case 1:mi:printf("\n1.Mi 10T pro 5G(8GB RAM,128GB Storage----Price RS:36,999\n2.Mi 10i pro 5G(8GB RAM,128GB Storage,108 MP Quad camera)----Price RS:23,999\n3.Mi 11X 5G(6GB RAM,128GB Storage)----Price RS:29,999\n4.Mi redmi 8 (4GB RAM,64GB ROM)----Price RS:10,490\n5.Mi Xiaomi A2(4GB RAM,64GB ROM)----Price RS:14,999\n");
scanf("%u",&s);
if(s==1)
{mi1:printf("You have choosen MI 10T pro 5G\n1.Buy\n2.exit\n3.Main menu\n:");
scanf("%u",&s);

if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
   exit(1);
   if(s==3)
    goto aa;
    else
        {printf("\nPlease choose a correct option!\n");
        goto mi1;}
    }

if(s==2)
{mi2:printf("You have choosen Mi 10i pro 5G(8GB RAM,128GB Storage,108 MP Quad camera)\n1.Buy\n2.exit\n3.Main menu\n:");
scanf("%u",&s);
if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
    else
        {printf("\nPlease choose a correct option!\n");
        goto mi2;}}

if(s==3)
{mi3:printf("You have choosen Mi 11X 5G(6GB RAM,128GB Storage)\n1.Buy\n2.exit\n3.Main menu\n:");
scanf("%u",&s);
if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
   exit(1);
    if(s==3)
    goto aa;
    else
        {printf("\nPlease choose a correct option!\n");
        goto mi3;}}

if(s==4)
{mi4:printf("You have choosen Mi redmi 8 (4GB RAM,64GB ROM)\n1.Buy\n2.exit\n3.Main menu\n:");
scanf("%u",&s);
if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
    else
        {printf("\nPlease choose a correct option!\n");
        goto mi4;}}

if(s==5)
{mi5:printf("You have choosen Mi Xiaomi A2(4GB RAM,64GB ROM)\n1.Buy\n2.exit\n3.Main menu\n:");
scanf("%u",&s);
if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
    else
        {printf("\nPlease choose a correct option!\n");
        goto mi5;}}
 else
 {printf("\nPlease choose a correct option!\n");
 goto mi;

 }
//SAMSUNG SMARTPHONES
case 2:sam:printf("\n1.Samsung Galaxy M42 5G(6RAM,128ROM)---Price RS:21,999\n2.Samsung Galaxy M31(6RAM,128ROM)---Price RS:14,999\n3.Samsung Galaxy M11(4GB RAM,64 ROM) Price RS:9,499\n:");
scanf("%u",&s);
if(s==1)
{s1:printf("You have choosen Samsung Galaxy M42 5G(6RAM,128ROM)\n1.Buy\n2.exit\n3.Main menu\n:");
scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
     exit(1);
      if(s==3)
    goto aa;
    else
        {printf("\nPlease choose a correct option!\n");
        goto s1;}}

if(s==2)
{s2:printf("You have choosen Samsung Galaxy M31(6RAM,128ROM)\n1.Buy\n2.exit\n3.Main menu\n:");
scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
    else
        {printf("\nPlease choose a correct option!\n");
        goto s2;}}

if(s==3)
{s3:printf("You have choosen Samsung Galaxy M11(4GB RAM,64 ROM\n1.Buy\n2.exit\n3.Main menu\n:");
scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
    else
        {printf("\nPlease choose a correct option!\n");
        goto s3;}}
else
 {printf("\nPlease choose a correct option!\n");
 goto sam;

 }

//OPPO SMARTPHONES
case 3:op:printf("\n1.Oppo F19(6RAM,128ROM)---Price RS:18,990\n2.Oppo A31(6RAM,128ROM)---Price RS:11,490\n:");
scanf("%u",&s);
if(s==1)
{op11:printf("You have choosen Oppo F19(6RAM,128ROM\n1.Buy\n2.exit\n3.Main menu\n:");
  scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
else
        {printf("\nPlease choose a correct option!\n");
        goto op11;}
        }

if(s==2)
{op2:printf("You have choosen Oppo A31(6RAM,128ROM\n1.Buy\n2.exit\n3.Main menu\n:");
  scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
     else
        {printf("\nPlease choose a correct option!\n");
        goto op2;}
        }
 else
 {printf("\nPlease choose a correct option!\n");
 goto op;}

//APPLE SMARTPHONES
case 4:appl:printf("\n1.New Apple iPhone 12 Mini(64GB)--Price RS:62,900\n2.New Apple iPhone 11(128GB)--Price RS:59,900\n3.New Apple iPhone 12 Pro(128GB)--Price RS:1,15,100");
   scanf("%u",&s);
if(s==1)
{ap1:printf("You have choosen New Apple iPhone 12 Mini\n1.Buy\n2.exit\n3.Main menu\n:");
    scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
   exit(1);
    if(s==3)
    goto aa;
     else
        {printf("\nPlease choose a correct option!\n");
        goto ap1;}}

    if(s==2)
{ap2:printf("You have choosen New Apple iPhone 11\n1.Buy\n2.exit\n3.Main menu\n:");
    scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
     else
        {printf("\nPlease choose a correct option!\n");
        goto ap2;}}

    if(s==3)
{ap3:printf("You have choosen New Apple iPhone 12 Pro\n1.Buy\n2.exit\n3.Main menu\n:");
    scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
     else
        {printf("\nPlease choose a correct option!\n");
        goto ap3;}}
 else
 {printf("\nPlease choose a correct option!\n");
 goto appl;
     }


default:{printf("\nPlease choose a correct option!\n\n");
goto aq;}
}
//PERSONAL HEALTH AND WELLNESS
case 2:mn:printf("\n1.HealthSense Ultra-Lite PS 126 Digital Personal Body Weighing Scale--Price RS:1499\n2.Omron MC 246 DIgital Thermometer--Price RS:260\n3.Oral B cross Action Battery Powered Toothbrush--Price RS:539\n");
scanf("%u",&s);
if(s==1)
{hul1:printf("You have selected HealthSense Ultra-Lite PS 126 Digital Personal Body Weighing Scale\n1.Buy\n2.exit\n3.Main menu\n:");
      scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
     exit(1);
      if(s==3)
    goto aa;
     else
        {printf("\nPlease choose a correct option!\n");
        goto hul1;}
}
if(s==2)
{hul2:printf("You have selected Omron MC 246 DIgital Thermometer\n1.Buy\n2.exit\n3.Main menu\n:");
      scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
   exit(1);
    if(s==3)
    goto aa;
      else
        {printf("\nPlease choose a correct option!\n");
        goto hul2;}
}

if(s==3)
{hul3:printf("You have selected Oral B cross Action Battery Powered Toothbrush\n1.Buy\n2.exit\n3.Main menu\n:");
      scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
      else
        {printf("\nPlease choose a correct option!\n");
        goto hul3;}
}
else
    {printf("\nPlease choose a correct option!\n");
goto mn;}

case 3:lt:printf("\n1.HP 14(2021)--Price Rs:29,990\n2.HP 15 AMD Athlon--Price RS:27,999\n3.Lenovo ideaPad 3(11th Gen intel core i5)\n4.HP 14 Ryzen 3 4300U--Price RS;39490\n");
scanf("%u",&s);
if(s==1)
{lt1:printf("You have selected HP 14(2021)\n1.Buy\n2.exit\n3.Main menu\n:");
      scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
      else
        {printf("\nPlease choose a correct option!\n");
        goto lt1;}
}
if(s==2)
{lt2:printf("You have selected HP 15 AMD Athlon\n1.Buy\n2.exit\n3.Main menu\n:");
      scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
    exit(1);
     if(s==3)
    goto aa;
     else
        {printf("\nPlease choose a correct option!\n");
        goto lt2;}
}
if(s==3)
{lt3:printf("You have selected Lenovo ideaPad 3(11th Gen intel core i5)\n1.Buy\n2.exit\n3.Main menu\n:");
      scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
     exit(1);
      if(s==3)
    goto aa;
     else
        {printf("\nPlease choose a correct option!\n");
        goto lt3;}
}
if(s==4)
{lt4:printf("You have selected HP 14 Ryzen 3 4300U\n1.Buy\n2.exit\n3.Main menu\n:");
      scanf("%u",&s);
    if(s==1)
{printf("Your product has been ordered\n\n");
goto a;}
if(s==2)
   exit(1);
    if(s==3)
    goto aa;
     else
        {printf("\nPlease choose a correct option!\n");
        goto lt4;}
}

else
    {printf("\nPlease choose a correct option!\n");
goto lt;}


case 4:rec:printf("Select your Operator\n1.Jio\n2.Airtel\n3.Vodafone\n4.Idea\n5.BSNL\n:");
scanf("%u",&s);
if(s==1||s==2||s==3||s==4||s==5)
{printf("Enter your number:\n+91");
scanf("%u",&s);
rec2:printf("Choose a plan \n1.RS 199 1.5 GB/DAy for 28 days,Unliminted calling,100 sms/day \n2.399 1.5GB/Day for 84 days,Unliminted calling,100 sms/day\n:");
scanf("%u",&s);
if(s==1)
    a=199;
if(s==2)
    a=399;
    else
    {printf("\nPlease choose a correct option!\n\n");
    goto rec2;}
printf("Recharge Successful  MRP:RS %d,TransID 187648468 1.5 GB data and 100 sms per day\n",a);
goto a;}
else
{printf("\nPlease choose a correct option!\n\n");
    goto rec;
}


default:printf("\nPlease choose a correct option!\n");
goto ka;
}

}

//ACCOUNT SETTINGS
case 2 :as:printf("\n1.Change Name\n2.Add Address\n3.Add Phone number\n4.change password\n:");
scanf("%u",&q);
if(q==1)
{printf("Please enter your new Name: ");fflush(stdin);
gets(z);
printf("\nAre you sure you want to change name from ");
puts(p);
printf(" to ");
puts(z);
printf("Enter Y for Yes and N for NO\n:");m:
scanf("%c",&ch);
if(ch=='Y'||ch=='y')
   {printf("Name successfully changed from ");
puts(p);
printf(" to ");
puts(z);
printf("\n\n");
goto a;}
if(ch=='N'||ch=='n')
    {printf("name saved as default ");
puts(p);
goto a;}
if(ch!='Y'||ch!='y'||ch!='N'||ch!='n')
    printf("Please enter Y for Yes and N for NO\n:");
goto m;
}
if(q==2)
{printf("Enter your address:");fflush(stdin);
gets(ad);
printf("Your address have been saved as ");
puts(ad);
    printf("\n\n");
    goto a;
}
if(q==3)
{printf("Enter your phone number :+91");
scanf("%u",&ph);
    printf("\nphone number saved as +91%d\n\n",ph);
    goto a;}
if(q==4)
    {printf("Enter a new password:");
    fflush(stdin);
    gets(pa);
    printf("Password changed successfully\n");
    goto a;}

    else
    {printf("\nPlease choose a correct option!\n");
    goto as;
    }
//ABOUT

case 3:printf("version 1.1.1\nlaunch date:11/jun/2021 12:00pm\ndeveloper:Tufiel Gulzar\naddress:Nillow,Kulgam,Kashmir pin 19231\nFor any isssue you can whats app phone:+916006522041,fb:https://www.facebook.com/TufailRather01\nPress any key to continue\n");
_getch();
goto a;

case 4:goto aa;

case 5 :e:printf("Thanks for shopping\n");
printf("Rate our app\n1.Yes 2.No thanks\n");
scanf("%u",&r);
if(r==1)
{printf("Enter number of stars out of 5:\n");
scanf("%u",s);
exit(1);}
 if(r==2)
 {printf("\nThanks for shopping\n");
exit(1);}

default:printf("Please choose correct option!\n\n");
goto abc;
}


}
