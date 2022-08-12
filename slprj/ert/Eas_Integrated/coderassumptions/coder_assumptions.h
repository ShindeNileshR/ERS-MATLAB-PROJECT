/*
 * File: coder_assumptions.h
 *
 * Abstract: Coder assumptions header file
 */

#ifndef CODER_ASSUMPTIONS_H
#define CODER_ASSUMPTIONS_H

/* include model specific checks */
#include "Eas_Integrated_ca.h"

/* global results variable mapping for static code */
#define CA_Expected_HWImpl             CA_Eas_Integrated_ExpHW
#define CA_Actual_HWImpl               CA_Eas_Integrated_ActHW
#define CA_HWImpl_Results              CA_Eas_Integrated_HWRes
#define CA_PortableWordSizes_Results   CA_Eas_Integrated_PWSRes

/* entry point function mapping for static code */
#define CA_Run_Tests                   Eas_Integrated_caRunTests
#endif                                 /* CODER_ASSUMPTIONS_H */
