cmd_/tmp/armv5-eabi--glibc--stable/usr/arm-buildroot-linux-gnueabi/sysroot/usr/include/linux/tc_ematch/.install := /bin/bash scripts/headers_install.sh /tmp/armv5-eabi--glibc--stable/usr/arm-buildroot-linux-gnueabi/sysroot/usr/include/linux/tc_ematch /tmp/output/build/linux-headers-3.10.105/include/uapi/linux/tc_ematch tc_em_cmp.h tc_em_meta.h tc_em_nbyte.h tc_em_text.h; /bin/bash scripts/headers_install.sh /tmp/armv5-eabi--glibc--stable/usr/arm-buildroot-linux-gnueabi/sysroot/usr/include/linux/tc_ematch /tmp/output/build/linux-headers-3.10.105/include/linux/tc_ematch ; /bin/bash scripts/headers_install.sh /tmp/armv5-eabi--glibc--stable/usr/arm-buildroot-linux-gnueabi/sysroot/usr/include/linux/tc_ematch /tmp/output/build/linux-headers-3.10.105/include/generated/uapi/linux/tc_ematch ; for F in ; do echo "\#include <asm-generic/$$F>" > /tmp/armv5-eabi--glibc--stable/usr/arm-buildroot-linux-gnueabi/sysroot/usr/include/linux/tc_ematch/$$F; done; touch /tmp/armv5-eabi--glibc--stable/usr/arm-buildroot-linux-gnueabi/sysroot/usr/include/linux/tc_ematch/.install