#include <iostream>
#include "date.h"
		
date::date(){
	jour = 0 ; 
	mois = 0 ; 
	annee = 0; 
}

date::date(int j, int m, int a){
	jour = j; 
	mois = m; 
	annee = a; 
}

int date::getJour(){
	return jour;
}
int date::getMois(){
	return mois;
}
int date::getAnnee(){
	return annee;
}

void date::setJour(int j){
	jour=j;
}
void date::setMois(int m){
	mois = m;
}
void date::setAnnee(int a){
	annee = a;
}

string date::afficherDate(){
	string jourDecimal = jour; 
	string moisDecimal = mois; 	
	if(jour<10){
		jourDecimal = "0" + jour; 
	}
	if(mois<10){
		moisDecimal = "0" + mois; 
	}
	return jourDecimal + "/" + moisDecimal + "/" + annee ;  
}

