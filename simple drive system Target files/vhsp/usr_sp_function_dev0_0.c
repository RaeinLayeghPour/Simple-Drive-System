// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif


// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines



















//@cmp.def.end

//#define SP_SCOPE_FILE_DEBUG
#define SP_SCOPE_BUFF_SIZE (4194304*4)
#define SP_SCOPE_BUFF_SIZE_PER_ER (SP_SCOPE_BUFF_SIZE/4)

//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


extern X_UnInt8* sp_scope_buffer_dev0;
extern FILE* f_sp_scope_debug;
uint64_t sp_scope_buff_addr_cpu0_er0_dev0;
uint64_t sp_scope_buff_start_addr_cpu0_er0_dev0;
uint32_t sp_scope_buff_index_cpu0_er0_dev0;
uint64_t sp_scope_buff_addr_cpu0_er1_dev0;
uint64_t sp_scope_buff_start_addr_cpu0_er1_dev0;
uint32_t sp_scope_buff_index_cpu0_er1_dev0;

// const variables

//@cmp.var.start
// variables
double _3_ph_im1_machine_wrapper1__out;

double _iac_rms_cpu_trans_output__out;
double _inverter_enable__out;
double _scada_input1__out;
double _t__out;
double _alpha__out;
double _beta__out;
double _zero__out = 0.0;
float _iarms__in;
double _3_ph_im1_bus_split__out;
double _alpha_beta_to_abc1__A;
double _alpha_beta_to_abc1__B;
double _alpha_beta_to_abc1__C;
X_UnInt32 _three_phase_inverter1_phase_a_pwm_modulator__channels[1] = {0};
double _three_phase_inverter1_phase_a_pwm_modulator__limited_in[1];

X_UnInt32 _three_phase_inverter1_phase_b_pwm_modulator__channels[1] = {1};
double _three_phase_inverter1_phase_b_pwm_modulator__limited_in[1];

X_UnInt32 _three_phase_inverter1_phase_c_pwm_modulator__channels[1] = {2};
double _three_phase_inverter1_phase_c_pwm_modulator__limited_in[1];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _3_ph_im1_machine_wrapper1__model_load;
double _alpha__current_phase;
double _beta__current_phase;
//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _3_ph_im1_machine_wrapper1__model_load = 0.0;
    _alpha__current_phase = 0.0 / 360.0f;
    _beta__current_phase = -90.0 / 360.0f;
    HIL_OutAO(0x4002, 0.0f);
    sp_scope_buff_index_cpu0_er1_dev0 = 0;
    HIL_OutAO(0x4001, 0.0f);
    sp_scope_buff_index_cpu0_er1_dev0 = 0;
    HIL_OutFloat(141557760, 0.0);
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 4667);
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 154);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x1);
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 4667);
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 154);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x2);
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 4667);
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 154);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x4);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
    sp_scope_buff_index_cpu0_er0_dev0 = 0;
    sp_scope_buff_start_addr_cpu0_er0_dev0 = (uint64_t)sp_scope_buffer_dev0 + 0 * SP_SCOPE_BUFF_SIZE + 0 * SP_SCOPE_BUFF_SIZE_PER_ER;
    sp_scope_buff_index_cpu0_er1_dev0 = 0;
    sp_scope_buff_start_addr_cpu0_er1_dev0 = (uint64_t)sp_scope_buffer_dev0 + 0 * SP_SCOPE_BUFF_SIZE + 1 * SP_SCOPE_BUFF_SIZE_PER_ER;
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: zero
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Inverter enable
    _inverter_enable__out = XIo_InFloat(0xfffc000c);
    // Generated from the component: alpha
    _alpha__out = (1.0 * sin(2.0f * M_PI * _alpha__current_phase) + 0.0);
    // Generated from the component: beta
    _beta__out = (1.0 * sin(2.0f * M_PI * _beta__current_phase) + 0.0);
    // Generated from the component: Three Phase Inverter1.Phase A.IGBT Leg global gds ovs.termination1
    // Generated from the component: Three Phase Inverter1.Phase B.IGBT Leg global gds ovs.termination1
    // Generated from the component: Three Phase Inverter1.Phase C.IGBT Leg global gds ovs.termination1
    // Generated from the component: alpha beta to abc1
    _alpha_beta_to_abc1__A = 1 * _zero__out;
    _alpha_beta_to_abc1__B = _alpha_beta_to_abc1__A - 0.5 * _alpha__out;
    _alpha_beta_to_abc1__C = _alpha_beta_to_abc1__B - 0.8660254037844386 * _beta__out;
    _alpha_beta_to_abc1__B += 0.8660254037844386 * _beta__out;
    _alpha_beta_to_abc1__A += 1 * _alpha__out;
    // Generated from the component: Three Phase Inverter1.Phase A.PWM_Modulator
    _three_phase_inverter1_phase_a_pwm_modulator__limited_in[0] = MIN(MAX(_alpha_beta_to_abc1__A, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], ((X_UnInt32)((_three_phase_inverter1_phase_a_pwm_modulator__limited_in[0] - (-1.0)) * 2333.5)));
    if (_inverter_enable__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x1);
    // Generated from the component: Three Phase Inverter1.Phase B.PWM_Modulator
    _three_phase_inverter1_phase_b_pwm_modulator__limited_in[0] = MIN(MAX(_alpha_beta_to_abc1__B, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], ((X_UnInt32)((_three_phase_inverter1_phase_b_pwm_modulator__limited_in[0] - (-1.0)) * 2333.5)));
    if (_inverter_enable__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x2);
    // Generated from the component: Three Phase Inverter1.Phase C.PWM_Modulator
    _three_phase_inverter1_phase_c_pwm_modulator__limited_in[0] = MIN(MAX(_alpha_beta_to_abc1__C, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], ((X_UnInt32)((_three_phase_inverter1_phase_c_pwm_modulator__limited_in[0] - (-1.0)) * 2333.5)));
    if (_inverter_enable__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x4);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: alpha
    _alpha__current_phase += 50.0 * 1e-06;
    if (_alpha__current_phase >= 1.0f) {
        _alpha__current_phase -= 1.0f;
    }
    // Generated from the component: beta
    _beta__current_phase += 50.0 * 1e-06;
    if (_beta__current_phase >= 1.0f) {
        _beta__current_phase -= 1.0f;
    }
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: 3 ph IM1.Machine Wrapper1
    HIL_OutFloat((0x800000 + 0x40000 * 0x0 + 0x18),  _3_ph_im1_machine_wrapper1__model_load);
    _3_ph_im1_machine_wrapper1__out = HIL_InFloat(0xc80000 + 32778);
    // Generated from the component: Iac_rms.cpu_trans.Output
    _iac_rms_cpu_trans_output__out = XIo_InFloat(0xfffc0000);
    // Generated from the component: SCADA Input1
    _scada_input1__out = XIo_InFloat(0xfffc0010);
    // Generated from the component: T
    _t__out = XIo_InFloat(0xfffc0014);
    // Generated from the component: machine Speed
    HIL_OutAO(0x4002, (float)_3_ph_im1_machine_wrapper1__out);
    // Generated from the component: Iarms
    HIL_OutAO(0x4001, (float)_iac_rms_cpu_trans_output__out);
    _iarms__in = _iac_rms_cpu_trans_output__out;
    sp_scope_buff_addr_cpu0_er1_dev0 = sp_scope_buff_start_addr_cpu0_er1_dev0 + sp_scope_buff_index_cpu0_er1_dev0;
    //#ifdef SP_SCOPE_FILE_DEBUG
    //  fprintf(f_sp_scope_debug, "\nstart = %x, index = %x, addr = %x, value = %f.", sp_scope_buff_start_addr_cpu0_er1_dev0, sp_scope_buff_index_cpuuser_sp_cpu}_cpu0_er1_dev0, sp_scope_buff_addr_cpu0_er1_dev0, _iarms__in);
    //#endif
    memcpy((X_UnInt8 *)sp_scope_buff_addr_cpu0_er1_dev0, &_iarms__in, 4);
    //printf("\n\sp_scope_buff_addr_cpu0_er1_dev0, _iarms__in 0x%x\r\n", sp_scope_buff_addr_cpu0_er1_dev0);
    //printf("\n\r addr 0x%x, value 0x%x\r\n", sp_scope_buff_addr_cpu0_er1_dev0, *(X_UnInt32*)(sp_scope_buff_addr_cpu0_er1_dev0));
    //XIo_OutInt32(sp_scope_buff_addr_cpu0_er1_dev0, _iarms__in);
    sp_scope_buff_index_cpu0_er1_dev0 = (sp_scope_buff_index_cpu0_er1_dev0 + 4) % SP_SCOPE_BUFF_SIZE_PER_ER;
    // Generated from the component: RL1.Vs
    HIL_OutFloat(141557760, (float) _scada_input1__out);
    // Generated from the component: 3 ph IM1.bus_split
    _3_ph_im1_bus_split__out = _t__out;
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: 3 ph IM1.Machine Wrapper1
    _3_ph_im1_machine_wrapper1__model_load = _3_ph_im1_bus_split__out;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------