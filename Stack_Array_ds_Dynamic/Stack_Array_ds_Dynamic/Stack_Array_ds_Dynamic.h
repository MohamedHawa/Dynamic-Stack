#ifndef _STACK_ARRAY_DS_DYNAMIC_H_
#define _STACK_ARRAY_DS_DYNAMIC_H_

#include"Plateform_DataTypes.h"

typedef struct{
void **Stack_Array;
sint32 Element_Count;
uint32 Stack_Max_Size;
sint32 Stack_Top;


} Stack_t ;



typedef enum{
STACK_NOK,
STACK_OK,
STACK_FULL,
STACK_NOT_FULL,
STACK_EMPTY,
STACK_NOT_EMPTY,
STACK_NULL_POUINTER


} Stacktatus_t ;



Stack_t *CreatStack(Stacktatus_t *ret_status,uint32 MaxSize);
Stack_t *DestroyStack( Stack_t *stack_obj,Stacktatus_t *ret_status);
Stacktatus_t PushStack( Stack_t *stack_obj,void *itemptr);
void *PopStack( Stack_t *stack_obj,Stacktatus_t *ret_status);





#endif // _STACK_ARRAY_DS_DYNAMIC_H_
