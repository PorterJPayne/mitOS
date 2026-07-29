#!/bin/bash

set -e

qemu-system-x86_64 \
    -cdrom build/mitOS.iso \
    -m 2048 \
    -cpu max \
    -serial mon:stdio \
    -no-reboot