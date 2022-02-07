/**
* @file 
* @brief Calculates PID parameters
*/

#ifndef CALCULATIONS_H
#define CALCUATIONS_H
#include "system.h"

/**
* @brief Calculates ideal K_p-value based on input system (Ku, Tu, and tuning method)
* @param[in] current_system 
* @return @c P_parameter (double) based on input system
*/
double calculate_P_parameter(System * current_system);

/**
* @brief Calculates ideal K_i-value based on input system (Ku, Tu, and tuning method)
* @param[in] current_system 
* @return @c I_parameter (double) based on input system
*/
double calculate_I_parameter(System * current_system);

/**
* @brief Calculates ideal K_d-value based on input system (Ku, Tu, and tuning method)
* @param[in] current_system 
* @return @c D_parameter (double) based on input system
*/
double calculate_D_parameter(System * current_system);

#endif
