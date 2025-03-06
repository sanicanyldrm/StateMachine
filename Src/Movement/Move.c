#include "Move.h"









/*
* @brief: This function is used to initialize the movement status
* @param: None
*/
void Move_Init(void)
{
    Move_Status.isMoving = ACT_STOPPED;
}


/*
* @brief: This function is used to start the movement
* @param: None
*/
void Move_Start(void)
{
    Move_Status.isMoving = ACT_MOVING;
}

/*
* @brief: This function is used to stop the movement
* @param: None
*/
void Move_Stop(void)
{
    Move_Status.isMoving = ACT_STOPPED;
}

/*
* @brief: This function is used to update the movement status
* @param: None
*/
void Move_Update(void)
{
    bool isObjectOnGripper = HAL_Supply_Object_Status();

    if(isObjectOnGripper)
    {
        Move_Stop(); // Stop the movement
    }
    else
    {
        Move_Start(); // Start the movement
    }
}


/*
* @brief: This function is used to check the movement request
* @param: None
*/
void Check_Move_Request(void)
{
    uint8_t isMoveRequested = HAL_Supply_Move_Request();

    if(isMoveRequested)
    {
        Move_Start(); // Start the movement
    }
    else
    {
        Move_Stop(); // Stop the movement
    }
}


/*
* @brief This function is used to check the object while moving
*/
void Check_Object_While_Moving()
{
    Move_Update();
}