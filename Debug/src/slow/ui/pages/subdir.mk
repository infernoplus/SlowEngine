################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/slow/ui/pages/UiTestPage.cpp 

OBJS += \
./src/slow/ui/pages/UiTestPage.o 

CPP_DEPS += \
./src/slow/ui/pages/UiTestPage.d 


# Each subdirectory must supply rules for building sources it contributes
src/slow/ui/pages/%.o: ../src/slow/ui/pages/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -I"/home/inferno/dev/SlowEngine/src" -I"/home/inferno/dev/SlowEngine/src/slow" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


