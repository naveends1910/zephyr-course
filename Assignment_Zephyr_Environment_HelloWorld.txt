(.venv) naveends@naveends-VMware-Virtual-Platform:~/project/zephyr/zephyr-course/zephyrproject/zephyr$ west build -p always -b nucleo_h723zg samples/hello_world
-- west build: making build dir /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/build pristine
-- west build: generating a build system
Loading Zephyr default modules (Zephyr base).
-- Application: /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/samples/hello_world
-- CMake version: 3.28.3
-- Found Python3: /home/naveends/zephyrproject/.venv/bin/python3 (found suitable version "3.12.3", minimum required is "3.12") found components: Interpreter 
-- Cache files will be written to: /home/naveends/.cache/zephyr
-- Zephyr version: 4.5.0-rc1 (/home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr)
-- Found west (found suitable version "1.5.0", minimum required is "0.14.0")
-- Board: nucleo_h723zg, qualifiers: stm32h723xx
-- Found host-tools: zephyr 1.0.1 (/home/naveends/project/zephyr/zephyr-sdk-1.0.1)
-- Found toolchain: zephyr 1.0.1 (/home/naveends/project/zephyr/zephyr-sdk-1.0.1)
-- Found Dtc: /home/naveends/project/zephyr/zephyr-sdk-1.0.1/hosttools/sysroots/x86_64-pokysdk-linux/usr/bin/dtc (found suitable version "1.7.0", minimum required is "1.4.6") 
-- Found BOARD.dts: /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/boards/st/nucleo_h723zg/nucleo_h723zg.dts
-- Generated zephyr.dts: /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/build/zephyr/zephyr.dts
-- Generated pickled edt: /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/build/zephyr/edt.pickle
-- Generated devicetree_generated.h: /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/build/zephyr/include/generated/zephyr/devicetree_generated.h
Parsing /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/Kconfig
Loaded configuration '/home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/boards/st/nucleo_h723zg/nucleo_h723zg_defconfig'
Merged configuration '/home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/samples/hello_world/prj.conf'
Configuration saved to '/home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/build/zephyr/.config'
Kconfig header saved to '/home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/build/zephyr/include/generated/zephyr/autoconf.h'
-- Could NOT find Ccache: Found unsuitable version "4.9.1", but required is at least "4.12" (found /usr/bin/ccache)
-- Found GnuLd: /home/naveends/project/zephyr/zephyr-sdk-1.0.1/gnu/arm-zephyr-eabi/arm-zephyr-eabi/bin/ld.bfd (found version "2.43.1") 
-- The C compiler identification is GNU 14.3.0
-- The CXX compiler identification is GNU 14.3.0
-- The ASM compiler identification is GNU
-- Found assembler: /home/naveends/project/zephyr/zephyr-sdk-1.0.1/gnu/arm-zephyr-eabi/bin/arm-zephyr-eabi-gcc
-- Using ccache: /usr/bin/ccache
-- Found gen_kobject_list: /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/scripts/build/gen_kobject_list.py
-- Configuring done (5.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/build
-- west build: building application
[1/163] Preparing syscall dependency handling

[3/163] Generating include/generated/zephyr/version.h
-- Zephyr version: 4.5.0-rc1 (/home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr), build: v4.5.0-rc1-24-g3777ab91262f
[163/163] Linking C executable zephyr/zephyr.elf
Memory region         Used Size  Region Size  %age Used
           FLASH:       18972 B         1 MB      1.81%
             RAM:        4480 B       320 KB      1.37%
     BACKUP_SRAM:           0 B         4 KB      0.00%
            ITCM:           0 B        64 KB      0.00%
            DTCM:           0 B       128 KB      0.00%
          EXTMEM:           0 B       256 MB      0.00%
           SRAM0:           0 B       320 KB      0.00%
           SRAM1:           0 B        16 KB      0.00%
           SRAM2:         16 KB        16 KB    100.00%
           SRAM4:           0 B        16 KB      0.00%
        IDT_LIST:           0 B        32 KB      0.00%
Generating files from /home/naveends/project/zephyr/zephyr-course/zephyrproject/zephyr/build/zephyr/zephyr.elf for board: nucleo_h723zg/stm32h723xx

