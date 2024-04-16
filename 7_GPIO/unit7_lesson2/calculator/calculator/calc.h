/*
 * calc.h
 *
 * Created: 4/9/2024 2:11:48 AM
 *  Author: abdelrhman mattar
 */ 


#ifndef CALC_H_
#define CALC_H_

//-----------------INCLUDES-------------------
#include "stdint.h"
#include "stdio.h"
#include "math.h"

//-----------------ENUMS-------------------
typedef enum
{
    OPERATION_ADD= '+',
    OPERATION_SUB = '-',
    OPERATION_MUL = '*',
    OPERATION_DIV = '/',
}operation_t;

//-----------------FUNCTIONS PROTOTYPES-------------------
double calc(uint32_t num1, uint32_t num2, operation_t operation)
{
    double result = 0;
	
    switch(operation)
    {
        case OPERATION_ADD:
        {
            result = (double)num1 + (double)num2;
            break;
        }
        case OPERATION_SUB:
        {
            result = (double)num1 - (double)num2;
            break;
        }
        case OPERATION_MUL:
        {
            result = (double)num1 * (double)num2;
            break;
        }
        case OPERATION_DIV:
        {
            if(num2 != 0)
            {
                result = (double)num1 / (double)num2;
            }
            else
            {
                result = 0;
            }
            break;
        }
        default:
        {
            result = 0;
            break;
        }
    }
    return result;

}



//function to convert double to string
void double_to_string(char* str,double num, uint8_t precision)
{
    int int_part = (int)num;
    double float_part = num - int_part;
    int float_part_int = (int)(float_part * pow(10, precision));
	if(float_part_int){float_part_int++;}
    sprintf(str, "%d.%d", int_part,float_part_int);
}


#endif /* CALC_H_ */