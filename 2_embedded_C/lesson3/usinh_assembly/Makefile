#enter out file name here
excutable=learn_in_depth_cortex_m3
#enter the path of the folder where you want to store the debug files
debug_folder=./debug
Project_name=$(debug_folder)/$(excutable)
#enter the path of the folder where you have stored the source files
src_folder=./src

INCS=-Iinc
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -mthumb -gdwarf-2
LIBS=

SRC = $(wildcard $(src_folder)/*.c)
OBJ_initial := $(SRC:$(src_folder)/%.c=%.o)
OBJ := $(addprefix $(debug_folder)/,$(OBJ_initial))

all: $(Project_name).bin
	@echo "build complete"

# generate binary file
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

# generate elf file
$(Project_name).elf: $(OBJ) startup.o
	$(CC)ld.exe -T linker_script.ld $(LIBS)  $(debug_folder)/startup.o $(OBJ) -o $@ -Map=$(debug_folder)/Map_file.map 


# generate object files
$(debug_folder)/%.o: $(src_folder)/%.c 
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@


# generate startup file
startup.o: startup.s 
	$(CC)as.exe $(CFLAGS) $< -o $(debug_folder)/$@


# clean the project
clean-all: 
	rm -f $(debug_folder)/*.o $(debug_folder)/*.elf $(debug_folder)/*.bin

clean: 
	rm -f $(debug_folder)/*.elf $(debug_folder)/*.bin

