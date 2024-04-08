################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include MCAL/GPIO/subdir.mk
-include HAL/segment_7/subdir.mk
-include HAL/LCD_DRIVER/subdir.mk
-include HAL/KEYPAD_DRIVER/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := unit7_lesson3_LCD_KEYPAD
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
unit7_lesson3_LCD_KEYPAD.elf \

MAP_FILES += \
unit7_lesson3_LCD_KEYPAD.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
unit7_lesson3_LCD_KEYPAD.list \

OBJCOPY_HEX += \
unit7_lesson3_LCD_KEYPAD.hex \


# All Target
all: main-build

# Main-build Target
main-build: unit7_lesson3_LCD_KEYPAD.elf secondary-outputs

# Tool invocations
unit7_lesson3_LCD_KEYPAD.elf unit7_lesson3_LCD_KEYPAD.map: $(OBJS) $(USER_OBJS) C:\Users\abdelrhman\ mattar\STM32CubeIDE\workspace_1.4.0\unit7_lesson3_LCD_KEYPAD\STM32F103C6TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -gdwarf-2 -o "unit7_lesson3_LCD_KEYPAD.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\abdelrhman mattar\STM32CubeIDE\workspace_1.4.0\unit7_lesson3_LCD_KEYPAD\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="unit7_lesson3_LCD_KEYPAD.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

unit7_lesson3_LCD_KEYPAD.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "unit7_lesson3_LCD_KEYPAD.list"
	@echo 'Finished building: $@'
	@echo ' '

unit7_lesson3_LCD_KEYPAD.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "unit7_lesson3_LCD_KEYPAD.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) default.size.stdout unit7_lesson3_LCD_KEYPAD.elf unit7_lesson3_LCD_KEYPAD.hex unit7_lesson3_LCD_KEYPAD.list unit7_lesson3_LCD_KEYPAD.map
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
