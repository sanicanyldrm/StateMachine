#include "Hal.h"







/*
* @brief: This function is used to check the movement request
* @param: None
*/
uint8_t HAL_Supply_Move_Request(void)
{
    return Move_Request.isMoveRequested;
}

uint8_t HAL_Supply_Object_Status(void)
{
    return Object_Status.isObjectOnGripper;
}