#include <iostream>
#include "Liste.h"

template <class T>
Liste<T>::Liste()
{
	this->tete = NULL;
	this->queue = NULL;
	int nbelems = 0;
}

template <class T>
Liste<T>::~Liste()
{
}

template <class T>
void Liste<T>::ajouterElem(T *elem){
	Noeud<T> *pt = new Noeud<T>;
	pt->contenu = elem;
	pt->suiv = NULL;
	pt->prec = NULL;
	this->nbelems++;
	if (this->tete == NULL){
		this->tete = pt;
		this->queue = pt;
	}else {
		this->queue->suiv = pt;
		this->queue = pt;
	}
}
