//***************************************************************************
// File name:  LogSingleton.h
// Author:     Chadd Williams
// Date:       3/21/2025
// Class:      CS485
// Assignment: Log Singleton Example
// Purpose:    Practice writing a Singleton
//***************************************************************************
#pragma once
#include <iostream>
#include <fstream>

class LogSingleton
{
	public:


		static LogSingleton& Instance (const std::string &rcFileName = "");

		void write(const std::string &rcData);
		
	private:
		// ??? LogSingleton()
		// ??? ~LogSingleton()

		std::ofstream mcOutFile;

};