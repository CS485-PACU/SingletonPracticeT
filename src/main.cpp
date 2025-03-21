//***************************************************************************
// File name:   main.cpp
// Author:      
// Date:        3/21/2025
// Class:       
// Assignment:  
// Purpose:     
//***************************************************************************

#include <iostream>
#include "../include/LogSingleton.h"


//***************************************************************************
// Function:    functionToUseSingleton
//
// Description: Test Singleton
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
int functionToUseSingleton()
{
	LogSingleton& rcTheSingletion = LogSingleton::Instance();


	rcTheSingletion.write("FUNCTION: FRIDAY\n");
	rcTheSingletion.write("FUNCTION: SpringBreak\n");
}


//***************************************************************************
// Function:    main
//
// Description: Test Singleton
//
// Parameters:  none
//
// Returned:    EXIT_SUCCESS
//***************************************************************************
int main()
{
	LogSingleton& rcTheSingletion = LogSingleton::Instance("data/log.txt");


	functionToUseSingleton();

	rcTheSingletion.write("FRIDAY\n");
	rcTheSingletion.write("SpringBreak\n");
	
	functionToUseSingleton();
	
	return EXIT_SUCCESS;
}
