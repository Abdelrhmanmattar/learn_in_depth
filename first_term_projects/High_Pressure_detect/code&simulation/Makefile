#enter out file name here
excutable=High_Pressure_Detector_Project
#enter the path of the folder where you want to store the debug files
debug_folder=./debug
Project_name=$(debug_folder)/$(excutable)
#enter the path of the folder where you have stored the source files
src_folder=./src

INCS=-Iinc
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -mthumb  -nostartfiles
LIBS=

SRC = $(wildcard $(src_folder)/*.c)
OBJ_initial := $(SRC:$(src_folder)/%.c=%.o)
OBJ := $(addprefix $(debug_folder)/,$(OBJ_initial))

As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)



all: $(Project_name).bin
	@echo "\\\*******build complete *******///"

# generate binary file
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

# generate elf file
$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) -o $@ -Map=$(debug_folder)/Map_file.map 
	cp $(Project_name).elf $(Project_name).axf


# generate object files
$(debug_folder)/%.o: $(src_folder)/%.c 
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(debug_folder)/%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@




# clean the project
clean-all: 
	rm -f $(debug_folder)/*.o $(debug_folder)/*.elf $(debug_folder)/*.bin

clean: 
	rm -f $(debug_folder)/*.elf $(debug_folder)/*.bin