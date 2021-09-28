#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mx 10
typedef struct date
{
  int j,m,a;
}date;
  
typedef struct etudient 
{
  char nom[25],prenom[25];
  int matricule;
  date dn;
  float note1,note2,exam,moy;
}etudient;
float moyenne(float a,float b, float c)
 {
   float moy;
   moy=(((a*0.4)+(b*0.6))*0.4+c*0.6);
   return moy;
 }
void remplir(etudient l[],int size){
  int i;
  for (size_t i = 0; i < size; i++)
    {
      getchar();
      printf("\n le nom d'etudient %d : ",i+1);
      gets(l[i].nom);
       printf("\n le prenom d'etudient %d : ",i+1);
      gets(l[i].prenom);
      printf("\n le matricule d'etudient %d : ",i+1);
      scanf("%d",&l[i].matricule);
      printf("\n le date nessaince d'etudient %d : ",i+1);
       printf("\ndonnez le jour :");scanf("%d",&l[i].dn.j);
       printf("\ndonnez le mois :");scanf("%d",&l[i].dn.m);
       printf("\ndonnez l'annee :");scanf("%d",&l[i].dn.a);
       do{
           printf("\n le note td d'etudient %d : ",i+1);
           scanf("%f",&l[i].note1);
       }while (!(l[i].note1>0 && l[i].note1<20));
      do {
         printf("\n le note tp d'etudient %d : ",i+1);
         scanf("%f",&l[i].note2);
      }while (!(l[i].note2>0 && l[i].note2<20));
      do {
         printf("\n le note examan d'etudient %d : ",i+1);
         scanf("%f",&l[i].exam);
      }while (!(l[i].exam>0 && l[i].exam<20));
      l[i].moy=moyenne(l[i].note1,l[i].note2,l[i].exam);
    }
}

 void quidonnemention(float abs)
{
   char r[25];       
  if (abs>=16)
  {
    strcpy(r,"tres bien");
  }
  else if (abs>=14 && abs<16)
  {
    strcpy(r," bien");
  }
  else if (abs>=12 && abs<14)
  {
    strcpy(r,"assez bien");
  }
  else if (abs>=10 && abs<12)
  {
      
    strcpy(r,"passable");
  }
  else 
  {
    strcpy(r,"ajourne");
  }
  printf("%s",r);
}
  void affichage(etudient x[],int p)
  {
    int i;
    for (i=0; i<p;i++)
    {
      printf("\n le nom et prenom d'etudient %d : %s %s ",i+1,x[i].nom,x[i].prenom);
      printf("\n le matricule d'etudient %d : %d ",i+1,x[i].matricule);
      printf("\n le date nessaince d'etudient %d : ",i+1);
      printf(" : %d / %d / %d .",x[i].dn.j,x[i].dn.m,x[i].dn.a);
      printf("\n la moyenne d'etudient %d : %.2f ",i+1,x[i].moy);
      printf("\n le mention d'etudient %d : ",i+1);
      quidonnemention(x[i].moy);
      printf("\n--------------------------------------------------------------\n");
    }
  }
void trie(etudient a[],int n)
 {
    int i,j;
    etudient temp;
       for ( j =n-2; j>=0; j--)
           for ( i=0; i<=j; i++)
               if(a[i].moy<a[i+1].moy)
               {
                  temp=a[i]; a[i]=a[i+1]; a[i+1]=temp;
               }
 }
 void major(etudient a[],int n)
 {
  float max;
  int imax=0,i;
  max=a[0].moy;
  for ( i = 0; i < n; i++)
  {
   if (max<a[i].moy)
   {
     max=a[i].moy;
     imax=i;
   }
  }
   printf("\nle major de promo est l'etudiant : %s %s\n",a[imax].nom,a[imax].prenom);          
 }  
   int undermoy(etudient a[],int n)
   {
      int i,number=0;
      for ( i = 0; i < n; i++){
        if (a[i].moy<10)
        {
          number++;
        } 
      }
      return (number);
   }
int main(){
    etudient e[mx],v[mx];
    int n,i,newN;
    do
    {
      printf("\n donnez nombre des etudients N = ");
      scanf("%d",&n);
    } while (n<=0 ||n>10);
     printf("\n-> remplir les information des etudients :\n");
    remplir(e,n);
    trie(e,n);
    system("cls");
    printf("\n-> les information des etudients apres les examans:\n");
    affichage(e,n); 
    major(e,n);
    newN=undermoy(e,n);
    printf("\nnumero des etudients ses moyennes <10 : %d\n",newN);
    
    for ( i = 0; i < n; i++)
    {
      v[i]=e[i];
    }
    printf("\n-> remplir les information des etudients qui pass rattrapage :\n");
    for (i = 0; i < n; i++)
    { 
      if (v[i].moy<10)
      {
      
         printf("\n le nom et prenom d'etudient %d : %s %s ",i+1,v[i].nom,v[i].prenom);
      
         printf("\n le matricule d'etudient %d : %d ",i+1,v[i].matricule);

         printf("\n le date nessaince d'etudient %d : %d/%d/%d ",i+1,v[i].dn.j,v[i].dn.m,v[i].dn.a);
       
         printf("\n le note td d'etudient %d : %f",i+1,v[i].note1);
        
         printf("\n le note tp d'etudient %d : %f ",i+1,v[i].note2);

        getchar(); 

         do
          {
             printf("\n le note examan d'etudient %d : ",i+1);
             scanf("%f",&v[i].exam);
          }while (!(v[i].exam>0 && v[i].exam<20));
        v[i].moy=moyenne(v[i].note1,v[i].note2,v[i].exam);
      }
    }
    for ( i = 0; i < n; i++)
    {
      if (v[i].moy>e[i].moy)
      {
        e[i].moy=v[i].moy;
      }
      
    }
    printf("\n-> la deliberation final apres le rattrapage : \n");
    affichage(e,n);
    major(e,n); 
    printf("les etudients qui ses maoyenne <10 apres rattrapage sont : %d",newN);
   printf("\n");
   system("pause");
return 0;
}