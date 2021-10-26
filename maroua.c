#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 9
#define mx 9

int main(){ 
    char sh[mx],ch[mx],m[max],r='0';
    int j,n,i,x,y,l;
    for (size_t j = 0;j < 1000; j++)
    {
      
    /* switch (expression)
     {
     case  constant-expression :
        /* code 
        break;
     
     default:
        break;
     } */
      do
      {
          printf("donner les bit leur nombres entre 2 et 8 : ");
          scanf("%d",&n);
      } while (n<1 || n>=9);
      
      printf("donner leur premier nombre : ");
      scanf("%s",sh);
      
     
      printf("donner leur deuxieme nombre : ");
      scanf("%s",ch);
     
     
      printf("");
      //Soustraction
      for ( i =n; i >= 0; i--)
      {
          if (ch[i]=='0' && sh[i]=='0' && r=='0')
          { 
             m[i]='0';
             r='0';
          }
          else if (ch[i]=='0' && sh[i]=='0' && r=='1')
          {
             m[i]='1';
             r='0';
          }
          else if (ch[i]=='0' && sh[i]=='1'  && r=='0') 
          {                                      
             m[i]='1';
             r='0';
          }
           else if (ch[i]=='0' && sh[i]=='1'  && r=='1')                      
          {
             m[i]='0';
             r='0'; 
          }
          else if (ch[i]=='1' && sh[i]=='0'&& r=='0')
          {
            m[i]='1';
             r='1'; 
          }
          else if (ch[i]=='1' && sh[i]=='0'&& r=='1')
          {
             m[i]='0';
             r='0'; 
          }
           else if (ch[i]=='1' && sh[i]=='1' && r=='0')
          {
             m[i]='0';
             r='0';
          }
             else if (ch[i]=='1' && sh[i]=='1' && r=='1')
          { 
             m[i]='1';
             r='0';
          }
      }
      printf("\nleur nombre apres la Soustraction est : %c%s ",r,m);
       printf("");
      //adition
     
      for ( i =n+1; i >= 0; i--)
      {
          if (ch[i]=='0' && sh[i]=='0' && r=='0')
          { 
             m[i]='0';
             r='0';
          }
          else if (ch[i]=='0' && sh[i]=='0' && r=='1')
          {
             m[i]='1';
             r='0';
          }
          else if ((ch[i]=='1' && sh[i]=='0' || ch[i]=='0' && sh[i]=='1') && r=='0')
          { 
             m[i]='1';
             r='0';
          }
           else if ((ch[i]=='1' && sh[i]=='0' || ch[i]=='0' && sh[i]=='1') && r=='1')
          {
             m[i]='0';
             r='1'; 
          }
           else if (ch[i]=='1' && sh[i]=='1' && r=='0')
          {
             m[i]='0';
             r='1';
          }
             else if (ch[i]=='1' && sh[i]=='1' && r=='1')
          { 
             m[i]='1';
             r='1';
          }
          
      }
      printf("\nleur nombre apres l'addition est : %c%s ",r,m);
      printf("\n");

         
    system("pause");
    }
    return 0;
}