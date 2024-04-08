################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/LCD_DRIVER/LCD.c 

OBJS += \
./HAL/LCD_DRIVER/LCD.o 

C_DEPS += \
./HAL/LCD_DRIVER/LCD.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/LCD_DRIVER/%.o HAL/LCD_DRIVER/%.su HAL/LCD_DRIVER/%.cyclo: ../HAL/LCD_DRIVER/%.c HAL/LCD_DRIVER/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/MCAL/GPIO" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/HAL/LCD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/MCAL" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/Inc" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/HAL/KEYPAD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson3_LCD_KEYPAD/HAL/segment_7" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HAL-2f-LCD_DRIVER

clean-HAL-2f-LCD_DRIVER:
	-$(RM) ./HAL/LCD_DRIVER/LCD.cyclo ./HAL/LCD_DRIVER/LCD.d ./HAL/LCD_DRIVER/LCD.o ./HAL/LCD_DRIVER/LCD.su

.PHONY: clean-HAL-2f-LCD_DRIVER

