################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../sources/IDCard.cc \
../sources/IDCardFactory.cc \
../sources/IFactory.cc \
../sources/main.cc 

OBJS += \
./sources/IDCard.o \
./sources/IDCardFactory.o \
./sources/IFactory.o \
./sources/main.o 

CC_DEPS += \
./sources/IDCard.d \
./sources/IDCardFactory.d \
./sources/IFactory.d \
./sources/main.d 


# Each subdirectory must supply rules for building sources it contributes
sources/%.o: ../sources/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++11 -D__cplusplus=201103L -I"/home/parallels/workspace/designpatternpractice/FactoryMethodPattern_sample/includes" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


