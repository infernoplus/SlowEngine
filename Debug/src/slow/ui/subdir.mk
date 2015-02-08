################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/slow/ui/Ui.cpp \
../src/slow/ui/UiElement.cpp \
../src/slow/ui/UiOp.cpp \
../src/slow/ui/UiPage.cpp 

OBJS += \
./src/slow/ui/Ui.o \
./src/slow/ui/UiElement.o \
./src/slow/ui/UiOp.o \
./src/slow/ui/UiPage.o 

CPP_DEPS += \
./src/slow/ui/Ui.d \
./src/slow/ui/UiElement.d \
./src/slow/ui/UiOp.d \
./src/slow/ui/UiPage.d 


# Each subdirectory must supply rules for building sources it contributes
src/slow/ui/%.o: ../src/slow/ui/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -I"/home/inferno/dev/SlowEngine/src" -I"/home/inferno/dev/SlowEngine/src/slow" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


