# Phantom TKL Keyboard firmware

This is the firmware source for my custom Phantom TKL Keyboards.

Customized ISO keymaps with layers.

## About

This is a fork from [TMK Keyboard](https://github.com/tmk/tmk_keyboard) which in turn is based on [AVR Keyboard](https://github.com/BathroomEpiphanies/AVR-Keyboard),
but the former does not work correctly on my board, so it contains some customization and backports.

**You probably don't wanna use this**

* Works with later tmk source and GCC
* Fixes initial caps and scroll lock LED state
* Lower LED intensity so that they don't blind my eyes
* Remap caps lock to escape on default layer
* Mouse input support on additional layer
* Media controls on additional layer

## Requirements

AVR toolchain.

## Installation

```shell
# Install sources
git clone https://github.com/tmk/tmk_keyboard.git
cd tmk_keyboard/orphan
git clone https://github.com/andersevenrud/phantom-tkl.git
cd phantom-tkl

# Build firmware
make phantom

# Wait for the teensy to go into bootloader, then flash
#   Use pushbutton or perform the magic LSHIFT+RSHIFT+BREAK
#   if tmk is already flashed.
teensy-loader-cli --mcu=atmega32u4 -w phantom_pjrc.hex
```

## License

Original license is unknown, but this work is derived from source created by:

> Copyright (c) 2012 Fredrik Atmer, Bathroom Epiphanies Inc

> Copyright 2012 Jun Wako <wakojun@gmail.com>

that was in a repository that has the following license notes:

> GPLv2 or later. Some protocol files are under Modified BSD License.
