inc folder  : for header files
              Platform_Types.h
              uart.h

  
obj_s folder : for object files
              uart.o
              app.o
              startup.o

src folder : for source files
              uart.c
              app.c


To link the object files and create the executable file , map file:

            arm-none-eabi-ld -T linker_script.ld -Map=output.map ./obj_s/*.o -o learn-in-depth.elf
