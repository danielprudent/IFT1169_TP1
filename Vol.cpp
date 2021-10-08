#include <iostream>
#include "vol.h"

//Film::Film();
/*
Vol::Vol(int nbVol, string destination, int date, int nbTotalReservation){
	this->setnbVol(nbVol);
	this->destination = destination;
	this->setDate(date);
	this ->setnbTotalReservation(nbTotalReservation);
}

Vol::~Vol(){
}

int Vol::getnbVol(){
	return this->nbVol;
}
string Vol::getDestination(){
	return this->destination;
}
int Vol::getDate(){
	return this->date;
}
int Vol::getnbTotalReservation(){
	return this->nbTotalReservation;
}
void Vol::setnbVol(int nbVol){
	if (nbVol > 0){
		this->nbVol = nbVol;
	}else {
		cout << "Numéro du vol invalide !!!";
	}
}

void Vol::setDestination(string destination){
	this->destination = destination;
}

void Vol::setDate(int date){
	if (date >= 30){
		this->date = date;
	}else {
		cout << "Date invalide !!!";
	}
}
void Vol::setnbTotalReservation(int nbTotalReservation){
	if (date >= 100){
		this->nbTotalReservation = nbTotalReservation;
	}else {
		cout << "Pas de place valide pour le moment !!!";
	}
}
string Vol::afficherVol(){
	string rep = to_string(this->nbVol)+"\t"+this->destination+"\t"+to_string(this->date)+"\t"+to_string(this->nbTotalReservation)+"\n";
	return rep;
}
*/

Vol::Vol(int num, string dest, date d, avion av, int nbTotalRes){
	numVol = num;
	destination = dest;
	dateDepart = d;
	a = av; 
	nbTotalReservation = nbTotalRes; //??????? a voir avec le charge de lab si on teste que nbTotalRes not > nbsieges
}
	


	int Vol::getNumVol(){
		return numVol;
	}
	
	string Vol::getDestination(){
	return destination;
}

	date Vol::getDateDepart(){
	return dateDepart;
}

	avion Vol::getAvion(){
	return a;
}

	int Vol::getNbTotalReservation(){
	return nbTotalReservation;
}

void vol::setAnnee(date d){
	dateDepart = d;
}

void vol::setNbTotalReservation(int nombreTotal{
	if(nombreTotal<= a.getNombrePlaces())
		nbTotalReservation = nombreTotal;
	else //??????? a voir avec le charge de lab 
		cout << "Le nombre total de res doit etre inf au nombre de places de l avion " << endl ; 
}
			void setDateDepart(date);
			void setNbTotalReservation(int);
			
			string afficherVol();
