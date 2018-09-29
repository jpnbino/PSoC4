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

CY_ISR(Counter)
{
    Pin_Green_Write ( ~Pin_Green_Read());
    
    Counter_ClearInterrupt( Counter_INTR_MASK_TC );
}


int main()
{
    CyGlobalIntEnable;
    
    Counter_Start();
    Counter_Int_StartEx(Counter);
 
    for(;;)
    {

    }
}

/* [] END OF FILE */
