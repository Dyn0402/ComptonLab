/*
 * config.cpp
 *
 *  Created on: Feb 21, 2019
 *      Author: dylan
 */

#include <string>
#include <vector>
#include <TH1I.h>
#include <TF1.h>


namespace config
{
//	std::string file_name = "/home/dylan/Dropbox/UCLA/TA/180A/Lab4/Section_5/Co_3/Attenuation/Co_A_A1.0.txt";
	std::string file_name = "/home/dylan/Desktop/Na-22/Na_C_4cm.txt";
	std::string file_open_error = "File can't be opened.";

	int n_line_elements = 17;
	int default_line_val= -1;

	int mu1_index = 1;
	int mu2_index = 4;
	int sig1_index = 2;
	int sig2_index = 5;

	int fixed_index = 6;
	int abel_index = 0;
	int baker_index = 2;
	int cain_index = 4;

	TH1I *fixed = new TH1I("Fixed", "Fixed Detector Spectrum", 4096, 0.5, 4096.5);
	TH1I *abel = new TH1I("Abel", "Abel Detector Spectrum", 4096, 0.5, 4096.5);
	TH1I *baker = new TH1I("Baker", "Baker Detector Spectrum", 4096, 0.5, 4096.5);
	TH1I *cain = new TH1I("Cain", "Cain Detector Spectrum", 4096, 0.5, 4096.5);

	TH1I *active = cain;


	TF1 *dgaus = new TF1("dGauss", "gaus(0) + gaus(3) + [6] + [7]*x", 800, 2900);
	std::vector<double> dgaus_pars = {100, 1000, 40, 50, 2700, 50, 0, 0};
}
