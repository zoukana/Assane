#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ici on a déclarer les bibliothéques 
int main()
{
	char buffer[80];// ici buffer est varriable de type chaine de carractére 
	int tab[3] = {111, 222, 333};//ici le tableau contient 3 codes secrets différents
	int i;//ici la variable "i "nous permet de parcourrir le tableau
	int n = 2;//ici "n" est le nombre de fois que l'on repeter le code secret si elle est incorrect
	printf("Entrer un code : ");//ici on demande a l'utilisateur de saisir un code secret
	scanf("%[^\n]", buffer);//ici l'ordinateur doit lire buffer qui est un varriable de type  carractére 
	do
	{
		//n--;
		bool isCorrect = true;/*ici on définit "iscorrect " comme un varraible de type booléen soit vrai soit faux
								maintenant "iscorrect" est vrai si et seulement si lorsque "buffer" est un entier
								tantque la varriable "i" déclarer ici parcour la taille de "buffer" et qu'il découvre 
								l'exitance d'un carractére ou autre chose
							*/
		size_t length = strlen(buffer);
		for (int i = 0; i < length; i++)
		{
			if (!isdigit(buffer[i]))
										//ici on verifer "buffer" est de type entier
			{
				isCorrect = false;
			}
		}

		if (isCorrect)//ici on pose une condition parsk "buffer' est un entier
		{
			int reponse = atoi(buffer);/*ici on déclare une varriable "reponse" qui vas traduire (atoi)
										la varriable "buffer" en une varriable de type entier
										*/


			while (reponse != tab[i])//ici on dit que tantque "reponse" different des 3trois code secret dans le tableau
			{
				if (i < 3)//ici on dit que si n'a pas encore verifier tous les codes du tableau a savoir les troi codes
				{
					i++;//reponse doit continuer successivement
				}
				else
				{
					/*sinon si reponse a verifier tous les codes du tableau et que le code secret ne figure
						pas sur le tableau, d'afficher a l'utilisateur
						 						fin tentative et d'arreter le programme
													*/		
					if (n == 0)		
					{
						printf("fin tentative ");
						return 0;
					}
					if (n == 1)			/*  si reponse a parcourir la deuxieme colonne (parsk "n" est initialisera 2 donc 
										on compte le tableau a partir de 0)	du tableau et que le code secret ne s'y 
										trouve pas , d'afficher a l'utilisateur qu 'il lui reste une tentative  
										
										*/
					{
						printf("Il vous reste une tentative");
						scanf("%d", &reponse);
					}
					else	/* sinon si il le parcours au premier colonne et le code  secret ne s'y trouve pas
							,d'afficher code incorrect veuillez réessayer	
								*/
					{
						printf("code incorrect veuillez reesayer \n");
						scanf("%d", &reponse);
					}
					/*ici la machine lui demande de resaisir le code secret a chak fois qu'il 
										parcours le tableau et qu'il ne trouve pas le code mais seulement a deux reprise
										*/
					i = 0;
					n--;//ici on a fait une décrémentation
				}
			}
			printf("code correcte");/*cependant ici a chak le code est verifier dans un colonne du tableau 
									il doit afficher code correct et arreter le programme
									*/
			return 0;
		}
		else //sinn "buffer"n'est pas entier
		{
			if (n == 0)
			{
				printf("session terminer");
				return 0;
			}
			if (n == 1)
			{
				printf("votre code doit etre un entier iL vous reste une tentative \n");
			}
			else
			{
				printf("votre code doit etre un entier veuillez  tenter a nouveau\n");
			}
			scanf("%s", buffer);
			n--;
		}

	} while (n < 2);/*ici on demande a l'ordinateur de faire l'éxécution tantque le nombre de fois que 
					l'on doit le faire est binférieur a 2
					*/
	return EXIT_SUCCESS;
}