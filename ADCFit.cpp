/*
 * ADCFit.cpp
 *
 *  Created on: Feb 21, 2019
 *      Author: dylan
 */

#include <iostream>
#include <fstream>
#include <vector>
#include "ADCFit.h"
#include "config.h"
#include <TCanvas.h>

using namespace std;

ifstream open_file() {
	ifstream data_file (config::file_name);
	if(!data_file.is_open())
	{
		cout << config::file_open_error << endl;
	}

	return(data_file);
}

void read_data(ifstream &data_file)
{
	vector<int> line(config::n_line_elements, config::default_line_val);
	while(read_line(data_file, line)) {
		config::fixed->Fill(line[config::fixed_index]);
		config::abel->Fill(line[config::abel_index]);
		config::baker->Fill(line[config::baker_index]);
		config::cain->Fill(line[config::cain_index]);
	}
}


void analyze_data()
{
	for(unsigned int i = 0; i<config::dgaus_pars.size(); i++) {config::dgaus->SetParameter(i, config::dgaus_pars[i]);}
	config::active->Fit(config::dgaus, "R");
	print_peaks();
}


void plot_data()
{
	cout << "No plots yet." << endl;

}


bool read_line(ifstream &data_file, vector<int> &line)
{
	unsigned int i = 0;
	while(data_file >> line[i]) {
		i++;
		if(i == line.size()) break;
	}

	return(i == line.size());
}


void print_peaks()
{
	double mu1, mu2, sig1, sig2;
	mu1 = config::dgaus->GetParameter(config::mu1_index);
	mu2 = config::dgaus->GetParameter(config::mu2_index);
	sig1 = config::dgaus->GetParameter(config::sig1_index);
	sig2 = config::dgaus->GetParameter(config::sig2_index);

	int counts;
	counts = config::active->GetEntries();

	cout << counts << "\t" << mu1 << "\t" << sig1 << "\t" << mu2 << "\t" << sig2 << endl;
}
