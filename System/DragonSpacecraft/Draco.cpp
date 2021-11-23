#include "Draco.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Draco:: Draco object
 * 
 */
Draco::Draco() {
	turnOff();
	this->setPower(80);
	SetDracoisCreatedChecker(0);
}

/**
 * @brief Construct a new Draco:: Draco object
 * 
 * @param id 
 */
Draco::Draco(string id) {
	SetDracoisCreatedChecker(0);
	this->setPower(80);
	this->setId(id);
	turnOff();
}

/**
 * @brief turns on the draco thruster
 * 
 */
void Draco::fireUp() {
	if(isOn() == true){
		cout<<getId()<<" turned on, firing up!"<<endl;
	}
	else{
		cout<<getId()<<" is not turned on yet, please turn it on"<<endl;
	}	
}

/**
 * @brief shuts down the draco thruster
 * 
 */
void Draco::shutDown() {
	this->turnOff();
	cout<<getId()<<" has been shut down"<<endl;
}
