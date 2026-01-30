#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main(){
    int n , i , s ;
    printf("Calcul de la somme des n premiers entiers positifs \n");
    printf("Veuillez saisir le nombre choisi : ");
    scanf("%d" , &n );
    s = 0 ;
    for ( i=0 ; i<=n ; i++){
        s += i ; }
    printf("La somme des %d premiers entiers positifs est %d " , n , s);
    return 0 ;
    }