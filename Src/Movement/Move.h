#include "stdint.h"
#include "stdbool.h"


#define ACT_MOVING                  1
#define ACT_STOPPED                 0


/*
* @brief: This structure is used to store the status of the movement
* @param: isMoving: This variable is used to store the status of the movement
*/
typedef struct 
{
    bool isMoving;
}Move_Status_t;


Move_Status_t Move_Status;



void Move_Init(void);
void Move_Start(void);
void Move_Stop(void);
void Move_Update(void);
void Check_Movement_Request(void);

