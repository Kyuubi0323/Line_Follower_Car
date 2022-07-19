// C Program for line follower robot using 8051 microcontroller


#include<regx51.h>


sbit ls=P0_0;

sbit rs=P0_1;


#define motor P2

#define forward 0x06

#define turn_left 0x82

#define turn_right 0x14

#define stop 0x00


void main()

{

    motor=stop;

    while(1)

    {

     if(ls && rs)

         motor=forward;

     else if(!ls && rs)

         motor=turn_left;

     else if(ls && !rs)

       motor=turn_right;

     else 

         motor=stop;

  }

}