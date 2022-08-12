/*
 * File: Eas_Integrated.c
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

#include "Eas_Integrated.h"
#include "Eas_Integrated_private.h"

/* Output and update for atomic system: '<Root>/Eas_Subsystem' */
void Eas_Integrated_Eas_Subsystem(const int16_T *rtu_Coolant_Temp, const uint8_T
  *rtu_Vehicle_Speed, const uint16_T *rtu_rpm, const uint8_T
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
  ConstB_Eas_Subsystem_Eas_Inte_T *localC)
{
  real_T rtb_Flow_Rate;
  boolean_T rtb_Relational_Operator1_cami;
  boolean_T rtb_Relational_Operator2_b23m;
  boolean_T rtb_Relational_Operator3_ak3z;
  boolean_T rtb_Relational_Operator4_cscr;
  boolean_T rtb_Relational_Operator_aeqq;

  /* Outputs for Atomic SubSystem: '<S1>/DPF_Subsystem' */
  /* Outputs for Atomic SubSystem: '<S2>/Auto_Regeneration'
   *
   * Block requirements for '<S2>/Auto_Regeneration':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  /* RelationalOperator: '<S4>/Relational_Operator' incorporates:
   *  Constant: '<S4>/Constant'
   */
  rtb_Relational_Operator_aeqq = ((*rtu_Coolant_Temp) >= 80);

  /* RelationalOperator: '<S4>/Relational_Operator1' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  rtb_Relational_Operator1_cami = ((*rtu_Vehicle_Speed) >= ((uint8_T)55U));

  /* RelationalOperator: '<S4>/Relational_Operator2' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  rtb_Relational_Operator2_b23m = ((*rtu_rpm) >= ((uint16_T)1500U));

  /* RelationalOperator: '<S4>/Relational_Operator3' incorporates:
   *  Constant: '<S4>/Constant3'
   */
  rtb_Relational_Operator3_ak3z = ((*rtu_Soot_Deposition_Auto) >= ((uint8_T)80U));

  /* RelationalOperator: '<S4>/Relational_Operator4' incorporates:
   *  Constant: '<S4>/Constant4'
   */
  rtb_Relational_Operator4_cscr = (((int32_T)(*rtu_DPF_Temp_Auto)) >= ((int32_T)
    250));

  /* Logic: '<S4>/AND' incorporates:
   *  Logic: '<S4>/AND1'
   *  Logic: '<S4>/AND2'
   *  Logic: '<S4>/AND3'
   */
  *rty_Auto_Regeneration_ON = (rtb_Relational_Operator_aeqq &&
    ((rtb_Relational_Operator1_cami && rtb_Relational_Operator2_b23m) &&
     (rtb_Relational_Operator3_ak3z && rtb_Relational_Operator4_cscr)));

  /* End of Outputs for SubSystem: '<S2>/Auto_Regeneration' */

  /* RelationalOperator: '<S7>/Relational_Operator' incorporates:
   *  Constant: '<S7>/Constant'
   */
  rtb_Relational_Operator_aeqq = ((*rtu_Soot_Deposition_Manual) >= ((uint8_T)80U));

  /* RelationalOperator: '<S7>/Relational_Operator1' incorporates:
   *  Constant: '<S7>/Constant1'
   */
  rtb_Relational_Operator1_cami = ((*rtu_DPF_Temp_Manual) >= 200);

  /* Logic: '<S7>/AND' */
  *rty_Press_Regeneration_Button = (rtb_Relational_Operator_aeqq &&
    rtb_Relational_Operator1_cami);

  /* Outputs for Enabled SubSystem: '<S2>/Manual_Regn_Subsystem' incorporates:
   *  EnablePort: '<S5>/Enable'
   *
   * Block requirements for '<S2>/Manual_Regn_Subsystem':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  if (*rty_Press_Regeneration_Button) {
    /* RelationalOperator: '<S5>/Relational_Operator' incorporates:
     *  Constant: '<S5>/Constant'
     */
    rtb_Relational_Operator_aeqq = ((*rtu_Break_Pedal) == false);

    /* RelationalOperator: '<S5>/Relational_Operator1' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    rtb_Relational_Operator1_cami = ((*rtu_Accelerator_Pedal) == false);

    /* RelationalOperator: '<S5>/Relational_Operator2' incorporates:
     *  Constant: '<S5>/Constant2'
     */
    rtb_Relational_Operator2_b23m = ((*rtu_Clutch_Pedal) == false);

    /* Logic: '<S5>/AND' */
    *rty_Manual_Regeneration_Start = ((rtb_Relational_Operator_aeqq &&
      rtb_Relational_Operator1_cami) && rtb_Relational_Operator2_b23m);
  }

  /* End of Outputs for SubSystem: '<S2>/Manual_Regn_Subsystem' */

  /* Outputs for Enabled SubSystem: '<S2>/Post_Regn_Subsystem' incorporates:
   *  EnablePort: '<S6>/Enable'
   *
   * Block requirements for '<S2>/Post_Regn_Subsystem':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  if (*rty_Manual_Regeneration_Start) {
    /* RelationalOperator: '<S6>/Relational_Operator' incorporates:
     *  Constant: '<S6>/Constant'
     */
    rtb_Relational_Operator_aeqq = ((*rtu_Crank_Angle) >= ((uint16_T)10U));

    /* RelationalOperator: '<S6>/Relational_Operator1' incorporates:
     *  Constant: '<S6>/Constant1'
     */
    rtb_Relational_Operator1_cami = ((*rtu_Crank_Angle) <= ((uint16_T)35U));

    /* Logic: '<S6>/AND' */
    *rty_Post_Injector2 = (rtb_Relational_Operator_aeqq &&
      rtb_Relational_Operator1_cami);

    /* RelationalOperator: '<S6>/Relational_Operator2' incorporates:
     *  Constant: '<S6>/Constant2'
     */
    rtb_Relational_Operator_aeqq = ((*rtu_Crank_Angle) >= ((uint16_T)190U));

    /* RelationalOperator: '<S6>/Relational_Operator3' incorporates:
     *  Constant: '<S6>/Constant3'
     */
    rtb_Relational_Operator1_cami = ((*rtu_Crank_Angle) <= ((uint16_T)215U));

    /* Logic: '<S6>/AND1' */
    *rty_Post_Injector1 = (rtb_Relational_Operator_aeqq &&
      rtb_Relational_Operator1_cami);

    /* RelationalOperator: '<S6>/Relational_Operator4' incorporates:
     *  Constant: '<S6>/Constant4'
     */
    rtb_Relational_Operator_aeqq = ((*rtu_Crank_Angle) >= ((uint16_T)370U));

    /* RelationalOperator: '<S6>/Relational_Operator5' incorporates:
     *  Constant: '<S6>/Constant5'
     */
    rtb_Relational_Operator1_cami = ((*rtu_Crank_Angle) <= ((uint16_T)395U));

    /* Logic: '<S6>/AND2' */
    *rty_Post_Injector4 = (rtb_Relational_Operator_aeqq &&
      rtb_Relational_Operator1_cami);

    /* RelationalOperator: '<S6>/Relational_Operator6' incorporates:
     *  Constant: '<S6>/Constant6'
     */
    rtb_Relational_Operator_aeqq = ((*rtu_Crank_Angle) >= ((uint16_T)550U));

    /* RelationalOperator: '<S6>/Relational_Operator7' incorporates:
     *  Constant: '<S6>/Constant7'
     */
    rtb_Relational_Operator1_cami = ((*rtu_Crank_Angle) <= ((uint16_T)575U));

    /* Logic: '<S6>/AND3' */
    *rty_Post_Injector3 = (rtb_Relational_Operator_aeqq &&
      rtb_Relational_Operator1_cami);
  }

  /* End of Outputs for SubSystem: '<S2>/Post_Regn_Subsystem' */

  /* RelationalOperator: '<S8>/Relational_Operator3' incorporates:
   *  Constant: '<S8>/Constant3'
   */
  *rty_Visit_Workshop_Immediately = ((*rtu_Soot_Deposition_Service) >= ((uint8_T)
    95U));

  /* End of Outputs for SubSystem: '<S1>/DPF_Subsystem' */

  /* Outputs for Atomic SubSystem: '<S1>/SCR_Regeneration_Subsystem' */
  /* Outputs for Atomic SubSystem: '<S3>/Scr_Regeneration_Parameter'
   *
   * Block description for '<S3>/Scr_Regeneration_Parameter':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.
   *
   * Block requirements for '<S3>/Scr_Regeneration_Parameter':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  /* Outputs for Atomic SubSystem: '<S11>/Adblue_Level_indication'
   *
   * Block description for '<S11>/Adblue_Level_indication':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.  The transfer function of the sensor is:
   *  V = .05 * T + 0.75
   *  for T in degrees C.
   *
   *  The conversion block inverts the combined transfer function of the sensor
   *  and ADC so that the output is an sfix(8) code representing T in degrees C.
   *
   * Block requirements for '<S11>/Adblue_Level_indication':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  /* RelationalOperator: '<S14>/Relational_Operator1' incorporates:
   *  Constant: '<S14>/Constant'
   */
  rtb_Relational_Operator_aeqq = ((*rtu_Adblue_Level) >= ((uint8_T)20U));

  /* Switch: '<S14>/Switch' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   */
  if (rtb_Relational_Operator_aeqq) {
    rtb_Relational_Operator_aeqq = true;
  } else {
    rtb_Relational_Operator_aeqq = false;
  }

  /* End of Switch: '<S14>/Switch' */
  /* End of Outputs for SubSystem: '<S11>/Adblue_Level_indication' */

  /* Outputs for Atomic SubSystem: '<S11>/Scr_temp_indication'
   *
   * Block description for '<S11>/Scr_temp_indication':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.  The transfer function of the sensor is:
   *  V = .05 * T + 0.75
   *  for T in degrees C.
   *
   *  The conversion block inverts the combined transfer function of the sensor
   *  and ADC so that the output is an sfix(8) code representing T in degrees C.
   *
   * Block requirements for '<S11>/Scr_temp_indication':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  /* RelationalOperator: '<S16>/Relational_Operator' incorporates:
   *  Constant: '<S16>/scr_temp'
   */
  rtb_Relational_Operator1_cami = ((*rtu_Scr_Temp_Sensor) >= ((uint16_T)200U));

  /* End of Outputs for SubSystem: '<S11>/Scr_temp_indication' */

  /* Outputs for Atomic SubSystem: '<S11>/Adblue_Quality_indication'
   *
   * Block description for '<S11>/Adblue_Quality_indication':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.  The transfer function of the sensor is:
   *  V = .05 * T + 0.75
   *  for T in degrees C.
   *
   *  The conversion block inverts the combined transfer function of the sensor
   *  and ADC so that the output is an sfix(8) code representing T in degrees C.
   *
   * Block requirements for '<S11>/Adblue_Quality_indication':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  /* RelationalOperator: '<S15>/Relational_Operator' incorporates:
   *  Constant: '<S15>/Constant'
   */
  rtb_Relational_Operator2_b23m = ((*rtu_Adblue_Quality) >= 31.8);

  /* RelationalOperator: '<S15>/Relational_Operator1' incorporates:
   *  Constant: '<S15>/Constant1'
   */
  rtb_Relational_Operator3_ak3z = ((*rtu_Adblue_Quality) <= 33.2);

  /* End of Outputs for SubSystem: '<S11>/Adblue_Quality_indication' */

  /* Outputs for Atomic SubSystem: '<S11>/Scr_temp_indication'
   *
   * Block description for '<S11>/Scr_temp_indication':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.  The transfer function of the sensor is:
   *  V = .05 * T + 0.75
   *  for T in degrees C.
   *
   *  The conversion block inverts the combined transfer function of the sensor
   *  and ADC so that the output is an sfix(8) code representing T in degrees C.
   *
   * Block requirements for '<S11>/Scr_temp_indication':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  /* Switch: '<S16>/Switch' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Constant: '<S16>/Constant2'
   */
  if (rtb_Relational_Operator1_cami) {
    rtb_Relational_Operator1_cami = true;
  } else {
    rtb_Relational_Operator1_cami = false;
  }

  /* End of Switch: '<S16>/Switch' */
  /* End of Outputs for SubSystem: '<S11>/Scr_temp_indication' */

  /* Outputs for Enabled SubSystem: '<S3>/Adblue_Injection_System' incorporates:
   *  EnablePort: '<S9>/Enable'
   *
   * Block requirements for '<S3>/Adblue_Injection_System':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  /* Outputs for Atomic SubSystem: '<S11>/Adblue_Quality_indication'
   *
   * Block description for '<S11>/Adblue_Quality_indication':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.  The transfer function of the sensor is:
   *  V = .05 * T + 0.75
   *  for T in degrees C.
   *
   *  The conversion block inverts the combined transfer function of the sensor
   *  and ADC so that the output is an sfix(8) code representing T in degrees C.
   *
   * Block requirements for '<S11>/Adblue_Quality_indication':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  /* Logic: '<S11>/AND' incorporates:
   *  Logic: '<S11>/AND2'
   *  Logic: '<S15>/AND'
   */
  if ((rtb_Relational_Operator_aeqq && rtb_Relational_Operator1_cami) &&
      (rtb_Relational_Operator2_b23m && rtb_Relational_Operator3_ak3z)) {
    /* Product: '<S9>/Product2' */
    rtb_Flow_Rate = ((real_T)(*rtu_Nox_Sensor)) * localC->Dicharge_Rate;

    /* Product: '<S9>/Divide' incorporates:
     *  Constant: '<S9>/Constant3'
     */
    *rty_Adblue_Injection_Time = rtb_Flow_Rate / 0.099;
  }

  /* End of Logic: '<S11>/AND' */
  /* End of Outputs for SubSystem: '<S11>/Adblue_Quality_indication' */
  /* End of Outputs for SubSystem: '<S3>/Adblue_Injection_System' */
  /* End of Outputs for SubSystem: '<S3>/Scr_Regeneration_Parameter' */

  /* Outputs for Atomic SubSystem: '<S3>/Adblue_Level2'
   *
   * Block description for '<S3>/Adblue_Level2':
   *  This subsystem models a digital thermometer composed of a simple
   *  temperature sensor and an ADC.
   *
   * Block requirements for '<S3>/Adblue_Level2':
   *  1. Acclerator Pedal Position Sensor
     Break Switch
     Clutch Switch
   */
  /* Switch: '<S10>/Switch2' incorporates:
   *  Constant: '<S10>/Tank_Condition'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  RelationalOperator: '<S10>/Relational_Operator1'
   */
  if (rtb_Relational_Operator_aeqq == false) {
    *rty_Adblue_level_display = Adblue_Level_Low;
  } else {
    *rty_Adblue_level_display = Adblue_Level_high;
  }

  /* End of Switch: '<S10>/Switch2' */
  /* End of Outputs for SubSystem: '<S3>/Adblue_Level2' */
  /* End of Outputs for SubSystem: '<S1>/SCR_Regeneration_Subsystem' */
}

/* Output and update for referenced model: 'Eas_Integrated' */
void Eas_Integrated(const int16_T *rtu_Coolant_Temp, const uint8_T
                    *rtu_Vehicle_Speed, const uint16_T *rtu_rpm, const uint8_T
                    *rtu_Soot_Deposition_Auto, const uint8_T *rtu_DPF_Temp_Auto,
                    const uint8_T *rtu_Soot_Deposition_Manual, const int16_T
                    *rtu_DPF_Temp_Manual, const boolean_T *rtu_Break_Pedal,
                    const boolean_T *rtu_Accelerator_Pedal, const boolean_T
                    *rtu_Clutch_Pedal, const uint16_T *rtu_Crank_Angle, const
                    uint8_T *rtu_Soot_Deposition_Service, boolean_T
                    *rty_Auto_Regeneration_ON, boolean_T
                    *rty_Press_Regeneration_Button, boolean_T
                    *rty_Manual_Regeneration_Start, boolean_T
                    *rty_Post_Injector2, boolean_T *rty_Post_Injector1,
                    boolean_T *rty_Post_Injector4, boolean_T *rty_Post_Injector3,
                    boolean_T *rty_Visit_Workshop_Immediately, real_T
                    *rty_Adblue_Injection_Time, adblue_capacity
                    *rty_Adblue_level_display)
{
  /* Outputs for Atomic SubSystem: '<Root>/Eas_Subsystem' */

  /* Inport: '<Root>/Nox_Sensor' incorporates:
   *  Inport: '<Root>/Adblue_Level'
   *  Inport: '<Root>/Adblue_Quality'
   *  Inport: '<Root>/Scr_Temp_Sensor'
   */
  Eas_Integrated_Eas_Subsystem(rtu_Coolant_Temp, rtu_Vehicle_Speed, rtu_rpm,
    rtu_Soot_Deposition_Auto, rtu_DPF_Temp_Auto, rtu_Soot_Deposition_Manual,
    rtu_DPF_Temp_Manual, rtu_Break_Pedal, rtu_Accelerator_Pedal,
    rtu_Clutch_Pedal, rtu_Crank_Angle, rtu_Soot_Deposition_Service,
    (&(Nox_Sensor)), (&(Scr_Temp_Sensor)), (&(Adblue_Level)), (&(Adblue_Quality)),
    rty_Auto_Regeneration_ON, rty_Press_Regeneration_Button,
    rty_Manual_Regeneration_Start, rty_Post_Injector2, rty_Post_Injector1,
    rty_Post_Injector4, rty_Post_Injector3, rty_Visit_Workshop_Immediately,
    rty_Adblue_Injection_Time, rty_Adblue_level_display,
    &Eas_Integrated_ConstB.Eas_Subsystem);

  /* End of Outputs for SubSystem: '<Root>/Eas_Subsystem' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
