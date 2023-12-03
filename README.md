# Pico C++ Boilerplate Project <!-- omit in toc -->

This project is intended as a starting point for working with the Pico SDK and Pimoroni Libraries in C++.

- [Before you start](#before-you-start)
- [Pimoroni libraries](#grab-the-pimoroni-libraries)

## Before you start

It's easier if you make a `pico` directory or similar in which you keep the SDK, Pimoroni Libraries and your projects alongside each other. This makes it easier to include libraries.

Also the SDK does not support current gcc versions therfore you need to change 
pico-sdk/cmake/preload/toolchains/pico_arm_gcc.cmake
to:
``` cmake
set(ARM_TOOLCHAIN_COMMON_FLAGS " -mtune=cortex-m0plus -march=armv6-m -mthumb")
```

## Pimoroni libraries

are installed as a submodule
