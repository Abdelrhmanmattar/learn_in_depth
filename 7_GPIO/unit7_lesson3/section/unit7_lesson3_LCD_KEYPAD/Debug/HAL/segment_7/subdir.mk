################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/segment_7/Segment_7.c 

OBJS += \
./HAL/segment_7/Segment_7.o 

C_DEPS += \
./HAL/segment_7/Segment_7.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/segment_7/%.o HAL/segment_7/%.su HAL/segment_7/%.cyclo: ../HAL/segment_7/%.c HAL/segment_7/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/MCAL/GPIO" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/HAL/LCD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/MCAL" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/Inc" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/HAL/KEYPAD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/HAL/segment_7" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HAL-2f-segment_7

clean-HAL-2f-segment_7:
	-$(RM) ./HAL/segment_7/Segment_7.cyclo ./HAL/segment_7/Segment_7.d ./HAL/segment_7/Segment_7.o ./HAL/segment_7/Segment_7.su

.PHONY: clean-HAL-2f-segment_7

