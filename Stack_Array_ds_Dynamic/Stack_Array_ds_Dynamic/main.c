#include <stdio.h>
#include <stdlib.h>
#include"Plateform_DataTypes.h"
#include"Stack_Array_ds_Dynamic.h"


Stack_t *stack1=NULL;
Stacktatus_t status=0;
uint8 stack_size=0;
void *ptr_pop_value=NULL;
uint32 var1 =50;
uint32 var2 =60;
uint32 var3 =70;
uint32 var4 =80;
uint32 var5 =90;


int main()
{

    printf("please inter the size of the stack : ");
    scanf("%i",&stack_size);
   stack1=CreatStack(&status,stack_size);

  status=PushStack(stack1,&var1);
  status=PushStack(stack1,&var2);
  status=PushStack(stack1,&var3);
  status=PushStack(stack1,&var4);
  status=PushStack(stack1,&var5);


  printf("=============================\n");


     ptr_pop_value=PopStack(stack1,&status);
     printf("%i\t",*((uint32*)ptr_pop_value));

     ptr_pop_value=PopStack(stack1,&status);
      printf("%i\t",*((uint32*)ptr_pop_value));

     ptr_pop_value=PopStack(stack1,&status);
      printf("%i\t",*((uint32*)ptr_pop_value));


      ptr_pop_value=PopStack(stack1,&status);
      printf("%i\t",*((uint32*)ptr_pop_value));

       ptr_pop_value=PopStack(stack1,&status);
      printf("%i\t",*((uint32*)ptr_pop_value));

//   stack1=DestroyStack(stack1,&status);
//   if(NULL==stack1)
//   {
//     printf("Dynamic memory allocation Destroyed suffcessfuly\n");
//   }
//   else
//   {
//       printf("failed Destroyed Dynamic memory allocation\n");
//
//   }
    return 0;
}
///////////////////////////////////////////////////////////////////////
