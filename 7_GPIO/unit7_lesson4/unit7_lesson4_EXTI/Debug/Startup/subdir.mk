################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Startup/startup_stm32f103c6tx.s 

OBJS += \
./Startup/startup_stm32f103c6tx.o 

S_DEPS += \
./Startup/startup_stm32f103c6tx.d 


# Each subdirectory must supply rules for building sources it contributes
Startup/%.o: ../Startup/%.s Startup/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 -mcpu=cortex-m3 -g3 -DDEBUG -c -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/HAL/KEYPAD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/HAL/LCD_DRIVER" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/MCAL/GPIO" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/MCAL" -I"C:/Users/abdelrhman mattar/STM32CubeIDE/workspace_1.4.0/unit7_lesson4_EXTI/MCAL/EXTI" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-Startup

clean-Startup:
	-$(RM) ./Startup/startup_stm32f103c6tx.d ./Startup/startup_stm32f103c6tx.o

.PHONY: clean-Startup

