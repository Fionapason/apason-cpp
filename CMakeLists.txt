cmake_minimum_required(VERSION 3.19)
project(apason)

set(CMAKE_CXX_STANDARD 20)

add_executable(apason main.cpp Sensors/SensorInterface.cpp Sensors/Pressure.cpp Sensors/MassFlow.cpp Sensors/ElectronicValve.cpp Check_Sensor_Functions.cpp Sensors/Pressure.h Sensors/SensorInterface.h Sensors/MassFlow.h Sensors/ElectronicValve.h Check_Sensor_Functions.h ApasonInterface.cpp ApasonInterface.h MockApason.cpp MockApason.h RealApason.cpp RealApason.h)