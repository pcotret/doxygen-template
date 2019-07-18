/**
 * \file main.c
 * \brief Programme de tests.
 * \author John Doe
 * \version 0.1
 * \date 1 janvier 0001
 *
 * Programme de test.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
/**
 * \struct profil
 * \brief Profil d'une personne.
 * Hello world !
 */
typedef struct
{
   int age;  /*!< Age. */
   int taille; /*!< Taille. */
}
profil;
 


/**
 * \fn int myMultiply (int a, int b)
 * \brief Fonction de multiplication.
 *
 * \param a Variable a
 * \param b Variable b
 * \return  Produit de a et b
 */
int myMultiply (int a, int b)
{
   return a*b;
}
 
 
/**
 * \fn int main (void)
 * \brief Entrée du programme.
 *
 * \return EXIT_SUCCESS - Arrêt normal du programme.
 */
int main (void)
{
  int resultat;
  profil monprofil;
  monprofil.age=1;
  monprofil.taille=3;
  resultat = myMultiply(monprofil.age,monprofil.taille);
  printf("%i",resultat);
  return EXIT_SUCCESS;
}