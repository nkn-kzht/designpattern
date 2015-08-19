################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../sources/FunctionBlockManager.cpp \
../sources/ISystem.cpp \
../sources/Messages.cpp \
../sources/SystemImpl.cpp \
../sources/main.cpp 

OBJS += \
./sources/FunctionBlockManager.o \
./sources/ISystem.o \
./sources/Messages.o \
./sources/SystemImpl.o \
./sources/main.o 

CPP_DEPS += \
./sources/FunctionBlockManager.d \
./sources/ISystem.d \
./sources/Messages.d \
./sources/SystemImpl.d \
./sources/main.d 


# Each subdirectory must supply rules for building sources it contributes
sources/%.o: ../sources/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++11 -D__cplusplus=201103L -I"/home/parallels/workspace/System/includes" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


