/*
 * ADCFit.h
 *
 *  Created on: Feb 21, 2019
 *      Author: dylan
 */

#ifndef ADCFIT_H_
#define ADCFIT_H_


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


ifstream open_file();
void read_data(ifstream &data_file);
void analyze_data();
void plot_data();

bool read_line(ifstream &data_file, vector <int> &line);

void print_peaks();






#endif /* ADCFIT_H_ */
