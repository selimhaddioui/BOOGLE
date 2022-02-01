#pragma once

/**
 * @file ConteneurTDE.h
 * @brief Composant d'un conteneur d'items de capacité extensible.
 */

#include "Item.h"


 /** @brief Conteneur d'items alloués en mémoire dynamique
  *  de capacité extensible suivant un pas d'extension.
  */
struct ConteneurTDE {
	/// Capacité du conteneur (>0).
	unsigned int capacite;
	/// Pas d'extension du conteneur (>0).
	unsigned int pasExtension;
	/// Conteneur alloué en mémoire dynamique.
	Item* tab;
};

/**
 * @brief Initialise un conteneur d'items.
 * Allocation en mémoire dynamique du conteneur d'items
 * de capacité (capa) extensible par pas d'extension (p).
 * @see detruire, pour sa désallocation en fin d'utilisation.
 * @param[out] c Le conteneur d'items.
 * @param [in] capa Capacité du conteneur.
 * @param [in] p Pas d'extension de capacité.
 * @pre capa > 0 et p > 0.
 */
void initialiser(ConteneurTDE& c, unsigned int capa, unsigned int p);

/**
 * @brief Désalloue un conteneur d'items en mémoire dynamique.
 * @see initialiser.
 * @param[in,out] c Le conteneur d'items.
 */
void detruire(ConteneurTDE& c);

/**
 * @brief Lecture d'un item d'un conteneur d'items.
 * @param[in] c Le conteneur d'items.
 * @param[in] i La position de l'item dans le conteneur.
 * @return L'item à la position i.
 * @pre i < c.capacite
 */
Item lire(const ConteneurTDE& c, unsigned int i);

/**
 * @brief Ecrire un item dans un conteneur d'items.
 * @param[in,out] c Le conteneur d'items.
 * @param[in] i La position où modifier l'item.
 * @param[in] it L'item à écrire.
 */
void ecrire(ConteneurTDE& c, unsigned int i, const Item& it);
