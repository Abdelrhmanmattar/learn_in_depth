################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/EXTI/Stm32_F103C6_EXTI_driver.c 

OBJS += \
./MCAL/EXTI/Stm32_F103C6_EXTI_driver.o 

C_DEPS += \
./MCAL/EXTI/Stm32_F103C6_EXTI_driver.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/EXTI/%.o MCAL/EXTI/%.su MCAL/EXTI/%.cyclo: ../MCAL/EXTI/%.c MCAL/EXTI/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/HAL/KEYPAD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/HAL/LCD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/MCAL/GPIO" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/MCAL" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/MCAL/EXTI" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-MCAL-2f-EXTI

clean-MCAL-2f-EXTI:
	-$(RM) ./MCAL/EXTI/Stm32_F103C6_EXTI_driver.cyclo ./MCAL/EXTI/Stm32_F103C6_EXTI_driver.d ./MCAL/EXTI/Stm32_F103C6_EXTI_driver.o ./MCAL/EXTI/Stm32_F103C6_EXTI_driver.su

.PHONY: clean-MCAL-2f-EXTI

