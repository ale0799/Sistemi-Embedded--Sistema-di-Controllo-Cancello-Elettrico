/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: project_work_cancello.c
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

#include "project_work_cancello.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Button' */
#define IN_LongPressed                 ((uint8_T)1U)
#define IN_Pressed                     ((uint8_T)2U)
#define IN_Wait                        ((uint8_T)3U)
#define Pressed                        (true)
#define Released                       (false)

/* Named constants for Chart: '<Root>/Cancello' */
#define IN_Check                       ((uint8_T)1U)
#define IN_Close                       ((uint8_T)2U)
#define IN_Closed                      ((uint8_T)1U)
#define IN_Closing                     ((uint8_T)2U)
#define IN_Count1                      ((uint8_T)1U)
#define IN_Counting                    ((uint8_T)1U)
#define IN_ERR                         ((uint8_T)1U)
#define IN_End                         ((uint8_T)2U)
#define IN_Error                       ((uint8_T)3U)
#define IN_NO_ACTIVE_CHILD             ((uint8_T)0U)
#define IN_OBS                         ((uint8_T)1U)
#define IN_Open                        ((uint8_T)4U)
#define IN_Opened                      ((uint8_T)1U)
#define IN_Opening                     ((uint8_T)2U)
#define IN_UP_TC                       ((uint8_T)1U)
#define IN_UP_TL                       ((uint8_T)1U)
#define IN_Update_T_C                  ((uint8_T)2U)
#define IN_Update_T_L                  ((uint8_T)2U)
#define IN_Wait1                       ((uint8_T)2U)
#define IN_Wait_f                      ((uint8_T)2U)
#define IN_off                         ((uint8_T)2U)
#define OFF                            (false)
#define ON                             (true)

/* Named constants for Chart: '<Root>/Lampeggio_Led_G' */
#define ACTIVE                         (true)
#define DISACTIVE                      (false)
#define IN_blink                       ((uint8_T)1U)
#define IN_blink_off                   ((uint8_T)1U)
#define IN_blink_on                    ((uint8_T)2U)
#define IN_on                          ((uint8_T)3U)

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void Button_Init(boolean_T *rty_ButtonON);
static void Button(boolean_T rtu_Button, boolean_T *rty_ButtonON, DW_Button
                   *localDW);

/* Forward declaration for local functions */
static void Reset(void);
static void Reset_LV(void);
static void Update_Time_T_C(void);
static void Update_Time_T_L(void);

/*
 * System initialize for atomic system:
 *    '<Root>/Button'
 *    '<Root>/Button1'
 *    '<Root>/Button2'
 */
static void Button_Init(boolean_T *rty_ButtonON)
{
  *rty_ButtonON = false;
}

/*
 * Output and update for atomic system:
 *    '<Root>/Button'
 *    '<Root>/Button1'
 *    '<Root>/Button2'
 */
static void Button(boolean_T rtu_Button, boolean_T *rty_ButtonON, DW_Button
                   *localDW)
{
  /* Chart: '<Root>/Button' */
  if (localDW->is_active_c1_project_work_cance == 0U) {
    localDW->is_active_c1_project_work_cance = 1U;
    localDW->is_c1_project_work_cancello = IN_Wait;
    *rty_ButtonON = Released;
  } else {
    switch (localDW->is_c1_project_work_cancello) {
     case IN_LongPressed:
      *rty_ButtonON = Pressed;
      if (!rtu_Button) {
        localDW->is_c1_project_work_cancello = IN_Wait;
        *rty_ButtonON = Released;
      }
      break;

     case IN_Pressed:
      if (!rtu_Button) {
        localDW->is_c1_project_work_cancello = IN_LongPressed;
        *rty_ButtonON = Pressed;
      }
      break;

     default:
      /* case IN_Wait: */
      *rty_ButtonON = Released;
      if (rtu_Button) {
        localDW->is_c1_project_work_cancello = IN_Pressed;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Button' */
}

/* Function for Chart: '<Root>/Cancello' */
static void Reset(void)
{
  /* Inport: '<Root>/P1' */
  rtDW.RESET = rtU.P1;
}

/* Function for Chart: '<Root>/Cancello' */
static void Reset_LV(void)
{
  rtDW.RESET_LV = rtDW.ButtonON_e;
}

/* Function for Chart: '<Root>/Cancello' */
static void Update_Time_T_C(void)
{
  if (rtDW.Time_T_C < 120) {
    rtDW.Time_T_C += 10;
  } else {
    rtDW.Time_T_C = 10;
  }
}

/* Function for Chart: '<Root>/Cancello' */
static void Update_Time_T_L(void)
{
  if (rtDW.Time_T_L < 120) {
    rtDW.Time_T_L += 10;
  } else {
    rtDW.Time_T_L = 10;
  }
}

/* Model step function */
void project_work_cancello_step(void)
{
  int32_T tmp;

  /* Chart: '<Root>/Button' incorporates:
   *  Inport: '<Root>/In3'
   */
  Button(rtU.In3, &rtDW.ButtonON_e, &rtDW.sf_Button);

  /* Chart: '<Root>/Button1' incorporates:
   *  Inport: '<Root>/In4'
   */
  Button(rtU.In4, &rtDW.ButtonON_l, &rtDW.sf_Button1);

  /* Chart: '<Root>/Button2' incorporates:
   *  Inport: '<Root>/In5'
   */
  Button(rtU.In5, &rtDW.ButtonON, &rtDW.sf_Button2);

  /* Chart: '<Root>/Cancello' incorporates:
   *  Inport: '<Root>/P1'
   *  Inport: '<Root>/P2'
   */
  if (rtDW.isNotInit) {
    if (rtDW.temporalCounter_i1_m < 127U) {
      rtDW.temporalCounter_i1_m++;
    }

    if (rtDW.temporalCounter_i2 < MAX_uint32_T) {
      rtDW.temporalCounter_i2++;
    }

    if (rtDW.temporalCounter_i3 < MAX_uint32_T) {
      rtDW.temporalCounter_i3++;
    }

    if (rtDW.temporalCounter_i4 < MAX_uint32_T) {
      rtDW.temporalCounter_i4++;
    }

    if (rtDW.temporalCounter_i5 < 511U) {
      rtDW.temporalCounter_i5++;
    }
  }

  rtDW.isNotInit = true;
  switch (rtDW.is_Cancello) {
   case IN_Check:
    {
      boolean_T tmp_0;
      tmp_0 = !rtU.P2;
      if ((!rtU.P1) && tmp_0) {
        rtDW.is_Cancello = IN_Close;
        rtDW.is_Close = IN_Closing;
        rtDW.L2_Blink = ON;
        rtDW.Start_T_L_C = ON;
      } else if ((rtDW.ButtonON_e && (!rtU.P1)) || (rtU.P1 && tmp_0)) {
        rtDW.is_Cancello = IN_Open;
        rtDW.is_Open = IN_Opening;
        rtDW.Start_T_L_O = ON;
        rtDW.L2_Blink = ON;
      }
    }
    break;

   case IN_Close:
    if ((rtDW.ButtonON_e && (!rtU.P1)) || ((rtDW.is_Close == IN_Closing) &&
         rtU.P1)) {
      if (rtDW.is_Close == IN_Closing) {
        rtDW.Start_T_L_C = OFF;
        rtDW.is_Close = IN_NO_ACTIVE_CHILD;
      } else {
        rtDW.is_Close = IN_NO_ACTIVE_CHILD;
      }

      rtDW.is_Cancello = IN_Open;
      rtDW.is_Open = IN_Opening;
      rtDW.Start_T_L_O = ON;
      rtDW.L2_Blink = ON;
    } else if (rtDW.T_L && (!rtU.P2)) {
      if (rtDW.is_Close == IN_Closing) {
        rtDW.Start_T_L_C = OFF;
        rtDW.L2_Blink = OFF;
        rtDW.is_Close = IN_NO_ACTIVE_CHILD;
      } else {
        rtDW.is_Close = IN_NO_ACTIVE_CHILD;
      }

      rtDW.is_Cancello = IN_Error;
      rtDW.is_Error = IN_Wait1;
      rtDW.temporalCounter_i1_m = 0U;
    } else {
      switch (rtDW.is_Close) {
       case IN_Closed:
        break;

       default:
        /* case IN_Closing: */
        if (rtDW.T_L && rtU.P2) {
          rtDW.Start_T_L_C = OFF;
          rtDW.L2_Blink = OFF;
          rtDW.is_Close = IN_Closed;
        }
        break;
      }
    }
    break;

   case IN_Error:
    if (rtU.P2) {
      if (rtDW.is_Error == IN_ERR) {
        /* Outport: '<Root>/L1' */
        rtY.L1 = OFF;
        rtDW.is_Error = IN_NO_ACTIVE_CHILD;
      } else {
        rtDW.is_Error = IN_NO_ACTIVE_CHILD;
      }

      rtDW.is_Cancello = IN_Close;
      rtDW.is_Close = IN_Closed;
    } else {
      switch (rtDW.is_Error) {
       case IN_ERR:
        break;

       default:
        /* case IN_Wait1: */
        if (rtDW.temporalCounter_i1_m >= 100U) {
          rtDW.is_Error = IN_ERR;

          /* Outport: '<Root>/L1' */
          rtY.L1 = ON;
        }
        break;
      }
    }
    break;

   default:
    /* case IN_Open: */
    if ((rtDW.ButtonON_e || rtDW.T_C) && (!rtU.P1)) {
      switch (rtDW.is_Open) {
       case IN_Opened:
        /* Outport: '<Root>/L1' */
        rtY.L1 = OFF;
        rtDW.L2 = OFF;
        rtDW.L3 = OFF;
        rtDW.Start_T_C = OFF;
        rtDW.is_Open = IN_NO_ACTIVE_CHILD;
        break;

       case IN_Opening:
        rtDW.Start_T_L_O = OFF;
        rtDW.is_Open = IN_NO_ACTIVE_CHILD;
        break;
      }

      rtDW.is_Cancello = IN_Close;
      rtDW.is_Close = IN_Closing;
      rtDW.L2_Blink = ON;
      rtDW.Start_T_L_C = ON;
    } else if (rtDW.is_Open == IN_Opened) {
      Reset();

      /* case IN_Opening: */
    } else if (rtDW.T_L) {
      rtDW.L2_Blink = OFF;
      rtDW.Start_T_L_O = OFF;
      rtDW.is_Open = IN_Opened;

      /* Outport: '<Root>/L1' */
      rtY.L1 = ON;
      rtDW.L2 = ON;
      rtDW.L3 = ON;
      rtDW.Start_T_C = ON;
    }
    break;
  }

  if (rtDW.is_Obstacle == IN_OBS) {
    if ((!rtU.P1) || rtDW.T_LV) {
      rtDW.L3_Blink = OFF;
      rtDW.Start_T_LV = OFF;
      rtDW.is_Obstacle = IN_Wait_f;
    } else {
      Reset_LV();
    }

    /* case IN_Wait: */
  } else if (((rtDW.is_Close == IN_Closed) || (rtDW.is_Open == IN_Opened) ||
              (rtDW.is_Cancello == IN_Check)) && rtDW.ButtonON_e && rtU.P1) {
    rtDW.is_Obstacle = IN_OBS;
    rtDW.L3_Blink = ON;
    rtDW.Start_T_LV = ON;
  }

  if (rtDW.is_Update_TC == IN_UP_TC) {
    rtDW.is_Update_TC = IN_Update_T_C;

    /* case IN_Update_T_C: */
  } else if (((rtDW.is_Close == IN_Closed) || (rtDW.is_Cancello == IN_Check)) &&
             rtDW.ButtonON) {
    rtDW.is_Update_TC = IN_UP_TC;
    Update_Time_T_C();
  }

  if (rtDW.is_Update_TL == IN_UP_TL) {
    rtDW.is_Update_TL = IN_Update_T_L;

    /* case IN_Update_T_L: */
  } else if (((rtDW.is_Close == IN_Closed) || (rtDW.is_Cancello == IN_Check)) &&
             rtDW.ButtonON_l) {
    rtDW.is_Update_TL = IN_UP_TL;
    Update_Time_T_L();
  }

  if (rtDW.is_Timer_T_L_C == IN_Counting) {
    if (!rtDW.Start_T_L_C) {
      rtDW.is_Counting_l = IN_NO_ACTIVE_CHILD;
      rtDW.is_Timer_T_L_C = IN_off;
      rtDW.T_L = OFF;
    } else if (rtDW.is_Counting_l == IN_Count1) {
      tmp = rtDW.Time_T_L * 10;
      if (tmp < 0) {
        tmp = 0;
      }

      if (rtDW.temporalCounter_i3 >= (uint32_T)tmp) {
        rtDW.is_Counting_l = IN_End;
        rtDW.T_L = ON;
      }
    } else {
      /* case IN_End: */
    }

    /* case IN_off: */
  } else if (rtDW.Start_T_L_C) {
    rtDW.is_Timer_T_L_C = IN_Counting;
    rtDW.is_Counting_l = IN_Count1;
    rtDW.temporalCounter_i3 = 0U;
  }

  if (rtDW.is_Timet_T_C == IN_Counting) {
    if (!rtDW.Start_T_C) {
      rtDW.is_Counting_b = IN_NO_ACTIVE_CHILD;
      rtDW.is_Timet_T_C = IN_off;
      rtDW.T_C = OFF;
    } else if (rtDW.is_Counting_b == IN_Count1) {
      tmp = rtDW.Time_T_C * 10;
      if (tmp < 0) {
        tmp = 0;
      }

      if (rtDW.temporalCounter_i4 >= (uint32_T)tmp) {
        rtDW.is_Counting_b = IN_End;
        rtDW.T_C = ON;
      } else if (rtDW.RESET) {
        rtDW.temporalCounter_i4 = 0U;
      }
    } else {
      /* case IN_End: */
    }

    /* case IN_off: */
  } else if (rtDW.Start_T_C) {
    rtDW.is_Timet_T_C = IN_Counting;
    rtDW.is_Counting_b = IN_Count1;
    rtDW.temporalCounter_i4 = 0U;
  }

  if (rtDW.is_Timer_LV == IN_Counting) {
    if (!rtDW.Start_T_LV) {
      rtDW.is_Counting_l3 = IN_NO_ACTIVE_CHILD;
      rtDW.is_Timer_LV = IN_off;
      rtDW.T_LV = OFF;
    } else if (rtDW.is_Counting_l3 == IN_Count1) {
      if (rtDW.temporalCounter_i5 >= 300U) {
        rtDW.is_Counting_l3 = IN_End;
        rtDW.T_LV = ON;
      } else if (rtDW.RESET_LV) {
        rtDW.temporalCounter_i5 = 0U;
      }
    } else {
      /* case IN_End: */
    }

    /* case IN_off: */
  } else if (rtDW.Start_T_LV) {
    rtDW.is_Timer_LV = IN_Counting;
    rtDW.is_Counting_l3 = IN_Count1;
    rtDW.temporalCounter_i5 = 0U;
  }

  if (rtDW.is_Timer_T_L_O == IN_Counting) {
    if (!rtDW.Start_T_L_O) {
      rtDW.is_Counting = IN_NO_ACTIVE_CHILD;
      rtDW.is_Timer_T_L_O = IN_off;
      rtDW.T_L = OFF;
    } else if (rtDW.is_Counting == IN_Count1) {
      tmp = rtDW.Time_T_L * 10;
      if (tmp < 0) {
        tmp = 0;
      }

      if (rtDW.temporalCounter_i2 >= (uint32_T)tmp) {
        rtDW.is_Counting = IN_End;
        rtDW.T_L = ON;
      } else if (rtDW.RESET) {
        rtDW.temporalCounter_i2 = 0U;
      }
    } else {
      /* case IN_End: */
    }

    /* case IN_off: */
  } else if (rtDW.Start_T_L_O) {
    rtDW.is_Timer_T_L_O = IN_Counting;
    rtDW.is_Counting = IN_Count1;
    rtDW.temporalCounter_i2 = 0U;
  }

  /* End of Chart: '<Root>/Cancello' */

  /* Chart: '<Root>/Lampeggio_Led_V' */
  if (rtDW.temporalCounter_i1 < 15U) {
    rtDW.temporalCounter_i1++;
  }

  if (rtDW.is_active_c5_project_work_cance == 0U) {
    rtDW.is_active_c5_project_work_cance = 1U;
    rtDW.is_c5_project_work_cancello = IN_off;

    /* Outport: '<Root>/out' */
    rtY.out = DISACTIVE;
  } else {
    switch (rtDW.is_c5_project_work_cancello) {
     case IN_blink:
      if (!rtDW.L3_Blink) {
        rtDW.is_blink = IN_NO_ACTIVE_CHILD;
        rtDW.is_c5_project_work_cancello = IN_off;

        /* Outport: '<Root>/out' */
        rtY.out = DISACTIVE;
      } else if (rtDW.is_blink == IN_blink_off) {
        /* Outport: '<Root>/out' */
        rtY.out = DISACTIVE;
        if (rtDW.temporalCounter_i1 >= 10U) {
          rtDW.is_blink = IN_blink_on;
          rtDW.temporalCounter_i1 = 0U;

          /* Outport: '<Root>/out' */
          rtY.out = ACTIVE;
        }
      } else {
        /* Outport: '<Root>/out' */
        /* case IN_blink_on: */
        rtY.out = ACTIVE;
        if (rtDW.temporalCounter_i1 >= 10U) {
          rtDW.is_blink = IN_blink_off;
          rtDW.temporalCounter_i1 = 0U;

          /* Outport: '<Root>/out' */
          rtY.out = DISACTIVE;
        }
      }
      break;

     case IN_off:
      /* Outport: '<Root>/out' */
      rtY.out = DISACTIVE;
      if (rtDW.L3_Blink) {
        rtDW.is_c5_project_work_cancello = IN_blink;
        rtDW.is_blink = IN_blink_on;
        rtDW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/out' */
        rtY.out = ACTIVE;
      } else if (rtDW.L3) {
        rtDW.is_c5_project_work_cancello = IN_on;

        /* Outport: '<Root>/out' */
        rtY.out = ACTIVE;
      }
      break;

     default:
      /* Outport: '<Root>/out' */
      /* case IN_on: */
      rtY.out = ACTIVE;
      if (!rtDW.L3) {
        rtDW.is_c5_project_work_cancello = IN_off;

        /* Outport: '<Root>/out' */
        rtY.out = DISACTIVE;
      } else if (rtDW.L3_Blink) {
        rtDW.is_c5_project_work_cancello = IN_blink;
        rtDW.is_blink = IN_blink_on;
        rtDW.temporalCounter_i1 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Lampeggio_Led_V' */

  /* Chart: '<Root>/Lampeggio_Led_G' */
  if (rtDW.temporalCounter_i1_b < 31U) {
    rtDW.temporalCounter_i1_b++;
  }

  if (rtDW.is_active_c4_project_work_cance == 0U) {
    rtDW.is_active_c4_project_work_cance = 1U;
    rtDW.is_c4_project_work_cancello = IN_off;

    /* Outport: '<Root>/Out3' */
    rtY.Out3 = DISACTIVE;
  } else {
    switch (rtDW.is_c4_project_work_cancello) {
     case IN_blink:
      if (!rtDW.L2_Blink) {
        rtDW.is_blink_j = IN_NO_ACTIVE_CHILD;
        rtDW.is_c4_project_work_cancello = IN_off;

        /* Outport: '<Root>/Out3' */
        rtY.Out3 = DISACTIVE;
      } else if (rtDW.is_blink_j == IN_blink_off) {
        /* Outport: '<Root>/Out3' */
        rtY.Out3 = DISACTIVE;
        if (rtDW.temporalCounter_i1_b >= 20U) {
          rtDW.is_blink_j = IN_blink_on;
          rtDW.temporalCounter_i1_b = 0U;

          /* Outport: '<Root>/Out3' */
          rtY.Out3 = ACTIVE;
        }
      } else {
        /* Outport: '<Root>/Out3' */
        /* case IN_blink_on: */
        rtY.Out3 = ACTIVE;
        if (rtDW.temporalCounter_i1_b >= 20U) {
          rtDW.is_blink_j = IN_blink_off;
          rtDW.temporalCounter_i1_b = 0U;

          /* Outport: '<Root>/Out3' */
          rtY.Out3 = DISACTIVE;
        }
      }
      break;

     case IN_off:
      /* Outport: '<Root>/Out3' */
      rtY.Out3 = DISACTIVE;
      if (rtDW.L2_Blink) {
        rtDW.is_c4_project_work_cancello = IN_blink;
        rtDW.is_blink_j = IN_blink_on;
        rtDW.temporalCounter_i1_b = 0U;

        /* Outport: '<Root>/Out3' */
        rtY.Out3 = ACTIVE;
      } else if (rtDW.L2) {
        rtDW.is_c4_project_work_cancello = IN_on;

        /* Outport: '<Root>/Out3' */
        rtY.Out3 = ACTIVE;
      }
      break;

     default:
      /* Outport: '<Root>/Out3' */
      /* case IN_on: */
      rtY.Out3 = ACTIVE;
      if (!rtDW.L2) {
        rtDW.is_c4_project_work_cancello = IN_off;

        /* Outport: '<Root>/Out3' */
        rtY.Out3 = DISACTIVE;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Lampeggio_Led_G' */
}

/* Model initialize function */
void project_work_cancello_initialize(void)
{
  /* SystemInitialize for Chart: '<Root>/Button' */
  Button_Init(&rtDW.ButtonON_e);

  /* SystemInitialize for Chart: '<Root>/Button1' */
  Button_Init(&rtDW.ButtonON_l);

  /* SystemInitialize for Chart: '<Root>/Button2' */
  Button_Init(&rtDW.ButtonON);

  /* SystemInitialize for Chart: '<Root>/Cancello' */
  rtDW.Time_T_C = 10;
  rtDW.Time_T_L = 10;

  /* Chart: '<Root>/Cancello' */
  rtDW.is_Cancello = IN_Check;

  /* Outport: '<Root>/L1' incorporates:
   *  Chart: '<Root>/Cancello'
   * */
  rtY.L1 = OFF;

  /* Chart: '<Root>/Cancello' */
  rtDW.L2 = OFF;
  rtDW.L3 = OFF;
  rtDW.L2_Blink = OFF;
  rtDW.L3_Blink = OFF;
  rtDW.is_Obstacle = IN_Wait_f;
  rtDW.is_Update_TC = IN_Update_T_C;
  rtDW.is_Update_TL = IN_Update_T_L;
  rtDW.is_Timer_T_L_C = IN_off;
  rtDW.is_Timet_T_C = IN_off;
  rtDW.T_C = OFF;
  rtDW.is_Timer_LV = IN_off;
  rtDW.T_LV = OFF;
  rtDW.is_Timer_T_L_O = IN_off;
  rtDW.T_L = OFF;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
