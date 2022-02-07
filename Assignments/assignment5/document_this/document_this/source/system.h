/**
* @file 
* @brief Creates a system struct from three input parameters; Ku, Tu, and tuning method.
*/

#ifndef SYSTEM_H
#define SYSTEM_H

typedef enum {
    Classic_Ziegler_Nichols,
    Pessen_Integral_Rule
} Tuning;

/**
 * @brief A structure to represent a system and desired PID tuning method.
 */
typedef struct {
    double Ku;            /** < The gain margin for loop stability */
    double Tu;            /** < The period of the oscillations frequency at the stability limit */
    Tuning tuning_method; /** < The desired PID tuning method */
} System;


/**
 * @brief Creates a system pointer based on given values for Tu, Ku, and Tuning method
 * @param[in] Ku is the gain margin for loop stability
 * @param[in] Tu is the period of the oscillations frequency at the stability limit 
 * @param[in] tuning_method The desired PID tuning method, 
 * either Classic_Ziegler_Nichols or Pessen_Integral_Rule
 * @param[out] system_new struct variables.
 * @return @c system_new pointer to a new system object.
 */
System * system_create(double Ku, double Tu, Tuning tuning_method);

/**
 * @brief This function relinquishes the memory of a system object
 * @param[in, out] system_current system is freed
 */
void system_delete(System * system_current);

#endif

