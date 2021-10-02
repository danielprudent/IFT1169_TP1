#include <iostream>
#include "vol.h"

//Film::Film();
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

