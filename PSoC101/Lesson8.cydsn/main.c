/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>



int main()
{
    CyGlobalIntEnable;
    
    PWM_Start();
    
    uint16 CompareValue = 0;
    typedef enum {
        PERIOD_RELOAD = 10000,
    }PWM_PARAMETER;
    
    while(1)
    {
        for(CompareValue = 10000; CompareValue > 0; CompareValue = CompareValue - 100)
        {
            PWM_WriteCompare(CompareValue);
            CyDelay(50);
            CY_NOP;
            
        }
        CY_NOP;
        CompareValue = PERIOD_RELOAD;
    }
}

/* [] END OF FILE */
