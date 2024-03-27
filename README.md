# Lab 2 - Native Service
Build a native service that run as a daemon on AOSP.

# How to Build
Setup AOSP
```
repo init -u https://android.googlesource,com/platform/manifest -b android-13.0.0_r31
repo sync -j1
source build/envsetup.sh
lunch aosp_arm64-eng
```

Copy the module source and bp to AOSP's tree
```
./configure
```

Build entire project
```
m -j$(nproc)
```

Build just the module
```
m HelloGio
```

# Run on Cuttlefish
Same as build using
```
lunch aosp_cf_x86_64_pc
```

Then, after build run with
```
source build/envsetup.sh
launch_cvd -vm_manager qemu_cli
```
