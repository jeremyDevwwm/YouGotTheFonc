//
//  powFonction.cpp
//  YouGotTheFonc
//
//  Created by Dijoux Jérémy on 14/06/2021.
//

#include "powFonction.hpp"
/*
 Recréation d'une fonction pow()
 nombre = correspond ou nombre qui va être élevé à la puissance
 exposant = correspond à l'exposant
 */

double powFonction (double nombre, double exposant){
    /*
     traitement des cas:
     
     Si l'exposant est supérieur à 0, il va servir de référence pour que nombre se
     mutiplie à lui même dans une boucle for
     
     Si l'exposant est inférieur à 0, sachant qu'un exposant négatif correspond à
     l'inverse du nombre élevé à la puissance positive, il faut non seulement passer
     l'exposant en positif en l'additionnant à lui même (*-2), et faire un callback
     après (1/) pour respecter la loi mathématique
     
     Si l'exposant est égal à 0, c'est facile, il suffit simplement d'injecter 1 au
     résultat.
     */
    double res(0);
    
    if(exposant > 0){
        for(int i = 1; i<exposant; i++){
            nombre*= nombre;
            res = nombre;
        }
    } else if (exposant < 0) {
        double callback = powFonction(nombre, exposant + exposant*-2);
        res = 1/callback;
        
    } else if (exposant == 0){
        res = 1;
    }
    return res;
}

