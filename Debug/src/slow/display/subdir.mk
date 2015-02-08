################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/slow/display/Display.cpp \
../src/slow/display/Render.cpp \
../src/slow/display/Shader.cpp 

OBJS += \
./src/slow/display/Display.o \
./src/slow/display/Render.o \
./src/slow/display/Shader.o 

CPP_DEPS += \
./src/slow/display/Display.d \
./src/slow/display/Render.d \
./src/slow/display/Shader.d 


# Each subdirectory must supply rules for building sources it contributes
src/slow/display/%.o: ../src/slow/display/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -I"/home/inferno/dev/SlowEngine/src" -I"/home/inferno/dev/SlowEngine/src/slow" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


