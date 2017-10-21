/*
*  
*  
*
/* copyright (c) Manfred Steinbach 2017
*/


#include <iostream>		
#include <utility>											// für List Container
#include <map>
#include <set>
#include <string>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <cmath>
#include <vector>
#include <functional>
#include <algorithm>
#include <list>
#include <typeinfo>
#include <ctime>	
#include <iomanip>						
#define _USE_MATH_DEFINES									
#include <math.h>
#include <locale>

#include "C:\$Steinbach\Programmierung\VisualStudio Referenzdateien\my_header\mst_04_2016.h"

//#include "Myheader1.h"
//#include "Myheader2.h"


using namespace std;

//------------------------------------------------------------------------------
///////////// 20.10.2017 //////////  main  ///////////////////////////////////////////
/*

*/
int main()
{
	// für Umlaute
	//locale loc("");
	//locale::global(loc);
	try
	{
		std::cerr << "-------------\n--> main begin \n";
		//////////////////////////////////////

		



		//////////////////////////////////////
		std::cerr << "--> main end \n-------------\n";
	}
	
	catch (std::runtime_error e) {	// this code is to produce error messages
		std::cerr << e.what() << '\n';
		//mst_cin_reset();
		//keep_window_open("#");	// For some Windows(tm) setups
	}
	catch (...) {
		std::cerr << "Problem" << '\n';
		//mst_cin_reset();
	}
	////////////////////////////////////////////////////////////////////////////
	//cout << endl;
	//cout << "\nEnde Hauptprogramm" << endl;
	//cin.get();
	return 0;
}