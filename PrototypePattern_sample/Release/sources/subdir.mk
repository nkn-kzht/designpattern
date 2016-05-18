################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../sources/Manager.cc \
../sources/MessageBox.cc \
../sources/UnderLinePen.cc \
../sources/main.cc 

OBJS += \
./sources/Manager.o \
./sources/MessageBox.o \
./sources/UnderLinePen.o \
./sources/main.o 

CC_DEPS += \
./sources/Manager.d \
./sources/MessageBox.d \
./sources/UnderLinePen.d \
./sources/main.d 


# Each subdirectory must supply rules for building sources it contributes
sources/%.o: ../sources/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++11 -D__cplusplus=201103L -I"/home/parallels/workspace/designpatternpractice/PrototypePattern_sample/includes" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


