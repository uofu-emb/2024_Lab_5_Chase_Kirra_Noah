# This is the main binary. List your C files here.
add_executable(lab5_sleep
    sleep.c
    )

pico_set_program_name(lab5_sleep "test1")
pico_set_program_version(lab5_sleep "0.1")

# Modify the below lines to enable/disable output over UART/USB.
# These are mutually exclusive, only set one.
pico_enable_stdio_uart(lab5_sleep 0)
pico_enable_stdio_usb(lab5_sleep 1)

# Add the libraries to the build
target_link_libraries(lab5_sleep PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

# The CYW43 is the Wifi/Bluetooth module. If the board is set to pico_w, this
# variable will be set and the wireless libraries added.
if(PICO_CYW43_SUPPORTED)
    # For led support on pico_w
    target_link_libraries(lab5_sleep PRIVATE
        pico_cyw43_arch_none
    )
endif()

# Another pico macro which generates the uf2 file in addition to the elf
pico_add_extra_outputs(lab5_sleep)

add_custom_target(flash picotool load -f $<TARGET_FILE:lab5_sleep> DEPENDS lab5_sleep)




# This is the main binary. List your C files here.
add_executable(lab5_task_delay
    task_delay.c
    )

pico_set_program_name(lab5_task_delay "test2")
pico_set_program_version(lab5_task_delay "0.1")

# Modify the below lines to enable/disable output over UART/USB.
# These are mutually exclusive, only set one.
pico_enable_stdio_uart(lab5_task_delay 0)
pico_enable_stdio_usb(lab5_task_delay 1)

# Add the libraries to the build
target_link_libraries(lab5_task_delay PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

# The CYW43 is the Wifi/Bluetooth module. If the board is set to pico_w, this
# variable will be set and the wireless libraries added.
if(PICO_CYW43_SUPPORTED)
    # For led support on pico_w
    target_link_libraries(lab5_task_delay PRIVATE
        pico_cyw43_arch_none
    )
endif()

# Another pico macro which generates the uf2 file in addition to the elf
pico_add_extra_outputs(lab5_task_delay)

# add_custom_target(flash picotool load -f $<TARGET_FILE:lab5_task_delay> DEPENDS lab5_task_delay)



# This is the main binary. List your C files here.
add_executable(lab5_timer
    timer.c
    )

pico_set_program_name(lab5_timer "test3")
pico_set_program_version(lab5_timer "0.1")

# Modify the below lines to enable/disable output over UART/USB.
# These are mutually exclusive, only set one.
pico_enable_stdio_uart(lab5_timer 0)
pico_enable_stdio_usb(lab5_timer 1)

# Add the libraries to the build
target_link_libraries(lab5_timer PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

# The CYW43 is the Wifi/Bluetooth module. If the board is set to pico_w, this
# variable will be set and the wireless libraries added.
if(PICO_CYW43_SUPPORTED)
    # For led support on pico_w
    target_link_libraries(lab5_timer PRIVATE
        pico_cyw43_arch_none
    )
endif()

# Another pico macro which generates the uf2 file in addition to the elf
pico_add_extra_outputs(lab5_timer)

# add_custom_target(flash picotool load -f $<TARGET_FILE:lab5_timer> DEPENDS lab5_timer)

# This is the main binary. List your C files here.
add_executable(lab5_interrupt
    gpio_interrupt.c
    )

pico_set_program_name(lab5_interrupt "test4")
pico_set_program_version(lab5_interrupt "0.1")

# Modify the below lines to enable/disable output over UART/USB.
# These are mutually exclusive, only set one.
pico_enable_stdio_uart(lab5_interrupt 0)
pico_enable_stdio_usb(lab5_interrupt 1)

# Add the libraries to the build
target_link_libraries(lab5_interrupt PRIVATE
  pico_stdlib
  pico_multicore
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
)

# The CYW43 is the Wifi/Bluetooth module. If the board is set to pico_w, this
# variable will be set and the wireless libraries added.
if(PICO_CYW43_SUPPORTED)
    # For led support on pico_w
    target_link_libraries(lab5_interrupt PRIVATE
        pico_cyw43_arch_none
    )
endif()

# Another pico macro which generates the uf2 file in addition to the elf
pico_add_extra_outputs(lab5_interrupt)