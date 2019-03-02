#include <iostream>
#include <fstream>
#include "ADCFit.h"

using namespace std;


void Lab4Hist()
{
	ifstream data_file = open_file();
	read_data(data_file);
	data_file.close();
	analyze_data();
	plot_data();
}


int main()
{
	Lab4Hist();
	return(0);
}



