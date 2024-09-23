//Lou AUNEAU & Alexandre CHAILLAT

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void alt_tps(int u0);

int main(){

    // Définitions des variables

    int un, p=0, alt=0;
    FILE *file;
    file=fopen("suite_syracuse.txt","w");

    // Choix du premier terme de la suite

    printf("Choix de u0 un entier strictement positif : ");
    scanf("%d", &un);
    fprintf(file,"# p un \n");

    // Utilisation de la fonction alt_tps qui renvoie directement l'altitude et le temps de vol de la suite à partir de u0
    
    alt_tps(un);

    // Calcul de la suite

    while(un>1){
        p=p+1;

        if(un%2 == 0){
        un = un/2;
        }
        else{
            un = 3*un + 1;
            if(un > alt){
                alt = un;
            }   
        }
    fprintf(file, "%d %d\n", p, un);
    }

    //Permet de vérifier que la suite finisse toujours par 1 au rang p

    printf("Resultat du programme principal : \n Le rang p pour lequel up=1 est %d et la derniere valeur de la suite est %d.\n", p, un); 
    printf("L'altitude de u0 est %d.\n", alt);

}

//Définition de la fonction alt_tps qui renvoie l'altitude et le temps de vol pour un u0 donné

void alt_tps(int u0){
    int tps=0, alt=0;

    while(u0>1){
        tps=tps+1;

        if(u0%2 == 0){
        u0 = u0/2;
        }
        else{
            u0 = 3*u0 + 1;
            if(u0 > alt){
                alt = u0;
            }   
        }
    }
    printf("Resultat de la fonction : \n L'altitude de u0 est %d.\n", alt);
    printf("Le temps de vol est %d. \n",tps);
    
}