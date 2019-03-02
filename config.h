/*
 * config.h
 *
 *  Created on: Feb 21, 2019
 *      Author: dylan
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include <string>
#include <vector>
#include <TH1I.h>
#include <TF1.h>

namespace config
{
	extern std::string file_name;
	extern std::string file_open_error;


	extern int n_line_elements;
	extern int default_line_val;

	extern int mu1_index;
	extern int mu2_index;
	extern int sig1_index;
	extern int sig2_index;

	extern int fixed_index;
	extern int abel_index;
	extern int baker_index;
	extern int cain_index;


	extern TH1I *fixed;
	extern TH1I *abel;
	extern TH1I *baker;
	extern TH1I *cain;

	extern TH1I *active;


	extern TF1 *dgaus;

	extern std::vector<double> dgaus_pars;
}



#endif /* CONFIG_H_ */
