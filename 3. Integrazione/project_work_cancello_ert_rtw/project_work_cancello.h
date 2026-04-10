/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: project_work_cancello.h
 *
 * Code generated for Simulink model 'project_work_cancello'.
 *
 * Model version                  : 3.22
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Jun  6 10:07:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_project_work_cancello_h_
#define RTW_HEADER_project_work_cancello_h_
#ifndef project_work_cancello_COMMON_INCLUDES_
#define project_work_cancello_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                              /* project_work_cancello_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>/Button' */
typedef struct {
  uint8_T is_c1_project_work_cancello; /* '<Root>/Button' */
  uint8_T is_active_c1_project_work_cance;/* '<Root>/Button' */
} DW_Button;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  DW_Button sf_Button2;                /* '<Root>/Button2' */
  DW_Button sf_Button1;                /* '<Root>/Button1' */
  DW_Button sf_Button;                 /* '<Root>/Button' */
  int32_T Time_T_C;                    /* '<Root>/Cancello' */
  int32_T Time_T_L;                    /* '<Root>/Cancello' */
  uint32_T temporalCounter_i2;         /* '<Root>/Cancello' */
  uint32_T temporalCounter_i3;         /* '<Root>/Cancello' */
  uint32_T temporalCounter_i4;         /* '<Root>/Cancello' */
  uint16_T temporalCounter_i5;         /* '<Root>/Cancello' */
  uint8_T is_c5_project_work_cancello; /* '<Root>/Lampeggio_Led_V' */
  uint8_T is_blink;                    /* '<Root>/Lampeggio_Led_V' */
  uint8_T is_active_c5_project_work_cance;/* '<Root>/Lampeggio_Led_V' */
  uint8_T temporalCounter_i1;          /* '<Root>/Lampeggio_Led_V' */
  uint8_T is_c4_project_work_cancello; /* '<Root>/Lampeggio_Led_G' */
  uint8_T is_blink_j;                  /* '<Root>/Lampeggio_Led_G' */
  uint8_T is_active_c4_project_work_cance;/* '<Root>/Lampeggio_Led_G' */
  uint8_T temporalCounter_i1_b;        /* '<Root>/Lampeggio_Led_G' */
  uint8_T is_Cancello;                 /* '<Root>/Cancello' */
  uint8_T is_Error;                    /* '<Root>/Cancello' */
  uint8_T is_Close;                    /* '<Root>/Cancello' */
  uint8_T is_Open;                     /* '<Root>/Cancello' */
  uint8_T is_Timer_T_L_O;              /* '<Root>/Cancello' */
  uint8_T is_Counting;                 /* '<Root>/Cancello' */
  uint8_T is_Timer_T_L_C;              /* '<Root>/Cancello' */
  uint8_T is_Counting_l;               /* '<Root>/Cancello' */
  uint8_T is_Timet_T_C;                /* '<Root>/Cancello' */
  uint8_T is_Counting_b;               /* '<Root>/Cancello' */
  uint8_T is_Obstacle;                 /* '<Root>/Cancello' */
  uint8_T is_Update_TC;                /* '<Root>/Cancello' */
  uint8_T is_Update_TL;                /* '<Root>/Cancello' */
  uint8_T is_Timer_LV;                 /* '<Root>/Cancello' */
  uint8_T is_Counting_l3;              /* '<Root>/Cancello' */
  uint8_T temporalCounter_i1_m;        /* '<Root>/Cancello' */
  boolean_T L2;                        /* '<Root>/Cancello' */
  boolean_T L3;                        /* '<Root>/Cancello' */
  boolean_T L2_Blink;                  /* '<Root>/Cancello' */
  boolean_T L3_Blink;                  /* '<Root>/Cancello' */
  boolean_T ButtonON;                  /* '<Root>/Button2' */
  boolean_T ButtonON_l;                /* '<Root>/Button1' */
  boolean_T ButtonON_e;                /* '<Root>/Button' */
  boolean_T RESET;                     /* '<Root>/Cancello' */
  boolean_T Start_T_C;                 /* '<Root>/Cancello' */
  boolean_T Start_T_L_O;               /* '<Root>/Cancello' */
  boolean_T T_L;                       /* '<Root>/Cancello' */
  boolean_T T_C;                       /* '<Root>/Cancello' */
  boolean_T T_LV;                      /* '<Root>/Cancello' */
  boolean_T RESET_LV;                  /* '<Root>/Cancello' */
  boolean_T Start_T_LV;                /* '<Root>/Cancello' */
  boolean_T Start_T_L_C;               /* '<Root>/Cancello' */
  boolean_T isNotInit;                 /* '<Root>/Cancello' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T P1;                        /* '<Root>/P1' */
  boolean_T P2;                        /* '<Root>/P2' */
  boolean_T In3;                       /* '<Root>/In3' */
  boolean_T In4;                       /* '<Root>/In4' */
  boolean_T In5;                       /* '<Root>/In5' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T L1;                        /* '<Root>/L1' */
  boolean_T out;                       /* '<Root>/out' */
  boolean_T Out3;                      /* '<Root>/Out3' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void project_work_cancello_initialize(void);
extern void project_work_cancello_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'project_work_cancello'
 * '<S1>'   : 'project_work_cancello/Button'
 * '<S2>'   : 'project_work_cancello/Button1'
 * '<S3>'   : 'project_work_cancello/Button2'
 * '<S4>'   : 'project_work_cancello/Cancello'
 * '<S5>'   : 'project_work_cancello/Lampeggio_Led_G'
 * '<S6>'   : 'project_work_cancello/Lampeggio_Led_V'
 */
#endif                                 /* RTW_HEADER_project_work_cancello_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
