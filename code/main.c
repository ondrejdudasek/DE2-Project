

#include <inttypes.h>
#include <avr/interrupt.h>
#include "library/platform.h"

/**
 * @brief Main function. While can be later used to implement
 * power saving mode.
 */
uint8_t main()
{
    setup_platform();
    sei();
    while(1);
}


/**
 * @brief INT0 is connected to HC-SR04 output. 
 * This interrupt routine starts or stops measurement
 * of impulse length.
 * 
 */
ISR(INT0_vect)
{
    static uint8_t is_measuring = 0;
    if(is_measuring)
    {
        start_measure();
    } else {
        stop_measure();
        update_values();
        update_LCD();
    }
}

/**
 * @brief 1s overflow with 1/60 divider. 
 * Trigger measurement once per 1 minute. 
 * 
 */
ISR(TIM0_OVF_vect)
{
    static uint8_t seconds = 0;
    seconds ++;
    if(seconds >= 60)
    {
        trigger_distance_sensor();
    }
    return;
}

/**
 * @brief This should never happen. Sensor response took too long.
 * 
 * 
 */
ISR(TIM1_OVF_vect)
{
    stop_measure();
    update_LCD_error();

}