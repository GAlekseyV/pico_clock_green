add_executable(Pico-Clock-Green
        Pico-Clock-Green.c
        Ds3231.c Ds3231.h
        display.c display.h)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(Pico-Clock-Green pico_stdlib hardware_i2c hardware_adc)

# create map/bin/hex file etc.
pico_add_extra_outputs(Pico-Clock-Green)
