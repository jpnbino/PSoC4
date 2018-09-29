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

CY_ISR( Pin_SW2_Handler )
{
    Pin_Red_Write(~Pin_Red_Read());
    
    Pin_SW2_ClearInterrupt();
}
int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Pin_SW2_Int_StartEx( Pin_SW2_Handler );
    for(;;)
    {
        Pin_Blue_Write(~Pin_Blue_Read());
        CyDelay(1000);
    }
}

/* [] END OF FILE */
