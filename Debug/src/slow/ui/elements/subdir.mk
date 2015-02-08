################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/slow/ui/elements/UiElementButton.cpp 

OBJS += \
./src/slow/ui/elements/UiElementButton.o 

CPP_DEPS += \
./src/slow/ui/elements/UiElementButton.d 


# Each subdirectory must supply rules for building sources it contributes
src/slow/ui/elements/%.o: ../src/slow/ui/elements/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -I"/home/inferno/dev/SlowEngine/src" -I"/home/inferno/dev/SlowEngine/src/slow" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


