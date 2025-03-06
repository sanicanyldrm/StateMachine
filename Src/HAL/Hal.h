#include "stdint.h"






/*
* @brief: This structure is used to store the movement request
* @param: isMoveRequested: This variable is used to store the movement request
*/
typedef struct 
{
    bool isMoveRequested;
}Move_Request_t;


typedef struct
{
    bool isObjectOnGripper;
}Object_Status_t;



Object_Status_t Object_Status;
Move_Request_t Move_Request;

uint8_t HAL_Supply_Object_Status(void);
uint8_t HAL_Supply_Move_Request(void);



