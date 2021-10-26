#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=2,cpt=0;
    //repeter
    do
    {
        printf("donner un nombre entier :");
        scanf("%d",&n);   //lire(n)
    } while (n<0);

    
    // tantque
    while (i<=n/2)
    {
      if (n%i==0)   //si(n mod i = 0)
      {
         cpt++; //cpt=cpt+1;
      }
        i++;
    }



    if (cpt!=0)  //si 
    {
        printf("cette nombre n'est pas premier\n");
    }
    else //sinon
    {
        printf("cette nombre est  premier\n");
    }
    
    
 
    system("pause");
    return 0;
}