################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Copy\ of\ maingustavo.cpp \
../main.cpp \
../maingustavo.cpp 

OBJS += \
./Copy\ of\ maingustavo.o \
./main.o \
./maingustavo.o 

CPP_DEPS += \
./Copy\ of\ maingustavo.d \
./main.d \
./maingustavo.d 


# Each subdirectory must supply rules for building sources it contributes
Copy\ of\ maingustavo.o: ../Copy\ of\ maingustavo.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Copy of maingustavo.d" -MT"Copy\ of\ maingustavo.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


