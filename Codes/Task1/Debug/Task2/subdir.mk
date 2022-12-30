################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Task2/task2.cpp 

CPP_DEPS += \
./Task2/task2.d 

OBJS += \
./Task2/task2.o 


# Each subdirectory must supply rules for building sources it contributes
Task2/%.o: ../Task2/%.cpp Task2/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Task2

clean-Task2:
	-$(RM) ./Task2/task2.d ./Task2/task2.o

.PHONY: clean-Task2

