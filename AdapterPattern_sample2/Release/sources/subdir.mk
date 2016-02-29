################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../sources/Banner.cc \
../sources/Print.cc \
../sources/PrintBanner.cc \
../sources/main.cc 

OBJS += \
./sources/Banner.o \
./sources/Print.o \
./sources/PrintBanner.o \
./sources/main.o 

CC_DEPS += \
./sources/Banner.d \
./sources/Print.d \
./sources/PrintBanner.d \
./sources/main.d 


# Each subdirectory must supply rules for building sources it contributes
sources/%.o: ../sources/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++11 -D__cplusplus=201103L -I"/home/parallels/workspace/designpatternpractice/AdapterPattern_sample2/includes" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


