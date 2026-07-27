#!/bin/bash

set -e

echo "====================================="
echo "Building mitOS"
echo "====================================="

echo "[1/5] Cleaning build directory..."
rm -rf build

echo "[2/5] Creating ISO directory..."
mkdir -p build/iso/boot/grub
mkdir -p build/iso/EFI/BOOT

echo "[3/5] Copying GRUB configuration..."
cp boot/grub/grub.cfg build/iso/boot/grub/grub.cfg

echo "[4/5] Building ISO..."
x86_64-elf-grub-mkrescue \
    -o build/mitOS.iso \
    build/iso

echo "[5/5] Done!"

echo ""
echo "ISO created:"
echo "build/mitOS.iso"