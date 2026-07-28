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
mkdir -p build/iso/boot/kernel

echo "[3/5] Copying GRUB configuration..."
cp boot/grub/grub.cfg build/iso/boot/grub/grub.cfg
cp boot/kernel/bzImage build/iso/boot/kernel/bzImage
cp boot/initramfs.img build/iso/boot/initramfs.img

echo "[4/5] Building ISO..."
grub-mkrescue \
    -o build/mitOS.iso \
    build/iso

echo "[5/5] Done!"

echo ""
echo "ISO created:"
echo "build/mitOS.iso"