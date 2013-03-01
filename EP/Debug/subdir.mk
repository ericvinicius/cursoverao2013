################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../batnaval.o \
../gerador_navio.o \
../impressao_matriz.o 

C_SRCS += \
../batnaval.c \
../gerador_navio.c \
../impressao_matriz.c 

OBJS += \
./batnaval.o \
./gerador_navio.o \
./impressao_matriz.o 

C_DEPS += \
./batnaval.d \
./gerador_navio.d \
./impressao_matriz.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


