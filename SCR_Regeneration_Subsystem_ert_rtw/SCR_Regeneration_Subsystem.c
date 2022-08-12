/*
 * File: SCR_Regeneration_Subsystem.c
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

#include "SCR_Regeneration_Subsystem.h"
#include "SCR_Regeneration_Subsystem_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_SCR_Regeneration_Subsyst_T SCR_Regeneration_Subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_SCR_Regeneration_Subsyst_T SCR_Regeneration_Subsystem_Y;

/* Model step function */
void SCR_Regeneration_Subsystem_step(void)
{
  boolean_T rtb_Adblue_Level_Indn;
  boolean_T tmp;

  /* Outputs for Atomic SubSystem: '<Root>/SCR_Regeneration_Subsystem' */
  /* Outputs for Atomic SubSystem: '<S1>/Scr_Regeneration_Parameter'
   *
   * Block description for '<S1>/Scr_Regeneration_Parameter':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.
   */
  /* Outputs for Atomic SubSystem: '<S4>/Adblue_Level_indication'
   *
   * Block description for '<S4>/Adblue_Level_indication':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.  The transfer function of the sensor is:
   *  V = .05 * T + 0.75
   *  for T in degrees C.
   *
   *  The conversion block inverts the combined transfer function of the sensor
   *  and ADC so that the output is an sfix(8) code representing T in degrees C.
   */
  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  Inport: '<Root>/Adblue_Level'
   *  RelationalOperator: '<S7>/Relational Operator1'
   */
  if (SCR_Regeneration_Subsystem_U.Adblue_Level >= ((uint8_T)20U)) {
    rtb_Adblue_Level_Indn = true;
  } else {
    rtb_Adblue_Level_Indn = false;
  }

  /* End of Switch: '<S7>/Switch' */
  /* End of Outputs for SubSystem: '<S4>/Adblue_Level_indication' */

  /* Outputs for Atomic SubSystem: '<S4>/Scr_temp_indication'
   *
   * Block description for '<S4>/Scr_temp_indication':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.  The transfer function of the sensor is:
   *  V = .05 * T + 0.75
   *  for T in degrees C.
   *
   *  The conversion block inverts the combined transfer function of the sensor
   *  and ADC so that the output is an sfix(8) code representing T in degrees C.
   */
  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Constant: '<S9>/Constant2'
   *  Constant: '<S9>/scr_temp'
   *  Inport: '<Root>/Scr_Temp_Sensor'
   *  RelationalOperator: '<S9>/Relational Operator'
   */
  if (SCR_Regeneration_Subsystem_U.Scr_Temp_Sensor >= ((uint16_T)200U)) {
    tmp = true;
  } else {
    tmp = false;
  }

  /* End of Switch: '<S9>/Switch' */
  /* End of Outputs for SubSystem: '<S4>/Scr_temp_indication' */

  /* Outputs for Enabled SubSystem: '<S1>/Adblue_Injection_System' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  /* Outputs for Atomic SubSystem: '<S4>/Adblue_Quality_indication'
   *
   * Block description for '<S4>/Adblue_Quality_indication':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.  The transfer function of the sensor is:
   *  V = .05 * T + 0.75
   *  for T in degrees C.
   *
   *  The conversion block inverts the combined transfer function of the sensor
   *  and ADC so that the output is an sfix(8) code representing T in degrees C.
   */
  /* Logic: '<S4>/AND' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Inport: '<Root>/Adblue_Quality'
   *  Logic: '<S4>/AND2'
   *  Logic: '<S8>/AND'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  RelationalOperator: '<S8>/Relational Operator1'
   */
  if ((rtb_Adblue_Level_Indn && tmp) &&
      ((SCR_Regeneration_Subsystem_U.Adblue_Quality >= 31.8) &&
       (SCR_Regeneration_Subsystem_U.Adblue_Quality <= 33.2))) {
    /* Outport: '<Root>/Adblue_Injection_Time' incorporates:
     *  Constant: '<S2>/Constant3'
     *  Inport: '<Root>/Nox_Sensor'
     *  Product: '<S2>/Divide'
     *  Product: '<S2>/Product2'
     */
    SCR_Regeneration_Subsystem_Y.Adblue_Injection_Time = (((real_T)
      SCR_Regeneration_Subsystem_U.Nox_Sensor) *
      SCR_Regeneration_Subsyst_ConstB.Dicharge_Rate) / 0.099;
  }

  /* End of Logic: '<S4>/AND' */
  /* End of Outputs for SubSystem: '<S4>/Adblue_Quality_indication' */
  /* End of Outputs for SubSystem: '<S1>/Adblue_Injection_System' */
  /* End of Outputs for SubSystem: '<S1>/Scr_Regeneration_Parameter' */

  /* Outputs for Atomic SubSystem: '<S1>/Adblue_Level2'
   *
   * Block description for '<S1>/Adblue_Level2':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.
   */
  /* Switch: '<S3>/Switch2' incorporates:
   *  Constant: '<S3>/Tank_Condition'
   *  RelationalOperator: '<S3>/Relational_Operator1'
   */
  if (rtb_Adblue_Level_Indn == false) {
    /* Outport: '<Root>/Adblue_level_display' incorporates:
     *  Constant: '<S5>/Constant'
     */
    SCR_Regeneration_Subsystem_Y.Adblue_level_display = Adblue_Level_Low;
  } else {
    /* Outport: '<Root>/Adblue_level_display' incorporates:
     *  Constant: '<S6>/Constant'
     */
    SCR_Regeneration_Subsystem_Y.Adblue_level_display = Adblue_Level_high;
  }

  /* End of Switch: '<S3>/Switch2' */
  /* End of Outputs for SubSystem: '<S1>/Adblue_Level2' */
  /* End of Outputs for SubSystem: '<Root>/SCR_Regeneration_Subsystem' */
}

/* Model initialize function */
void SCR_Regeneration_Subsystem_initialize(void)
{
  /* Registration code */

  /* external inputs */
  (void)memset(&SCR_Regeneration_Subsystem_U, 0, sizeof
               (ExtU_SCR_Regeneration_Subsyst_T));

  /* external outputs */
  (void) memset((void *)&SCR_Regeneration_Subsystem_Y, 0,
                sizeof(ExtY_SCR_Regeneration_Subsyst_T));
  SCR_Regeneration_Subsystem_Y.Adblue_level_display = Adblue_Level_Low;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
