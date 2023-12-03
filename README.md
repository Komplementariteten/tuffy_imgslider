# Pico C++ Boilerplate Project <!-- omit in toc -->

This project is intended as a starting point for working with the Pico SDK and Pimoroni Libraries in C++.

- [Before you start](#before-you-start)
- [Preparing your build environment](#preparing-your-build-environment)
- [Grab the Pimoroni libraries](#grab-the-pimoroni-libraries)
- [Clone this boilerplate](#clone-this-boilerplate)
- [Prepare Visual Studio Code](#prepare-visual-studio-code)
- [Prepare your project](#prepare-your-project)
- [Pick your LICENSE](#pick-your-license)

## Before you start

It's easier if you make a `pico` directory or similar in which you keep the SDK, Pimoroni Libraries and your projects alongside each other. This makes it easier to include libraries.

## Grab the Pimoroni libraries

```
git clone https://github.com/pimoroni/pimoroni-pico
```

## Prepare your project

Edit `CMakeLists.txt` and follow the instructions, you should make sure you:

1. edit your project name
2. include the libraries you need
2. link the libraries to your project

## Pick your LICENSE

We've included a copy of BSD 3-Clause License to match that used in Raspberry Pi's Pico SDK and Pico Examples. You should review this and check it's appropriate for your project before publishing your code.
