/**
 * @file platform.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef LIBRARY_PLATFORM
#define LIBRARY_PLATFORM

/**
 * @brief Update values on LCD
 * 
 * @param height height of water level to display in cm
 * @param is_raining value of 1 or greater indicates raining. 
 */
void update_LCD(uint16_t height, uint8_t is_raining);

/**
 * @brief Print error message caused by failure in measurement causing
 * timer overflow
 */
void update_LCD_error();


#endif // LIBRARY_PLATFORM