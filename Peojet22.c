#include <stdio.h>
#include <string.h>
int main()
{
    int const Coef1=5, Coef2=6, Coef3=6;
    float devoir_Math[2] , devoir_PC[2],  devoir_SVT[2];
    int i=0;
    float Som_Math=0,N1=0, Som_Pc=0,N2=0, Som_Svt=0,N3=0;
    char nomEleve[20];
    float moyenne=0;

    printf("Saisissez votre nom\n");
    scanf("%s",nomEleve);
    
    for ( i = 0; i <2; i++)
    
        {
        printf("Entrez la note du devoir de math %d\n",i+1);
       if(scanf("%f",&devoir_Math[i])==0 || devoir_Math[i]<0 || devoir_Math[i]>20)
        {
             printf("veuillez devez saisir que des notes entier comprise entre 0 et 20 :\n ");
               return 0;
             
        }
        Som_Math=Som_Math+devoir_Math[i]; 
        }
       
    N1 = (Som_Math/2)*(Coef1);
    printf("la note coefficient de math est:%f\n",N1);

    for(i=0;i<2;i++)
    {
        printf("entrer la note du devoir de pc %d:\n",i+1);
         if(scanf("%f",&devoir_PC[i])==0 || devoir_PC[i]<0 || devoir_PC[i]>20)
        {
             printf("veuillez devez saisir que des notes  entier comprise entre 0 et 20 :\n ");
               return 0;
          
        }
        Som_Pc=Som_Pc+devoir_PC[i];
    }
        N2=(Som_Pc/2)*(Coef2);
        printf("la note coefficient de Pc est :%f\n",N2);

    for(i=0;i<2;i++)
    {
      printf("entrer la note du devoir de svt:%d \n",i+1);
          if(scanf("%f",&devoir_SVT[i])==0 || devoir_SVT[i]<0 || devoir_SVT[i]>20)
         {
             printf("veuillezdevz saisir que des notes notes comprise entre 0 et 20 :\n ");
           return 0;
        }
        Som_Svt=Som_Svt+devoir_SVT[i];   
    }
    N3=(Som_Svt/2)*(Coef3);
     printf("la note coefficient de Svt est: %f \n",N3);

     moyenne=(N1+N2+N3)/(17);
     printf("la MOYENNE GENERALE de %s est :%.2f \n",nomEleve,moyenne);
   
             if (moyenne<10)
            {
                printf("mention médiocre:");
             }
             else if(moyenne>=10 && moyenne<12)
            {
            printf("mention passable:");
            }
            else if(moyenne>=12 && moyenne<14)
                {
                printf("mention assez bien :");
                }else if(moyenne>=14 && moyenne<16)
                    {
                    printf("mention  bien:");
                     }else
                printf("mention trés bien");
                return 0;
}