#include <iostream>
#include <fstream>
#include <cstring>
#include "vol.h"
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

#include "Liste.h"
#include "Vol.h"

using namespace std;

Liste<Vol> *listeVol;

void chargerVol(){
	//listeFilms = new Liste<Film>();
	ifstream entree;           	// fichier d'entrée
	ofstream sortie;          	// fichier de sortie
	string ligne;
	char *destination;
	int nbVol, date, nbTotalReservation;
	
	entree.open("donnees/Cie_Air_Relax.txt");
	if ( entree.fail() ) {
		cout << "problème d'ouverture";
		return;
	}

	//strtok ne peut pas recevoir en premier argument un string mais un char *
	//ligne.c_str() : Renvoie un pointeur vers un tableau qui contient une séquence de caractères se terminant par NULL (c'est-à-dire une chaîne C) 
	//représentant la valeur actuelle de la chaîne ligne
        
	while (getline(entree, ligne))	{
		nbVol = atoi(strtok((char *)ligne.c_str(),";"));//atoi convertir une chaîne en un entier
		destination = strtok(NULL, ";");
		date = atoi(strtok(NULL, ";"));
		nbTotalReservation = atoi(strtok(NULL, ";"));

	
			Vol *ptf = new Vol(nbVol, destination, date, nbTotalReservation);
			cout << ptf->afficherVol() << endl;
	
		
	}
	entree.close();
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//	Film f1(111,"Titanic",180);
	//	cout << f1.afficherFilm();
	
//	Vol v1;
//	Vol v2();
//	Vol *ptv = new Vol(555);
//	Vol v3(7777);
//	Vol v4(v3);
//	
//	v1.listerVols();
//	
//	ptv->listerVols();
	system("COLOR 5f");
	cout<<"\n\t\t\t\t LAB1 IFT1166\n\t\t  GESTION DES VOLS";
	cout<<"\nPress Enter to continue: ";
	getch();

	cout<<endl<<"\n\n\n\tBienvenue Cie Air Relax"<<endl;
//	string f_name, l_name, add, pass_no,phone_no;
//	int choice, datedep, date, month, year;
//	bool ans;
//	char ch;
//	time_t t= time(NULL);
//	tm* timePtr=localtime(&t);
//	date=(timePtr->tm_mday);
//	month=(timePtr->tm_mon)+1;
//	year=(timePtr->tm_year)+1900;


	
	back2:
	cout<<endl<<"Appuyer sur 1 pour la liste des vols"
	<<endl<<"Appuyer sur 2 pour l'ajout d'un vol"
	<<endl<<"Appuyer sur 3 pour le retrait dun vol"
	<<endl<<"Appuyer sur 4 pour modifier la date de depart"
	<<endl<<"Appuyer sur 5 pour la reservation dun vol"
	<<endl<<"Appuer 0 pour sortir/terminer\n";





    chargerVol();
	system("pause");
	return 0;
}
