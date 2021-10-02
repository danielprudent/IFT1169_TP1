#ifndef LISTE_H
#define LISTE_H

template <class T>
struct Noeud {
	T *contenu;
	Noeud<T> *suiv;
	Noeud<T> *prec;
};

template <class T>
class Liste
{
	public:
		Liste<T>();
		~Liste<T>();
		void ajouterElem(T *);
	protected:
		Noeud<T> *tete;
		Noeud<T> *queue;
		int nbelems;
		
};

#endif
