
#include<stdio.h>
main()
{
    int *ptr=NULL;
    *ptr=10;
}


********************************************************Output for gdb installation************************************************************

Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following additional packages will be installed:
  libbabeltrace1 libboost-regex1.74.0 libc6-dbg libdebuginfod-common libdebuginfod1 libipt2 libsource-highlight-common
  libsource-highlight4v5
Suggested packages:
  gdb-doc gdbserver
The following NEW packages will be installed:
  gdb libbabeltrace1 libboost-regex1.74.0 libc6-dbg libdebuginfod-common libdebuginfod1 libipt2
  libsource-highlight-common libsource-highlight4v5
0 upgraded, 9 newly installed, 0 to remove and 12 not upgraded.
Need to get 18.7 MB of archives.
After this operation, 35.1 MB of additional disk space will be used.
Do you want to continue? [Y/n] Y
Get:1 http://archive.ubuntu.com/ubuntu jammy/main amd64 libdebuginfod-common all 0.186-1build1 [7878 B]
Get:2 http://archive.ubuntu.com/ubuntu jammy/main amd64 libbabeltrace1 amd64 1.5.8-2build1 [160 kB]
Get:3 http://archive.ubuntu.com/ubuntu jammy/main amd64 libdebuginfod1 amd64 0.186-1build1 [12.7 kB]
Get:4 http://archive.ubuntu.com/ubuntu jammy/main amd64 libipt2 amd64 2.0.5-1 [46.4 kB]
Get:5 http://archive.ubuntu.com/ubuntu jammy/main amd64 libsource-highlight-common all 3.1.9-4.1build2 [64.5 kB]
Get:6 http://archive.ubuntu.com/ubuntu jammy/main amd64 libboost-regex1.74.0 amd64 1.74.0-14ubuntu3 [511 kB]
Get:7 http://archive.ubuntu.com/ubuntu jammy/main amd64 libsource-highlight4v5 amd64 3.1.9-4.1build2 [207 kB]
Get:8 http://archive.ubuntu.com/ubuntu jammy-updates/main amd64 gdb amd64 12.1-0ubuntu1~22.04 [3919 kB]
Get:9 http://archive.ubuntu.com/ubuntu jammy-updates/main amd64 libc6-dbg amd64 2.35-0ubuntu3.1 [13.8 MB]
Fetched 18.7 MB in 11s (1715 kB/s)
Preconfiguring packages ...
Selecting previously unselected package libdebuginfod-common.
(Reading database ... 44301 files and directories currently installed.)
Preparing to unpack .../0-libdebuginfod-common_0.186-1build1_all.deb ...
Unpacking libdebuginfod-common (0.186-1build1) ...
Selecting previously unselected package libbabeltrace1:amd64.
Preparing to unpack .../1-libbabeltrace1_1.5.8-2build1_amd64.deb ...
Unpacking libbabeltrace1:amd64 (1.5.8-2build1) ...
Selecting previously unselected package libdebuginfod1:amd64.
Preparing to unpack .../2-libdebuginfod1_0.186-1build1_amd64.deb ...
Unpacking libdebuginfod1:amd64 (0.186-1build1) ...
Selecting previously unselected package libipt2.
Preparing to unpack .../3-libipt2_2.0.5-1_amd64.deb ...
Unpacking libipt2 (2.0.5-1) ...
Selecting previously unselected package libsource-highlight-common.
Preparing to unpack .../4-libsource-highlight-common_3.1.9-4.1build2_all.deb ...
Unpacking libsource-highlight-common (3.1.9-4.1build2) ...
Selecting previously unselected package libboost-regex1.74.0:amd64.
Preparing to unpack .../5-libboost-regex1.74.0_1.74.0-14ubuntu3_amd64.deb ...
Unpacking libboost-regex1.74.0:amd64 (1.74.0-14ubuntu3) ...
Selecting previously unselected package libsource-highlight4v5.
Preparing to unpack .../6-libsource-highlight4v5_3.1.9-4.1build2_amd64.deb ...
Unpacking libsource-highlight4v5 (3.1.9-4.1build2) ...
Selecting previously unselected package gdb.
Preparing to unpack .../7-gdb_12.1-0ubuntu1~22.04_amd64.deb ...
Unpacking gdb (12.1-0ubuntu1~22.04) ...
Selecting previously unselected package libc6-dbg:amd64.
Preparing to unpack .../8-libc6-dbg_2.35-0ubuntu3.1_amd64.deb ...
Unpacking libc6-dbg:amd64 (2.35-0ubuntu3.1) ...
Setting up libdebuginfod-common (0.186-1build1) ...

 

Creating config file /etc/profile.d/debuginfod.sh with new version

 

Creating config file /etc/profile.d/debuginfod.csh with new version
Setting up libdebuginfod1:amd64 (0.186-1build1) ...
Setting up libsource-highlight-common (3.1.9-4.1build2) ...
Setting up libc6-dbg:amd64 (2.35-0ubuntu3.1) ...
Setting up libboost-regex1.74.0:amd64 (1.74.0-14ubuntu3) ...
Setting up libipt2 (2.0.5-1) ...
Setting up libbabeltrace1:amd64 (1.5.8-2build1) ...
Setting up libsource-highlight4v5 (3.1.9-4.1build2) ...
Setting up gdb (12.1-0ubuntu1~22.04) ...
Processing triggers for man-db (2.10.2-1) ...
Processing triggers for libc-bin (2.35-0ubuntu3.1) ...

********************************************************Finding Segmentation Fault************************************************************

gdb ./a.out
GNU gdb (Ubuntu 12.1-0ubuntu1~22.04) 12.1
Copyright (C) 2022 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.

 

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./a.out...
(gdb) r
Starting program: /mnt/c/Users/Ganesh Kumar Y/Downloads/training/week-4/programs/a.out
warning: opening /proc/PID/mem file for lwp 700.700 failed: No such file or directory (2)
Failed to read a valid object file image from memory.

 

Program received signal SIGSEGV, Segmentation fault.
0x0000000008001161 in main () at prog.c:6
6               *ptr = 10;  
