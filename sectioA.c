#include<stdio.h>
#include<stdlib.h>
#define p 3 

int main(){ 
    int x,y,z,som;
    float moy;
    printf("\ndonner le X :");   //ecrire     donner le X :
    scanf("%d",&x);              //lire
    printf("\ndonner le Y :");
    scanf("%d",&y);
    printf("\ndonner le Z :");
    scanf("%d",&z);
    som=x+y+z;
    moy=som/p;
    printf("\nla moyenne est : %.2f\n",moy);
    system("pause");
 return 0;
}

