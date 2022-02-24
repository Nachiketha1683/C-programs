#include <stdio.h>
int slength(char str[])
{
     int len;
     for(len=0;str[len]!='\0';len++);
     return len;
}
  void scompare(char str1[],char str2[])
  {
      int i,flag=0;
      if(slength(str1)!=slength(str2))
      flag=1;
      else
      for(i=0;i<slength(str1);i++)
      if(str1[i]!=str2[i])
      {
          flag=1;
          break;
      }
      if(flag==1)
       printf("\n String are not equal\n");
      else
       printf("\n Strings are equal\n");
  }
   void sconcate(char str1[],char str2[],char conc[])
  {
      int i,j;
      for(i=0;i<slength(str1);i++)
      conc[i]=str1[i];
      for(j=0;j<slength(str2);j++)
      conc[i++]=str2[j];
      conc[i]='\0';
  }
   void main()
{
   char str1[50],str2[50],conc[100];
   int len,choice;
    while(1)
    {
         printf("\n\n\n Main menu\n");
         printf("\n1.compare strings\n2.concatenate strings\n3.string length\n4.Exit\n ");
         printf("Enter your choice\n");
         scanf("%d",&choice);
         fflush(stdin);
         switch(choice)
         {
             case 1:printf("\nEnter the first string:");
                    scanf("%s",str1);
                    printf("\nEnter the second string:");
                    scanf("%s",str2);
                    scompare(str1,str2);
                    break;
             case 2:printf("\nEnter the first string:");
                    scanf("%s",str1);
                    printf("Enter the second string:");
                    scanf("%s",str2);
                    sconcate(str1,str2,conc);
                    printf("\n Concanated string is %s \n\n",conc);
                    break;
             case 3:printf("\nEnter the string:");
                    scanf("%s",str1);
                    len=slength(str1);
                    printf("\n\nThe lenght of string is %d \n\n",len);
                    break;
             case 4:printf("\n exiting the program!!");
                    exit(0);
             default:printf("\n Invalid input!!");
         }
    }
}