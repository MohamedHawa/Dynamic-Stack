#include"Plateform_DataTypes.h"
#include"Stack_Array_ds_Dynamic.h"
#include <stdio.h>
#include <stdlib.h>

static Stacktatus_t StackIsEmpty( Stack_t *stack_obj);
static Stacktatus_t StackIsFull( Stack_t *stack_obj);








static Stacktatus_t StackIsEmpty( Stack_t *stack_obj)
{
    Stacktatus_t ret=STACK_EMPTY;

     if((stack_obj->Stack_Top)==-1)
     {
         ret=STACK_EMPTY;
     }
     else
     {

      ret=STACK_NOT_EMPTY;
     }
     return ret;
}

static Stacktatus_t StackIsFull( Stack_t *stack_obj)
{


     Stacktatus_t ret=STACK_EMPTY;

     if(stack_obj->Stack_Max_Size==stack_obj->Element_Count)
     {
         ret=STACK_FULL;
     }
     else
     {

      ret=STACK_NOT_FULL;
     }
     return ret;

}
/////////////////////////////////////////////////

 Stack_t *CreatStack(Stacktatus_t *ret_status,uint32 MaxSize)
 {
    Stack_t *my_stack=NULL;

     if(NULL==ret_status)
     {
        *ret_status=STACK_NULL_POUINTER;
        my_stack=NULL;
     }
     else
     {
      my_stack=(Stack_t *) malloc(sizeof(Stack_t));
          if(NULL==my_stack)
          {
            free(my_stack);
             my_stack=NULL;
            *ret_status=STACK_NOK;

          }
          else
          {
           my_stack->Element_Count=0;
           my_stack->Stack_Max_Size=MaxSize;
           my_stack->Stack_Top=-1;
           my_stack->Stack_Array=(void **)calloc(MaxSize,sizeof(void*));
              if(NULL==my_stack->Stack_Array)
              {
                  free( my_stack->Stack_Array);
                  my_stack->Stack_Array=NULL;
                   *ret_status=STACK_NOK;
              }
              else
              {
                 *ret_status=STACK_OK;
              }


            *ret_status=STACK_OK;
          }



        *ret_status=STACK_OK;
     }

    return my_stack ;
 }
  Stack_t *DestroyStack( Stack_t *stack_obj,Stacktatus_t *ret_status)
  {

    if((NULL==stack_obj)||(NULL==ret_status))
    {
      *ret_status=STACK_NULL_POUINTER;
    }
    else
    {
      free(stack_obj->Stack_Array);
      free(stack_obj);



   *ret_status=STACK_OK;
    }

  return NULL;

  }
Stacktatus_t PushStack( Stack_t *stack_obj,void *itemptr)
{
    Stacktatus_t ret=STACK_NULL_POUINTER;

   if((NULL==stack_obj)||(NULL==itemptr))
   {
    ret=STACK_NULL_POUINTER;
   }
   else
   {
       if(STACK_FULL==StackIsFull(stack_obj))
       {
         ret=STACK_FULL;
       }
       else
       {
          (stack_obj->Stack_Top)++;
           stack_obj->Stack_Array[stack_obj->Stack_Top]=itemptr;
           (stack_obj->Element_Count)++;

          ret=STACK_NOT_FULL;
       }



    ret=STACK_OK;
   }


  return  ret;
}
///////////////////////////////////////////
void *PopStack( Stack_t *stack_obj,Stacktatus_t *ret_status)
{
    void *dataptrout=NULL;
    if(NULL==stack_obj)
    {
     *ret_status=STACK_NULL_POUINTER;
     dataptrout=NULL;
    }
    else
    {
        if(STACK_EMPTY==StackIsEmpty(stack_obj))
        {
           *ret_status=STACK_EMPTY;
           dataptrout=NULL;
        }
        else
        {
         dataptrout=stack_obj->Stack_Array[stack_obj->Stack_Top];
          (stack_obj->Stack_Top)--;
          (stack_obj->Element_Count)--;



           *ret_status=STACK_NOT_EMPTY;
        }



     *ret_status=STACK_NOK;
    }

   return  dataptrout;

}
