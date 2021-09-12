
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
void insertresult();
void displayresult();
void deleteresult();
void searchresult();
void quit();
void firstsem();
void secondsem();
void thirdsem();
void fourthsem();
void fifthsem();
void sixthsem();
void seventhsem();
void eighthsem();
void firstsemdisplay();
void secondsemdisplay();
void thirdsemdisplay();
void fourthsemdisplay();
void fifthsemdisplay();
void sixthsemdisplay();
void seventhsemdisplay();
void eighthsemdisplay();
void fail();
void wronginput();
void semwronginput();
//void newinput();
FILE *fp1,*fp2,*fp3,*fp4,*fp5,*fp6,*fp7,*fp8,*fp11;
struct subject
{
 char engI[1],mathsI[1],digital[1],comfundaapp[1],plt[1];
 char fee[1],mathsII[1],cp[1],account[1],btc[1],pro[1],name[50];
 char mp[1],dsa[1],oop[1],sad[1],fa2[1];
 char vp[1],nm[1],os[1],dms[1],cg[1],p2[1];
 char ndc[1],ca[1],wt[1],jp[1],mis[1];
 char mt[1],sen[1],wt2[1],sta[1],pro3[1];
 char ecom[1],eco[1],ele1[1],intern[1];
 char linux[1],orma[1],fpro[1],ele2[1];
 float a,b,c,d,e,f,sgpa,minper,maxper;
 int minmarks[6],maxmarks[6],i,semno;
}s={0};
int choice=0;
int schoice=0;
main()
{
 //extern struct subject s;
  //code to display menu
    //clrscr();
 while(1)
  {
  printf("\n\t\t****************************************************");
  printf("\n\t\t****************************************************");
  printf("\n\t\t***WELCOME TO YOU IN BCA RESULT CALCULATON SYSTEM***");
  printf("\n\t\t****************************************************");
  printf("\n\t\t****************************************************");
  printf("\n\t\t***********************MENU*************************");
  printf("\n\t\t****************************************************");
  printf("\n\t\t\t\t1. Insert Result");
  printf("\n\t\t\t\t2. Display Result");
  printf("\n\t\t\t\t3. Delete Result");
  printf("\n\t\t\t\t4. Search Result");
  printf("\n\t\t\t\t5. Quit");
  printf("\n\n\tEnter your choice between 1 to 5    :  ");
  scanf("%d",&choice);
  if(choice == 1)
       { //code to call insertData function
     insertresult();
     //break;
             }
  else if(choice == 2)
    {//code to call displayData function
     displayresult();
     //break;
             }
  
  else if(choice == 3)
    {//code to call deleteData function
     
     deleteresult();
     //break;
             }
  else if(choice == 4)
    {
                 //code to call searchdata function
     searchresult();
     //break;
            }
        else if(choice == 5)
            quit();
  else
    {
     printf("\nSORRY!!! You entered an invalid choice ");
     printf("\n Please, enter the valid choice between 1 to 6 ");
     getch();
    }
  }       
}
//struct subject s={0};
void insertresult()
{
 //clrscr();
 
  s.minper=0;
  s.maxper=0;
  printf("\n\t\t\t\t1.   First   Semester");
  printf("\n\t\t\t\t2.   Second  Semester");
  printf("\n\t\t\t\t3.   Third   Semester");
  printf("\n\t\t\t\t4.   Fourth  Semester");
  printf("\n\t\t\t\t5.   Fifth   Semester");
  printf("\n\t\t\t\t6.   Sixth   Semester");
  printf("\n\t\t\t\t7.   Seventh Semester");
  printf("\n\t\t\t\t8.   Eighth  Semester");
  printf("\n\nChoose your semester between 1 to 8    :  ");
  scanf("%d",&schoice);
  switch(schoice)
  {
   case 1:
  
     firstsem();
     break;
  case 2:
     secondsem();
     break;
  case 3:
     thirdsem();
     break;
  case 4:
     fourthsem();
     break;
  case 5:
                 
     fifthsem();
     break;
        case 6:
           sixthsem();
           break;
         case 7:
     seventhsem();
     break;
  case 8:
     eighthsem();
     break; 
            
  default:
     semwronginput();
     getch();
  }
}

void firstsem()
{
 printf("\nPlease input your Good Name:");
 fflush(stdin);
 gets(s.name);
 printf("\nPlease input following information:");
 printf("\n\nGrade you have got in English I(for example: A or a-)           :");
 scanf("%s",s.engI);
 fflush(stdin);
 strlwr(s.engI);
 s.a=strcmp(s.engI,"a");
 if(s.a==0)
 s.a=4;
 else
 {
  s.a=strcmp(s.engI,"a-");
  if(s.a==0)
  s.a=3.7f;
  
  else
  {
   s.a=strcmp(s.engI,"b+");
   if(s.a==0)
   s.a=3.3f;
   else
   {
    s.a=strcmp(s.engI,"b");
    if(s.a==0)
    s.a=3.0;
    else
    {
     s.a=strcmp(s.engI,"b-");
     if(s.a==0)
     s.a=2.7f;
     else
     {
      s.a=strcmp(s.engI,"c+");
      if(s.a==0)
      s.a=2.3f;
      else
      {
       s.a=strcmp(s.engI,"c");
       if(s.a==0)
       s.a=2.0;
       else
       {
        s.a=strcmp(s.engI,"c-");
        if(s.a==0)
        s.a=1.7f;
        else
        {
         s.a=strcmp(s.engI,"d+");
         if(s.a==0)
         s.a=1.3f;
         else
         {
          s.a=strcmp(s.engI,"d");
          if(s.a==0)
          s.a=1.0;
          else
          {
           s.a=strcmp(s.engI,"f");
           if(s.a==0)
           {
            s.a=0;
           }
           else
           {
            wronginput();
           }
           
           
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 printf("\nGrade you have got in Mathematics I                           :");
 scanf("%s",s.mathsI);
 strlwr(s.mathsI);
 s.b=strcmp(s.mathsI,"a");
 if(s.b==0)
 s.b=4;
 else
 {
  s.b=strcmp(s.mathsI,"a-");
  if(s.b==0)
  s.b=3.7f;
  else
  {
   s.b=strcmp(s.mathsI,"b+");
   if(s.b==0)
   s.b=3.3f;
   else
   {
    s.b=strcmp(s.mathsI,"b");
    if(s.b==0)
    s.b=3.0;
    else
    {
     s.b=strcmp(s.mathsI,"b-");
     if(s.b==0)
     s.b=2.7f;
     else
     {
      s.b=strcmp(s.mathsI,"c+");
      if(s.b==0)
      s.b=2.3f;
      else
      {
       s.b=strcmp(s.mathsI,"c");
       if(s.b==0)
       s.b=2.0;
       else
       {
        s.b=strcmp(s.mathsI,"c-");
        if(s.b==0)
        s.b=1.7f;
        else
        {
         s.b=strcmp(s.mathsI,"d+");
         if(s.b==0)
         s.b=1.3f;
         else
         {
          s.b=strcmp(s.mathsI,"d");
          if(s.b==0)
          s.b=1.0;
          else
          {
           s.b=strcmp(s.mathsI,"f");
           if(s.b==0)
           {
            s.b=0;
           }
            else
            wronginput();
           
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 printf("\nGrade you have got in Digital Logic Systems                 :");
 scanf("%s",s.digital);
 strlwr(s.digital);
 s.c=strcmp(s.digital,"a");
 if(s.c==0)
 s.c=4;
 else
 {
  s.c=strcmp(s.digital,"a-");
  if(s.c==0)
  s.c=3.7f;
  else
  {
   s.c=strcmp(s.digital,"b+");
   if(s.c==0)
   s.c=3.3f;
   else
   {
    s.c=strcmp(s.digital,"b");
    if(s.c==0)
    s.c=3.0;
    else
    {
     s.c=strcmp(s.digital,"b-");
     if(s.c==0)
     s.c=2.7f;
     else
     {
      s.c=strcmp(s.digital,"c+");
      if(s.c==0)
      s.c=2.3f;
      else
      {
       s.c=strcmp(s.digital,"c");
       if(s.c==0)
       s.c=2.0;
       else
       {
        s.c=strcmp(s.digital,"c-");
        if(s.c==0)
        s.c=1.7f;
        else
        {
         s.c=strcmp(s.digital,"d+");
         if(s.c==0)
         s.c=1.3f;
         else
         {
          s.c=strcmp(s.digital,"d");
          if(s.c==0)
          s.c=1.0;
          else
          {
           s.c=strcmp(s.digital,"f");
           if(s.c==0)
           {
            s.c=0;
           }
           else
           wronginput();
           
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 printf("\nGrade you have got in Computer Fundamental and Application :");
 scanf("%s",s.comfundaapp);
 strlwr(s.comfundaapp);
 s.d=strcmp(s.comfundaapp,"a");
 if(s.d==0)
 s.d=4;
 else
 {
  s.d=strcmp(s.comfundaapp,"a-");
  if(s.d==0)
  s.d=3.7f;
  else
  {
   s.d=strcmp(s.comfundaapp,"b+");
   if(s.d==0)
   s.d=3.3f;
   else
   {
    s.d=strcmp(s.comfundaapp,"b");
    if(s.d==0)
    s.d=3.0;
    else
    {
     s.d=strcmp(s.comfundaapp,"b-");
     if(s.d==0)
     s.d=2.7f;
     else
     {
      s.d=strcmp(s.comfundaapp,"c+");
      if(s.d==0)
      s.d=2.3f;
      else
      {
       s.d=strcmp(s.comfundaapp,"c");
       if(s.d==0)
       s.d=2.0;
       else
       {
        s.d=strcmp(s.comfundaapp,"c-");
        if(s.d==0)
        s.d=1.7f;
        else
        {
         s.d=strcmp(s.comfundaapp,"d+");
         if(s.d==0)
         s.d=1.3f;
         else
         {
          s.d=strcmp(s.comfundaapp,"d");
          if(s.d==0)
          s.d=1.0;
          else
          {
           s.d=strcmp(s.comfundaapp,"f");
           if(s.d==0)
           {
            s.d=0;
           }
           
           else
           wronginput(); 
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 printf("\nGrade you have got in Programmming Logic and Technique     :");
 scanf("%s",s.plt);
 strlwr(s.plt);
 s.e=strcmp(s.plt,"a");
 if(s.e==0)
 s.e=4;
 else
 {
  s.e=strcmp(s.plt,"a-");
  if(s.e==0)
  s.e=3.7f;
  else
  {
   s.e=strcmp(s.plt,"b+");
   if(s.e==0)
   s.e=3.3f;
   else
   {
    s.e=strcmp(s.plt,"b");
    if(s.e==0)
    s.e=3.0;
    else
    {
     s.e=strcmp(s.plt,"b-");
     if(s.e==0)
     s.e=2.7f;
     else
     {
      s.e=strcmp(s.plt,"c+");
      if(s.e==0)
      s.e=2.3f;
      else
      {
       s.e=strcmp(s.plt,"c");
       if(s.e==0)
       s.e=2.0;
       else
       {
        s.e=strcmp(s.plt,"c-");
        if(s.e==0)
        s.e=1.7f;
        else
        {
         s.e=strcmp(s.plt,"d+");
         if(s.e==0)
         s.e=1.3f;
         else
         {
          s.e=strcmp(s.plt,"d");
          if(s.e==0)
          s.e=1.0;
          else
          {
           s.e=strcmp(s.plt,"f");
           if(s.e==0)
           {
            s.e=0;
           }
           else
           wronginput();
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 if(s.a==4)
 {
  s.minmarks[0]=90;
  s.maxmarks[0]=100;
 }
 else if(s.a==3.7f)
 {
  s.minmarks[0]=85;
  s.maxmarks[0]=89;
 }
 else if(s.a==3.3f)
 {
  s.minmarks[0]=80;
  s.maxmarks[0]=84;
 }
 else if(s.a==3)
 {
  s.minmarks[0]=75;
  s.maxmarks[0]=79;
 }
 else if(s.a==2.7f)
 {
  s.minmarks[0]=70;
  s.maxmarks[0]=74;
 }
 else if(s.a==2.3f)
 {
  s.minmarks[0]=65;
  s.maxmarks[0]=69;
 }
 else if(s.a==2)
 {
  s.minmarks[0]=60;
  s.maxmarks[0]=64;
 }
 else if(s.a==1.7f)
 {
  s.minmarks[0]=55;
  s.maxmarks[0]=59;
 }
 else if(s.a==1.3f)
 {
  s.minmarks[0]=50;
  s.maxmarks[0]=54;
 }
 else if(s.a==1)
 {
  s.minmarks[0]=45;
  s.maxmarks[0]=49;
 }
 else
 {
  s.minmarks[0]=0;
  s.maxmarks[0]=44;
 }
 
 if(s.b==4)
 {
  s.minmarks[1]=90;
  s.maxmarks[1]=100;
 }
 else if(s.b==3.7f)
 {
  s.minmarks[1]=85;
  s.maxmarks[1]=89;
 }
 else if(s.b==3.3f)
 {
  s.minmarks[1]=80;
  s.maxmarks[1]=84;
 }
 else if(s.b==3)
 {
  s.minmarks[1]=75;
  s.maxmarks[1]=79;
 }
 else if(s.b==2.7f)
 {
  s.minmarks[1]=70;
  s.maxmarks[1]=74;
 }
 else if(s.b==2.3f)
 {
  s.minmarks[1]=65;
  s.maxmarks[1]=69;
 }
 else if(s.b==2)
 {
  s.minmarks[1]=60;
  s.maxmarks[1]=64;
 }
 else if(s.b==1.7f)
 {
  s.minmarks[1]=55;
  s.maxmarks[1]=59;
 }
 else if(s.b==1.3f)
 {
  s.minmarks[1]=50;
  s.maxmarks[1]=54;
 }
 else if(s.b==1)
 {
  s.minmarks[1]=45;
  s.maxmarks[1]=49;
 }
 else
 {
  s.minmarks[1]=0;
  s.maxmarks[1]=44;
 }
 if(s.c==4)
 {
  s.minmarks[2]=90;
  s.maxmarks[2]=100;
 }
 else if(s.c==3.7f)
 {
  s.minmarks[2]=85;
  s.maxmarks[2]=89;
 }
 else if(s.c==3.3f)
 {
  s.minmarks[2]=80;
  s.maxmarks[2]=84;
 }
 else if(s.c==3)
 {
  s.minmarks[2]=75;
  s.maxmarks[2]=79;
 }
 else if(s.c==2.7f)
 {
  s.minmarks[2]=70;
  s.maxmarks[2]=74;
 }
 else if(s.c==2.3f)
 {
  s.minmarks[2]=65;
  s.maxmarks[2]=69;
 }
 else if(s.c==2)
 {
  s.minmarks[2]=60;
  s.maxmarks[2]=64;
 }
 else if(s.c==1.7f)
 {
  s.minmarks[2]=55;
  s.maxmarks[2]=59;
 }
 else if(s.c==1.3f)
 {
  s.minmarks[2]=50;
  s.maxmarks[2]=54;
 }
 else if(s.c==1)
 {
  s.minmarks[2]=45;
  s.maxmarks[2]=49;
 }
 else
 {
  s.minmarks[2]=0;
  s.maxmarks[2]=44;
 }
 if(s.d==4)
 {
  s.minmarks[3]=90;
  s.maxmarks[3]=100;
 }
 else if(s.d==3.7f)
 {
  s.minmarks[3]=85;
  s.maxmarks[3]=89;
 }
 else if(s.d==3.3f)
 {
  s.minmarks[3]=80;
  s.maxmarks[3]=84;
 }
 else if(s.d==3)
 {
  s.minmarks[3]=75;
  s.maxmarks[3]=79;
 }
 else if(s.d==2.7f)
 {
  s.minmarks[3]=70;
  s.maxmarks[3]=74;
 }
 else if(s.d==2.3f)
 {
  s.minmarks[3]=65;
  s.maxmarks[3]=69;
 }
 else if(s.d==2)
 {
  s.minmarks[3]=60;
  s.maxmarks[3]=64;
 }
 else if(s.d==1.7f)
 {
  s.minmarks[3]=55;
  s.maxmarks[3]=59;
 }
 else if(s.d==1.3f)
 {
  s.minmarks[3]=50;
  s.maxmarks[3]=54;
 }
 else if(s.d==1)
 {
  s.minmarks[3]=45;
  s.maxmarks[3]=49;
 }
 else
 {
  s.minmarks[3]=0;
  s.maxmarks[3]=44;
 }
 if(s.e==4)
 {
  s.minmarks[4]=90;
  s.maxmarks[4]=100;
 }
 else if(s.e==3.7f)
 {
  s.minmarks[4]=85;
  s.maxmarks[4]=89;
 }
 else if(s.e==3.3f)
 {
  s.minmarks[4]=80;
  s.maxmarks[4]=84;
 }
 else if(s.e==3)
 {
  s.minmarks[4]=75;
  s.maxmarks[4]=79;
 }
 else if(s.e==2.7f)
 {
  s.minmarks[4]=70;
  s.maxmarks[4]=74;
 }
 else if(s.e==2.3f)
 {
  s.minmarks[4]=65;
  s.maxmarks[4]=69;
 }
 else if(s.e==2)
 {
  s.minmarks[4]=60;
  s.maxmarks[4]=64;
 }
 else if(s.e==1.7f)
 {
  s.minmarks[4]=55;
  s.maxmarks[4]=59;
 }
 else if(s.e==1.3f)
 {
  s.minmarks[4]=50;
  s.maxmarks[4]=54;
 }
 else if(s.e==1)
 {
  s.minmarks[4]=45;
  s.maxmarks[4]=49;
 }
 else
 {
  s.minmarks[4]=0;
  s.maxmarks[4]=44;
 }
 
 s.sgpa=(s.a*3+s.b*3+s.c*3+s.d*3+s.e*3)/15;
 for(s.i=0;s.i<5;s.i++)
 {
  s.minper=s.minper+(float)s.minmarks[s.i]/5;
  s.maxper=s.maxper+(float)s.maxmarks[s.i]/5;
 }
 
 fp1=fopen("result1.txt","ab");
 if(fp1==NULL)
 {
  printf("\nFile creation error has occrued !!!");
 }
 else
 {
  fwrite(&s,sizeof(s),1,fp1);
  fclose(fp1);
 }
 
 firstsemdisplay();
 
 getch();
 //main();
 //newinput();       
}
void secondsem()
{
 printf("\nPlease input your Good Name:");
 fflush(stdin);
 gets(s.name);
 printf("\n\nPlease Input the following informaions:");
 printf("\n\nGrade you have got in Fundamental of Electrical and Electronics :");
 printf("\nFor example: A or a-:");
 fflush(stdin);
 gets(s.fee);
 strlwr(s.fee);
 s.a=strcmp(s.fee,"a");
 if(s.a==0)
 s.a=4;
 else
 {
  s.a=strcmp(s.fee,"a-");
  if(s.a==0)
  s.a=3.7f;
  else
  {
   s.a=strcmp(s.fee,"b+");
   if(s.a==0)
   s.a=3.3f;
   else
   {
    s.a=strcmp(s.fee,"b");
    if(s.a==0)
    s.a=3;
    else
    {
     s.a=strcmp(s.fee,"b-");
     if(s.a==0)
     s.a=2.7f;
     else
     {
      s.a=strcmp(s.fee,"c+");
      if(s.a==0)
      s.a=2.3f;
      else
      {
       s.a=strcmp(s.fee,"c");
       if(s.a==0)
       s.a=2.0;
       else
       {
        s.a=strcmp(s.fee,"c-");
        if(s.a==0)
        s.a=1.7f;
        else
        {
         s.a=strcmp(s.fee,"d+");
         if(s.a==0)
         s.a=1.3f;
         else
         {
          s.a=strcmp(s.fee,"d");
          if(s.a==0)
          s.a=1.0;
          else
          {
           s.a=strcmp(s.fee,"f");
           if(s.a==0)
            s.a=0;
           else
            wronginput();
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 printf("\n\nGrade you have got in Mathematics II                            :");
 scanf("%s",s.mathsII);
 strlwr(s.mathsII);
 s.b=strcmp(s.mathsII,"a");
 if(s.b==0)
 s.b=4;
 else
 {
  s.b=strcmp(s.mathsII,"a-");
  if(s.b==0)
  s.b=3.7f;
  else
  {
   s.b=strcmp(s.mathsII,"b+");
   if(s.b==0)
   s.b=3.3f;
   else
   {
    s.b=strcmp(s.mathsII,"b");
    if(s.b==0)
     s.b=3.0;
    else
    {
     s.b=strcmp(s.mathsII,"b-");
     if(s.b==0)
      s.b=2.7f;
     else
     {
      s.b=strcmp(s.mathsII,"c+");
      if(s.b==0)
       s.b=2.3f;
      else
      {
       s.b=strcmp(s.mathsII,"c");
       if(s.b==0)
        s.b=2.0;
       else
       {
        s.b=strcmp(s.mathsII,"c-");
        if(s.b==0)
         s.b=1.7f;
        else
        {
         s.b=strcmp(s.mathsII,"d+");
         if(s.b==0)
          s.b=1.3f;
         else
         {
          s.b=strcmp(s.mathsII,"d");
          if(s.b==0)
           s.b=1.0;
          else
          {
           s.b=strcmp(s.mathsII,"f");
           if(s.b==0)
            s.b=0;
           else
            wronginput();
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 printf("\n\nGrade you have got in Programming Languages:");
 scanf("%s",s.cp);
 strlwr(s.cp);
 s.c=strcmp(s.cp,"a");
 if(s.c==0)
  s.c=4;
 else
 {
  s.c=strcmp(s.cp,"a-");
  if(s.c==0)
   s.c=3.7f;
  else
  {
   s.c=strcmp(s.cp,"b+");
   if(s.c==0)
    s.c=3.3f;
   else
   {
    s.c=strcmp(s.cp,"b");
    if(s.c==0)
     s.c=3.0;
    else
    {
     s.c=strcmp(s.cp,"b-");
     if(s.c==0)
      s.c=2.7f;
     else
     {
      s.c=strcmp(s.cp,"c+");
      if(s.c==0)
       s.c=2.3f;
      else
      {
       s.c=strcmp(s.cp,"c");
       if(s.c==0)
        s.c=2.0;
       else
       {
        s.c=strcmp(s.cp,"c-");
        if(s.c==0)
         s.c=1.7f;
        else
        {
         s.c=strcmp(s.cp,"d+");
         if(s.c==0)
          s.c=1.3f;
         else
         {
          s.c=strcmp(s.cp,"d");
          if(s.c==0)
           s.c=1.0;
          else
          {
           s.c=strcmp(s.cp,"f");
           if(s.c==0)
            s.c=0;
           else
            wronginput();
           
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 printf("\n\nGrade you have got in Financial accounting:");
 scanf("%s",s.account);
 strlwr(s.account);
 s.d=strcmp(s.account,"a");
 if(s.d==0)
  s.d=4;
 else
 {
  s.d=strcmp(s.account,"a-");
  if(s.d==0)
   s.d=3.7f;
  else
  {
   s.d=strcmp(s.account,"b+");
   if(s.d==0)
    s.d=3.3f;
   else
   {
    s.d=strcmp(s.account,"b");
    if(s.d==0)
     s.d=3.0;
    else
    {
     s.d=strcmp(s.account,"b-");
     if(s.d==0)
      s.d=2.7f;
     else
     {
      s.d=strcmp(s.account,"c+");
      if(s.d==0)
       s.d=2.3f;
      else
      {
       s.d=strcmp(s.account,"c");
       if(s.d==0)
        s.d=2.0;
       else
       {
        s.d=strcmp(s.account,"c-");
        if(s.d==0)
         s.d=1.7f;
        else
        {
         s.d=strcmp(s.account,"d+");
         if(s.d==0)
          s.d=1.3f;
         else
         {
          s.d=strcmp(s.account,"d");
          if(s.d==0)
           s.d=1.0;
          else
          {
           s.d=strcmp(s.account,"f");
           if(s.d==0)
            s.d=0;
           else
            wronginput(); 
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 printf("\n\nGrade you have got in Business and Technical Communication:");
 scanf("%s",s.btc);
 strlwr(s.btc);
 s.e=strcmp(s.btc,"a");
 if(s.e==0)
  s.e=4;
 else
 {
  s.e=strcmp(s.btc,"a-");
  if(s.e==0)
   s.e=3.7f;
  else
  {
   s.e=strcmp(s.btc,"b+");
   if(s.e==0)
    s.e=3.3f;
   else
   {
    s.e=strcmp(s.btc,"b");
    if(s.e==0)
     s.e=3.0;
    else
    {
     s.e=strcmp(s.btc,"b-");
     if(s.e==0)
      s.e=2.7f;
     else
     {
      s.e=strcmp(s.btc,"c+");
      if(s.e==0)
       s.e=2.3f;
      else
      {
       s.e=strcmp(s.btc,"c");
       if(s.e==0)
        s.e=2.0;
       else
       {
        s.e=strcmp(s.btc,"c-");
        if(s.e==0)
         s.e=1.7f;
        else
        {
         s.e=strcmp(s.btc,"d+");
         if(s.e==0)
          s.e=1.3f;
         else
         {
          s.e=strcmp(s.btc,"d");
          if(s.e==0)
           s.e=1.0;
          else
          {
           s.e=strcmp(s.btc,"f");
           if(s.e==0)
            s.e=0;
           else
            wronginput();
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 printf("\n\nGrade you have got in Project I:");
 scanf("%s",s.pro);
 strlwr(s.pro);
 s.f=strcmp(s.pro,"a");
 if(s.f==0)
  s.f=4;
 else
 {
  s.f=strcmp(s.pro,"a-");
  if(s.f==0)
   s.f=3.7f;
  else
  {
   s.f=strcmp(s.pro,"b+");
   if(s.f==0)
    s.f=3.3f;
   else
   {
    s.f=strcmp(s.pro,"b");
    if(s.f==0)
     s.f=3.0;
    else
    {
     s.f=strcmp(s.pro,"b-");
     if(s.f==0)
      s.f=2.7f;
     else
     {
      s.f=strcmp(s.pro,"c+");
      if(s.f==0)
       s.f=2.3f;
      else
      {
       s.f=strcmp(s.pro,"c");
       if(s.f==0)
        s.f=2.0;
       else
       {
        s.f=strcmp(s.pro,"c-");
        if(s.f==0)
         s.f=1.7f;
        else
        {
         s.f=strcmp(s.pro,"d+");
         if(s.f==0)
          s.f=1.3f;
         else
         {
          s.f=strcmp(s.pro,"d");
          if(s.f==0)
           s.f=1.0;
          else
          {
           s.f=strcmp(s.pro,"f");
           if(s.f==0)
            s.f=0;
           else
            wronginput();
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
 if(s.a==4)
 {
  s.minmarks[0]=90;
  s.maxmarks[0]=100;
 }
 else if(s.a==3.7f)
 {
  s.minmarks[0]=85;
  s.maxmarks[0]=89;
 }
 else if(s.a==3.3f)
 {
  s.minmarks[0]=80;
  s.maxmarks[0]=84;
 }
 else if(s.a==3)
 {
  s.minmarks[0]=75;
  s.maxmarks[0]=79;
 }
 else if(s.a==2.7f)
 {
  s.minmarks[0]=70;
  s.maxmarks[0]=74;
 }
 else if(s.a==2.3f)
 {
  s.minmarks[0]=65;
  s.maxmarks[0]=69;
 }
 else if(s.a==2)
 {
  s.minmarks[0]=60;
  s.maxmarks[0]=64;
 }
 else if(s.a==1.7f)
 {
  s.minmarks[0]=55;
  s.maxmarks[0]=59;
 }
 else if(s.a==1.3f)
 {
  s.minmarks[0]=50;
  s.maxmarks[0]=54;
 }
 else if(s.a==1)
 {
  s.minmarks[0]=45;
  s.maxmarks[0]=49;
 }
 else if(s.a<1)
 {
  s.minmarks[0]=0;
  s.maxmarks[0]=44;
 }
 if(s.b==4)
 {
  s.minmarks[1]=90;
  s.maxmarks[1]=100;
 }
 else if(s.b==3.7f)
 {
  s.minmarks[1]=85;
  s.maxmarks[1]=89;
 }
 else if(s.b==3.3f)
 {
  s.minmarks[1]=80;
  s.maxmarks[1]=84;
 }
 else if(s.b==3)
 {
  s.minmarks[1]=75;
  s.maxmarks[1]=79;
 }
 else if(s.b==2.7f)
 {
  s.minmarks[1]=70;
  s.maxmarks[1]=74;
 }
 else if(s.b==2.3f)
 {
  s.minmarks[1]=65;
  s.maxmarks[1]=69;
 }
 else if(s.b==2)
 {
  s.minmarks[1]=60;
  s.maxmarks[1]=64;
 }
 else if(s.b==1.7f)
 {
  s.minmarks[1]=55;
  s.maxmarks[1]=59;
 }
 else if(s.b==1.3f)
 {
  s.minmarks[1]=50;
  s.maxmarks[1]=54;
 }
 else if(s.b==1)
 {
  s.minmarks[1]=45;
  s.maxmarks[1]=49;
 }
 else if(s.b<1)
 {
  s.minmarks[1]=0;
  s.maxmarks[1]=44;
 }
 if(s.c==4)
 {
  s.minmarks[2]=90;
  s.maxmarks[2]=100;
 }
 else if(s.c==3.7f)
 {
  s.minmarks[2]=85;
  s.maxmarks[2]=89;
 }
 else if(s.c==3.3f)
 {
  s.minmarks[2]=80;
  s.maxmarks[2]=84;
 }
 else if(s.c==3)
 {
  s.minmarks[2]=75;
  s.maxmarks[2]=79;
 }
 else if(s.c==2.7f)
 {
  s.minmarks[2]=70;
  s.maxmarks[2]=74;
 }
 else if(s.c==2.3f)
 {
  s.minmarks[2]=65;
  s.maxmarks[2]=69;
 }
 else if(s.c==2)
 {
  s.minmarks[2]=60;
  s.maxmarks[2]=64;
 }
 else if(s.c==1.7f)
 {
  s.minmarks[2]=55;
  s.maxmarks[2]=59;
 }
 else if(s.c==1.3f)
 {
  s.minmarks[2]=50;
  s.maxmarks[2]=54;
 }
 else if(s.c==1)
 {
  s.minmarks[2]=45;
  s.maxmarks[2]=49;
 }
 else if(s.c<1)
 {
  s.minmarks[2]=0;
  s.maxmarks[2]=44;
 }
 if(s.d==4)
 {
  s.minmarks[3]=90;
  s.maxmarks[3]=100;
 }
 else if(s.d==3.7f)
 {
  s.minmarks[3]=85;
  s.maxmarks[3]=89;
 }
 else if(s.d==3.3f)
 {
  s.minmarks[3]=80;
  s.maxmarks[3]=84;
 }
 else if(s.d==3)
 {
  s.minmarks[3]=75;
  s.maxmarks[3]=79;
 }
 else if(s.d==2.7f)
 {
  s.minmarks[3]=70;
  s.maxmarks[3]=74;
 }
 else if(s.d==2.3f)
 {
  s.minmarks[3]=65;
  s.maxmarks[3]=69;
 }
 else if(s.d==2)
 {
  s.minmarks[3]=60;
  s.maxmarks[3]=64;
 }
 else if(s.d==1.7f)
 {
  s.minmarks[3]=55;
  s.maxmarks[3]=59;
 }
 else if(s.d==1.3f)
 {
  s.minmarks[3]=50;
  s.maxmarks[3]=54;
 }
 else if(s.d==1)
 {
  s.minmarks[3]=45;
  s.maxmarks[3]=49;
 }
 else if(s.d<1)
 {
  s.minmarks[3]=0;
  s.maxmarks[3]=44;
 }
 if(s.e==4)
 {
  s.minmarks[4]=90;
  s.maxmarks[4]=100;
 }
 else if(s.e==3.7f)
 {
  s.minmarks[4]=85;
  s.maxmarks[4]=89;
 }
 else if(s.e==3.3f)
 {
  s.minmarks[4]=80;
  s.maxmarks[4]=84;
 }
 else if(s.e==3)
 {
  s.minmarks[4]=75;
  s.maxmarks[4]=79;
 }
 else if(s.e==2.7f)
 {
  s.minmarks[4]=70;
  s.maxmarks[4]=74;
 }
 else if(s.e==2.3f)
 {
  s.minmarks[4]=65;
  s.maxmarks[4]=69;
 }
 else if(s.e==2)
 {
  s.minmarks[4]=60;
  s.maxmarks[4]=64;
 }
 else if(s.e==1.7f)
 {
  s.minmarks[4]=55;
  s.maxmarks[4]=59;
 }
 else if(s.e==1.3f)
 {
  s.minmarks[4]=50;
  s.maxmarks[4]=54;
 }
 else if(s.e==1)
 {
  s.minmarks[4]=45;
  s.maxmarks[4]=49;
 }
 else if(s.e<1)
 {
  s.minmarks[4]=0;
  s.maxmarks[4]=44;
 }
 if(s.f==4)
 {
  s.minmarks[5]=90;
  s.maxmarks[5]=100;
 }
 else if(s.f==3.7f)
 {
  s.minmarks[5]=85;
  s.maxmarks[5]=89;
 }
 else if(s.f==3.3f)
 {
  s.minmarks[5]=80;
  s.maxmarks[5]=84;
 }
 else if(s.f==3)
 {
  s.minmarks[5]=75;
  s.maxmarks[5]=79;
 }
 else if(s.f==2.7f)
 {
  s.minmarks[5]=70;
  s.maxmarks[5]=74;
 }
 else if(s.f==2.3f)
 {
  s.minmarks[5]=65;
  s.maxmarks[5]=69;
 }
 else if(s.f==2)
 {
  s.minmarks[5]=60;
  s.maxmarks[5]=64;
 }
 else if(s.f==1.7f)
 {
  s.minmarks[5]=55;
  s.maxmarks[5]=59;
 }
 else if(s.f==1.3f)
 {
  s.minmarks[5]=50;
  s.maxmarks[5]=54;
 }
 else if(s.f==1)
 {
  s.minmarks[5]=45;
  s.maxmarks[5]=49;
 }
 else if(s.f<1)
 {
  s.minmarks[5]=0;
  s.maxmarks[5]=44;
 }
 s.sgpa=(s.a*3+s.b*3+s.c*3+s.d*3+s.e*3+s.f*1)/16;
 for(s.i=0;s.i<6;s.i++)
 {
  s.minper=s.minper+(float)s.minmarks[s.i]/6;
  s.maxper=s.maxper+(float)s.maxmarks[s.i]/6;
 }
 
 fp2=fopen("result2.txt","ab");
 if(fp2==NULL)
 {
  printf("\nFile creation error has occrued !!!");
 }
 else
 {
  fwrite(&s,sizeof(s),1,fp2);
  fclose(fp2);
 }
 secondsemdisplay();
 getch();
 //newinput();
}

void thirdsem()
{
 printf("\nPlease input your good name:");
 fflush(stdin);
 gets(s.name);
 printf("\nPlease input following information:");
 printf("\n\nGrade you have got in Microprocessor(for example: A or a-):");
 gets(s.mp);
 strlwr(s.mp);
 s.a=strcmp(s.mp,"a");
 if(s.a==0)
 s.a=4;
 else
 {
  s.a=strcmp(s.mp,"a-");
  if(s.a==0)
  s.a=3.7;
  else
  {
   s.a=strcmp(s.mp,"b+");
   if(s.a==0)
   s.a=3.3f;
   else
   {
    s.a=strcmp(s.mp,"b");
    if(s.a==0)
    s.a=3;
    else
    {
     s.a=strcmp(s.mp,"b-");
     if(s.a==0)
     s.a=2.7f;
     else
     {
      s.a=strcmp(s.mp,"c+");
      if(s.a==0)
      s.a=2.3;
      else
      {
       s.a=strcmp(s.mp,"c");
       if(s.a==0)
       s.a=2;
       else
       {
        s.a=strcmp(s.mp,"c-");
        if(s.a==0)
        s.a=1.7;
        else
        {
         s.a=strcmp(s.mp,"d+");
         if(s.a==0)
         s.a=1.3;
         else
         {
          s.a=strcmp(s.mp,"d");
          if(s.a==0)
          s.a=1;
          else
          {
           s.a=strcmp(s.mp,"f");
           if(s.a==0)
           s.a=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Data Structure and Algorithms:");
 fflush(stdin);
 gets(s.dsa);
 strlwr(s.dsa);
 s.b=strcmp(s.dsa,"a");
 if(s.b==0)
 s.b=4;
 else
 {
  s.b=strcmp(s.dsa,"a-");
  if(s.b==0)
  s.b=3.7;
  else
  {
   s.b=strcmp(s.dsa,"b+");
   if(s.b==0)
   s.b=3.3f;
   else
   {
    s.b=strcmp(s.dsa,"b");
    if(s.b==0)
    s.b=3;
    else
    {
     s.b=strcmp(s.dsa,"b-");
     if(s.b==0)
     s.b=2.7f;
     else
     {
      s.b=strcmp(s.dsa,"c+");
      if(s.b==0)
      s.b=2.3;
      else
      {
       s.b=strcmp(s.dsa,"c");
       if(s.b==0)
       s.b=2;
       else
       {
        s.b=strcmp(s.dsa,"c-");
        if(s.b==0)
        s.b=1.7;
        else
        {
         s.b=strcmp(s.dsa,"d+");
         if(s.b==0)
         s.b=1.3;
         else
         {
          s.b=strcmp(s.dsa,"d");
          if(s.b==0)
          s.b=1;
          else
          {
           s.b=strcmp(s.dsa,"f");
           if(s.b==0)
           s.b=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Object Oriented Programming:");
 fflush(stdin);
 gets(s.oop);
 strlwr(s.oop);
 s.c=strcmp(s.oop,"a");
 if(s.c==0)
 s.c=4;
 else
 {
  s.c=strcmp(s.oop,"a-");
  if(s.c==0)
  s.c=3.7;
  else
  {
   s.c=strcmp(s.oop,"b+");
   if(s.c==0)
   s.c=3.3f;
   else
   {
    s.c=strcmp(s.oop,"b");
    if(s.c==0)
    s.c=3;
    else
    {
     s.c=strcmp(s.oop,"b-");
     if(s.c==0)
     s.c=2.7f;
     else
     {
      s.c=strcmp(s.oop,"c+");
      if(s.c==0)
      s.c=2.3;
      else
      {
       s.c=strcmp(s.oop,"c");
       if(s.c==0)
       s.c=2;
       else
       {
        s.c=strcmp(s.oop,"c-");
        if(s.c==0)
        s.c=1.7;
        else
        {
         s.c=strcmp(s.oop,"d+");
         if(s.c==0)
         s.c=1.3;
         else
         {
          s.c=strcmp(s.oop,"d");
          if(s.c==0)
          s.c=1;
          else
          {
           s.c=strcmp(s.oop,"f");
           if(s.c==0)
           s.c=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in System Analysis and Design:");
 fflush(stdin);
 gets(s.sad);
 strlwr(s.sad);
 s.d=strcmp(s.sad,"a");
 if(s.d==0)
 s.d=4;
 else
 {
  s.d=strcmp(s.sad,"a-");
  if(s.d==0)
  s.d=3.7;
  else
  {
   s.d=strcmp(s.sad,"b+");
   if(s.d==0)
   s.d=3.3f;
   else
   {
    s.d=strcmp(s.sad,"b");
    if(s.d==0)
    s.d=3;
    else
    {
     s.d=strcmp(s.sad,"b-");
     if(s.d==0)
     s.d=2.7f;
     else
     {
      s.d=strcmp(s.sad,"c+");
      if(s.d==0)
      s.d=2.3;
      else
      {
       s.d=strcmp(s.sad,"c");
       if(s.d==0)
       s.d=2;
       else
       {
        s.d=strcmp(s.sad,"c-");
        if(s.d==0)
        s.d=1.7;
        else
        {
         s.d=strcmp(s.sad,"d+");
         if(s.d==0)
         s.d=1.3;
         else
         {
          s.d=strcmp(s.sad,"d");
          if(s.d==0)
          s.d=1;
          else
          {
           s.d=strcmp(s.sad,"f");
           if(s.d==0)
           s.d=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Financial accountancy-II:");
 fflush(stdin);
 gets(s.fa2);
 strlwr(s.fa2);
 s.e=strcmp(s.fa2,"a");
 if(s.e==0)
 s.e=4;
 else
 {
  s.e=strcmp(s.fa2,"a-");
  if(s.e==0)
  s.e=3.7;
  else
  {
   s.e=strcmp(s.fa2,"b+");
   if(s.e==0)
   s.e=3.3f;
   else
   {
    s.e=strcmp(s.fa2,"b");
    if(s.e==0)
    s.e=3;
    else
    {
     s.e=strcmp(s.fa2,"b-");
     if(s.e==0)
     s.e=2.7f;
     else
     {
      s.e=strcmp(s.fa2,"c+");
      if(s.e==0)
      s.e=2.3;
      else
      {
       s.e=strcmp(s.fa2,"c");
       if(s.e==0)
       s.e=2;
       else
       {
        s.e=strcmp(s.fa2,"c-");
        if(s.e==0)
        s.e=1.7;
        else
        {
         s.e=strcmp(s.fa2,"d+");
         if(s.e==0)
         s.e=1.3;
         else
         {
          s.e=strcmp(s.fa2,"d");
          if(s.e==0)
          s.e=1;
          else
          {
           s.e=strcmp(s.fa2,"f");
           if(s.e==0)
           s.e=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 
 if(s.a==4)
 {
  s.minmarks[0]=90;
  s.maxmarks[0]=100;
 }
 else if(s.a==3.7f)
 {
  s.minmarks[0]=85;
  s.maxmarks[0]=89;
 }
 else if(s.a==3.3f)
 {
  s.minmarks[0]=80;
  s.maxmarks[0]=84;
 }
 else if(s.a==3)
 {
  s.minmarks[0]=75;
  s.maxmarks[0]=79;
 }
 else if(s.a==2.7f)
 {
  s.minmarks[0]=70;
  s.maxmarks[0]=74;
 }
 else if(s.a==2.3f)
 {
  s.minmarks[0]=65;
  s.maxmarks[0]=69;
 }
 else if(s.a==2)
 {
  s.minmarks[0]=60;
  s.maxmarks[0]=64;
 }
 else if(s.a==1.7f)
 {
  s.minmarks[0]=55;
  s.maxmarks[0]=59;
 }
 else if(s.a==1.3f)
 {
  s.minmarks[0]=50;
  s.maxmarks[0]=54;
 }
 else if(s.a==1)
 {
  s.minmarks[0]=45;
  s.maxmarks[0]=49;
 }
 else
 {
  s.minmarks[0]=0;
  s.maxmarks[0]=44;
 }
 
 if(s.b==4)
 {
  s.minmarks[1]=90;
  s.maxmarks[1]=100;
 }
 else if(s.b==3.7f)
 {
  s.minmarks[1]=85;
  s.maxmarks[1]=89;
 }
 else if(s.b==3.3f)
 {
  s.minmarks[1]=80;
  s.maxmarks[1]=84;
 }
 else if(s.b==3)
 {
  s.minmarks[1]=75;
  s.maxmarks[1]=79;
 }
 else if(s.b==2.7f)
 {
  s.minmarks[1]=70;
  s.maxmarks[1]=74;
 }
 else if(s.b==2.3f)
 {
  s.minmarks[1]=65;
  s.maxmarks[1]=69;
 }
 else if(s.b==2)
 {
  s.minmarks[1]=60;
  s.maxmarks[1]=64;
 }
 else if(s.b==1.7f)
 {
  s.minmarks[1]=55;
  s.maxmarks[1]=59;
 }
 else if(s.b==1.3f)
 {
  s.minmarks[1]=50;
  s.maxmarks[1]=54;
 }
 else if(s.b==1)
 {
  s.minmarks[1]=45;
  s.maxmarks[1]=49;
 }
 else
 {
  s.minmarks[1]=0;
  s.maxmarks[1]=44;
 }
 if(s.c==4)
 {
  s.minmarks[2]=90;
  s.maxmarks[2]=100;
 }
 else if(s.c==3.7f)
 {
  s.minmarks[2]=85;
  s.maxmarks[2]=89;
 }
 else if(s.c==3.3f)
 {
  s.minmarks[2]=80;
  s.maxmarks[2]=84;
 }
 else if(s.c==3)
 {
  s.minmarks[2]=75;
  s.maxmarks[2]=79;
 }
 else if(s.c==2.7f)
 {
  s.minmarks[2]=70;
  s.maxmarks[2]=74;
 }
 else if(s.c==2.3f)
 {
  s.minmarks[2]=65;
  s.maxmarks[2]=69;
 }
 else if(s.c==2)
 {
  s.minmarks[2]=60;
  s.maxmarks[2]=64;
 }
 else if(s.c==1.7f)
 {
  s.minmarks[2]=55;
  s.maxmarks[2]=59;
 }
 else if(s.c==1.3f)
 {
  s.minmarks[2]=50;
  s.maxmarks[2]=54;
 }
 else if(s.c==1)
 {
  s.minmarks[2]=45;
  s.maxmarks[2]=49;
 }
 else
 {
  s.minmarks[2]=0;
  s.maxmarks[2]=44;
 }
 if(s.d==4)
 {
  s.minmarks[3]=90;
  s.maxmarks[3]=100;
 }
 else if(s.d==3.7f)
 {
  s.minmarks[3]=85;
  s.maxmarks[3]=89;
 }
 else if(s.d==3.3f)
 {
  s.minmarks[3]=80;
  s.maxmarks[3]=84;
 }
 else if(s.d==3)
 {
  s.minmarks[3]=75;
  s.maxmarks[3]=79;
 }
 else if(s.d==2.7f)
 {
  s.minmarks[3]=70;
  s.maxmarks[3]=74;
 }
 else if(s.d==2.3f)
 {
  s.minmarks[3]=65;
  s.maxmarks[3]=69;
 }
 else if(s.d==2)
 {
  s.minmarks[3]=60;
  s.maxmarks[3]=64;
 }
 else if(s.d==1.7f)
 {
  s.minmarks[3]=55;
  s.maxmarks[3]=59;
 }
 else if(s.d==1.3f)
 {
  s.minmarks[3]=50;
  s.maxmarks[3]=54;
 }
 else if(s.d==1)
 {
  s.minmarks[3]=45;
  s.maxmarks[3]=49;
 }
 else
 {
  s.minmarks[3]=0;
  s.maxmarks[3]=44;
 }
 if(s.e==4)
 {
  s.minmarks[4]=90;
  s.maxmarks[4]=100;
 }
 else if(s.e==3.7f)
 {
  s.minmarks[4]=85;
  s.maxmarks[4]=89;
 }
 else if(s.e==3.3f)
 {
  s.minmarks[4]=80;
  s.maxmarks[4]=84;
 }
 else if(s.e==3)
 {
  s.minmarks[4]=75;
  s.maxmarks[4]=79;
 }
 else if(s.e==2.7f)
 {
  s.minmarks[4]=70;
  s.maxmarks[4]=74;
 }
 else if(s.e==2.3f)
 {
  s.minmarks[4]=65;
  s.maxmarks[4]=69;
 }
 else if(s.e==2)
 {
  s.minmarks[4]=60;
  s.maxmarks[4]=64;
 }
 else if(s.e==1.7f)
 {
  s.minmarks[4]=55;
  s.maxmarks[4]=59;
 }
 else if(s.e==1.3f)
 {
  s.minmarks[4]=50;
  s.maxmarks[4]=54;
 }
 else if(s.e==1)
 {
  s.minmarks[4]=45;
  s.maxmarks[4]=49;
 }
 else
 {
  s.minmarks[4]=0;
  s.maxmarks[4]=44;
 }
 
 s.sgpa=(s.a*3+s.b*3+s.c*3+s.d*3+s.e*3)/15;
 for(s.i=0;s.i<5;s.i++)
 {
  s.minper=s.minper+(float)s.minmarks[s.i]/5;
  s.maxper=s.maxper+(float)s.maxmarks[s.i]/5;
 }
 //s.minper=(float)(s.minmarks[0]+s.minmarks[1]+s.minmarks[2]+s.minmarks[3]+s.minmarks[4]+s.minmarks[5])/6;
 
 fp3=fopen("result3.txt","ab");
 if(fp3==NULL)
 {
  printf("\nFile creation error has occrued !!!");
 }
 else
 {
  fwrite(&s,sizeof(s),1,fp3);
  fclose(fp3);
 }
 thirdsemdisplay();
 getch();
 //newinput();
}
void fourthsem()
{
 printf("\nPlease input your good name:");
 fflush(stdin);
 gets(s.name);
 printf("\nPlease input following information:");
 printf("\n\nGrade you have got in Visual Programming(for example: A or a-):");
 gets(s.vp);
 strlwr(s.vp);
 s.a=strcmp(s.vp,"a");
 if(s.a==0)
 s.a=4;
 else
 {
  s.a=strcmp(s.vp,"a-");
  if(s.a==0)
  s.a=3.7;
  else
  {
   s.a=strcmp(s.vp,"b+");
   if(s.a==0)
   s.a=3.3f;
   else
   {
    s.a=strcmp(s.vp,"b");
    if(s.a==0)
    s.a=3;
    else
    {
     s.a=strcmp(s.vp,"b-");
     if(s.a==0)
     s.a=2.7f;
     else
     {
      s.a=strcmp(s.vp,"c+");
      if(s.a==0)
      s.a=2.3;
      else
      {
       s.a=strcmp(s.vp,"c");
       if(s.a==0)
       s.a=2;
       else
       {
        s.a=strcmp(s.vp,"c-");
        if(s.a==0)
        s.a=1.7;
        else
        {
         s.a=strcmp(s.vp,"d+");
         if(s.a==0)
         s.a=1.3;
         else
         {
          s.a=strcmp(s.vp,"d");
          if(s.a==0)
          s.a=1;
          else
          {
           s.a=strcmp(s.vp,"f");
           if(s.a==0)
           s.a=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Numerical Methods :");
 fflush(stdin);
 gets(s.nm);
 strlwr(s.nm);
 s.b=strcmp(s.nm,"a");
 if(s.b==0)
 s.b=4;
 else
 {
  s.b=strcmp(s.nm,"a-");
  if(s.b==0)
  s.b=3.7;
  else
  {
   s.b=strcmp(s.nm,"b+");
   if(s.b==0)
   s.b=3.3f;
   else
   {
    s.b=strcmp(s.nm,"b");
    if(s.b==0)
    s.b=3;
    else
    {
     s.b=strcmp(s.nm,"b-");
     if(s.b==0)
     s.b=2.7f;
     else
     {
      s.b=strcmp(s.nm,"c+");
      if(s.b==0)
      s.b=2.3;
      else
      {
       s.b=strcmp(s.nm,"c");
       if(s.b==0)
       s.b=2;
       else
       {
        s.b=strcmp(s.nm,"c-");
        if(s.b==0)
        s.b=1.7;
        else
        {
         s.b=strcmp(s.nm,"d+");
         if(s.b==0)
         s.b=1.3;
         else
         {
          s.b=strcmp(s.nm,"d");
          if(s.b==0)
          s.b=1;
          else
          {
           s.b=strcmp(s.nm,"f");
           if(s.b==0)
           s.b=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Operating System :");
 fflush(stdin);
 gets(s.os);
 strlwr(s.os);
 s.c=strcmp(s.os,"a");
 if(s.c==0)
 s.c=4;
 else
 {
  s.c=strcmp(s.os,"a-");
  if(s.c==0)
  s.c=3.7;
  else
  {
   s.c=strcmp(s.os,"b+");
   if(s.c==0)
   s.c=3.3f;
   else
   {
    s.c=strcmp(s.os,"b");
    if(s.c==0)
    s.c=3;
    else
    {
     s.c=strcmp(s.os,"b-");
     if(s.c==0)
     s.c=2.7f;
     else
     {
      s.c=strcmp(s.os,"c+");
      if(s.c==0)
      s.c=2.3;
      else
      {
       s.c=strcmp(s.os,"c");
       if(s.c==0)
       s.c=2;
       else
       {
        s.c=strcmp(s.os,"c-");
        if(s.c==0)
        s.c=1.7;
        else
        {
         s.c=strcmp(s.os,"d+");
         if(s.c==0)
         s.c=1.3;
         else
         {
          s.c=strcmp(s.os,"d");
          if(s.c==0)
          s.c=1;
          else
          {
           s.c=strcmp(s.os,"f");
           if(s.c==0)
           s.c=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Database Management System :");
 fflush(stdin);
 gets(s.dms);
 strlwr(s.dms);
 s.d=strcmp(s.dms,"a");
 if(s.d==0)
 s.d=4;
 else
 {
  s.d=strcmp(s.dms,"a-");
  if(s.d==0)
  s.d=3.7;
  else
  {
   s.d=strcmp(s.dms,"b+");
   if(s.d==0)
   s.d=3.3f;
   else
   {
    s.d=strcmp(s.dms,"b");
    if(s.d==0)
    s.d=3;
    else
    {
     s.d=strcmp(s.dms,"b-");
     if(s.d==0)
     s.d=2.7f;
     else
     {
      s.d=strcmp(s.dms,"c+");
      if(s.d==0)
      s.d=2.3;
      else
      {
       s.d=strcmp(s.dms,"c");
       if(s.d==0)
       s.d=2;
       else
       {
        s.d=strcmp(s.dms,"c-");
        if(s.d==0)
        s.d=1.7;
        else
        {
         s.d=strcmp(s.dms,"d+");
         if(s.d==0)
         s.d=1.3;
         else
         {
          s.d=strcmp(s.dms,"d");
          if(s.d==0)
          s.d=1;
          else
          {
           s.d=strcmp(s.dms,"f");
           if(s.d==0)
           s.d=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Compute Graphics :");
 fflush(stdin);
 gets(s.cg);
 strlwr(s.cg);
 s.e=strcmp(s.cg,"a");
 if(s.e==0)
 s.e=4;
 else
 {
  s.e=strcmp(s.cg,"a-");
  if(s.e==0)
  s.e=3.7;
  else
  {
   s.e=strcmp(s.cg,"b+");
   if(s.e==0)
   s.e=3.3f;
   else
   {
    s.e=strcmp(s.cg,"b");
    if(s.e==0)
    s.e=3;
    else
    {
     s.e=strcmp(s.cg,"b-");
     if(s.e==0)
     s.e=2.7f;
     else
     {
      s.e=strcmp(s.cg,"c+");
      if(s.e==0)
      s.e=2.3;
      else
      {
       s.e=strcmp(s.cg,"c");
       if(s.e==0)
       s.e=2;
       else
       {
        s.e=strcmp(s.cg,"c-");
        if(s.e==0)
        s.e=1.7;
        else
        {
         s.e=strcmp(s.cg,"d+");
         if(s.e==0)
         s.e=1.3;
         else
         {
          s.e=strcmp(s.cg,"d");
          if(s.e==0)
          s.e=1;
          else
          {
           s.e=strcmp(s.cg,"f");
           if(s.e==0)
           s.e=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Project-II:");
 fflush(stdin);
 gets(s.p2);
 strlwr(s.p2);
 s.f=strcmp(s.p2,"a");
 if(s.f==0)
 s.f=4;
 else
 {
  s.f=strcmp(s.p2,"a-");
  if(s.f==0)
  s.f=3.7;
  else
  {
   s.f=strcmp(s.p2,"b+");
   if(s.f==0)
   s.f=3.3f;
   else
   {
    s.f=strcmp(s.p2,"b");
    if(s.f==0)
    s.f=3;
    else
    {
     s.f=strcmp(s.p2,"b-");
     if(s.f==0)
     s.f=2.7f;
     else
     {
      s.f=strcmp(s.p2,"c+");
      if(s.f==0)
      s.f=2.3;
      else
      {
       s.f=strcmp(s.p2,"c");
       if(s.f==0)
       s.f=2;
       else
       {
        s.f=strcmp(s.p2,"c-");
        if(s.f==0)
        s.f=1.7;
        else
        {
         s.f=strcmp(s.p2,"d+");
         if(s.f==0)
         s.f=1.3;
         else
         {
          s.f=strcmp(s.p2,"d");
          if(s.f==0)
          s.f=1;
          else
          {
           s.f=strcmp(s.p2,"f");
           if(s.f==0)
           s.f=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }

if(s.a==4)
 {
  s.minmarks[0]=90;
  s.maxmarks[0]=100;
 }
 else if(s.a==3.7f)
 {
  s.minmarks[0]=85;
  s.maxmarks[0]=89;
 }
 else if(s.a==3.3f)
 {
  s.minmarks[0]=80;
  s.maxmarks[0]=84;
 }
 else if(s.a==3)
 {
  s.minmarks[0]=75;
  s.maxmarks[0]=79;
 }
 else if(s.a==2.7f)
 {
  s.minmarks[0]=70;
  s.maxmarks[0]=74;
 }
 else if(s.a==2.3f)
 {
  s.minmarks[0]=65;
  s.maxmarks[0]=69;
 }
 else if(s.a==2)
 {
  s.minmarks[0]=60;
  s.maxmarks[0]=64;
 }
 else if(s.a==1.7f)
 {
  s.minmarks[0]=55;
  s.maxmarks[0]=59;
 }
 else if(s.a==1.3f)
 {
  s.minmarks[0]=50;
  s.maxmarks[0]=54;
 }
 else if(s.a==1)
 {
  s.minmarks[0]=45;
  s.maxmarks[0]=49;
 }
 else
 {
  s.minmarks[0]=0;
  s.maxmarks[0]=44;
 }
 if(s.b==4)
 {
  s.minmarks[1]=90;
  s.maxmarks[1]=100;
 }
 else if(s.b==3.7f)
 {
  s.minmarks[1]=85;
  s.maxmarks[1]=89;
 }
 else if(s.b==3.3f)
 {
  s.minmarks[1]=80;
  s.maxmarks[1]=84;
 }
 else if(s.b==3)
 {
  s.minmarks[1]=75;
  s.maxmarks[1]=79;
 }
 else if(s.b==2.7f)
 {
  s.minmarks[1]=70;
  s.maxmarks[1]=74;
 }
 else if(s.b==2.3f)
 {
  s.minmarks[1]=65;
  s.maxmarks[1]=69;
 }
 else if(s.b==2)
 {
  s.minmarks[1]=60;
  s.maxmarks[1]=64;
 }
 else if(s.b==1.7f)
 {
  s.minmarks[1]=55;
  s.maxmarks[1]=59;
 }
 else if(s.b==1.3f)
 {
  s.minmarks[1]=50;
  s.maxmarks[1]=54;
 }
 else if(s.b==1)
 {
  s.minmarks[1]=45;
  s.maxmarks[1]=49;
 }
 else
 {
  s.minmarks[1]=0;
  s.maxmarks[1]=44;
 }
 if(s.c==4)
 {
  s.minmarks[2]=90;
  s.maxmarks[2]=100;
 }
 else if(s.c==3.7f)
 {
  s.minmarks[2]=85;
  s.maxmarks[2]=89;
 }
 else if(s.c==3.3f)
 {
  s.minmarks[2]=80;
  s.maxmarks[2]=84;
 }
 else if(s.c==3)
 {
  s.minmarks[2]=75;
  s.maxmarks[2]=79;
 }
 else if(s.c==2.7f)
 {
  s.minmarks[2]=70;
  s.maxmarks[2]=74;
 }
 else if(s.c==2.3f)
 {
  s.minmarks[2]=65;
  s.maxmarks[2]=69;
 }
 else if(s.c==2)
 {
  s.minmarks[2]=60;
  s.maxmarks[2]=64;
 }
 else if(s.c==1.7f)
 {
  s.minmarks[2]=55;
  s.maxmarks[2]=59;
 }
 else if(s.c==1.3f)
 {
  s.minmarks[2]=50;
  s.maxmarks[2]=54;
 }
 else if(s.c==1)
 {
  s.minmarks[2]=45;
  s.maxmarks[2]=49;
 }
 else
 {
  s.minmarks[2]=0;
  s.maxmarks[2]=44;
 }
 if(s.d==4)
 {
  s.minmarks[3]=90;
  s.maxmarks[3]=100;
 }
 else if(s.d==3.7f)
 {
  s.minmarks[3]=85;
  s.maxmarks[3]=89;
 }
 else if(s.d==3.3f)
 {
  s.minmarks[3]=80;
  s.maxmarks[3]=84;
 }
 else if(s.d==3)
 {
  s.minmarks[3]=75;
  s.maxmarks[3]=79;
 }
 else if(s.d==2.7f)
 {
  s.minmarks[3]=70;
  s.maxmarks[3]=74;
 }
 else if(s.d==2.3f)
 {
  s.minmarks[3]=65;
  s.maxmarks[3]=69;
 }
 else if(s.d==2)
 {
  s.minmarks[3]=60;
  s.maxmarks[3]=64;
 }
 else if(s.d==1.7f)
 {
  s.minmarks[3]=55;
  s.maxmarks[3]=59;
 }
 else if(s.d==1.3f)
 {
  s.minmarks[3]=50;
  s.maxmarks[3]=54;
 }
 else if(s.d==1)
 {
  s.minmarks[3]=45;
  s.maxmarks[3]=49;
 }
 else
 {
  s.minmarks[3]=0;
  s.maxmarks[3]=44;
 }
 if(s.e==4)
 {
  s.minmarks[4]=90;
  s.maxmarks[4]=100;
 }
 else if(s.e==3.7f)
 {
  s.minmarks[4]=85;
  s.maxmarks[4]=89;
 }
 else if(s.e==3.3f)
 {
  s.minmarks[4]=80;
  s.maxmarks[4]=84;
 }
 else if(s.e==3)
 {
  s.minmarks[4]=75;
  s.maxmarks[4]=79;
 }
 else if(s.e==2.7f)
 {
  s.minmarks[4]=70;
  s.maxmarks[4]=74;
 }
 else if(s.e==2.3f)
 {
  s.minmarks[4]=65;
  s.maxmarks[4]=69;
 }
 else if(s.e==2)
 {
  s.minmarks[4]=60;
  s.maxmarks[4]=64;
 }
 else if(s.e==1.7f)
 {
  s.minmarks[4]=55;
  s.maxmarks[4]=59;
 }
 else if(s.e==1.3f)
 {
  s.minmarks[4]=50;
  s.maxmarks[4]=54;
 }
 else if(s.e==1)
 {
  s.minmarks[4]=45;
  s.maxmarks[4]=49;
 }
 else
 {
  s.minmarks[4]=0;
  s.maxmarks[4]=44;
 }
 if(s.f==4)
 {
  s.minmarks[5]=90;
  s.maxmarks[5]=100;
 }
 else if(s.f==3.7f)
 {
  s.minmarks[5]=85;
  s.maxmarks[5]=89;
 }
 else if(s.f==3.3f)
 {
  s.minmarks[5]=80;
  s.maxmarks[5]=84;
 }
 else if(s.f==3)
 {
  s.minmarks[5]=75;
  s.maxmarks[5]=79;
 }
 else if(s.f==2.7f)
 {
  s.minmarks[5]=70;
  s.maxmarks[5]=74;
 }
 else if(s.f==2.3f)
 {
  s.minmarks[5]=65;
  s.maxmarks[5]=69;
 }
 else if(s.f==2)
 {
  s.minmarks[5]=60;
  s.maxmarks[5]=64;
 }
 else if(s.f==1.7f)
 {
  s.minmarks[5]=55;
  s.maxmarks[5]=59;
 }
 else if(s.f==1.3f)
 {
  s.minmarks[5]=50;
  s.maxmarks[5]=54;
 }
 else if(s.f==1)
 {
  s.minmarks[5]=45;
  s.maxmarks[5]=49;
 }
 else
 {
  s.minmarks[5]=0;
  s.maxmarks[5]=44;
 }
 s.sgpa=(s.a*3+s.b*3+s.c*3+s.d*3+s.e*3+s.f*4)/19;
 for(s.i=0;s.i<6;s.i++)
 {
  s.minper=s.minper+(float)s.minmarks[s.i]/6;
  s.maxper=s.maxper+(float)s.maxmarks[s.i]/6;
 }
 //s.minper=(float)(s.minmarks[0]+s.minmarks[1]+s.minmarks[2]+s.minmarks[3]+s.minmarks[4]+s.minmarks[5])/6;
 
 fp4=fopen("result4.txt","ab");
 if(fp4==NULL)
 {
  printf("\nFile creation error has occrued !!!");
 }
 else
 {
  fwrite(&s,sizeof(s),1,fp4);
  fclose(fp4);
 }
 fourthsemdisplay();
 getch();
 //newinput();
}
void fifthsem()
{
 printf("\nPlease input your good name:");
 fflush(stdin);
 gets(s.name);
 printf("\nPlease input following information:");
 printf("\n\nGrade you have got in Networks & Data Communication(for example: A or a-):");
 gets(s.ndc);
 strlwr(s.ndc);
 s.a=strcmp(s.ndc,"a");
 if(s.a==0)
 s.a=4;
 else
 {
  s.a=strcmp(s.ndc,"a-");
  if(s.a==0)
  s.a=3.7;
  else
  {
   s.a=strcmp(s.ndc,"b+");
   if(s.a==0)
   s.a=3.3f;
   else
   {
    s.a=strcmp(s.ndc,"b");
    if(s.a==0)
    s.a=3;
    else
    {
     s.a=strcmp(s.ndc,"b-");
     if(s.a==0)
     s.a=2.7f;
     else
     {
      s.a=strcmp(s.ndc,"c+");
      if(s.a==0)
      s.a=2.3;
      else
      {
       s.a=strcmp(s.ndc,"c");
       if(s.a==0)
       s.a=2;
       else
       {
        s.a=strcmp(s.ndc,"c-");
        if(s.a==0)
        s.a=1.7;
        else
        {
         s.a=strcmp(s.ndc,"d+");
         if(s.a==0)
         s.a=1.3;
         else
         {
          s.a=strcmp(s.ndc,"d");
          if(s.a==0)
          s.a=1;
          else
          {
           s.a=strcmp(s.ndc,"f");
           if(s.a==0)
           s.a=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Compute Architecture :");
 fflush(stdin);
 gets(s.ca);
 strlwr(s.ca);
 s.b=strcmp(s.ca,"a");
 if(s.b==0)
 s.b=4;
 else
 {
  s.b=strcmp(s.ca,"a-");
  if(s.b==0)
  s.b=3.7;
  else
  {
   s.b=strcmp(s.ca,"b+");
   if(s.b==0)
   s.b=3.3f;
   else
   {
    s.b=strcmp(s.ca,"b");
    if(s.b==0)
    s.b=3;
    else
    {
     s.b=strcmp(s.ca,"b-");
     if(s.b==0)
     s.b=2.7f;
     else
     {
      s.b=strcmp(s.ca,"c+");
      if(s.b==0)
      s.b=2.3;
      else
      {
       s.b=strcmp(s.ca,"c");
       if(s.b==0)
       s.b=2;
       else
       {
        s.b=strcmp(s.ca,"c-");
        if(s.b==0)
        s.b=1.7;
        else
        {
         s.b=strcmp(s.ca,"d+");
         if(s.b==0)
         s.b=1.3;
         else
         {
          s.b=strcmp(s.ca,"d");
          if(s.b==0)
          s.b=1;
          else
          {
           s.b=strcmp(s.ca,"f");
           if(s.b==0)
           s.b=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Web Programming-I  :");
 fflush(stdin);
 gets(s.wt);
 strlwr(s.wt);
 s.c=strcmp(s.wt,"a");
 if(s.c==0)
 s.c=4;
 else
 {
  s.c=strcmp(s.wt,"a-");
  if(s.c==0)
  s.c=3.7;
  else
  {
   s.c=strcmp(s.wt,"b+");
   if(s.c==0)
   s.c=3.3f;
   else
   {
    s.c=strcmp(s.wt,"b");
    if(s.c==0)
    s.c=3;
    else
    {
     s.c=strcmp(s.wt,"b-");
     if(s.c==0)
     s.c=2.7f;
     else
     {
      s.c=strcmp(s.wt,"c+");
      if(s.c==0)
      s.c=2.3;
      else
      {
       s.c=strcmp(s.wt,"c");
       if(s.c==0)
       s.c=2;
       else
       {
        s.c=strcmp(s.wt,"c-");
        if(s.c==0)
        s.c=1.7;
        else
        {
         s.c=strcmp(s.wt,"d+");
         if(s.c==0)
         s.c=1.3;
         else
         {
          s.c=strcmp(s.wt,"d");
          if(s.c==0)
          s.c=1;
          else
          {
           s.c=strcmp(s.wt,"f");
           if(s.c==0)
           s.c=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Java Programming :");
 fflush(stdin);
 gets(s.jp);
 strlwr(s.jp);
 s.d=strcmp(s.jp,"a");
 if(s.d==0)
 s.d=4;
 else
 {
  s.d=strcmp(s.jp,"a-");
  if(s.d==0)
  s.d=3.7;
  else
  {
   s.d=strcmp(s.jp,"b+");
   if(s.d==0)
   s.d=3.3f;
   else
   {
    s.d=strcmp(s.jp,"b");
    if(s.d==0)
    s.d=3;
    else
    {
     s.d=strcmp(s.jp,"b-");
     if(s.d==0)
     s.d=2.7f;
     else
     {
      s.d=strcmp(s.jp,"c+");
      if(s.d==0)
      s.d=2.3;
      else
      {
       s.d=strcmp(s.jp,"c");
       if(s.d==0)
       s.d=2;
       else
       {
        s.d=strcmp(s.jp,"c-");
        if(s.d==0)
        s.d=1.7;
        else
        {
         s.d=strcmp(s.jp,"d+");
         if(s.d==0)
         s.d=1.3;
         else
         {
          s.d=strcmp(s.jp,"d");
          if(s.d==0)
          s.d=1;
          else
          {
           s.d=strcmp(s.jp,"f");
           if(s.d==0)
           s.d=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Management Information System :");
 fflush(stdin);
 gets(s.mis);
 strlwr(s.mis);
 s.e=strcmp(s.mis,"a");
 if(s.e==0)
 s.e=4;
 else
 {
  s.e=strcmp(s.mis,"a-");
  if(s.e==0)
  s.e=3.7;
  else
  {
   s.e=strcmp(s.mis,"b+");
   if(s.e==0)
   s.e=3.3f;
   else
   {
    s.e=strcmp(s.mis,"b");
    if(s.e==0)
    s.e=3;
    else
    {
     s.e=strcmp(s.mis,"b-");
     if(s.e==0)
     s.e=2.7f;
     else
     {
      s.e=strcmp(s.mis,"c+");
      if(s.e==0)
      s.e=2.3;
      else
      {
       s.e=strcmp(s.mis,"c");
       if(s.e==0)
       s.e=2;
       else
       {
        s.e=strcmp(s.mis,"c-");
        if(s.e==0)
        s.e=1.7;
        else
        {
         s.e=strcmp(s.mis,"d+");
         if(s.e==0)
         s.e=1.3;
         else
         {
          s.e=strcmp(s.mis,"d");
          if(s.e==0)
          s.e=1;
          else
          {
           s.e=strcmp(s.mis,"f");
           if(s.e==0)
           s.e=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }

if(s.a==4)
 {
  s.minmarks[0]=90;
  s.maxmarks[0]=100;
 }
 else if(s.a==3.7f)
 {
  s.minmarks[0]=85;
  s.maxmarks[0]=89;
 }
 else if(s.a==3.3f)
 {
  s.minmarks[0]=80;
  s.maxmarks[0]=84;
 }
 else if(s.a==3)
 {
  s.minmarks[0]=75;
  s.maxmarks[0]=79;
 }
 else if(s.a==2.7f)
 {
  s.minmarks[0]=70;
  s.maxmarks[0]=74;
 }
 else if(s.a==2.3f)
 {
  s.minmarks[0]=65;
  s.maxmarks[0]=69;
 }
 else if(s.a==2)
 {
  s.minmarks[0]=60;
  s.maxmarks[0]=64;
 }
 else if(s.a==1.7f)
 {
  s.minmarks[0]=55;
  s.maxmarks[0]=59;
 }
 else if(s.a==1.3f)
 {
  s.minmarks[0]=50;
  s.maxmarks[0]=54;
 }
 else if(s.a==1)
 {
  s.minmarks[0]=45;
  s.maxmarks[0]=49;
 }
 else
 {
  s.minmarks[0]=0;
  s.maxmarks[0]=44;
 }
 if(s.b==4)
 {
  s.minmarks[1]=90;
  s.maxmarks[1]=100;
 }
 else if(s.b==3.7f)
 {
  s.minmarks[1]=85;
  s.maxmarks[1]=89;
 }
 else if(s.b==3.3f)
 {
  s.minmarks[1]=80;
  s.maxmarks[1]=84;
 }
 else if(s.b==3)
 {
  s.minmarks[1]=75;
  s.maxmarks[1]=79;
 }
 else if(s.b==2.7f)
 {
  s.minmarks[1]=70;
  s.maxmarks[1]=74;
 }
 else if(s.b==2.3f)
 {
  s.minmarks[1]=65;
  s.maxmarks[1]=69;
 }
 else if(s.b==2)
 {
  s.minmarks[1]=60;
  s.maxmarks[1]=64;
 }
 else if(s.b==1.7f)
 {
  s.minmarks[1]=55;
  s.maxmarks[1]=59;
 }
 else if(s.b==1.3f)
 {
  s.minmarks[1]=50;
  s.maxmarks[1]=54;
 }
 else if(s.b==1)
 {
  s.minmarks[1]=45;
  s.maxmarks[1]=49;
 }
 else
 {
  s.minmarks[1]=0;
  s.maxmarks[1]=44;
 }
 if(s.c==4)
 {
  s.minmarks[2]=90;
  s.maxmarks[2]=100;
 }
 else if(s.c==3.7f)
 {
  s.minmarks[2]=85;
  s.maxmarks[2]=89;
 }
 else if(s.c==3.3f)
 {
  s.minmarks[2]=80;
  s.maxmarks[2]=84;
 }
 else if(s.c==3)
 {
  s.minmarks[2]=75;
  s.maxmarks[2]=79;
 }
 else if(s.c==2.7f)
 {
  s.minmarks[2]=70;
  s.maxmarks[2]=74;
 }
 else if(s.c==2.3f)
 {
  s.minmarks[2]=65;
  s.maxmarks[2]=69;
 }
 else if(s.c==2)
 {
  s.minmarks[2]=60;
  s.maxmarks[2]=64;
 }
 else if(s.c==1.7f)
 {
  s.minmarks[2]=55;
  s.maxmarks[2]=59;
 }
 else if(s.c==1.3f)
 {
  s.minmarks[2]=50;
  s.maxmarks[2]=54;
 }
 else if(s.c==1)
 {
  s.minmarks[2]=45;
  s.maxmarks[2]=49;
 }
 else
 {
  s.minmarks[2]=0;
  s.maxmarks[2]=44;
 }
 if(s.d==4)
 {
  s.minmarks[3]=90;
  s.maxmarks[3]=100;
 }
 else if(s.d==3.7f)
 {
  s.minmarks[3]=85;
  s.maxmarks[3]=89;
 }
 else if(s.d==3.3f)
 {
  s.minmarks[3]=80;
  s.maxmarks[3]=84;
 }
 else if(s.d==3)
 {
  s.minmarks[3]=75;
  s.maxmarks[3]=79;
 }
 else if(s.d==2.7f)
 {
  s.minmarks[3]=70;
  s.maxmarks[3]=74;
 }
 else if(s.d==2.3f)
 {
  s.minmarks[3]=65;
  s.maxmarks[3]=69;
 }
 else if(s.d==2)
 {
  s.minmarks[3]=60;
  s.maxmarks[3]=64;
 }
 else if(s.d==1.7f)
 {
  s.minmarks[3]=55;
  s.maxmarks[3]=59;
 }
 else if(s.d==1.3f)
 {
  s.minmarks[3]=50;
  s.maxmarks[3]=54;
 }
 else if(s.d==1)
 {
  s.minmarks[3]=45;
  s.maxmarks[3]=49;
 }
 else
 {
  s.minmarks[3]=0;
  s.maxmarks[3]=44;
 }
 if(s.e==4)
 {
  s.minmarks[4]=90;
  s.maxmarks[4]=100;
 }
 else if(s.e==3.7f)
 {
  s.minmarks[4]=85;
  s.maxmarks[4]=89;
 }
 else if(s.e==3.3f)
 {
  s.minmarks[4]=80;
  s.maxmarks[4]=84;
 }
 else if(s.e==3)
 {
  s.minmarks[4]=75;
  s.maxmarks[4]=79;
 }
 else if(s.e==2.7f)
 {
  s.minmarks[4]=70;
  s.maxmarks[4]=74;
 }
 else if(s.e==2.3f)
 {
  s.minmarks[4]=65;
  s.maxmarks[4]=69;
 }
 else if(s.e==2)
 {
  s.minmarks[4]=60;
  s.maxmarks[4]=64;
 }
 else if(s.e==1.7f)
 {
  s.minmarks[4]=55;
  s.maxmarks[4]=59;
 }
 else if(s.e==1.3f)
 {
  s.minmarks[4]=50;
  s.maxmarks[4]=54;
 }
 else if(s.e==1)
 {
  s.minmarks[4]=45;
  s.maxmarks[4]=49;
 }
 else
 {
  s.minmarks[4]=0;
  s.maxmarks[4]=44;
 }
 s.sgpa=(s.a*3+s.b*3+s.c*3+s.d*3+s.e*3)/15;
 for(s.i=0;s.i<5;s.i++)
 {
  s.minper=s.minper+(float)s.minmarks[s.i]/5;
  s.maxper=s.maxper+(float)s.maxmarks[s.i]/5;
 }
 //s.minper=(float)(s.minmarks[0]+s.minmarks[1]+s.minmarks[2]+s.minmarks[3]+s.minmarks[4]+s.minmarks[5])/6;
 
 fp5=fopen("result5.txt","ab");
 if(fp5==NULL)
 {
  printf("\nFile creation error has occrued !!!");
 }
 else
 {
  fwrite(&s,sizeof(s),1,fp5);
  fclose(fp5);
 }
 fifthsemdisplay();
 getch();
 //newinput();
}

void sixthsem()
{
 printf("\nPlease input your good name:");
 fflush(stdin);
 gets(s.name);
 printf("\nPlease input following information:");
 printf("\n\nGrade you have got in Multimedia Technology(for example: A or a-):");
 gets(s.mt);
 strlwr(s.mt);
 s.a=strcmp(s.mt,"a");
 if(s.a==0)
 s.a=4;
 else
 {
  s.a=strcmp(s.mt,"a-");
  if(s.a==0)
  s.a=3.7;
  else
  {
   s.a=strcmp(s.mt,"b+");
   if(s.a==0)
   s.a=3.3f;
   else
   {
    s.a=strcmp(s.mt,"b");
    if(s.a==0)
    s.a=3;
    else
    {
     s.a=strcmp(s.mt,"b-");
     if(s.a==0)
     s.a=2.7f;
     else
     {
      s.a=strcmp(s.mt,"c+");
      if(s.a==0)
      s.a=2.3;
      else
      {
       s.a=strcmp(s.mt,"c");
       if(s.a==0)
       s.a=2;
       else
       {
        s.a=strcmp(s.mt,"c-");
        if(s.a==0)
        s.a=1.7;
        else
        {
         s.a=strcmp(s.mt,"d+");
         if(s.a==0)
         s.a=1.3;
         else
         {
          s.a=strcmp(s.mt,"d");
          if(s.a==0)
          s.a=1;
          else
          {
           s.a=strcmp(s.mt,"f");
           if(s.a==0)
           s.a=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Software Engineering  :");
 fflush(stdin);
 gets(s.sen);
 strlwr(s.sen);
 s.b=strcmp(s.sen,"a");
 if(s.b==0)
 s.b=4;
 else
 {
  s.b=strcmp(s.sen,"a-");
  if(s.b==0)
  s.b=3.7;
  else
  {
   s.b=strcmp(s.sen,"b+");
   if(s.b==0)
   s.b=3.3f;
   else
   {
    s.b=strcmp(s.sen,"b");
    if(s.b==0)
    s.b=3;
    else
    {
     s.b=strcmp(s.sen,"b-");
     if(s.b==0)
     s.b=2.7f;
     else
     {
      s.b=strcmp(s.sen,"c+");
      if(s.b==0)
      s.b=2.3;
      else
      {
       s.b=strcmp(s.sen,"c");
       if(s.b==0)
       s.b=2;
       else
       {
        s.b=strcmp(s.sen,"c-");
        if(s.b==0)
        s.b=1.7;
        else
        {
         s.b=strcmp(s.sen,"d+");
         if(s.b==0)
         s.b=1.3;
         else
         {
          s.b=strcmp(s.sen,"d");
          if(s.b==0)
          s.b=1;
          else
          {
           s.b=strcmp(s.sen,"f");
           if(s.b==0)
           s.b=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Web Programming-II  :");
 fflush(stdin);
 gets(s.wt2);
 strlwr(s.wt2);
 s.c=strcmp(s.wt2,"a");
 if(s.c==0)
 s.c=4;
 else
 {
  s.c=strcmp(s.wt2,"a-");
  if(s.c==0)
  s.c=3.7;
  else
  {
   s.c=strcmp(s.wt2,"b+");
   if(s.c==0)
   s.c=3.3f;
   else
   {
    s.c=strcmp(s.wt2,"b");
    if(s.c==0)
    s.c=3;
    else
    {
     s.c=strcmp(s.wt2,"b-");
     if(s.c==0)
     s.c=2.7f;
     else
     {
      s.c=strcmp(s.wt2,"c+");
      if(s.c==0)
      s.c=2.3;
      else
      {
       s.c=strcmp(s.wt2,"c");
       if(s.c==0)
       s.c=2;
       else
       {
        s.c=strcmp(s.wt2,"c-");
        if(s.c==0)
        s.c=1.7;
        else
        {
         s.c=strcmp(s.wt2,"d+");
         if(s.c==0)
         s.c=1.3;
         else
         {
          s.c=strcmp(s.wt2,"d");
          if(s.c==0)
          s.c=1;
          else
          {
           s.c=strcmp(s.wt2,"f");
           if(s.c==0)
           s.c=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Probability & Statistics  :");
 fflush(stdin);
 gets(s.sta);
 strlwr(s.sta);
 s.d=strcmp(s.sta,"a");
 if(s.d==0)
 s.d=4;
 else
 {
  s.d=strcmp(s.sta,"a-");
  if(s.d==0)
  s.d=3.7;
  else
  {
   s.d=strcmp(s.sta,"b+");
   if(s.d==0)
   s.d=3.3f;
   else
   {
    s.d=strcmp(s.sta,"b");
    if(s.d==0)
    s.d=3;
    else
    {
     s.d=strcmp(s.sta,"b-");
     if(s.d==0)
     s.d=2.7f;
     else
     {
      s.d=strcmp(s.sta,"c+");
      if(s.d==0)
      s.d=2.3;
      else
      {
       s.d=strcmp(s.sta,"c");
       if(s.d==0)
       s.d=2;
       else
       {
        s.d=strcmp(s.sta,"c-");
        if(s.d==0)
        s.d=1.7;
        else
        {
         s.d=strcmp(s.sta,"d+");
         if(s.d==0)
         s.d=1.3;
         else
         {
          s.d=strcmp(s.sta,"d");
          if(s.d==0)
          s.d=1;
          else
          {
           s.d=strcmp(s.sta,"f");
           if(s.d==0)
           s.d=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Project-III :");
 fflush(stdin);
 gets(s.pro3);
 strlwr(s.pro3);
 s.e=strcmp(s.pro3,"a");
 if(s.e==0)
 s.e=4;
 else
 {
  s.e=strcmp(s.pro3,"a-");
  if(s.e==0)
  s.e=3.7;
  else
  {
   s.e=strcmp(s.pro3,"b+");
   if(s.e==0)
   s.e=3.3f;
   else
   {
    s.e=strcmp(s.pro3,"b");
    if(s.e==0)
    s.e=3;
    else
    {
     s.e=strcmp(s.pro3,"b-");
     if(s.e==0)
     s.e=2.7f;
     else
     {
      s.e=strcmp(s.pro3,"c+");
      if(s.e==0)
      s.e=2.3;
      else
      {
       s.e=strcmp(s.pro3,"c");
       if(s.e==0)
       s.e=2;
       else
       {
        s.e=strcmp(s.pro3,"c-");
        if(s.e==0)
        s.e=1.7;
        else
        {
         s.e=strcmp(s.pro3,"d+");
         if(s.e==0)
         s.e=1.3;
         else
         {
          s.e=strcmp(s.pro3,"d");
          if(s.e==0)
          s.e=1;
          else
          {
           s.e=strcmp(s.pro3,"f");
           if(s.e==0)
           s.e=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }

if(s.a==4)
 {
  s.minmarks[0]=90;
  s.maxmarks[0]=100;
 }
 else if(s.a==3.7f)
 {
  s.minmarks[0]=85;
  s.maxmarks[0]=89;
 }
 else if(s.a==3.3f)
 {
  s.minmarks[0]=80;
  s.maxmarks[0]=84;
 }
 else if(s.a==3)
 {
  s.minmarks[0]=75;
  s.maxmarks[0]=79;
 }
 else if(s.a==2.7f)
 {
  s.minmarks[0]=70;
  s.maxmarks[0]=74;
 }
 else if(s.a==2.3f)
 {
  s.minmarks[0]=65;
  s.maxmarks[0]=69;
 }
 else if(s.a==2)
 {
  s.minmarks[0]=60;
  s.maxmarks[0]=64;
 }
 else if(s.a==1.7f)
 {
  s.minmarks[0]=55;
  s.maxmarks[0]=59;
 }
 else if(s.a==1.3f)
 {
  s.minmarks[0]=50;
  s.maxmarks[0]=54;
 }
 else if(s.a==1)
 {
  s.minmarks[0]=45;
  s.maxmarks[0]=49;
 }
 else
 {
  s.minmarks[0]=0;
  s.maxmarks[0]=44;
 }
 if(s.b==4)
 {
  s.minmarks[1]=90;
  s.maxmarks[1]=100;
 }
 else if(s.b==3.7f)
 {
  s.minmarks[1]=85;
  s.maxmarks[1]=89;
 }
 else if(s.b==3.3f)
 {
  s.minmarks[1]=80;
  s.maxmarks[1]=84;
 }
 else if(s.b==3)
 {
  s.minmarks[1]=75;
  s.maxmarks[1]=79;
 }
 else if(s.b==2.7f)
 {
  s.minmarks[1]=70;
  s.maxmarks[1]=74;
 }
 else if(s.b==2.3f)
 {
  s.minmarks[1]=65;
  s.maxmarks[1]=69;
 }
 else if(s.b==2)
 {
  s.minmarks[1]=60;
  s.maxmarks[1]=64;
 }
 else if(s.b==1.7f)
 {
  s.minmarks[1]=55;
  s.maxmarks[1]=59;
 }
 else if(s.b==1.3f)
 {
  s.minmarks[1]=50;
  s.maxmarks[1]=54;
 }
 else if(s.b==1)
 {
  s.minmarks[1]=45;
  s.maxmarks[1]=49;
 }
 else
 {
  s.minmarks[1]=0;
  s.maxmarks[1]=44;
 }
 if(s.c==4)
 {
  s.minmarks[2]=90;
  s.maxmarks[2]=100;
 }
 else if(s.c==3.7f)
 {
  s.minmarks[2]=85;
  s.maxmarks[2]=89;
 }
 else if(s.c==3.3f)
 {
  s.minmarks[2]=80;
  s.maxmarks[2]=84;
 }
 else if(s.c==3)
 {
  s.minmarks[2]=75;
  s.maxmarks[2]=79;
 }
 else if(s.c==2.7f)
 {
  s.minmarks[2]=70;
  s.maxmarks[2]=74;
 }
 else if(s.c==2.3f)
 {
  s.minmarks[2]=65;
  s.maxmarks[2]=69;
 }
 else if(s.c==2)
 {
  s.minmarks[2]=60;
  s.maxmarks[2]=64;
 }
 else if(s.c==1.7f)
 {
  s.minmarks[2]=55;
  s.maxmarks[2]=59;
 }
 else if(s.c==1.3f)
 {
  s.minmarks[2]=50;
  s.maxmarks[2]=54;
 }
 else if(s.c==1)
 {
  s.minmarks[2]=45;
  s.maxmarks[2]=49;
 }
 else
 {
  s.minmarks[2]=0;
  s.maxmarks[2]=44;
 }
 if(s.d==4)
 {
  s.minmarks[3]=90;
  s.maxmarks[3]=100;
 }
 else if(s.d==3.7f)
 {
  s.minmarks[3]=85;
  s.maxmarks[3]=89;
 }
 else if(s.d==3.3f)
 {
  s.minmarks[3]=80;
  s.maxmarks[3]=84;
 }
 else if(s.d==3)
 {
  s.minmarks[3]=75;
  s.maxmarks[3]=79;
 }
 else if(s.d==2.7f)
 {
  s.minmarks[3]=70;
  s.maxmarks[3]=74;
 }
 else if(s.d==2.3f)
 {
  s.minmarks[3]=65;
  s.maxmarks[3]=69;
 }
 else if(s.d==2)
 {
  s.minmarks[3]=60;
  s.maxmarks[3]=64;
 }
 else if(s.d==1.7f)
 {
  s.minmarks[3]=55;
  s.maxmarks[3]=59;
 }
 else if(s.d==1.3f)
 {
  s.minmarks[3]=50;
  s.maxmarks[3]=54;
 }
 else if(s.d==1)
 {
  s.minmarks[3]=45;
  s.maxmarks[3]=49;
 }
 else
 {
  s.minmarks[3]=0;
  s.maxmarks[3]=44;
 }
 if(s.e==4)
 {
  s.minmarks[4]=90;
  s.maxmarks[4]=100;
 }
 else if(s.e==3.7f)
 {
  s.minmarks[4]=85;
  s.maxmarks[4]=89;
 }
 else if(s.e==3.3f)
 {
  s.minmarks[4]=80;
  s.maxmarks[4]=84;
 }
 else if(s.e==3)
 {
  s.minmarks[4]=75;
  s.maxmarks[4]=79;
 }
 else if(s.e==2.7f)
 {
  s.minmarks[4]=70;
  s.maxmarks[4]=74;
 }
 else if(s.e==2.3f)
 {
  s.minmarks[4]=65;
  s.maxmarks[4]=69;
 }
 else if(s.e==2)
 {
  s.minmarks[4]=60;
  s.maxmarks[4]=64;
 }
 else if(s.e==1.7f)
 {
  s.minmarks[4]=55;
  s.maxmarks[4]=59;
 }
 else if(s.e==1.3f)
 {
  s.minmarks[4]=50;
  s.maxmarks[4]=54;
 }
 else if(s.e==1)
 {
  s.minmarks[4]=45;
  s.maxmarks[4]=49;
 }
 else
 {
  s.minmarks[4]=0;
  s.maxmarks[4]=44;
 }
 s.sgpa=(s.a*3+s.b*3+s.c*3+s.d*3+s.e*4)/16;
 for(s.i=0;s.i<5;s.i++)
 {
  s.minper=s.minper+(float)s.minmarks[s.i]/5;
  s.maxper=s.maxper+(float)s.maxmarks[s.i]/5;
 }
 
 fp6=fopen("result6.txt","ab");
 if(fp6==NULL)
 {
  printf("\nFile creation error has occrued !!!");
 }
 else
 {
  fwrite(&s,sizeof(s),1,fp6);
  fclose(fp6);
 }
 sixthsemdisplay();
 getch();
 //newinput();
}


void seventhsem()
{
 printf("\nPlease input your good name:");
 fflush(stdin);
 gets(s.name);
 printf("\nPlease input following information:");
 printf("\n\nGrade you have got in Electronic Commerce   :");
 printf("\nFor example: A or a-  :");
 gets(s.ecom);
 strlwr(s.ecom);
 s.a=strcmp(s.ecom,"a");
 if(s.a==0)
 s.a=4;
 else
 {
  s.a=strcmp(s.ecom,"a-");
  if(s.a==0)
  s.a=3.7;
  else
  {
   s.a=strcmp(s.ecom,"b+");
   if(s.a==0)
   s.a=3.3f;
   else
   {
    s.a=strcmp(s.ecom,"b");
    if(s.a==0)
    s.a=3;
    else
    {
     s.a=strcmp(s.ecom,"b-");
     if(s.a==0)
     s.a=2.7f;
     else
     {
      s.a=strcmp(s.ecom,"c+");
      if(s.a==0)
      s.a=2.3;
      else
      {
       s.a=strcmp(s.ecom,"c");
       if(s.a==0)
       s.a=2;
       else
       {
        s.a=strcmp(s.ecom,"c-");
        if(s.a==0)
        s.a=1.7;
        else
        {
         s.a=strcmp(s.ecom,"d+");
         if(s.a==0)
         s.a=1.3;
         else
         {
          s.a=strcmp(s.ecom,"d");
          if(s.a==0)
          s.a=1;
          else
          {
           s.a=strcmp(s.ecom,"f");
           if(s.a==0)
           s.a=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Economics   :");
 fflush(stdin);
 gets(s.eco);
 strlwr(s.eco);
 s.b=strcmp(s.eco,"a");
 if(s.b==0)
 s.b=4;
 else
 {
  s.b=strcmp(s.eco,"a-");
  if(s.b==0)
  s.b=3.7;
  else
  {
   s.b=strcmp(s.eco,"b+");
   if(s.b==0)
   s.b=3.3f;
   else
   {
    s.b=strcmp(s.eco,"b");
    if(s.b==0)
    s.b=3;
    else
    {
     s.b=strcmp(s.eco,"b-");
     if(s.b==0)
     s.b=2.7f;
     else
     {
      s.b=strcmp(s.eco,"c+");
      if(s.b==0)
      s.b=2.3;
      else
      {
       s.b=strcmp(s.eco,"c");
       if(s.b==0)
       s.b=2;
       else
       {
        s.b=strcmp(s.eco,"c-");
        if(s.b==0)
        s.b=1.7;
        else
        {
         s.b=strcmp(s.eco,"d+");
         if(s.b==0)
         s.b=1.3;
         else
         {
          s.b=strcmp(s.eco,"d");
          if(s.b==0)
          s.b=1;
          else
          {
           s.b=strcmp(s.eco,"f");
           if(s.b==0)
           s.b=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Elective-I   :");
 fflush(stdin);
 gets(s.ele1);
 strlwr(s.ele1);
 s.c=strcmp(s.ele1,"a");
 if(s.c==0)
 s.c=4;
 else
 {
  s.c=strcmp(s.ele1,"a-");
  if(s.c==0)
  s.c=3.7;
  else
  {
   s.c=strcmp(s.ele1,"b+");
   if(s.c==0)
   s.c=3.3f;
   else
   {
    s.c=strcmp(s.ele1,"b");
    if(s.c==0)
    s.c=3;
    else
    {
     s.c=strcmp(s.ele1,"b-");
     if(s.c==0)
     s.c=2.7f;
     else
     {
      s.c=strcmp(s.ele1,"c+");
      if(s.c==0)
      s.c=2.3;
      else
      {
       s.c=strcmp(s.ele1,"c");
       if(s.c==0)
       s.c=2;
       else
       {
        s.c=strcmp(s.ele1,"c-");
        if(s.c==0)
        s.c=1.7;
        else
        {
         s.c=strcmp(s.ele1,"d+");
         if(s.c==0)
         s.c=1.3;
         else
         {
          s.c=strcmp(s.ele1,"d");
          if(s.c==0)
          s.c=1;
          else
          {
           s.c=strcmp(s.ele1,"f");
           if(s.c==0)
           s.c=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Internship  :");
 fflush(stdin);
 gets(s.intern);
 strlwr(s.intern);
 s.d=strcmp(s.intern,"a");
 if(s.d==0)
 s.d=4;
 else
 {
  s.d=strcmp(s.intern,"a-");
  if(s.d==0)
  s.d=3.7;
  else
  {
   s.d=strcmp(s.intern,"b+");
   if(s.d==0)
   s.d=3.3f;
   else
   {
    s.d=strcmp(s.intern,"b");
    if(s.d==0)
    s.d=3;
    else
    {
     s.d=strcmp(s.intern,"b-");
     if(s.d==0)
     s.d=2.7f;
     else
     {
      s.d=strcmp(s.intern,"c+");
      if(s.d==0)
      s.d=2.3;
      else
      {
       s.d=strcmp(s.intern,"c");
       if(s.d==0)
       s.d=2;
       else
       {
        s.d=strcmp(s.intern,"c-");
        if(s.d==0)
        s.d=1.7;
        else
        {
         s.d=strcmp(s.intern,"d+");
         if(s.d==0)
         s.d=1.3;
         else
         {
          s.d=strcmp(s.intern,"d");
          if(s.d==0)
          s.d=1;
          else
          {
           s.d=strcmp(s.intern,"f");
           if(s.d==0)
           s.d=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 

if(s.a==4)
 {
  s.minmarks[0]=90;
  s.maxmarks[0]=100;
 }
 else if(s.a==3.7f)
 {
  s.minmarks[0]=85;
  s.maxmarks[0]=89;
 }
 else if(s.a==3.3f)
 {
  s.minmarks[0]=80;
  s.maxmarks[0]=84;
 }
 else if(s.a==3)
 {
  s.minmarks[0]=75;
  s.maxmarks[0]=79;
 }
 else if(s.a==2.7f)
 {
  s.minmarks[0]=70;
  s.maxmarks[0]=74;
 }
 else if(s.a==2.3f)
 {
  s.minmarks[0]=65;
  s.maxmarks[0]=69;
 }
 else if(s.a==2)
 {
  s.minmarks[0]=60;
  s.maxmarks[0]=64;
 }
 else if(s.a==1.7f)
 {
  s.minmarks[0]=55;
  s.maxmarks[0]=59;
 }
 else if(s.a==1.3f)
 {
  s.minmarks[0]=50;
  s.maxmarks[0]=54;
 }
 else if(s.a==1)
 {
  s.minmarks[0]=45;
  s.maxmarks[0]=49;
 }
 else
 {
  s.minmarks[0]=0;
  s.maxmarks[0]=44;
 }
 if(s.b==4)
 {
  s.minmarks[1]=90;
  s.maxmarks[1]=100;
 }
 else if(s.b==3.7f)
 {
  s.minmarks[1]=85;
  s.maxmarks[1]=89;
 }
 else if(s.b==3.3f)
 {
  s.minmarks[1]=80;
  s.maxmarks[1]=84;
 }
 else if(s.b==3)
 {
  s.minmarks[1]=75;
  s.maxmarks[1]=79;
 }
 else if(s.b==2.7f)
 {
  s.minmarks[1]=70;
  s.maxmarks[1]=74;
 }
 else if(s.b==2.3f)
 {
  s.minmarks[1]=65;
  s.maxmarks[1]=69;
 }
 else if(s.b==2)
 {
  s.minmarks[1]=60;
  s.maxmarks[1]=64;
 }
 else if(s.b==1.7f)
 {
  s.minmarks[1]=55;
  s.maxmarks[1]=59;
 }
 else if(s.b==1.3f)
 {
  s.minmarks[1]=50;
  s.maxmarks[1]=54;
 }
 else if(s.b==1)
 {
  s.minmarks[1]=45;
  s.maxmarks[1]=49;
 }
 else
 {
  s.minmarks[1]=0;
  s.maxmarks[1]=44;
 }
 if(s.c==4)
 {
  s.minmarks[2]=90;
  s.maxmarks[2]=100;
 }
 else if(s.c==3.7f)
 {
  s.minmarks[2]=85;
  s.maxmarks[2]=89;
 }
 else if(s.c==3.3f)
 {
  s.minmarks[2]=80;
  s.maxmarks[2]=84;
 }
 else if(s.c==3)
 {
  s.minmarks[2]=75;
  s.maxmarks[2]=79;
 }
 else if(s.c==2.7f)
 {
  s.minmarks[2]=70;
  s.maxmarks[2]=74;
 }
 else if(s.c==2.3f)
 {
  s.minmarks[2]=65;
  s.maxmarks[2]=69;
 }
 else if(s.c==2)
 {
  s.minmarks[2]=60;
  s.maxmarks[2]=64;
 }
 else if(s.c==1.7f)
 {
  s.minmarks[2]=55;
  s.maxmarks[2]=59;
 }
 else if(s.c==1.3f)
 {
  s.minmarks[2]=50;
  s.maxmarks[2]=54;
 }
 else if(s.c==1)
 {
  s.minmarks[2]=45;
  s.maxmarks[2]=49;
 }
 else
 {
  s.minmarks[2]=0;
  s.maxmarks[2]=44;
 }
 if(s.d==4)
 {
  s.minmarks[3]=90;
  s.maxmarks[3]=100;
 }
 else if(s.d==3.7f)
 {
  s.minmarks[3]=85;
  s.maxmarks[3]=89;
 }
 else if(s.d==3.3f)
 {
  s.minmarks[3]=80;
  s.maxmarks[3]=84;
 }
 else if(s.d==3)
 {
  s.minmarks[3]=75;
  s.maxmarks[3]=79;
 }
 else if(s.d==2.7f)
 {
  s.minmarks[3]=70;
  s.maxmarks[3]=74;
 }
 else if(s.d==2.3f)
 {
  s.minmarks[3]=65;
  s.maxmarks[3]=69;
 }
 else if(s.d==2)
 {
  s.minmarks[3]=60;
  s.maxmarks[3]=64;
 }
 else if(s.d==1.7f)
 {
  s.minmarks[3]=55;
  s.maxmarks[3]=59;
 }
 else if(s.d==1.3f)
 {
  s.minmarks[3]=50;
  s.maxmarks[3]=54;
 }
 else if(s.d==1)
 {
  s.minmarks[3]=45;
  s.maxmarks[3]=49;
 }
 else
 {
  s.minmarks[3]=0;
  s.maxmarks[3]=44;
 }
 
 s.sgpa=(s.a*3+s.b*3+s.c*3+s.d*3)/12;
 for(s.i=0;s.i<4;s.i++)
 {
  s.minper=s.minper+(float)s.minmarks[s.i]/4;
  s.maxper=s.maxper+(float)s.maxmarks[s.i]/4;
 }
 seventhsemdisplay();
 fp7=fopen("result7.txt","ab");
 if(fp7==NULL)
 {
  printf("\nFile creation error has occrued !!!");
 }
 else
 {
  fwrite(&s,sizeof(s),1,fp7);
  fclose(fp7);
 }
 getch();
 //newinput();
}

void eighthsem()
{
 printf("\nPlease input your good name:");
 fflush(stdin);
 gets(s.name);
 printf("\nPlease input following information:");
 printf("\n\nGrade you have got in Linux(for example: A or a-):");
 gets(s.linux);
 strlwr(s.linux);
 s.a=strcmp(s.linux,"a");
 if(s.a==0)
 s.a=4;
 else
 {
  s.a=strcmp(s.linux,"a-");
  if(s.a==0)
  s.a=3.7;
  else
  {
   s.a=strcmp(s.linux,"b+");
   if(s.a==0)
   s.a=3.3f;
   else
   {
    s.a=strcmp(s.linux,"b");
    if(s.a==0)
    s.a=3;
    else
    {
     s.a=strcmp(s.linux,"b-");
     if(s.a==0)
     s.a=2.7f;
     else
     {
      s.a=strcmp(s.linux,"c+");
      if(s.a==0)
      s.a=2.3;
      else
      {
       s.a=strcmp(s.linux,"c");
       if(s.a==0)
       s.a=2;
       else
       {
        s.a=strcmp(s.linux,"c-");
        if(s.a==0)
        s.a=1.7;
        else
        {
         s.a=strcmp(s.linux,"d+");
         if(s.a==0)
         s.a=1.3;
         else
         {
          s.a=strcmp(s.linux,"d");
          if(s.a==0)
          s.a=1;
          else
          {
           s.a=strcmp(s.linux,"f");
           if(s.a==0)
           s.a=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Organization Management    :");
 fflush(stdin);
 gets(s.orma);
 strlwr(s.orma);
 s.b=strcmp(s.orma,"a");
 if(s.b==0)
 s.b=4;
 else
 {
  s.b=strcmp(s.orma,"a-");
  if(s.b==0)
  s.b=3.7;
  else
  {
   s.b=strcmp(s.orma,"b+");
   if(s.b==0)
   s.b=3.3f;
   else
   {
    s.b=strcmp(s.orma,"b");
    if(s.b==0)
    s.b=3;
    else
    {
     s.b=strcmp(s.orma,"b-");
     if(s.b==0)
     s.b=2.7f;
     else
     {
      s.b=strcmp(s.orma,"c+");
      if(s.b==0)
      s.b=2.3;
      else
      {
       s.b=strcmp(s.orma,"c");
       if(s.b==0)
       s.b=2;
       else
       {
        s.b=strcmp(s.orma,"c-");
        if(s.b==0)
        s.b=1.7;
        else
        {
         s.b=strcmp(s.orma,"d+");
         if(s.b==0)
         s.b=1.3;
         else
         {
          s.b=strcmp(s.orma,"d");
          if(s.b==0)
          s.b=1;
          else
          {
           s.b=strcmp(s.orma,"f");
           if(s.b==0)
           s.b=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Final Project   :");
 fflush(stdin);
 gets(s.fpro);
 strlwr(s.fpro);
 s.c=strcmp(s.fpro,"a");
 if(s.c==0)
 s.c=4;
 else
 {
  s.c=strcmp(s.fpro,"a-");
  if(s.c==0)
  s.c=3.7;
  else
  {
   s.c=strcmp(s.fpro,"b+");
   if(s.c==0)
   s.c=3.3f;
   else
   {
    s.c=strcmp(s.fpro,"b");
    if(s.c==0)
    s.c=3;
    else
    {
     s.c=strcmp(s.fpro,"b-");
     if(s.c==0)
     s.c=2.7f;
     else
     {
      s.c=strcmp(s.fpro,"c+");
      if(s.c==0)
      s.c=2.3;
      else
      {
       s.c=strcmp(s.fpro,"c");
       if(s.c==0)
       s.c=2;
       else
       {
        s.c=strcmp(s.fpro,"c-");
        if(s.c==0)
        s.c=1.7;
        else
        {
         s.c=strcmp(s.fpro,"d+");
         if(s.c==0)
         s.c=1.3;
         else
         {
          s.c=strcmp(s.fpro,"d");
          if(s.c==0)
          s.c=1;
          else
          {
           s.c=strcmp(s.fpro,"f");
           if(s.c==0)
           s.c=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 printf("\n\nGrade you have got in Electives-II  :");
 fflush(stdin);
 gets(s.ele2);
 strlwr(s.ele2);
 s.d=strcmp(s.ele2,"a");
 if(s.d==0)
 s.d=4;
 else
 {
  s.d=strcmp(s.ele2,"a-");
  if(s.d==0)
  s.d=3.7;
  else
  {
   s.d=strcmp(s.ele2,"b+");
   if(s.d==0)
   s.d=3.3f;
   else
   {
    s.d=strcmp(s.ele2,"b");
    if(s.d==0)
    s.d=3;
    else
    {
     s.d=strcmp(s.ele2,"b-");
     if(s.d==0)
     s.d=2.7f;
     else
     {
      s.d=strcmp(s.ele2,"c+");
      if(s.d==0)
      s.d=2.3;
      else
      {
       s.d=strcmp(s.ele2,"c");
       if(s.d==0)
       s.d=2;
       else
       {
        s.d=strcmp(s.ele2,"c-");
        if(s.d==0)
        s.d=1.7;
        else
        {
         s.d=strcmp(s.ele2,"d+");
         if(s.d==0)
         s.d=1.3;
         else
         {
          s.d=strcmp(s.ele2,"d");
          if(s.d==0)
          s.d=1;
          else
          {
           s.d=strcmp(s.ele2,"f");
           if(s.d==0)
           s.d=0;
           else
           wronginput();
          }
         }
        }
       }
      }
     }
     
    }
   }
  }
 }
 

if(s.a==4)
 {
  s.minmarks[0]=90;
  s.maxmarks[0]=100;
 }
 else if(s.a==3.7f)
 {
  s.minmarks[0]=85;
  s.maxmarks[0]=89;
 }
 else if(s.a==3.3f)
 {
  s.minmarks[0]=80;
  s.maxmarks[0]=84;
 }
 else if(s.a==3)
 {
  s.minmarks[0]=75;
  s.maxmarks[0]=79;
 }
 else if(s.a==2.7f)
 {
  s.minmarks[0]=70;
  s.maxmarks[0]=74;
 }
 else if(s.a==2.3f)
 {
  s.minmarks[0]=65;
  s.maxmarks[0]=69;
 }
 else if(s.a==2)
 {
  s.minmarks[0]=60;
  s.maxmarks[0]=64;
 }
 else if(s.a==1.7f)
 {
  s.minmarks[0]=55;
  s.maxmarks[0]=59;
 }
 else if(s.a==1.3f)
 {
  s.minmarks[0]=50;
  s.maxmarks[0]=54;
 }
 else if(s.a==1)
 {
  s.minmarks[0]=45;
  s.maxmarks[0]=49;
 }
 else
 {
  s.minmarks[0]=0;
  s.maxmarks[0]=44;
 }
 if(s.b==4)
 {
  s.minmarks[1]=90;
  s.maxmarks[1]=100;
 }
 else if(s.b==3.7f)
 {
  s.minmarks[1]=85;
  s.maxmarks[1]=89;
 }
 else if(s.b==3.3f)
 {
  s.minmarks[1]=80;
  s.maxmarks[1]=84;
 }
 else if(s.b==3)
 {
  s.minmarks[1]=75;
  s.maxmarks[1]=79;
 }
 else if(s.b==2.7f)
 {
  s.minmarks[1]=70;
  s.maxmarks[1]=74;
 }
 else if(s.b==2.3f)
 {
  s.minmarks[1]=65;
  s.maxmarks[1]=69;
 }
 else if(s.b==2)
 {
  s.minmarks[1]=60;
  s.maxmarks[1]=64;
 }
 else if(s.b==1.7f)
 {
  s.minmarks[1]=55;
  s.maxmarks[1]=59;
 }
 else if(s.b==1.3f)
 {
  s.minmarks[1]=50;
  s.maxmarks[1]=54;
 }
 else if(s.b==1)
 {
  s.minmarks[1]=45;
  s.maxmarks[1]=49;
 }
 else
 {
  s.minmarks[1]=0;
  s.maxmarks[1]=44;
 }
 if(s.c==4)
 {
  s.minmarks[2]=90;
  s.maxmarks[2]=100;
 }
 else if(s.c==3.7f)
 {
  s.minmarks[2]=85;
  s.maxmarks[2]=89;
 }
 else if(s.c==3.3f)
 {
  s.minmarks[2]=80;
  s.maxmarks[2]=84;
 }
 else if(s.c==3)
 {
  s.minmarks[2]=75;
  s.maxmarks[2]=79;
 }
 else if(s.c==2.7f)
 {
  s.minmarks[2]=70;
  s.maxmarks[2]=74;
 }
 else if(s.c==2.3f)
 {
  s.minmarks[2]=65;
  s.maxmarks[2]=69;
 }
 else if(s.c==2)
 {
  s.minmarks[2]=60;
  s.maxmarks[2]=64;
 }
 else if(s.c==1.7f)
 {
  s.minmarks[2]=55;
  s.maxmarks[2]=59;
 }
 else if(s.c==1.3f)
 {
  s.minmarks[2]=50;
  s.maxmarks[2]=54;
 }
 else if(s.c==1)
 {
  s.minmarks[2]=45;
  s.maxmarks[2]=49;
 }
 else
 {
  s.minmarks[2]=0;
  s.maxmarks[2]=44;
 }
 if(s.d==4)
 {
  s.minmarks[3]=90;
  s.maxmarks[3]=100;
 }
 else if(s.d==3.7f)
 {
  s.minmarks[3]=85;
  s.maxmarks[3]=89;
 }
 else if(s.d==3.3f)
 {
  s.minmarks[3]=80;
  s.maxmarks[3]=84;
 }
 else if(s.d==3)
 {
  s.minmarks[3]=75;
  s.maxmarks[3]=79;
 }
 else if(s.d==2.7f)
 {
  s.minmarks[3]=70;
  s.maxmarks[3]=74;
 }
 else if(s.d==2.3f)
 {
  s.minmarks[3]=65;
  s.maxmarks[3]=69;
 }
 else if(s.d==2)
 {
  s.minmarks[3]=60;
  s.maxmarks[3]=64;
 }
 else if(s.d==1.7f)
 {
  s.minmarks[3]=55;
  s.maxmarks[3]=59;
 }
 else if(s.d==1.3f)
 {
  s.minmarks[3]=50;
  s.maxmarks[3]=54;
 }
 else if(s.d==1)
 {
  s.minmarks[3]=45;
  s.maxmarks[3]=49;
 }
 else
 {
  s.minmarks[3]=0;
  s.maxmarks[3]=44;
 }
 
 s.sgpa=(s.a*3+s.b*3+s.c*6+s.d*3)/15;
 for(s.i=0;s.i<4;s.i++)
 {
  s.minper=s.minper+(float)s.minmarks[s.i]/4;
  s.maxper=s.maxper+(float)s.maxmarks[s.i]/4;
 }
 
 fp8=fopen("result8.txt","ab");
 if(fp8==NULL)
 {
  printf("\nFile creation error has occrued !!!");
 }
 else
 {
  fwrite(&s,sizeof(s),1,fp8);
  fclose(fp8);
 }
 eighthsemdisplay();
 getch();
 //newinput();
}

void wronginput()
{
 printf("\nSORRY!!! You entered an invalid choice ");
 printf("\n Please, enter the valid grade between A to F ");
 
 //newinput();
 getch();
 
}
void displayresult()
{ 
 printf("\n Enter your semester number:");
 scanf("%d",&s.semno);
 switch(s.semno)
 {
  case 1:
  {
   fp1=fopen("result1.txt","rb");
   rewind(fp1);
   if(fp1==NULL)
   {
    printf("\n\nRead operation failure as the file which you are searching does not exist!!!");
   }
   else
   {
    while(fread(&s,sizeof(s),1,fp1)==1)
     firstsemdisplay();
    fclose(fp1);
   }
   break;
  }
  case 2:
  {
   fp2=fopen("result2.txt","rb");
   rewind(fp2);
   if(fp2==NULL)
    printf("\n\nRead operation failure as the file which you are searching does not exist!!!");
   else
   {
    while(fread(&s,sizeof(s),1,fp2)==1) 
    secondsemdisplay();
   fclose(fp2);
   }
   break;
  }
  case 3:
  {
   fp3=fopen("result3.txt","rb");
   rewind(fp3);
   if(fp3==NULL)
   {
    printf("\n\nRead operation failure as the file which you are searching does not exist!!!");
   }
   else
   {
    while(fread(&s,sizeof(s),1,fp3)==1)
    thirdsemdisplay();
    fclose(fp3);
   }
   break;
  }
  case 4:
  {
   fp4=fopen("result4.txt","rb");
   rewind(fp4);
   if(fp4==NULL)
   {
    printf("\n\nRead operation failure as the file which you are searching does not exist!!!");
   }
   else
   {
    while(fread(&s,sizeof(s),1,fp4)==1)
    fourthsemdisplay();
    fclose(fp4);
   }
   break;
  }
  case 5:
  {
   fp5=fopen("result5.txt","rb");
   rewind(fp5);
   if(fp5==NULL)
   {
    printf("\n\nRead operation failure as the file which you are searching does not exist!!!");
   }
   else
   {
    while(fread(&s,sizeof(s),1,fp5)==1)
    fifthsemdisplay();
    fclose(fp5);
   }
   break;
  }
  case 6:
  {
   fp6=fopen("result6.txt","rb");
   rewind(fp6);
   if(fp6==NULL)
   {
    printf("\n\nRead operation failure as the file which you are searching does not exist!!!");
   }
   else
   {
    while(fread(&s,sizeof(s),1,fp6)==1)
    sixthsemdisplay();
    fclose(fp6);
   }
   break;
  }
  case 7:
  {
   fp7=fopen("result7.txt","rb");
   rewind(fp7);
   if(fp7==NULL)
   {
    printf("\n\nRead operation failure as the file which you are searching does not exist!!!");
   }
   else
   {
    while(fread(&s,sizeof(s),1,fp7)==1)
    seventhsemdisplay();
    fclose(fp7);
   }
   break;
  }
  case 8:
  {
   fp8=fopen("result8.txt","rb");
   rewind(fp8);
   if(fp8==NULL)
   {
    printf("\n\nRead operation failure as the file which you are searching does not exist!!!");
   }
   else
   {
    while(fread(&s,sizeof(s),1,fp8)==1)
    eighthsemdisplay();
    fclose(fp8);
   }
  break;
  }
  default:
   wronginput();
 }
 getch(); 
}
void firstsemdisplay()
{
 //clrscr();
 printf("\n\n\nThe result of %s is as follows:",s.name);
 printf("\n\nThe sgpa you have got is :-  %f",s.sgpa );
 printf("\n\nThe marks you have obtained are as follows:");
 printf("\n\n\tEnglsh I                              :Maximum=%d and Minimum=%d",s.minmarks[0],s.maxmarks[0]);
 printf("\n\n\tMathematics I                         :Maximum=%d and Minimum=%d",s.minmarks[1],s.maxmarks[1]);
 printf("\n\n\tDigital Logic Systems                 :Maximum=%d and Minimum=%d",s.minmarks[2],s.maxmarks[2]);
 printf("\n\n\tComputer Fundamental and Application  :Maximum=%d and Minimum=%d",s.minmarks[3],s.maxmarks[3]);
 printf("\n\n\tProgramming Logic and Technique       :Maximum=%d and Minimum=%d",s.minmarks[4],s.maxmarks[4]);
 printf("\n\n\tThe minimum percentage you have got is:   %f",s.minper);
 printf("\n\n\tThe maximum percentage you have got is:   %f",s.maxper);
 if(s.sgpa>=3&&s.sgpa<3.6)
  printf("\n\n\tCongratulation!!! You have passed in first division!!!");
 else if(s.sgpa>=3.6&&s.sgpa<=4)
  printf("\n\n\tCongratulation !!! You have passed in distinction !!!");
 else if(s.sgpa>=2.5&&s.sgpa<3)
  printf("\n\n\tCongratulation you have passed in second division!!!");
 else if(s.sgpa>=2&&s.sgpa<2.5)
  printf("\n\n\tCongratulation you have passed in third division!!!");
 else
  fail();
  //main();
}
void secondsemdisplay()
{
 printf("\n\n\nThe result of %s is as follows:",s.name);
 printf("\n\n\tThe sgpa you have got is :-  %f",s.sgpa);
 printf("\n\nThe marks you have obtained are as follows:");
 printf("\n\n\tFundamental of Electrical and Electronics:Minimum=%d and Maximum=%d",s.minmarks[0],s.maxmarks[0]);
 printf("\n\n\tMathematics II                           :Minimum=%d and Maximum=%d",s.minmarks[1],s.maxmarks[1]);
 printf("\n\n\tprogramming Languages                    :Minimum=%d and Maximum=%d",s.minmarks[2],s.maxmarks[2]);
 printf("\n\n\tFinancial accounting                     :Minimum=%d and Maximum=%d",s.minmarks[3],s.maxmarks[3]);
 printf("\n\n\tProgramming Logic and Technique          :Minimum=%d and Maximum=%d",s.minmarks[4],s.maxmarks[4]);
 printf("\n\n\tProject I                                :Minimum=%d and Maximum=%d",s.minmarks[5],s.maxmarks[5]);
 printf("\n\n\tThe minimum percentage you have got is:   %f",s.minper);
 printf("\n\n\tThe maximum percentage you have got is:   %f",s.maxper);
 if(s.sgpa>=3&&s.sgpa<3.6)
  printf("\n\n\tCongratulation!!! You have passed in first division!!!");
 else if(s.sgpa>=3.6&&s.sgpa<=4)
  printf("\n\n\tCongratulation !!! You have passed in distinction !!!");
 else if(s.sgpa>=2.5&&s.sgpa<3)
  printf("\n\n\tCongratulation you have passed in second division!!!");
 else if(s.sgpa>=2&&s.sgpa<2.5)
  printf("\n\n\tCongratulation you have passed in third division!!!"); 
 else
  fail();
 //main();
}
void thirdsemdisplay()
{
 printf("\n\nThe result of %s is as follows:",s.name);
 printf("\n\n\nThe sgpa you have got is :-  %f",s.sgpa );
 printf("\n\nThe marks you have obtained are as follows:");
 printf("\n\n\tMicroprocessor                :Minimum=%d and Maximum=%d",s.minmarks[0],s.maxmarks[0]);
 printf("\n\n\tData Structure& Algorithms    :Minimum=%d and Maximum=%d",s.minmarks[1],s.maxmarks[1]);
 printf("\n\n\tObject Oriented Programming   :Minimum=%d and Maximum=%d",s.minmarks[2],s.maxmarks[2]);
 printf("\n\n\tSystem Analysis and Design    :Minimum=%d and Maximum=%d",s.minmarks[3],s.maxmarks[3]);
 printf("\n\n\tFinancial accountancy-II      :Minimum=%d and Maximum=%d",s.minmarks[4],s.maxmarks[4]);
 printf("\n\n\tThe minimum percentage you have got is:   %f",s.minper);
 printf("\n\n\tThe maximum percentage you have got is:   %f",s.maxper);
 if(s.sgpa>=3&&s.sgpa<3.6)
  printf("\n\n\tCongratulation!!! You have passed in first division!!!");
 else if(s.sgpa>=3.6&&s.sgpa<=4)
  printf("\n\n\tCongratulation !!! You have passed in distinction !!!");
 else if(s.sgpa>=2.5&&s.sgpa<3)
  printf("\n\n\tCongratulation you have passed in second division!!!");
 else if(s.sgpa>=2&&s.sgpa<2.5)
  printf("\n\n\tCongratulation you have passed in third division!!!");
 else
  fail();
  //main();
}
void fourthsemdisplay()
{
 printf("\n\nThe result of %s is as follows:",s.name);
 printf("\n\n\nThe sgpa you have got is :-  %f",s.sgpa );
 printf("\n\nThe marks you have obtained are as follows:");
 printf("\n\n\tVisual Programming         :Minimum=%d and Maximum=%d",s.minmarks[0],s.maxmarks[0]);
 printf("\n\n\tNumerical Methods          :Minimum=%d and Maximum=%d",s.minmarks[1],s.maxmarks[1]);
 printf("\n\n\tOperating System           :Minimum=%d and Maximum=%d",s.minmarks[2],s.maxmarks[2]);
 printf("\n\n\tDatabase Management System :Minimum=%d and Maximum=%d",s.minmarks[3],s.maxmarks[3]);
 printf("\n\n\tCompute Graphics           :Minimum=%d and Maximum=%d",s.minmarks[4],s.maxmarks[4]);
 printf("\n\n\tProject –II                :Minimum=%d and Maximum=%d",s.minmarks[5],s.maxmarks[5]);
 printf("\n\n\tThe minimum percentage you have got is:   %f",s.minper);
 printf("\n\n\tThe maximum percentage you have got is:   %f",s.maxper);
 if(s.sgpa>=3&&s.sgpa<3.6)
  printf("\n\n\tCongratulation!!! You have passed in first division!!!");
 else if(s.sgpa>=3.6&&s.sgpa<=4)
  printf("\n\n\tCongratulation !!! You have passed in distinction !!!");
 else if(s.sgpa>=2.5&&s.sgpa<3)
  printf("\n\n\tCongratulation you have passed in second division!!!");
 else if(s.sgpa>=2&&s.sgpa<2.5)
  printf("\n\n\tCongratulation you have passed in third division!!!");
 else
  fail();
  //main();
}
void fifthsemdisplay()
{
 printf("\n\nThe result of %s is as follows:",s.name);
 printf("\n\n\nThe sgpa you have got is :-  %f",s.sgpa );
 printf("\n\nThe marks you have obtained are as follows:");
 printf("\n\n\tNetworks & Data Communication :Minimum=%d and Maximum=%d",s.minmarks[0],s.maxmarks[0]);
 printf("\n\n\tCompute Architecture          :Minimum=%d and Maximum=%d",s.minmarks[1],s.maxmarks[1]);
 printf("\n\n\tWeb Technology-I              :Minimum=%d and Maximum=%d",s.minmarks[2],s.maxmarks[2]);
 printf("\n\n\tJava Programming              :Minimum=%d and Maximum=%d",s.minmarks[3],s.maxmarks[3]);
 printf("\n\n\tManagement Information System :Minimum=%d and Maximum=%d",s.minmarks[4],s.maxmarks[4]);
 printf("\n\n\tThe minimum percentage you have got is:   %f",s.minper);
 printf("\n\n\tThe maximum percentage you have got is:   %f",s.maxper);
 if(s.sgpa>=3&&s.sgpa<3.6)
  printf("\n\n\tCongratulation!!! You have passed in first division!!!");
 else if(s.sgpa>=3.6&&s.sgpa<=4)
  printf("\n\n\tCongratulation !!! You have passed in distinction !!!");
 else if(s.sgpa>=2.5&&s.sgpa<3)
  printf("\n\n\tCongratulation you have passed in second division!!!");
 else if(s.sgpa>=2&&s.sgpa<2.5)
  printf("\n\n\tCongratulation you have passed in third division!!!");
 else
  fail();
  //main();
}
void sixthsemdisplay()
{
 printf("\n\nThe result of %s is as follows:",s.name);
 printf("\n\n\nThe sgpa you have got is :-  %f",s.sgpa );
 printf("\n\nThe marks you have obtained are as follows:");
 printf("\n\n\tMultimedia Technology :Minimum=%d and Maximum=%d",s.minmarks[0],s.maxmarks[0]);
 printf("\n\n\tSoftware Engineering  :Minimum=%d and Maximum=%d",s.minmarks[1],s.maxmarks[1]);
 printf("\n\n\tWeb Technology-II     :Minimum=%d and Maximum=%d",s.minmarks[2],s.maxmarks[2]);
 printf("\n\n\tStatistics            :Minimum=%d and Maximum=%d",s.minmarks[3],s.maxmarks[3]);
 printf("\n\n\tProject-III           :Minimum=%d and Maximum=%d",s.minmarks[4],s.maxmarks[4]);
 printf("\n\n\tThe minimum percentage you have got is:   %f",s.minper);
 printf("\n\n\tThe maximum percentage you have got is:   %f",s.maxper);
 if(s.sgpa>=3&&s.sgpa<3.6)
  printf("\n\n\tCongratulation!!! You have passed in first division!!!");
 else if(s.sgpa>=3.6&&s.sgpa<=4)
  printf("\n\n\tCongratulation !!! You have passed in distinction !!!");
 else if(s.sgpa>=2.5&&s.sgpa<3)
  printf("\n\n\tCongratulation you have passed in second division!!!");
 else if(s.sgpa>=2&&s.sgpa<2.5)
  printf("\n\n\tCongratulation you have passed in third division!!!");
 else
  fail();
  //main();
}
void seventhsemdisplay()
{
 printf("\n\nThe result of %s is as follows:",s.name);
 printf("\n\n\nThe sgpa you have got is :-  %f",s.sgpa );
 printf("\n\nThe marks you have obtained are as follows:");
 printf("\n\n\tElectronic Commerce  :Minimum=%d and Maximum=%d",s.minmarks[0],s.maxmarks[0]);
 printf("\n\n\tEconomics            :Minimum=%d and Maximum=%d",s.minmarks[1],s.maxmarks[1]);
 printf("\n\n\tElective-I           :Minimum=%d and Maximum=%d",s.minmarks[2],s.maxmarks[2]);
 printf("\n\n\tInternship           :Minimum=%d and Maximum=%d",s.minmarks[3],s.maxmarks[3]);
 printf("\n\n\tThe minimum percentage you have got is:   %f",s.minper);
 printf("\n\n\tThe maximum percentage you have got is:   %f",s.maxper);
 if(s.sgpa>=3&&s.sgpa<3.6)
  printf("\n\n\tCongratulation!!! You have passed in first division!!!");
 else if(s.sgpa>=3.6&&s.sgpa<=4)
  printf("\n\n\tCongratulation !!! You have passed in distinction !!!");
 else if(s.sgpa>=2.5&&s.sgpa<3)
  printf("\n\n\tCongratulation you have passed in second division!!!");
 else if(s.sgpa>=2&&s.sgpa<2.5)
  printf("\n\n\tCongratulation you have passed in third division!!!");
 else
  fail();
  //main();
}
void eighthsemdisplay()
{
 printf("\n\nThe result of %s is as follows:",s.name);
 printf("\n\n\nThe sgpa you have got is :-  %f",s.sgpa );
 printf("\n\nThe marks you have obtained are as follows:");
 printf("\n\n\tLinux                   :Minimum=%d and Maximum=%d",s.minmarks[0],s.maxmarks[0]);
 printf("\n\n\tOrganization Management :Minimum=%d and Maximum=%d",s.minmarks[1],s.maxmarks[1]);
 printf("\n\n\tFinal Project           :Minimum=%d and Maximum=%d",s.minmarks[2],s.maxmarks[2]);
 printf("\n\n\tElectives-II            :Minimum=%d and Maximum=%d",s.minmarks[3],s.maxmarks[3]);
 printf("\n\n\tThe minimum percentage you have got is:   %f",s.minper);
 printf("\n\n\tThe maximum percentage you have got is:   %f",s.maxper);
 if(s.sgpa>=3&&s.sgpa<3.6)
  printf("\n\n\tCongratulation!!! You have passed in first division!!!");
 else if(s.sgpa>=3.6&&s.sgpa<=4)
  printf("\n\n\tCongratulation !!! You have passed in distinction !!!");
 else if(s.sgpa>=2.5&&s.sgpa<3)
  printf("\n\n\tCongratulation you have passed in second division!!!");
 else if(s.sgpa>=2&&s.sgpa<2.5)
  printf("\n\n\tCongratulation you have passed in third division!!!");
 else
  fail();
 // main();
}


void deleteresult()
{
 char sname[50];
 int found=0;
// clrscr();
 printf("\n\t\t*****************************************");
 printf("\n\t\t***************Delete Menu***************");
 printf("\n\t\t*****************************************");
 printf("\n\n\t\t1. Delete first semester student record  ");
 printf("\n\n\t\t2. Delete second semester student record ");
 printf("\n\n\t\t3. Delete third semester student record  ");
 printf("\n\n\t\t4. Delete fourth semester student record ");
 printf("\n\n\t\t5. Delete fifth semester student record  ");
 printf("\n\n\t\t6. Delete sixth semester student record  ");
 printf("\n\n\t\t7. Delete seventh semester student record");
 printf("\n\n\t\t8. Delete eighth semester student record ");
 printf("\n\n\nEnter your choice for delete ");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
 
  fflush(stdin);
  printf("\nEnter the name of the student which you want to delete  :");
  gets(sname);
  fp1=fopen("result1.txt","rb");
  fp11=fopen("newresult1.txt","wb");
  if(fp1==NULL||fp11==NULL)
  {
   printf("\nResult delete operation failed!!!!!!!!!!!!!!!!");
  }
  else
  {
   while(fread(&s,sizeof(s),1,fp1)==1)
   {
    if(strcmpi(s.name,sname)==0)
    {
    found++; 
    continue;
    }
    else
    {
     fwrite(&s,sizeof(s),1,fp11);
    }
   }
   fclose(fp1);
   fclose(fp11);
   if(found!=0)
   {
   remove("result1.txt");
   rename("newresult1.txt","result1.txt");
   printf("\n\nThe record has been successfully deleted from the data file!!!");
   }
   else
    printf("\nThe record which you want to delete does not exist!!!");
  }
  break;
  case 2:
 
  fflush(stdin);
  printf("\nEnter the name of the student which you want to delete  :");
  gets(sname);
  fp2=fopen("result2.txt","rb");
  fp11=fopen("newresult1.txt","wb");
  if(fp2==NULL||fp11==NULL)
  {
   printf("\nResult delete operation failed!!!!!!!!!!!!!!!!");
  }
  else
  {
   while(fread(&s,sizeof(s),1,fp2)==1)
   {
    if(strcmpi(s.name,sname)==0)
    {
    found++; 
    continue;
    }
    else
    {
     fwrite(&s,sizeof(s),1,fp11);
    }
   }
   fclose(fp2);
   fclose(fp11);
   if(found!=0)
   {
   remove("result2.txt");
   rename("newresult1.txt","result2.txt");
   printf("\n\nThe record has been successfully deleted from the data file!!!");
   }
   else
    printf("\nThe record which you want to delete does not exist!!!");
  }
  break;
  case 3:
 
  fflush(stdin);
  printf("\nEnter the name of the student which you want to delete  :");
  gets(sname);
  fp3=fopen("result3.txt","rb");
  fp11=fopen("newresult1.txt","wb");
  if(fp3==NULL||fp11==NULL)
  {
   printf("\nResult delete operation failed!!!!!!!!!!!!!!!!");
  }
  else
  {
   while(fread(&s,sizeof(s),1,fp3)==1)
   {
    if(strcmpi(s.name,sname)==0)
    {
    found++; 
    continue;
    }
    else
    {
     fwrite(&s,sizeof(s),1,fp11);
    }
   }
   fclose(fp3);
   fclose(fp11);
   if(found!=0)
   {
   remove("result3.txt");
   rename("newresult1.txt","result3.txt");
   printf("\n\nThe record has been successfully deleted from the data file!!!");
   }
   else
    printf("\nThe record which you want to delete does not exist!!!");
  }
  break;
  case 4:
 
  fflush(stdin);
  printf("\nEnter the name of the student which you want to delete  :");
  gets(sname);
  fp4=fopen("result4.txt","rb");
  fp11=fopen("newresult1.txt","wb");
  if(fp4==NULL||fp11==NULL)
  {
   printf("\nResult delete operation failed!!!!!!!!!!!!!!!!");
  }
  else
  {
   while(fread(&s,sizeof(s),1,fp4)==1)
   {
    if(strcmpi(s.name,sname)==0)
    {
    found++; 
    continue;
    }
    else
    {
     fwrite(&s,sizeof(s),1,fp11);
    }
   }
   fclose(fp4);
   fclose(fp11);
   if(found!=0)
   {
   remove("result4.txt");
   rename("newresult1.txt","result4.txt");
   printf("\n\nThe record has been successfully deleted from the data file!!!");
   }
   else
    printf("\nThe record which you want to delete does not exist!!!");
  }
  break;
  case 5:
 
  fflush(stdin);
  printf("\nEnter the name of the student which you want to delete  :");
  gets(sname);
  fp5=fopen("result5.txt","rb");
  fp11=fopen("newresult1.txt","wb");
  if(fp5==NULL||fp11==NULL)
  {
   printf("\nResult delete operation failed!!!!!!!!!!!!!!!!");
  }
  else
  {
   while(fread(&s,sizeof(s),1,fp5)==1)
   {
    if(strcmpi(s.name,sname)==0)
    {
    found++; 
    continue;
    }
    else
    {
     fwrite(&s,sizeof(s),1,fp11);
    }
   }
   fclose(fp5);
   fclose(fp11);
   if(found!=0)
   {
   remove("result5.txt");
   rename("newresult1.txt","result5.txt");
   printf("\n\nThe record has been successfully deleted from the data file!!!");
   }
   else
    printf("\nThe record which you want to delete does not exist!!!");
  }
  break;
  case 6:
 
  fflush(stdin);
  printf("\nEnter the name of the student which you want to delete  :");
  gets(sname);
  fp6=fopen("result6.txt","rb");
  fp11=fopen("newresult1.txt","wb");
  if(fp6==NULL||fp11==NULL)
  {
   printf("\nResult delete operation failed!!!!!!!!!!!!!!!!");
  }
  else
  {
   while(fread(&s,sizeof(s),1,fp6)==1)
   {
    if(strcmpi(s.name,sname)==0)
    {
    found++; 
    continue;
    }
    else
    {
     fwrite(&s,sizeof(s),1,fp11);
    }
   }
   fclose(fp6);
   fclose(fp11);
   if(found!=0)
   {
   remove("result6.txt");
   rename("newresult1.txt","result6.txt");
   printf("\n\nThe record has been successfully deleted from the data file!!!");
   }
   else
    printf("\nThe record which you want to delete does not exist!!!");
  }
  break;
  case 7:
 
  fflush(stdin);
  printf("\nEnter the name of the student which you want to delete  :");
  gets(sname);
  fp7=fopen("result7.txt","rb");
  fp11=fopen("newresult1.txt","wb");
  if(fp7==NULL||fp11==NULL)
  {
   printf("\nResult delete operation failed!!!!!!!!!!!!!!!!");
  }
  else
  {
   while(fread(&s,sizeof(s),1,fp7)==1)
   {
    if(strcmpi(s.name,sname)==0)
    {
    found++; 
    continue;
    }
    else
    {
     fwrite(&s,sizeof(s),1,fp11);
    }
   }
   fclose(fp7);
   fclose(fp11);
   if(found!=0)
   {
   remove("result7.txt");
   rename("newresult1.txt","result7.txt");
   printf("\n\nThe record has been successfully deleted from the data file!!!");
   }
   else
    printf("\nThe record which you want to delete does not exist!!!");
  }
  break;
  case 8:
 
  fflush(stdin);
  printf("\nEnter the name of the student which you want to delete  :");
  gets(sname);
  fp8=fopen("result8.txt","rb");
  fp11=fopen("newresult1.txt","wb");
  if(fp8==NULL||fp11==NULL)
  {
   printf("\nResult delete operation failed!!!!!!!!!!!!!!!!");
  }
  else
  {
   while(fread(&s,sizeof(s),1,fp8)==1)
   {
    if(strcmpi(s.name,sname)==0)
    {
    found++; 
    continue;
    }
    else
    {
     fwrite(&s,sizeof(s),1,fp11);
    }
   }
   fclose(fp8);
   fclose(fp11);
   if(found!=0)
   {
   remove("result8.txt");
   rename("newresult1.txt","result8.txt");
   printf("\n\nThe record has been successfully deleted from the data file!!!");
   }
   else
    printf("\nThe record which you want to delete does not exist!!!");
  }
  break;
 default:
  printf("\nYou entered invalid choice for search ");
 }
 getch();
 //newinput();
}

void searchresult()
{
 int found=0;
 char sname[50];
 printf("\nPlease Input the semester number:");
 scanf("%d",&s.semno);
 fflush(stdin);
 switch(s.semno)
 {
  case 1:
   printf("\nPlease input name of the student which you want to search : ");
   gets(sname);
   fp1=fopen("result1.txt","rb");
   if(fp1==NULL)
   {
    printf("\nFile search operation failed!!!!!!!!!!!!!!!!");
   }
   else
   {
    rewind(fp1);
    while(fread(&s,sizeof(s),1,fp1)==1)
    {
        if(strcmpi(sname,s.name)==0)
     {
      firstsemdisplay();
      found++;
     }
    }
    if(found==0)
    printf("Sorry the result which you are searching does not exist!!!");
   }
   break;
   
   
  case 2:
   printf("\nPlease input name of the student which you want to search : ");
   gets(sname);
   fp2=fopen("result2.txt","rb");
   if(fp2==NULL)
   {
    printf("\nFile search operation failed!!!!!!!!!!!!!!!!");
   }
   else
   {
    rewind(fp2);
    while(fread(&s,sizeof(s),1,fp2)==1)
    {
        if(strcmpi(sname,s.name)==0)
     {
      secondsemdisplay();
      found++;
     }
    }
    if(found==0)
    printf("Sorry the result which you are searching does not exist!!!");
   }
   break;
     
   
  case 3:
   printf("\nPlease input name of the student which you want to search : ");
   gets(sname);
   fp3=fopen("result3.txt","rb");
   if(fp3==NULL)
   {
    printf("\nFile search operation failed!!!!!!!!!!!!!!!!");
   }
   else
   {
    rewind(fp3);
    while(fread(&s,sizeof(s),1,fp3)==1)
    {
        if(strcmpi(sname,s.name)==0)
     {
      thirdsemdisplay();
      found++;
     }
    }
    if(found==0)
    printf("Sorry the result which you are searching does not exist!!!");
   }
   break;
       
   
  case 4:
   printf("\nPlease input name of the student which you want to search : ");
   gets(sname);
   fp4=fopen("result4.txt","rb");
   if(fp4==NULL)
   {
    printf("\nFile search operation failed!!!!!!!!!!!!!!!!");
   }
   else
   {
    rewind(fp4);
    while(fread(&s,sizeof(s),1,fp4)==1)
    {
        if(strcmpi(sname,s.name)==0)
     {
      fourthsemdisplay();
      found++;
     }
    }
    if(found==0)
    printf("Sorry the result which you are searching does not exist!!!");
   }
   break;
        
   
  case 5:
   printf("\nPlease input name of the student which you want to search : ");
   gets(sname);
   fp5=fopen("result5.txt","rb");
   if(fp5==NULL)
   {
    printf("\nFile search operation failed!!!!!!!!!!!!!!!!");
   }
   else
   {
    rewind(fp5);
    while(fread(&s,sizeof(s),1,fp5)==1)
    {
        if(strcmpi(sname,s.name)==0)
     {
      fifthsemdisplay();
      found++;
     }
    }
    if(found==0)
    printf("Sorry the result which you are searching does not exist!!!");
   }
   break;
         
   
  case 6:
   printf("\nPlease input name of the student which you want to search : ");
   gets(sname);
   fp6=fopen("result6.txt","rb");
   if(fp6==NULL)
   {
    printf("\nFile search operation failed!!!!!!!!!!!!!!!!");
   }
   else
   {
    rewind(fp6);
    while(fread(&s,sizeof(s),1,fp6)==1)
    {
        if(strcmpi(sname,s.name)==0)
     {
      sixthsemdisplay();
      found++;
     }
    }
    if(found==0)
    printf("Sorry the result which you are searching does not exist!!!");
   }
   break;
         
   
  case 7:
   printf("\nPlease input name of the student which you want to search : ");
   gets(sname);
   fp7=fopen("result7.txt","rb");
   if(fp7==NULL)
   {
    printf("\nFile search operation failed!!!!!!!!!!!!!!!!");
   }
   else
   {
    rewind(fp7);
    while(fread(&s,sizeof(s),1,fp7)==1)
    {
        if(strcmpi(sname,s.name)==0)
     {
      seventhsemdisplay();
      found++;
     }
    }
    if(found==0)
    printf("Sorry the result which you are searching does not exist!!!");
   }
   break;
         
   
  case 8:
   printf("\nPlease input name of the student which you want to search : ");
   gets(sname);
   fp8=fopen("result8.txt","rb");
   if(fp8==NULL)
   {
    printf("\nFile search operation failed!!!!!!!!!!!!!!!!");
   }
   else
   {
    rewind(fp8);
    while(fread(&s,sizeof(s),1,fp8)==1)
    {
        if(strcmpi(sname,s.name)==0)
     {
      eighthsemdisplay();
      found++;
     }
    }
    if(found==0)
    printf("Sorry the result which you are searching does not exist!!!");
   }
   break;
   
   default:
    semwronginput();
 }
 getch();
}
void fail()
{
 printf("\n\n\tSorry you are fail !!!");
}
void semwronginput()
{
 printf("\nSORRY!!! You entered an invalid choice ");
 printf("\nPlease, enter the valid choice between 1 to 8 ");
}

void quit()
{
 exit(0);
}
