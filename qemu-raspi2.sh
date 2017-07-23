#!/bin/sh
qemu-system-arm -M raspi2 -kernel bsp/boot/bootldr -serial stdio
