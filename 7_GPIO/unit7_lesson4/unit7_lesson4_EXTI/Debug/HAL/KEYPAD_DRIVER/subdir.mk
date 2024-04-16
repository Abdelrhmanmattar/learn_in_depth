################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/KEYPAD_DRIVER/KEY_PAD.c 

OBJS += \
./HAL/KEYPAD_DRIVER/KEY_PAD.o 

C_DEPS += \
./HAL/KEYPAD_DRIVER/KEY_PAD.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/KEYPAD_DRIVER/%.o HAL/KEYPAD_DRIVER/%.su HAL/KEYPAD_DRIVER/%.cyclo: ../HAL/KEYPAD_DRIVER/%.c HAL/KEYPAD_DRIVER/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/HAL/KEYPAD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/HAL/LCD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/MCAL/GPIO" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/MCAL" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/MCAL/EXTI" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HAL-2f-KEYPAD_DRIVER

clean-HAL-2f-KEYPAD_DRIVER:
	-$(RM) ./HAL/KEYPAD_DRIVER/KEY_PAD.cyclo ./HAL/KEYPAD_DRIVER/KEY_PAD.d ./HAL/KEYPAD_DRIVER/KEY_PAD.o ./HAL/KEYPAD_DRIVER/KEY_PAD.su

.PHONY: clean-HAL-2f-KEYPAD_DRIVER

