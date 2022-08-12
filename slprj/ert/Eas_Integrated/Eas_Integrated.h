/*
 * File: Eas_Integrated.h
 *
 * Code generated for Simulink model 'Eas_Integrated'.
 *
 * Model version                  : 1.57
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Aug  4 14:51:34 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Eas_Integrated_h_
#define RTW_HEADER_Eas_Integrated_h_
#ifndef Eas_Integrated_COMMON_INCLUDES_
#define Eas_Integrated_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Eas_Integrated_COMMON_INCLUDES_ */

#include "Eas_Integrated_types.h"

/* Invariant block signals for system '<Root>/Eas_Subsystem' */
typedef struct {
  const real_T Gain;                   /* '<S9>/Gain' */
  const real_T Gain1;                  /* '<S9>/Gain1' */
  const real_T Product;                /* '<S9>/Product' */
  const real_T Square_Root;            /* '<S9>/Square_Root' */
  const real_T Dicharge_Rate;          /* '<S9>/Product1' */
} ConstB_Eas_Subsystem_Eas_Inte_T;

/* Invariant block signals for model 'Eas_Integrated' */
typedef struct {
  ConstB_Eas_Subsystem_Eas_Inte_T Eas_Subsystem;/* '<Root>/Eas_Subsystem' */
} ConstB_Eas_Integrated_hb4t_T;

extern void Eas_Integrated_Eas_Subsystem(const int16_T *rtu_Coolant_Temp, const
  uint8_T *rtu_Vehicle_Speed, const uint16_T *rtu_rpm, const uint8_T
  *rtu_Soot_Deposition_Auto, const uint8_T *rtu_DPF_Temp_Auto, const uint8_T
  *rtu_Soot_Deposition_Manual, const int16_T *rtu_DPF_Temp_Manual, const
  boolean_T *rtu_Break_Pedal, const boolean_T *rtu_Accelerator_Pedal, const
  boolean_T *rtu_Clutch_Pedal, const uint16_T *rtu_Crank_Angle, const uint8_T
  *rtu_Soot_Deposition_Service, const uint16_T *rtu_Nox_Sensor, const uint16_T
  *rtu_Scr_Temp_Sensor, const uint8_T *rtu_Adblue_Level, const real_T
  *rtu_Adblue_Quality, boolean_T *rty_Auto_Regeneration_ON, boolean_T
  *rty_Press_Regeneration_Button, boolean_T *rty_Manual_Regeneration_Start,
  boolean_T *rty_Post_Injector2, boolean_T *rty_Post_Injector1, boolean_T
  *rty_Post_Injector4, boolean_T *rty_Post_Injector3, boolean_T
  *rty_Visit_Workshop_Immediately, real_T *rty_Adblue_Injection_Time,
  adblue_capacity *rty_Adblue_level_display, const
  ConstB_Eas_Subsystem_Eas_Inte_T *localC);
extern void Eas_Integrated(const int16_T *rtu_Coolant_Temp, const uint8_T
  *rtu_Vehicle_Speed, const uint16_T *rtu_rpm, const uint8_T
  *rtu_Soot_Deposition_Auto, const uint8_T *rtu_DPF_Temp_Auto, const uint8_T
  *rtu_Soot_Deposition_Manual, const int16_T *rtu_DPF_Temp_Manual, const
  boolean_T *rtu_Break_Pedal, const boolean_T *rtu_Accelerator_Pedal, const
  boolean_T *rtu_Clutch_Pedal, const uint16_T *rtu_Crank_Angle, const uint8_T
  *rtu_Soot_Deposition_Service, boolean_T *rty_Auto_Regeneration_ON, boolean_T
  *rty_Press_Regeneration_Button, boolean_T *rty_Manual_Regeneration_Start,
  boolean_T *rty_Post_Injector2, boolean_T *rty_Post_Injector1, boolean_T
  *rty_Post_Injector4, boolean_T *rty_Post_Injector3, boolean_T
  *rty_Visit_Workshop_Immediately, real_T *rty_Adblue_Injection_Time,
  adblue_capacity *rty_Adblue_level_display);

/* Exported data declaration */

/* Declaration for custom storage class: Global */
extern uint8_T Adblue_Level;
extern real_T Adblue_Quality;
extern uint16_T Nox_Sensor;
extern uint16_T Scr_Temp_Sensor;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Eas_Integrated'
 * '<S1>'   : 'Eas_Integrated/Eas_Subsystem'
 * '<S2>'   : 'Eas_Integrated/Eas_Subsystem/DPF_Subsystem'
 * '<S3>'   : 'Eas_Integrated/Eas_Subsystem/SCR_Regeneration_Subsystem'
 * '<S4>'   : 'Eas_Integrated/Eas_Subsystem/DPF_Subsystem/Auto_Regeneration'
 * '<S5>'   : 'Eas_Integrated/Eas_Subsystem/DPF_Subsystem/Manual_Regn_Subsystem'
 * '<S6>'   : 'Eas_Integrated/Eas_Subsystem/DPF_Subsystem/Post_Regn_Subsystem'
 * '<S7>'   : 'Eas_Integrated/Eas_Subsystem/DPF_Subsystem/Regn_Display_Subsystem'
 * '<S8>'   : 'Eas_Integrated/Eas_Subsystem/DPF_Subsystem/Service_Regeneration'
 * '<S9>'   : 'Eas_Integrated/Eas_Subsystem/SCR_Regeneration_Subsystem/Adblue_Injection_System'
 * '<S10>'  : 'Eas_Integrated/Eas_Subsystem/SCR_Regeneration_Subsystem/Adblue_Level2'
 * '<S11>'  : 'Eas_Integrated/Eas_Subsystem/SCR_Regeneration_Subsystem/Scr_Regeneration_Parameter'
 * '<S12>'  : 'Eas_Integrated/Eas_Subsystem/SCR_Regeneration_Subsystem/Adblue_Level2/Enumerated_Constant'
 * '<S13>'  : 'Eas_Integrated/Eas_Subsystem/SCR_Regeneration_Subsystem/Adblue_Level2/Enumerated_Constant1'
 * '<S14>'  : 'Eas_Integrated/Eas_Subsystem/SCR_Regeneration_Subsystem/Scr_Regeneration_Parameter/Adblue_Level_indication'
 * '<S15>'  : 'Eas_Integrated/Eas_Subsystem/SCR_Regeneration_Subsystem/Scr_Regeneration_Parameter/Adblue_Quality_indication'
 * '<S16>'  : 'Eas_Integrated/Eas_Subsystem/SCR_Regeneration_Subsystem/Scr_Regeneration_Parameter/Scr_temp_indication'
 */

/*-
 * Requirements for '<Root>': Eas_Integrated
 */
#endif                                 /* RTW_HEADER_Eas_Integrated_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
