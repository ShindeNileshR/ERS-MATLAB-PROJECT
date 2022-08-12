/*
 * File: Eas_Integrated_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef EAS_INTEGRATED_CA_H
#define EAS_INTEGRATED_CA_H

/* preprocessor validation checks */
#include "Eas_Integrated_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_Eas_Integrated_HWRes;
extern CA_PWS_TestResults CA_Eas_Integrated_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_Eas_Integrated_ExpHW;
extern CA_HWImpl CA_Eas_Integrated_ActHW;

/* entry point function to run tests */
void Eas_Integrated_caRunTests(void);

#endif                                 /* EAS_INTEGRATED_CA_H */
