//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Augfabe3.7	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 23.11.2021 19:21:38
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	float f_Liter = 0;
	float f_Kilometer = 0;
	float f_Durchschnittsverbrauch = 0;


	//Code
	printf("Geben Sie die Anzahl von verbrauchten Litern Benzin an\n");
	scanf("%f", &f_Liter);
	printf("Geben Sie die gefahrenen Kilometer an\n");
	scanf("%f", &f_Kilometer);
	f_Durchschnittsverbrauch = (f_Liter / f_Kilometer * 100);
	printf("Der Durchschnittsverbrauch liegt bei %f L/100km\n", f_Durchschnittsverbrauch);


	getchar();
	fflush(stdin);
	getchar();
	return 0;
}