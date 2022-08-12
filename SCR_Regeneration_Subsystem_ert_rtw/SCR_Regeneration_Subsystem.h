/*
 * File: SCR_Regeneration_Subsystem.h
 *
 * Code generated for Simulink model 'SCR_Regeneration_Subsystem'.
 *
 * Model version                  : 5.163
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Jul 15 02:00:54 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SCR_Regeneration_Subsystem_h_
#define RTW_HEADER_SCR_Regeneration_Subsystem_h_
#include <string.h>
#ifndef SCR_Regeneration_Subsystem_COMMON_INCLUDES_
#define SCR_Regeneration_Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                         /* SCR_Regeneration_Subsystem_COMMON_INCLUDES_ */

#include "SCR_Regeneration_Subsystem_types.h"

/* Macros for accessing real-time model data structure */

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Gain;                   /* '<S2>/Gain' */
  const real_T Gain1;                  /* '<S2>/Gain1' */
  const real_T Product;                /* '<S2>/Product' */
  const real_T Square_Root;            /* '<S2>/Square_Root' */
  const real_T Dicharge_Rate;          /* '<S2>/Product1' */
} ConstB_SCR_Regeneration_Subsy_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Nox_Sensor;                  /* '<Root>/Nox_Sensor' */
  uint16_T Scr_Temp_Sensor;            /* '<Root>/Scr_Temp_Sensor' */
  uint8_T Adblue_Level;                /* '<Root>/Adblue_Level' */
  real_T Adblue_Quality;               /* '<Root>/Adblue_Quality' */
} ExtU_SCR_Regeneration_Subsyst_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Adblue_Injection_Time;        /* '<Root>/Adblue_Injection_Time' */
  adblue_capacity Adblue_level_display;/* '<Root>/Adblue_level_display' */
} ExtY_SCR_Regeneration_Subsyst_T;

/* External inputs (root inport signals with default storage) */
extern ExtU_SCR_Regeneration_Subsyst_T SCR_Regeneration_Subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_SCR_Regeneration_Subsyst_T SCR_Regeneration_Subsystem_Y;
extern const ConstB_SCR_Regeneration_Subsy_T SCR_Regeneration_Subsyst_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void SCR_Regeneration_Subsystem_initialize(void);
extern void SCR_Regeneration_Subsystem_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem')    - opens subsystem Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem
 * hilite_system('Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Scr_Regeneration_Model_MIL_R0'
 * '<S1>'   : 'Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem'
 * '<S2>'   : 'Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem/Adblue_Injection_System'
 * '<S3>'   : 'Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem/Adblue_Level2'
 * '<S4>'   : 'Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem/Scr_Regeneration_Parameter'
 * '<S5>'   : 'Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem/Adblue_Level2/Enumerated_Constant'
 * '<S6>'   : 'Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem/Adblue_Level2/Enumerated_Constant1'
 * '<S7>'   : 'Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem/Scr_Regeneration_Parameter/Adblue_Level_indication'
 * '<S8>'   : 'Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem/Scr_Regeneration_Parameter/Adblue_Quality_indication'
 * '<S9>'   : 'Scr_Regeneration_Model_MIL_R0/SCR_Regeneration_Subsystem/Scr_Regeneration_Parameter/Scr_temp_indication'
 */

/*-
 * Requirements for '<Root>': SCR_Regeneration_Subsystem
 */
#endif                            /* RTW_HEADER_SCR_Regeneration_Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
