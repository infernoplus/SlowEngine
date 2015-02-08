################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Executable.cpp 

OBJS += \
./src/Executable.o 

CPP_DEPS += \
./src/Executable.d 


# Each subdirectory must supply rules for building sources it contributes
src/Executable.o: ../src/Executable.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -I"/home/inferno/dev/SlowEngine/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/Executable.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


