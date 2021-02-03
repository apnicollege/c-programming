################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../module1-getting-started/variables_constants.c 

OBJS += \
./module1-getting-started/variables_constants.o 

C_DEPS += \
./module1-getting-started/variables_constants.d 


# Each subdirectory must supply rules for building sources it contributes
module1-getting-started/%.o: ../module1-getting-started/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


