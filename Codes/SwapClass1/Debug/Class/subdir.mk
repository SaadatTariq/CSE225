################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Class/Swap.cpp 

CPP_DEPS += \
./Class/Swap.d 

OBJS += \
./Class/Swap.o 


# Each subdirectory must supply rules for building sources it contributes
Class/%.o: ../Class/%.cpp Class/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Class

clean-Class:
	-$(RM) ./Class/Swap.d ./Class/Swap.o

.PHONY: clean-Class

