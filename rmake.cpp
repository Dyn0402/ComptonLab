/*
 * rMake.cpp
 *
 *  Created on: Feb 24, 2019
 *      Author: dylan
 */

#include <TROOT.h>

void rmake()
{
	gROOT->ProcessLine(".L config.cpp");
	gROOT->ProcessLine(".L ADCFit.cpp");
	gROOT->ProcessLine(".x Lab4Hist.cpp");
}
