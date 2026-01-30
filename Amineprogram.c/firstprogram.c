
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
int main() { 
    int n1 , n2  ; 
    printf("Veuillez saisir le premier entier : ");
    scanf("%d" , &n1 );
    printf("Veuillez saisir le deuxieme entier : ");
    scanf("%d" , &n2 );
    n1 += n2 ;
    n2 += n1 ;
    n1 = n2 - n1 ;
    n1 = n2 - n1 ; //permutation de deux entiers 
    printf("La nouvelle valeur de n1 est : %d " , n2 );
    printf("La nouvelle valeur de n2 est : %d " , n1 );
    // Exercice 6 TP 3 
    char chaine[100] ;
    int i1 , j1 , counter = 0 , voyel = 0 ;
    printf("Veuillez saisir une chaine de caracteres sans espaces : ");
    scanf("%99s" , &chaine);
    int length = sizeof(chaine) / sizeof(chaine[0]) ;
    for(i1 = 0 ; i1 < length ; i1++){
        if (chaine[i1] == 0){
        break; }
        counter += 1 ;
    }
    for ( j1 = 0 ; j1 < length ; j1++) {
        if ( chaine[j1] == 'A' || chaine[j1] == 'O' || chaine[j1] == 'U' || chaine[j1] == 'I' || chaine[j1] == 'E' || chaine[j1] == 'Y' || chaine[j1] == 'a' || chaine[j1] == 'o' || chaine[j1] == 'u' || chaine[j1] == 'i' || chaine[j1] == 'e' || chaine[j1] == 'y' )
            voyel++ ;
    }  
    printf("La longueur de la chaine est : %d \n" , counter);
    printf("Le nombre de voyelles dans votre chaine de caracteres est : %d \n" , voyel);
    // Exercice 4 TP 3 
    int n , i , j ;
    do { printf("Veuillez saisir la taille de la matrice : ");
    scanf("%d" , &n); }
    while (n <= 0 );
    int matrice[n][n] , matrice2[n][n] ; 
    for( i = 0 ; i < n ; i++ ){
        for(j = 0 ; j < n ; j++){
            printf("Veuillez saisir l'element de la ligne %d et la colonne %d de la matrice : " , i+1 , j+1 );
            scanf("%d" , &matrice[i][j]);
        }
    }
    for (i = 0 ; i < n ; i++){
        for (j = 0 ; j < n ; j++){
            matrice2[j][i] = matrice[i][j];
        }
    }
    printf("Votre nouvelle matrice est : \n");
    for( i = 0 ; i < n ; i++){
        for( j = 0 ; j < n ; j++ ){
            printf("%d \t\t" , matrice2[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}