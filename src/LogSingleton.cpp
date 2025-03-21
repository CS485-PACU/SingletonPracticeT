//***************************************************************************
// File name:  LogSingleton.cpp
// Author:     
// Date:       3/21/2025
// Class:      CS485
// Assignment: Singleton Example
// Purpose:    Practice with Singleton
//***************************************************************************

#include "LogSingleton.h"


//***************************************************************************
// Constructor: LogSingleton
//
// Description: Initialize Singleton - nothing to do here
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
LogSingleton::LogSingleton ()
{
	std::cerr << "LogSingleton created\n";
}

//***************************************************************************
// Function:    Instance
//
// Description: static method to retreive a reference to a LogSingleton
//
// Parameters:  rcFileName - the name of the file to open, default to ""
//
// Returned:    reference to a static LogSingleton
//***************************************************************************
LogSingleton& LogSingleton::Instance (const std::string &rcFileName = "")
{
}

//***************************************************************************
// Function:    write
//
// Description: write data to log
//
// Parameters:  rcData - the string to write
//
// Returned:    None
//***************************************************************************
void LogSingleton::write(const std::string &rcData) {
	mcOutFile << rcData;
}