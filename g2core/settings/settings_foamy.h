/***********************************************************************/
/**** Default profile for screw driven machines ************************/
/***********************************************************************/

// ***> NOTE: The init message must be a single line with no CRs or LFs
#ifndef INIT_MESSAGE
#define INIT_MESSAGE "Foamy v1.0 by Fot"
#endif

//*****************************************************************************
//**** GLOBAL / GENERAL SETTINGS **********************************************
//*****************************************************************************

// MOTOR 3
#ifndef M3_MOTOR_MAP
#define M3_MOTOR_MAP                AXIS_U_EXTERNAL
#endif
#ifndef M3_STEP_ANGLE
#define M3_STEP_ANGLE               1.8
#endif
#ifndef M3_TRAVEL_PER_REV
#define M3_TRAVEL_PER_REV           1.25                    // 1.25 is a typical value for a screw axis
#endif
#ifndef M3_MICROSTEPS
#define M3_MICROSTEPS               8
#endif
#ifndef M3_STEPS_PER_UNIT
#define M3_STEPS_PER_UNIT           0
#endif
#ifndef M3_POLARITY
#define M3_POLARITY                 0
#endif
#ifndef M3_ENABLE_POLARITY
#define M3_ENABLE_POLARITY          IO_ACTIVE_LOW
#endif
#ifndef M3_STEP_POLARITY
#define M3_STEP_POLARITY            IO_ACTIVE_HIGH
#endif
#ifndef M3_POWER_MODE
#define M3_POWER_MODE               MOTOR_DISABLED
#endif
#ifndef M3_POWER_LEVEL
#define M3_POWER_LEVEL              0.0
#endif

// MOTOR 4
#ifndef M4_MOTOR_MAP
#define M4_MOTOR_MAP                AXIS_V_EXTERNAL
#endif
#ifndef M4_STEP_ANGLE
#define M4_STEP_ANGLE               1.8
#endif
#ifndef M4_TRAVEL_PER_REV
#define M4_TRAVEL_PER_REV           360.0                   // in degrees if rotary axis (ABC)
#endif
#ifndef M4_MICROSTEPS
#define M4_MICROSTEPS               8
#endif
#ifndef M4_STEPS_PER_UNIT
#define M4_STEPS_PER_UNIT           0
#endif
#ifndef M4_POLARITY
#define M4_POLARITY                 0
#endif
#ifndef M4_ENABLE_POLARITY
#define M4_ENABLE_POLARITY          IO_ACTIVE_LOW
#endif
#ifndef M4_STEP_POLARITY
#define M4_STEP_POLARITY            IO_ACTIVE_HIGH
#endif
#ifndef M4_POWER_MODE
#define M4_POWER_MODE               MOTOR_DISABLED
#endif
#ifndef M4_POWER_LEVEL
#define M4_POWER_LEVEL              0.0
#endif


// X AXIS
#ifndef X_AXIS_MODE
#define X_AXIS_MODE                 AXIS_DISABLED           // {xam:  see canonical_machine.h cmAxisMode for valid values
#endif
#ifndef X_VELOCITY_MAX
#define X_VELOCITY_MAX              500.0                  // {xvm:  G0 max velocity in mm/min
#endif
#ifndef X_FEEDRATE_MAX
#define X_FEEDRATE_MAX              500.0                  // {xfr:  G1 max feed rate in mm/min
#endif
#ifndef X_TRAVEL_MAX
#define X_TRAVEL_MAX                470.0                     // {xtm:  travel between switches or crashes
#endif
#ifndef X_HOMING_INPUT
#define X_HOMING_INPUT              1                       // {xhi:  input used for homing or 0 to disable
#endif
#ifndef X_HOMING_DIRECTION
#define X_HOMING_DIRECTION          0                       // {xhd:  0=search moves negative, 1= search moves positive
#endif
#ifndef X_SEARCH_VELOCITY
#define X_SEARCH_VELOCITY           100.0                   // {xsv:  minus means move to minimum switch
#endif
#ifndef X_LATCH_VELOCITY
#define X_LATCH_VELOCITY            100.0                   // {xlv:  mm/min
#endif
#ifndef X_LATCH_BACKOFF
#define X_LATCH_BACKOFF             4.0                     // {xlb:  mm
#endif
#ifndef X_ZERO_BACKOFF
#define X_ZERO_BACKOFF              2.0                     // {xzb:  mm
#endif

// Y AXIS
#ifndef Y_AXIS_MODE
#define Y_AXIS_MODE                 AXIS_DISABLED
#endif
#ifndef Y_VELOCITY_MAX
#define Y_VELOCITY_MAX              500.0
#endif
#ifndef Y_FEEDRATE_MAX
#define Y_FEEDRATE_MAX              500.0
#endif
#ifndef Y_TRAVEL_MAX
#define Y_TRAVEL_MAX                270.0
#endif
#ifndef Y_HOMING_INPUT
#define Y_HOMING_INPUT              2
#endif
#ifndef Y_HOMING_DIRECTION
#define Y_HOMING_DIRECTION          0
#endif
#ifndef Y_SEARCH_VELOCITY
#define Y_SEARCH_VELOCITY           100.0
#endif
#ifndef Y_LATCH_VELOCITY
#define Y_LATCH_VELOCITY            100.0
#endif
#ifndef Y_LATCH_BACKOFF
#define Y_LATCH_BACKOFF             4.0
#endif
#ifndef Y_ZERO_BACKOFF
#define Y_ZERO_BACKOFF              2.0
#endif

// U AXIS
#ifndef U_AXIS_MODE
#define U_AXIS_MODE                 AXIS_DISABLED           // {xam:  see canonical_machine.h cmAxisMode for valid values
#endif
#ifndef U_VELOCITY_MAX
#define U_VELOCITY_MAX              500.0                  // {xvm:  G0 max velocity in mm/min
#endif
#ifndef U_FEEDRATE_MAX
#define U_FEEDRATE_MAX              500.0                  // {xfr:  G1 max feed rate in mm/min
#endif
#ifndef U_TRAVEL_MAX
#define U_TRAVEL_MAX                470.0                     // {xtm:  travel between switches or crashes
#endif
#ifndef U_HOMING_INPUT
#define U_HOMING_INPUT              3                       // {xhi:  input used for homing or 0 to disable
#endif
#ifndef U_HOMING_DIRECTION
#define U_HOMING_DIRECTION          0                       // {xhd:  0=search moves negative, 1= search moves positive
#endif
#ifndef U_SEARCH_VELOCITY
#define U_SEARCH_VELOCITY           100.0                   // {xsv:  minus means move to minimum switch
#endif
#ifndef U_LATCH_VELOCITY
#define U_LATCH_VELOCITY            100.0                   // {xlv:  mm/min
#endif
#ifndef U_LATCH_BACKOFF
#define U_LATCH_BACKOFF             4.0                     // {xlb:  mm
#endif
#ifndef U_ZERO_BACKOFF
#define U_ZERO_BACKOFF              2.0                     // {xzb:  mm
#endif

// V AXIS
#ifndef V_AXIS_MODE
#define V_AXIS_MODE                 AXIS_DISABLED
#endif
#ifndef V_VELOCITY_MAX
#define V_VELOCITY_MAX              500.0
#endif
#ifndef V_FEEDRATE_MAX
#define V_FEEDRATE_MAX              500.0
#endif
#ifndef V_TRAVEL_MAX
#define V_TRAVEL_MAX                270.0
#endif
#ifndef V_HOMING_INPUT
#define V_HOMING_INPUT              4
#endif
#ifndef V_HOMING_DIRECTION
#define V_HOMING_DIRECTION          0
#endif
#ifndef V_SEARCH_VELOCITY
#define V_SEARCH_VELOCITY           100.0
#endif
#ifndef V_LATCH_VELOCITY
#define V_LATCH_VELOCITY            100.0
#endif
#ifndef V_LATCH_BACKOFF
#define V_LATCH_BACKOFF             4.0
#endif
#ifndef V_ZERO_BACKOFF
#define V_ZERO_BACKOFF              2.0
#endif