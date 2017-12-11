#
# Automatically generated file; DO NOT EDIT.
# Linux/i386 3.7.4 Kernel #define CONFIGuration
#
# #define CONFIG_64BIT is not set
#define CONFIG_X86_32 y
#define CONFIG_X86 y
#define CONFIG_INSTRUCTION_DECODER y
#define CONFIG_OUTPUT_FORMAT "elf32-i386"
#define CONFIG_ARCH_DEF#define CONFIG "arch/x86/#define CONFIGs/i386_def#define CONFIG"
#define CONFIG_LOCKDEP_SUPPORT y
#define CONFIG_STACKTRACE_SUPPORT y
#define CONFIG_HAVE_LATENCYTOP_SUPPORT y
#define CONFIG_MMU y
#define CONFIG_NEED_SG_DMA_LENGTH y
#define CONFIG_GENERIC_ISA_DMA y
#define CONFIG_GENERIC_BUG y
#define CONFIG_GENERIC_HWEIGHT y
#define CONFIG_ARCH_MAY_HAVE_PC_FDC y
#define CONFIG_RWSEM_XCHGADD_ALGORITHM y
#define CONFIG_GENERIC_CALIBRATE_DELAY y
#define CONFIG_ARCH_HAS_CPU_RELAX y
#define CONFIG_ARCH_HAS_DEFAULT_IDLE y
#define CONFIG_ARCH_HAS_CACHE_LINE_SIZE y
#define CONFIG_ARCH_HAS_CPU_AUTOPROBE y
#define CONFIG_HAVE_SETUP_PER_CPU_AREA y
#define CONFIG_NEED_PER_CPU_EMBED_FIRST_CHUNK y
#define CONFIG_NEED_PER_CPU_PAGE_FIRST_CHUNK y
#define CONFIG_ARCH_HIBERNATION_POSSIBLE y
#define CONFIG_ARCH_SUSPEND_POSSIBLE y
# #define CONFIG_ZONE_DMA32 is not set
# #define CONFIG_AUDIT_ARCH is not set
#define CONFIG_ARCH_SUPPORTS_OPTIMIZED_INLINING y
#define CONFIG_ARCH_SUPPORTS_DEBUG_PAGEALLOC y
#define CONFIG_X86_32_LAZY_GS y
#define CONFIG_ARCH_HWEIGHT_CFLAGS "-fcall-saved-ecx -fcall-saved-edx"
#define CONFIG_ARCH_SUPPORTS_UPROBES y
#define CONFIG_DEF#define CONFIG_LIST "/lib/modules/$UNAME_RELEASE/.#define CONFIG"
#define CONFIG_HAVE_IRQ_WORK y
#define CONFIG_IRQ_WORK y
#define CONFIG_BUILDTIME_EXTABLE_SORT y

#
# General setup
#
# #define CONFIG_EXPERIMENTAL is not set
#define CONFIG_BROKEN_ON_SMP y
#define CONFIG_INIT_ENV_ARG_LIMIT 32
#define CONFIG_CROSS_COMPILE ""
#define CONFIG_LOCALVERSION ""
# #define CONFIG_LOCALVERSION_AUTO is not set
#define CONFIG_HAVE_KERNEL_GZIP y
#define CONFIG_HAVE_KERNEL_BZIP2 y
#define CONFIG_HAVE_KERNEL_LZMA y
#define CONFIG_HAVE_KERNEL_XZ y
#define CONFIG_HAVE_KERNEL_LZO y
#define CONFIG_KERNEL_GZIP y
# #define CONFIG_KERNEL_BZIP2 is not set
# #define CONFIG_KERNEL_LZMA is not set
# #define CONFIG_KERNEL_XZ is not set
# #define CONFIG_KERNEL_LZO is not set
#define CONFIG_DEFAULT_HOSTNAME "(none)"
# #define CONFIG_SWAP is not set
# #define CONFIG_SYSVIPC is not set
# #define CONFIG_FHANDLE is not set
# #define CONFIG_AUDIT is not set
#define CONFIG_HAVE_GENERIC_HARDIRQS y

#
# IRQ subsystem
#
#define CONFIG_GENERIC_HARDIRQS y
#define CONFIG_GENERIC_IRQ_PROBE y
#define CONFIG_GENERIC_IRQ_SHOW y
#define CONFIG_IRQ_FORCED_THREADING y
#define CONFIG_SPARSE_IRQ y
#define CONFIG_CLOCKSOURCE_WATCHDOG y
#define CONFIG_KTIME_SCALAR y
#define CONFIG_GENERIC_CLOCKEVENTS y
#define CONFIG_GENERIC_CLOCKEVENTS_BUILD y
#define CONFIG_GENERIC_CLOCKEVENTS_MIN_ADJUST y
#define CONFIG_GENERIC_CMOS_UPDATE y

#
# Timers subsystem
#
# #define CONFIG_NO_HZ is not set
# #define CONFIG_HIGH_RES_TIMERS is not set

#
# CPU/Task time and stats accounting
#
#define CONFIG_TICK_CPU_ACCOUNTING y
# #define CONFIG_IRQ_TIME_ACCOUNTING is not set
# #define CONFIG_BSD_PROCESS_ACCT is not set
# #define CONFIG_TASKSTATS is not set

#
# RCU Subsystem
#
#define CONFIG_TINY_RCU y
# #define CONFIG_PREEMPT_RCU is not set
# #define CONFIG_TREE_RCU_TRACE is not set
# #define CONFIG_IK#define CONFIG is not set
#define CONFIG_LOG_BUF_SHIFT 17
#define CONFIG_HAVE_UNSTABLE_SCHED_CLOCK y
# #define CONFIG_CGROUPS is not set
# #define CONFIG_CHECKPOINT_RESTORE is not set
#define CONFIG_NAMESPACES y
# #define CONFIG_UTS_NS is not set
# #define CONFIG_PID_NS is not set
#define CONFIG_NET_NS y
#define CONFIG_UIDGID_CONVERTED y
# #define CONFIG_UIDGID_STRICT_TYPE_CHECKS is not set
# #define CONFIG_SCHED_AUTOGROUP is not set
# #define CONFIG_SYSFS_DEPRECATED is not set
# #define CONFIG_RELAY is not set
#define CONFIG_BLK_DEV_INITRD y
#define CONFIG_INITRAMFS_SOURCE ""
#define CONFIG_RD_GZIP y
#define CONFIG_RD_BZIP2 y
#define CONFIG_RD_LZMA y
#define CONFIG_RD_XZ y
#define CONFIG_RD_LZO y
# #define CONFIG_CC_OPTIMIZE_FOR_SIZE is not set
#define CONFIG_SYSCTL y
#define CONFIG_ANON_INODES y
# #define CONFIG_EXPERT is not set
#define CONFIG_HAVE_UID16 y
#define CONFIG_UID16 y
# #define CONFIG_SYSCTL_SYSCALL is not set
#define CONFIG_SYSCTL_EXCEPTION_TRACE y
#define CONFIG_KALLSYMS y
#define CONFIG_HOTPLUG y
#define CONFIG_PRINTK y
#define CONFIG_BUG y
#define CONFIG_ELF_CORE y
#define CONFIG_PCSPKR_PLATFORM y
#define CONFIG_HAVE_PCSPKR_PLATFORM y
#define CONFIG_BASE_FULL y
#define CONFIG_FUTEX y
#define CONFIG_EPOLL y
#define CONFIG_SIGNALFD y
#define CONFIG_TIMERFD y
#define CONFIG_EVENTFD y
#define CONFIG_SHMEM y
#define CONFIG_AIO y
# #define CONFIG_EMBEDDED is not set
#define CONFIG_HAVE_PERF_EVENTS y

#
# Kernel Performance Events And Counters
#
#define CONFIG_PERF_EVENTS y
#define CONFIG_VM_EVENT_COUNTERS y
#define CONFIG_PCI_QUIRKS y
#define CONFIG_SLUB_DEBUG y
# #define CONFIG_COMPAT_BRK is not set
# #define CONFIG_SLAB is not set
#define CONFIG_SLUB y
# #define CONFIG_PROFILING is not set
#define CONFIG_HAVE_OPROFILE y
#define CONFIG_OPROFILE_NMI_TIMER y
# #define CONFIG_KPROBES is not set
# #define CONFIG_JUMP_LABEL is not set
#define CONFIG_HAVE_EFFICIENT_UNALIGNED_ACCESS y
#define CONFIG_HAVE_IOREMAP_PROT y
#define CONFIG_HAVE_KPROBES y
#define CONFIG_HAVE_KRETPROBES y
#define CONFIG_HAVE_OPTPROBES y
#define CONFIG_HAVE_ARCH_TRACEHOOK y
#define CONFIG_HAVE_DMA_ATTRS y
#define CONFIG_HAVE_DMA_CONTIGUOUS y
#define CONFIG_GENERIC_SMP_IDLE_THREAD y
#define CONFIG_HAVE_REGS_AND_STACK_ACCESS_API y
#define CONFIG_HAVE_DMA_API_DEBUG y
#define CONFIG_HAVE_HW_BREAKPOINT y
#define CONFIG_HAVE_MIXED_BREAKPOINTS_REGS y
#define CONFIG_HAVE_USER_RETURN_NOTIFIER y
#define CONFIG_HAVE_PERF_EVENTS_NMI y
#define CONFIG_HAVE_PERF_REGS y
#define CONFIG_HAVE_PERF_USER_STACK_DUMP y
#define CONFIG_HAVE_ARCH_JUMP_LABEL y
#define CONFIG_ARCH_HAVE_NMI_SAFE_CMPXCHG y
#define CONFIG_HAVE_ALIGNED_STRUCT_PAGE y
#define CONFIG_HAVE_CMPXCHG_LOCAL y
#define CONFIG_HAVE_CMPXCHG_DOUBLE y
#define CONFIG_ARCH_WANT_IPC_PARSE_VERSION y
#define CONFIG_GENERIC_KERNEL_THREAD y
#define CONFIG_GENERIC_KERNEL_EXECVE y
#define CONFIG_HAVE_ARCH_SECCOMP_FILTER y
#define CONFIG_HAVE_IRQ_TIME_ACCOUNTING y
#define CONFIG_HAVE_ARCH_TRANSPARENT_HUGEPAGE y
#define CONFIG_MODULES_USE_ELF_REL y

#
# GCOV-based kernel profiling
#
#define CONFIG_HAVE_GENERIC_DMA_COHERENT y
#define CONFIG_SLABINFO y
#define CONFIG_RT_MUTEXES y
#define CONFIG_BASE_SMALL 0
#define CONFIG_MODULES y
# #define CONFIG_MODULE_FORCE_LOAD is not set
#define CONFIG_MODULE_UNLOAD y
# #define CONFIG_MODVERSIONS is not set
# #define CONFIG_MODULE_SRCVERSION_ALL is not set
# #define CONFIG_MODULE_SIG is not set
#define CONFIG_BLOCK y
#define CONFIG_LBDAF y
#define CONFIG_BLK_DEV_BSG y
# #define CONFIG_BLK_DEV_BSGLIB is not set
# #define CONFIG_BLK_DEV_INTEGRITY is not set

#
# Partition Types
#
# #define CONFIG_PARTITION_ADVANCED is not set
#define CONFIG_MSDOS_PARTITION y

#
# IO Schedulers
#
#define CONFIG_IOSCHED_NOOP y
# #define CONFIG_IOSCHED_DEADLINE is not set
# #define CONFIG_IOSCHED_CFQ is not set
#define CONFIG_DEFAULT_NOOP y
#define CONFIG_DEFAULT_IOSCHED "noop"
#define CONFIG_INLINE_SPIN_UNLOCK_IRQ y
#define CONFIG_INLINE_READ_UNLOCK y
#define CONFIG_INLINE_READ_UNLOCK_IRQ y
#define CONFIG_INLINE_WRITE_UNLOCK y
#define CONFIG_INLINE_WRITE_UNLOCK_IRQ y
# #define CONFIG_FREEZER is not set

#
# Processor type and features
#
#define CONFIG_ZONE_DMA y
# #define CONFIG_SMP is not set
# #define CONFIG_X86_EXTENDED_PLATFORM is not set
# #define CONFIG_X86_32_IRIS is not set
# #define CONFIG_SCHED_OMIT_FRAME_POINTER is not set
# #define CONFIG_PARAVIRT_GUEST is not set
#define CONFIG_NO_BOOTMEM y
# #define CONFIG_MEMTEST is not set
# #define CONFIG_M386 is not set
# #define CONFIG_M486 is not set
# #define CONFIG_M586 is not set
# #define CONFIG_M586TSC is not set
# #define CONFIG_M586MMX is not set
# #define CONFIG_M686 is not set
# #define CONFIG_MPENTIUMII is not set
# #define CONFIG_MPENTIUMIII is not set
# #define CONFIG_MPENTIUMM is not set
# #define CONFIG_MPENTIUM4 is not set
# #define CONFIG_MK6 is not set
# #define CONFIG_MK7 is not set
# #define CONFIG_MK8 is not set
# #define CONFIG_MCRUSOE is not set
# #define CONFIG_MEFFICEON is not set
# #define CONFIG_MWINCHIPC6 is not set
# #define CONFIG_MWINCHIP3D is not set
# #define CONFIG_MELAN is not set
# #define CONFIG_MGEODEGX1 is not set
# #define CONFIG_MGEODE_LX is not set
# #define CONFIG_MCYRIXIII is not set
# #define CONFIG_MVIAC3_2 is not set
# #define CONFIG_MVIAC7 is not set
#define CONFIG_MCORE2 y
# #define CONFIG_MATOM is not set
# #define CONFIG_X86_GENERIC is not set
#define CONFIG_X86_INTERNODE_CACHE_SHIFT 6
#define CONFIG_X86_CMPXCHG y
#define CONFIG_X86_L1_CACHE_SHIFT 6
#define CONFIG_X86_XADD y
#define CONFIG_X86_WP_WORKS_OK y
#define CONFIG_X86_INVLPG y
#define CONFIG_X86_BSWAP y
#define CONFIG_X86_POPAD_OK y
#define CONFIG_X86_INTEL_USERCOPY y
#define CONFIG_X86_USE_PPRO_CHECKSUM y
#define CONFIG_X86_TSC y
#define CONFIG_X86_CMPXCHG64 y
#define CONFIG_X86_CMOV y
#define CONFIG_X86_MINIMUM_CPU_FAMILY 5
#define CONFIG_X86_DEBUGCTLMSR y
#define CONFIG_CPU_SUP_INTEL y
#define CONFIG_CPU_SUP_AMD y
#define CONFIG_CPU_SUP_CENTAUR y
#define CONFIG_CPU_SUP_TRANSMETA_32 y
# #define CONFIG_HPET_TIMER is not set
#define CONFIG_DMI y
#define CONFIG_NR_CPUS 1
#define CONFIG_PREEMPT_NONE y
# #define CONFIG_PREEMPT_VOLUNTARY is not set
# #define CONFIG_PREEMPT is not set
# #define CONFIG_X86_UP_APIC is not set
# #define CONFIG_X86_MCE is not set
#define CONFIG_VM86 y
# #define CONFIG_TOSHIBA is not set
# #define CONFIG_I8K is not set
# #define CONFIG_X86_REBOOTFIXUPS is not set
# #define CONFIG_MICROCODE is not set
# #define CONFIG_X86_MSR is not set
# #define CONFIG_X86_CPUID is not set
# #define CONFIG_NOHIGHMEM is not set
#define CONFIG_HIGHMEM4G y
# #define CONFIG_HIGHMEM64G is not set
#define CONFIG_PAGE_OFFSET 0xC0000000
#define CONFIG_HIGHMEM y
#define CONFIG_ARCH_FLATMEM_ENABLE y
#define CONFIG_ILLEGAL_POINTER_VALUE 0
#define CONFIG_FLATMEM y
#define CONFIG_FLAT_NODE_MEM_MAP y
#define CONFIG_HAVE_MEMBLOCK y
#define CONFIG_HAVE_MEMBLOCK_NODE_MAP y
#define CONFIG_ARCH_DISCARD_MEMBLOCK y
#define CONFIG_PAGEFLAGS_EXTENDED y
#define CONFIG_SPLIT_PTLOCK_CPUS 4
# #define CONFIG_COMPACTION is not set
# #define CONFIG_PHYS_ADDR_T_64BIT is not set
#define CONFIG_ZONE_DMA_FLAG 1
#define CONFIG_BOUNCE y
#define CONFIG_VIRT_TO_BUS y
# #define CONFIG_KSM is not set
#define CONFIG_DEFAULT_MMAP_MIN_ADDR 4096
# #define CONFIG_TRANSPARENT_HUGEPAGE is not set
# #define CONFIG_CROSS_MEMORY_ATTACH is not set
#define CONFIG_NEED_PER_CPU_KM y
# #define CONFIG_CLEANCACHE is not set
# #define CONFIG_HIGHPTE is not set
# #define CONFIG_X86_CHECK_BIOS_CORRUPTION is not set
#define CONFIG_X86_RESERVE_LOW 64
# #define CONFIG_MATH_EMULATION is not set
#define CONFIG_MTRR y
# #define CONFIG_MTRR_SANITIZER is not set
#define CONFIG_X86_PAT y
#define CONFIG_ARCH_USES_PG_UNCACHED y
#define CONFIG_ARCH_RANDOM y
#define CONFIG_X86_SMAP y
# #define CONFIG_EFI is not set
# #define CONFIG_SECCOMP is not set
# #define CONFIG_CC_STACKPROTECTOR is not set
# #define CONFIG_HZ_100 is not set
#define CONFIG_HZ_250 y
# #define CONFIG_HZ_300 is not set
# #define CONFIG_HZ_1000 is not set
#define CONFIG_HZ 250
# #define CONFIG_SCHED_HRTICK is not set
# #define CONFIG_KEXEC is not set
# #define CONFIG_CRASH_DUMP is not set
#define CONFIG_PHYSICAL_START 0x1000000
# #define CONFIG_RELOCATABLE is not set
#define CONFIG_PHYSICAL_ALIGN 0x1000000
# #define CONFIG_COMPAT_VDSO is not set
# #define CONFIG_CMDLINE_BOOL is not set
#define CONFIG_ARCH_ENABLE_MEMORY_HOTPLUG y

#
# Power management and ACPI options
#
# #define CONFIG_SUSPEND is not set
# #define CONFIG_PM_RUNTIME is not set
#define CONFIG_ACPI y
# #define CONFIG_ACPI_PROCFS is not set
# #define CONFIG_ACPI_PROCFS_POWER is not set
# #define CONFIG_ACPI_EC_DEBUGFS is not set
#define CONFIG_ACPI_PROC_EVENT y
#define CONFIG_ACPI_AC y
#define CONFIG_ACPI_BATTERY y
#define CONFIG_ACPI_BUTTON y
#define CONFIG_ACPI_FAN y
#define CONFIG_ACPI_PROCESSOR y
#define CONFIG_ACPI_THERMAL y
# #define CONFIG_ACPI_CUSTOM_DSDT is not set
#define CONFIG_ACPI_BLACKLIST_YEAR 0
# #define CONFIG_ACPI_DEBUG is not set
# #define CONFIG_ACPI_PCI_SLOT is not set
#define CONFIG_X86_PM_TIMER y
# #define CONFIG_ACPI_SBS is not set
# #define CONFIG_ACPI_HED is not set
# #define CONFIG_ACPI_APEI is not set
# #define CONFIG_SFI is not set

#
# CPU Frequency scaling
#
# #define CONFIG_CPU_FREQ is not set
#define CONFIG_CPU_IDLE y
#define CONFIG_CPU_IDLE_GOV_LADDER y
# #define CONFIG_ARCH_NEEDS_CPU_IDLE_COUPLED is not set
# #define CONFIG_INTEL_IDLE is not set

#
# Bus options (PCI etc.)
#
#define CONFIG_PCI y
# #define CONFIG_PCI_GOBIOS is not set
# #define CONFIG_PCI_GOMM#define CONFIG is not set
# #define CONFIG_PCI_GODIRECT is not set
#define CONFIG_PCI_GOANY y
#define CONFIG_PCI_BIOS y
#define CONFIG_PCI_DIRECT y
#define CONFIG_PCI_MM#define CONFIG y
#define CONFIG_PCI_DOMAINS y
# #define CONFIG_PCIEPORTBUS is not set
# #define CONFIG_PCI_REALLOC_ENABLE_AUTO is not set
# #define CONFIG_PCI_STUB is not set
# #define CONFIG_PCI_IOV is not set
# #define CONFIG_PCI_PRI is not set
# #define CONFIG_PCI_PASID is not set
# #define CONFIG_PCI_IOAPIC is not set
#define CONFIG_PCI_LABEL y
#define CONFIG_ISA_DMA_API y
# #define CONFIG_ISA is not set
# #define CONFIG_SCx200 is not set
# #define CONFIG_OLPC is not set
# #define CONFIG_ALIX is not set
# #define CONFIG_NET5501 is not set
# #define CONFIG_GEOS is not set
#define CONFIG_AMD_NB y
# #define CONFIG_PCCARD is not set
# #define CONFIG_HOTPLUG_PCI is not set
# #define CONFIG_RAPIDIO is not set

#
# Executable file formats / Emulations
#
#define CONFIG_BINFMT_ELF y
#define CONFIG_ARCH_BINFMT_ELF_RANDOMIZE_PIE y
#define CONFIG_CORE_DUMP_DEFAULT_ELF_HEADERS y
#define CONFIG_HAVE_AOUT y
# #define CONFIG_BINFMT_AOUT is not set
# #define CONFIG_BINFMT_MISC is not set
#define CONFIG_COREDUMP y
#define CONFIG_HAVE_ATOMIC_IOMAP y
#define CONFIG_HAVE_TEXT_POKE_SMP y
#define CONFIG_NET y

#
# Networking options
#
# #define CONFIG_PACKET is not set
#define CONFIG_UNIX y
# #define CONFIG_UNIX_DIAG is not set
# #define CONFIG_NET_KEY is not set
# #define CONFIG_INET is not set
# #define CONFIG_NETWORK_SECMARK is not set
# #define CONFIG_NETFILTER is not set
# #define CONFIG_ATM is not set
# #define CONFIG_BRIDGE is not set
# #define CONFIG_VLAN_8021Q is not set
# #define CONFIG_DECNET is not set
# #define CONFIG_LLC2 is not set
# #define CONFIG_IPX is not set
# #define CONFIG_ATALK is not set
# #define CONFIG_PHONET is not set
# #define CONFIG_NET_SCHED is not set
# #define CONFIG_DCB is not set
# #define CONFIG_BATMAN_ADV is not set
# #define CONFIG_OPENVSWITCH is not set
#define CONFIG_BQL y

#
# Network testing
#
# #define CONFIG_NET_PKTGEN is not set
# #define CONFIG_HAMRADIO is not set
# #define CONFIG_CAN is not set
# #define CONFIG_IRDA is not set
# #define CONFIG_BT is not set
#define CONFIG_WIRELESS y
# #define CONFIG_CFG80211 is not set
# #define CONFIG_LIB80211 is not set

#
# CFG80211 needs to be enabled for MAC80211
#
# #define CONFIG_WIMAX is not set
# #define CONFIG_RFKILL is not set
# #define CONFIG_NET_9P is not set
# #define CONFIG_CAIF is not set

#
# Device Drivers
#

#
# Generic Driver Options
#
#define CONFIG_UEVENT_HELPER_PATH ""
#define CONFIG_DEVTMPFS y
# #define CONFIG_DEVTMPFS_MOUNT is not set
#define CONFIG_STANDALONE y
# #define CONFIG_PREVENT_FIRMWARE_BUILD is not set
#define CONFIG_FW_LOADER y
# #define CONFIG_FIRMWARE_IN_KERNEL is not set
#define CONFIG_EXTRA_FIRMWARE ""
# #define CONFIG_SYS_HYPERVISOR is not set
# #define CONFIG_GENERIC_CPU_DEVICES is not set

#
# Bus devices
#
# #define CONFIG_OMAP_OCP2SCP is not set
# #define CONFIG_CONNECTOR is not set
# #define CONFIG_MTD is not set
# #define CONFIG_PARPORT is not set
#define CONFIG_PNP y
#define CONFIG_PNP_DEBUG_MESSAGES y

#
# Protocols
#
#define CONFIG_PNPACPI y
# #define CONFIG_BLK_DEV is not set

#
# Misc devices
#
# #define CONFIG_SENSORS_LIS3LV02D is not set
# #define CONFIG_IBM_ASM is not set
# #define CONFIG_PHANTOM is not set
# #define CONFIG_INTEL_MID_PTI is not set
# #define CONFIG_SGI_IOC4 is not set
# #define CONFIG_TIFM_CORE is not set
# #define CONFIG_ENCLOSURE_SERVICES is not set
# #define CONFIG_HP_ILO is not set
# #define CONFIG_VMWARE_BALLOON is not set
# #define CONFIG_PCH_PHUB is not set
# #define CONFIG_C2PORT is not set

#
# EEPROM support
#
# #define CONFIG_EEPROM_93CX6 is not set
# #define CONFIG_CB710_CORE is not set

#
# Texas Instruments shared transport line discipline
#

#
# Altera FPGA firmware download module
#
#define CONFIG_HAVE_IDE y
# #define CONFIG_IDE is not set

#
# SCSI device support
#
#define CONFIG_SCSI_MOD y
# #define CONFIG_RAID_ATTRS is not set
#define CONFIG_SCSI y
#define CONFIG_SCSI_DMA y
#define CONFIG_SCSI_NETLINK y
#define CONFIG_SCSI_PROC_FS y

#
# SCSI support type (disk, tape, CD-ROM)
#
#define CONFIG_BLK_DEV_SD m
# #define CONFIG_CHR_DEV_ST is not set
# #define CONFIG_CHR_DEV_OSST is not set
# #define CONFIG_BLK_DEV_SR is not set
# #define CONFIG_CHR_DEV_SG is not set
# #define CONFIG_CHR_DEV_SCH is not set
# #define CONFIG_SCSI_MULTI_LUN is not set
# #define CONFIG_SCSI_CONSTANTS is not set
# #define CONFIG_SCSI_LOGGING is not set
# #define CONFIG_SCSI_SCAN_ASYNC is not set

#
# SCSI Transports
#
#define CONFIG_SCSI_SPI_ATTRS y
#define CONFIG_SCSI_FC_ATTRS y
# #define CONFIG_SCSI_ISCSI_ATTRS is not set
#define CONFIG_SCSI_SAS_ATTRS y
# #define CONFIG_SCSI_SAS_LIBSAS is not set
# #define CONFIG_SCSI_SRP_ATTRS is not set
# #define CONFIG_SCSI_LOWLEVEL is not set
# #define CONFIG_SCSI_DH is not set
# #define CONFIG_SCSI_OSD_INITIATOR is not set
#define CONFIG_ATA y
# #define CONFIG_ATA_NONSTANDARD is not set
#define CONFIG_ATA_VERBOSE_ERROR y
#define CONFIG_ATA_ACPI y
#define CONFIG_SATA_PMP y

#
# Controllers with non-SFF native interface
#
#define CONFIG_SATA_AHCI m
# #define CONFIG_SATA_AHCI_PLATFORM is not set
# #define CONFIG_SATA_INIC162X is not set
# #define CONFIG_SATA_ACARD_AHCI is not set
# #define CONFIG_SATA_SIL24 is not set
#define CONFIG_ATA_SFF y

#
# SFF controllers with custom DMA interface
#
# #define CONFIG_PDC_ADMA is not set
# #define CONFIG_SATA_QSTOR is not set
#define CONFIG_ATA_BMDMA y

#
# SATA SFF controllers with BMDMA
#
#define CONFIG_ATA_PIIX m
# #define CONFIG_SATA_HIGHBANK is not set
# #define CONFIG_SATA_MV is not set
# #define CONFIG_SATA_NV is not set
# #define CONFIG_SATA_PROMISE is not set
# #define CONFIG_SATA_SIL is not set
# #define CONFIG_SATA_SIS is not set
# #define CONFIG_SATA_SVW is not set
# #define CONFIG_SATA_ULI is not set
# #define CONFIG_SATA_VIA is not set
# #define CONFIG_SATA_VITESSE is not set

#
# PATA SFF controllers with BMDMA
#
# #define CONFIG_PATA_ALI is not set
# #define CONFIG_PATA_AMD is not set
# #define CONFIG_PATA_ARTOP is not set
# #define CONFIG_PATA_ATIIXP is not set
# #define CONFIG_PATA_ATP867X is not set
# #define CONFIG_PATA_CMD64X is not set
# #define CONFIG_PATA_CS5520 is not set
# #define CONFIG_PATA_CS5530 is not set
# #define CONFIG_PATA_CS5536 is not set
# #define CONFIG_PATA_EFAR is not set
# #define CONFIG_PATA_HPT366 is not set
# #define CONFIG_PATA_HPT37X is not set
# #define CONFIG_PATA_HPT3X2N is not set
# #define CONFIG_PATA_HPT3X3 is not set
# #define CONFIG_PATA_IT821X is not set
# #define CONFIG_PATA_JMICRON is not set
# #define CONFIG_PATA_MARVELL is not set
# #define CONFIG_PATA_NETCELL is not set
# #define CONFIG_PATA_NINJA32 is not set
# #define CONFIG_PATA_NS87415 is not set
# #define CONFIG_PATA_OLDPIIX is not set
# #define CONFIG_PATA_PDC2027X is not set
# #define CONFIG_PATA_PDC_OLD is not set
# #define CONFIG_PATA_RDC is not set
# #define CONFIG_PATA_SC1200 is not set
# #define CONFIG_PATA_SCH is not set
# #define CONFIG_PATA_SERVERWORKS is not set
# #define CONFIG_PATA_SIL680 is not set
# #define CONFIG_PATA_SIS is not set
# #define CONFIG_PATA_TRIFLEX is not set
# #define CONFIG_PATA_VIA is not set
# #define CONFIG_PATA_WINBOND is not set

#
# PIO-only SFF controllers
#
# #define CONFIG_PATA_MPIIX is not set
# #define CONFIG_PATA_NS87410 is not set
# #define CONFIG_PATA_RZ1000 is not set

#
# Generic fallback / legacy drivers
#
# #define CONFIG_PATA_ACPI is not set
# #define CONFIG_ATA_GENERIC is not set
# #define CONFIG_MD is not set
# #define CONFIG_TARGET_CORE is not set
# #define CONFIG_FUSION is not set

#
# IEEE 1394 (FireWire) support
#
# #define CONFIG_FIREWIRE is not set
# #define CONFIG_FIREWIRE_NOSY is not set
# #define CONFIG_I2O is not set
# #define CONFIG_MACINTOSH_DRIVERS is not set
# #define CONFIG_NETDEVICES is not set

#
# Input device support
#
#define CONFIG_INPUT y
# #define CONFIG_INPUT_FF_MEMLESS is not set
# #define CONFIG_INPUT_POLLDEV is not set
# #define CONFIG_INPUT_SPARSEKMAP is not set
# #define CONFIG_INPUT_MATRIXKMAP is not set

#
# Userland interfaces
#
#define CONFIG_INPUT_MOUSEDEV y
# #define CONFIG_INPUT_MOUSEDEV_PSAUX is not set
#define CONFIG_INPUT_MOUSEDEV_SCREEN_X 1024
#define CONFIG_INPUT_MOUSEDEV_SCREEN_Y 768
# #define CONFIG_INPUT_JOYDEV is not set
# #define CONFIG_INPUT_EVDEV is not set
# #define CONFIG_INPUT_EVBUG is not set

#
# Input Device Drivers
#
#define CONFIG_INPUT_KEYBOARD y
#define CONFIG_KEYBOARD_ATKBD y
# #define CONFIG_KEYBOARD_LKKBD is not set
# #define CONFIG_KEYBOARD_NEWTON is not set
# #define CONFIG_KEYBOARD_OPENCORES is not set
# #define CONFIG_KEYBOARD_STOWAWAY is not set
# #define CONFIG_KEYBOARD_SUNKBD is not set
# #define CONFIG_KEYBOARD_OMAP4 is not set
# #define CONFIG_KEYBOARD_XTKBD is not set
# #define CONFIG_INPUT_MOUSE is not set
# #define CONFIG_INPUT_JOYSTICK is not set
# #define CONFIG_INPUT_TABLET is not set
# #define CONFIG_INPUT_TOUCHSCREEN is not set
# #define CONFIG_INPUT_MISC is not set

#
# Hardware I/O ports
#
#define CONFIG_SERIO y
#define CONFIG_SERIO_I8042 y
# #define CONFIG_SERIO_SERPORT is not set
# #define CONFIG_SERIO_CT82C710 is not set
# #define CONFIG_SERIO_PCIPS2 is not set
#define CONFIG_SERIO_LIBPS2 y
# #define CONFIG_SERIO_RAW is not set
# #define CONFIG_SERIO_ALTERA_PS2 is not set
# #define CONFIG_SERIO_PS2MULT is not set
# #define CONFIG_GAMEPORT is not set

#
# Character devices
#
#define CONFIG_VT y
#define CONFIG_CONSOLE_TRANSLATIONS y
#define CONFIG_VT_CONSOLE y
#define CONFIG_HW_CONSOLE y
# #define CONFIG_VT_HW_CONSOLE_BINDING is not set
#define CONFIG_UNIX98_PTYS y
# #define CONFIG_DEVPTS_MULTIPLE_INSTANCES is not set
# #define CONFIG_LEGACY_PTYS is not set
# #define CONFIG_SERIAL_NONSTANDARD is not set
# #define CONFIG_NOZOMI is not set
# #define CONFIG_N_GSM is not set
# #define CONFIG_TRACE_SINK is not set
# #define CONFIG_DEVKMEM is not set

#
# Serial drivers
#
# #define CONFIG_SERIAL_8250 is not set
#define CONFIG_FIX_EARLYCON_MEM y

#
# Non-8250 serial port support
#
# #define CONFIG_SERIAL_MFD_HSU is not set
# #define CONFIG_SERIAL_JSM is not set
# #define CONFIG_SERIAL_SCCNXP is not set
# #define CONFIG_SERIAL_TIMBERDALE is not set
# #define CONFIG_SERIAL_ALTERA_JTAGUART is not set
# #define CONFIG_SERIAL_ALTERA_UART is not set
# #define CONFIG_SERIAL_PCH_UART is not set
# #define CONFIG_SERIAL_XILINX_PS_UART is not set
# #define CONFIG_IPMI_HANDLER is not set
# #define CONFIG_HW_RANDOM is not set
# #define CONFIG_NVRAM is not set
# #define CONFIG_RTC is not set
# #define CONFIG_GEN_RTC is not set
# #define CONFIG_R3964 is not set
# #define CONFIG_APPLICOM is not set
# #define CONFIG_SONYPI is not set
# #define CONFIG_MWAVE is not set
# #define CONFIG_PC8736x_GPIO is not set
# #define CONFIG_NSC_GPIO is not set
# #define CONFIG_RAW_DRIVER is not set
# #define CONFIG_HPET is not set
# #define CONFIG_HANGCHECK_TIMER is not set
# #define CONFIG_TCG_TPM is not set
# #define CONFIG_TELCLOCK is not set
#define CONFIG_DEVPORT y
# #define CONFIG_I2C is not set
# #define CONFIG_SPI is not set
# #define CONFIG_HSI is not set

#
# PPS support
#

#
# PPS generators support
#

#
# PTP clock support
#

#
# Enable Device Drivers -> PPS to see the PTP clock options.
#
#define CONFIG_ARCH_WANT_OPTIONAL_GPIOLIB y
# #define CONFIG_GPIOLIB is not set
# #define CONFIG_W1 is not set
#define CONFIG_POWER_SUPPLY y
# #define CONFIG_POWER_SUPPLY_DEBUG is not set
# #define CONFIG_PDA_POWER is not set
# #define CONFIG_TEST_POWER is not set
# #define CONFIG_BATTERY_DS2780 is not set
# #define CONFIG_BATTERY_DS2781 is not set
# #define CONFIG_BATTERY_BQ27x00 is not set
# #define CONFIG_CHARGER_MAX8903 is not set
# #define CONFIG_POWER_AVS is not set
# #define CONFIG_HWMON is not set
#define CONFIG_THERMAL y
# #define CONFIG_WATCHDOG is not set
#define CONFIG_SSB_POSSIBLE y

#
# Sonics Silicon Backplane
#
# #define CONFIG_SSB is not set
#define CONFIG_BCMA_POSSIBLE y

#
# Broadcom specific AMBA
#
# #define CONFIG_BCMA is not set

#
# Multifunction device drivers
#
# #define CONFIG_MFD_CORE is not set
# #define CONFIG_MFD_SM501 is not set
# #define CONFIG_HTC_PASIC3 is not set
# #define CONFIG_MFD_TMIO is not set
# #define CONFIG_ABX500_CORE is not set
# #define CONFIG_MFD_CS5535 is not set
# #define CONFIG_LPC_SCH is not set
# #define CONFIG_LPC_ICH is not set
# #define CONFIG_MFD_RDC321X is not set
# #define CONFIG_MFD_JANZ_CMODIO is not set
# #define CONFIG_MFD_VX855 is not set
# #define CONFIG_REGULATOR is not set
# #define CONFIG_MEDIA_SUPPORT is not set

#
# Graphics support
#
# #define CONFIG_AGP is not set
#define CONFIG_VGA_ARB y
#define CONFIG_VGA_ARB_MAX_GPUS 16
# #define CONFIG_VGA_SWITCHEROO is not set
# #define CONFIG_DRM is not set
# #define CONFIG_STUB_POULSBO is not set
# #define CONFIG_VGASTATE is not set
# #define CONFIG_VIDEO_OUTPUT_CONTROL is not set
# #define CONFIG_FB is not set
# #define CONFIG_EXYNOS_VIDEO is not set
# #define CONFIG_BACKLIGHT_LCD_SUPPORT is not set

#
# Console display driver support
#
#define CONFIG_VGA_CONSOLE y
# #define CONFIG_VGACON_SOFT_SCROLLBACK is not set
#define CONFIG_DUMMY_CONSOLE y
# #define CONFIG_SOUND is not set

#
# HID support
#
# #define CONFIG_HID is not set
#define CONFIG_USB_ARCH_HAS_OHCI y
#define CONFIG_USB_ARCH_HAS_EHCI y
#define CONFIG_USB_ARCH_HAS_XHCI y
# #define CONFIG_USB_SUPPORT is not set
# #define CONFIG_MMC is not set
# #define CONFIG_MEMSTICK is not set
# #define CONFIG_NEW_LEDS is not set
# #define CONFIG_ACCESSIBILITY is not set
# #define CONFIG_INFINIBAND is not set
# #define CONFIG_EDAC is not set
# #define CONFIG_RTC_CLASS is not set
# #define CONFIG_DMADEVICES is not set
# #define CONFIG_AUXDISPLAY is not set
# #define CONFIG_UIO is not set

#
# Virtio drivers
#

#
# Microsoft Hyper-V guest support
#
# #define CONFIG_HYPERV is not set
# #define CONFIG_STAGING is not set
# #define CONFIG_X86_PLATFORM_DEVICES is not set

#
# Hardware Spinlock drivers
#
#define CONFIG_CLKSRC_I8253 y
#define CONFIG_CLKEVT_I8253 y
#define CONFIG_I8253_LOCK y
#define CONFIG_CLKBLD_I8253 y
# #define CONFIG_IOMMU_SUPPORT is not set

#
# Remoteproc drivers (EXPERIMENTAL)
#

#
# Rpmsg drivers (EXPERIMENTAL)
#
# #define CONFIG_VIRT_DRIVERS is not set
# #define CONFIG_PM_DEVFREQ is not set
# #define CONFIG_EXTCON is not set
# #define CONFIG_MEMORY is not set
# #define CONFIG_IIO is not set
# #define CONFIG_VME_BUS is not set
# #define CONFIG_PWM is not set

#
# Firmware Drivers
#
# #define CONFIG_EDD is not set
#define CONFIG_FIRMWARE_MEMMAP y
# #define CONFIG_DELL_RBU is not set
# #define CONFIG_DCDBAS is not set
# #define CONFIG_DMIID is not set
# #define CONFIG_DMI_SYSFS is not set
# #define CONFIG_ISCSI_IBFT_FIND is not set
# #define CONFIG_GOOGLE_FIRMWARE is not set

#
# File systems
#
#define CONFIG_DCACHE_WORD_ACCESS y
# #define CONFIG_EXT2_FS is not set
# #define CONFIG_EXT3_FS is not set
#define CONFIG_EXT4_FS y
#define CONFIG_EXT4_USE_FOR_EXT23 y
#define CONFIG_EXT4_FS_XATTR y
# #define CONFIG_EXT4_FS_POSIX_ACL is not set
# #define CONFIG_EXT4_FS_SECURITY is not set
# #define CONFIG_EXT4_DEBUG is not set
#define CONFIG_JBD2 y
#define CONFIG_FS_MBCACHE y
# #define CONFIG_REISERFS_FS is not set
# #define CONFIG_JFS_FS is not set
# #define CONFIG_XFS_FS is not set
# #define CONFIG_GFS2_FS is not set
# #define CONFIG_FS_POSIX_ACL is not set
#define CONFIG_FILE_LOCKING y
#define CONFIG_FSNOTIFY y
# #define CONFIG_DNOTIFY is not set
#define CONFIG_INOTIFY_USER y
# #define CONFIG_FANOTIFY is not set
# #define CONFIG_QUOTA is not set
# #define CONFIG_QUOTACTL is not set
# #define CONFIG_AUTOFS4_FS is not set
# #define CONFIG_FUSE_FS is not set

#
# Caches
#
# #define CONFIG_FSCACHE is not set

#
# CD-ROM/DVD Filesystems
#
# #define CONFIG_ISO9660_FS is not set
# #define CONFIG_UDF_FS is not set

#
# DOS/FAT/NT Filesystems
#
# #define CONFIG_MSDOS_FS is not set
# #define CONFIG_VFAT_FS is not set
# #define CONFIG_NTFS_FS is not set

#
# Pseudo filesystems
#
#define CONFIG_PROC_FS y
# #define CONFIG_PROC_KCORE is not set
#define CONFIG_PROC_SYSCTL y
#define CONFIG_PROC_PAGE_MONITOR y
#define CONFIG_SYSFS y
# #define CONFIG_TMPFS is not set
# #define CONFIG_HUGETLBFS is not set
# #define CONFIG_HUGETLB_PAGE is not set
# #define CONFIG_#define CONFIGFS_FS is not set
# #define CONFIG_MISC_FILESYSTEMS is not set
#define CONFIG_NETWORK_FILESYSTEMS y
#define CONFIG_NLS y
#define CONFIG_NLS_DEFAULT "iso8859-1"
# #define CONFIG_NLS_CODEPAGE_437 is not set
# #define CONFIG_NLS_CODEPAGE_737 is not set
# #define CONFIG_NLS_CODEPAGE_775 is not set
# #define CONFIG_NLS_CODEPAGE_850 is not set
# #define CONFIG_NLS_CODEPAGE_852 is not set
# #define CONFIG_NLS_CODEPAGE_855 is not set
# #define CONFIG_NLS_CODEPAGE_857 is not set
# #define CONFIG_NLS_CODEPAGE_860 is not set
# #define CONFIG_NLS_CODEPAGE_861 is not set
# #define CONFIG_NLS_CODEPAGE_862 is not set
# #define CONFIG_NLS_CODEPAGE_863 is not set
# #define CONFIG_NLS_CODEPAGE_864 is not set
# #define CONFIG_NLS_CODEPAGE_865 is not set
# #define CONFIG_NLS_CODEPAGE_866 is not set
# #define CONFIG_NLS_CODEPAGE_869 is not set
# #define CONFIG_NLS_CODEPAGE_936 is not set
# #define CONFIG_NLS_CODEPAGE_950 is not set
# #define CONFIG_NLS_CODEPAGE_932 is not set
# #define CONFIG_NLS_CODEPAGE_949 is not set
# #define CONFIG_NLS_CODEPAGE_874 is not set
# #define CONFIG_NLS_ISO8859_8 is not set
# #define CONFIG_NLS_CODEPAGE_1250 is not set
# #define CONFIG_NLS_CODEPAGE_1251 is not set
# #define CONFIG_NLS_ASCII is not set
# #define CONFIG_NLS_ISO8859_1 is not set
# #define CONFIG_NLS_ISO8859_2 is not set
# #define CONFIG_NLS_ISO8859_3 is not set
# #define CONFIG_NLS_ISO8859_4 is not set
# #define CONFIG_NLS_ISO8859_5 is not set
# #define CONFIG_NLS_ISO8859_6 is not set
# #define CONFIG_NLS_ISO8859_7 is not set
# #define CONFIG_NLS_ISO8859_9 is not set
# #define CONFIG_NLS_ISO8859_13 is not set
# #define CONFIG_NLS_ISO8859_14 is not set
# #define CONFIG_NLS_ISO8859_15 is not set
# #define CONFIG_NLS_KOI8_R is not set
# #define CONFIG_NLS_KOI8_U is not set
# #define CONFIG_NLS_MAC_ROMAN is not set
# #define CONFIG_NLS_MAC_CELTIC is not set
# #define CONFIG_NLS_MAC_CENTEURO is not set
# #define CONFIG_NLS_MAC_CROATIAN is not set
# #define CONFIG_NLS_MAC_CYRILLIC is not set
# #define CONFIG_NLS_MAC_GAELIC is not set
# #define CONFIG_NLS_MAC_GREEK is not set
# #define CONFIG_NLS_MAC_ICELAND is not set
# #define CONFIG_NLS_MAC_INUIT is not set
# #define CONFIG_NLS_MAC_ROMANIAN is not set
# #define CONFIG_NLS_MAC_TURKISH is not set
# #define CONFIG_NLS_UTF8 is not set

#
# Kernel hacking
#
#define CONFIG_TRACE_IRQFLAGS_SUPPORT y
# #define CONFIG_PRINTK_TIME is not set
#define CONFIG_DEFAULT_MESSAGE_LOGLEVEL 4
# #define CONFIG_ENABLE_WARN_DEPRECATED is not set
# #define CONFIG_ENABLE_MUST_CHECK is not set
#define CONFIG_FRAME_WARN 1024
# #define CONFIG_MAGIC_SYSRQ is not set
# #define CONFIG_STRIP_ASM_SYMS is not set
# #define CONFIG_UNUSED_SYMBOLS is not set
# #define CONFIG_DEBUG_FS is not set
# #define CONFIG_HEADERS_CHECK is not set
# #define CONFIG_DEBUG_SECTION_MISMATCH is not set
# #define CONFIG_DEBUG_KERNEL is not set
# #define CONFIG_PANIC_ON_OOPS is not set
#define CONFIG_PANIC_ON_OOPS_VALUE 0
# #define CONFIG_SLUB_DEBUG_ON is not set
# #define CONFIG_SLUB_STATS is not set
#define CONFIG_HAVE_DEBUG_KMEMLEAK y
# #define CONFIG_SPARSE_RCU_POINTER is not set
#define CONFIG_DEBUG_BUGVERBOSE y
#define CONFIG_DEBUG_MEMORY_INIT y
#define CONFIG_ARCH_WANT_FRAME_POINTERS y
# #define CONFIG_FRAME_POINTER is not set
#define CONFIG_USER_STACKTRACE_SUPPORT y
#define CONFIG_HAVE_FUNCTION_TRACER y
#define CONFIG_HAVE_FUNCTION_GRAPH_TRACER y
#define CONFIG_HAVE_FUNCTION_GRAPH_FP_TEST y
#define CONFIG_HAVE_FUNCTION_TRACE_MCOUNT_TEST y
#define CONFIG_HAVE_DYNAMIC_FTRACE y
#define CONFIG_HAVE_FTRACE_MCOUNT_RECORD y
#define CONFIG_HAVE_SYSCALL_TRACEPOINTS y
#define CONFIG_HAVE_C_RECORDMCOUNT y
#define CONFIG_TRACING_SUPPORT y
# #define CONFIG_FTRACE is not set
# #define CONFIG_PROVIDE_OHCI1394_DMA_INIT is not set
# #define CONFIG_DMA_API_DEBUG is not set
# #define CONFIG_ATOMIC64_SELFTEST is not set
# #define CONFIG_SAMPLES is not set
#define CONFIG_HAVE_ARCH_KGDB y
#define CONFIG_HAVE_ARCH_KMEMCHECK y
# #define CONFIG_TEST_KSTRTOX is not set
# #define CONFIG_STRICT_DEVMEM is not set
# #define CONFIG_X86_VERBOSE_BOOTUP is not set
#define CONFIG_EARLY_PRINTK y
# #define CONFIG_EARLY_PRINTK_DBGP is not set
# #define CONFIG_DEBUG_SET_MODULE_RONX is not set
#define CONFIG_DOUBLEFAULT y
# #define CONFIG_IOMMU_STRESS is not set
#define CONFIG_HAVE_MMIOTRACE_SUPPORT y
#define CONFIG_IO_DELAY_TYPE_0X80 0
#define CONFIG_IO_DELAY_TYPE_0XED 1
#define CONFIG_IO_DELAY_TYPE_UDELAY 2
#define CONFIG_IO_DELAY_TYPE_NONE 3
#define CONFIG_IO_DELAY_0X80 y
# #define CONFIG_IO_DELAY_0XED is not set
# #define CONFIG_IO_DELAY_UDELAY is not set
# #define CONFIG_IO_DELAY_NONE is not set
#define CONFIG_DEFAULT_IO_DELAY_TYPE 0
# #define CONFIG_OPTIMIZE_INLINING is not set

#
# Security options
#
# #define CONFIG_KEYS is not set
# #define CONFIG_SECURITY_DMESG_RESTRICT is not set
# #define CONFIG_SECURITY is not set
# #define CONFIG_SECURITYFS is not set
#define CONFIG_DEFAULT_SECURITY_DAC y
#define CONFIG_DEFAULT_SECURITY ""
#define CONFIG_CRYPTO y

#
# Crypto core or helper
#
# #define CONFIG_CRYPTO_FIPS is not set
#define CONFIG_CRYPTO_ALGAPI y
#define CONFIG_CRYPTO_ALGAPI2 y
#define CONFIG_CRYPTO_HASH y
#define CONFIG_CRYPTO_HASH2 y
#define CONFIG_CRYPTO_RNG m
#define CONFIG_CRYPTO_RNG2 m
# #define CONFIG_CRYPTO_MANAGER is not set
# #define CONFIG_CRYPTO_MANAGER2 is not set
# #define CONFIG_CRYPTO_USER is not set
# #define CONFIG_CRYPTO_GF128MUL is not set
# #define CONFIG_CRYPTO_NULL is not set
# #define CONFIG_CRYPTO_CRYPTD is not set
# #define CONFIG_CRYPTO_AUTHENC is not set
# #define CONFIG_CRYPTO_TEST is not set

#
# Authenticated Encryption with Associated Data
#
# #define CONFIG_CRYPTO_CCM is not set
# #define CONFIG_CRYPTO_GCM is not set
# #define CONFIG_CRYPTO_SEQIV is not set

#
# Block modes
#
# #define CONFIG_CRYPTO_CBC is not set
# #define CONFIG_CRYPTO_CTR is not set
# #define CONFIG_CRYPTO_CTS is not set
# #define CONFIG_CRYPTO_ECB is not set
# #define CONFIG_CRYPTO_LRW is not set
# #define CONFIG_CRYPTO_PCBC is not set
# #define CONFIG_CRYPTO_XTS is not set

#
# Hash modes
#
# #define CONFIG_CRYPTO_HMAC is not set

#
# Digest
#
#define CONFIG_CRYPTO_CRC32C y
# #define CONFIG_CRYPTO_CRC32C_INTEL is not set
# #define CONFIG_CRYPTO_GHASH is not set
# #define CONFIG_CRYPTO_MD4 is not set
# #define CONFIG_CRYPTO_MD5 is not set
# #define CONFIG_CRYPTO_MICHAEL_MIC is not set
# #define CONFIG_CRYPTO_RMD128 is not set
# #define CONFIG_CRYPTO_RMD160 is not set
# #define CONFIG_CRYPTO_RMD256 is not set
# #define CONFIG_CRYPTO_RMD320 is not set
# #define CONFIG_CRYPTO_SHA1 is not set
# #define CONFIG_CRYPTO_SHA256 is not set
# #define CONFIG_CRYPTO_SHA512 is not set
# #define CONFIG_CRYPTO_TGR192 is not set
# #define CONFIG_CRYPTO_WP512 is not set

#
# Ciphers
#
#define CONFIG_CRYPTO_AES m
# #define CONFIG_CRYPTO_AES_586 is not set
# #define CONFIG_CRYPTO_AES_NI_INTEL is not set
# #define CONFIG_CRYPTO_ANUBIS is not set
# #define CONFIG_CRYPTO_ARC4 is not set
# #define CONFIG_CRYPTO_BLOWFISH is not set
# #define CONFIG_CRYPTO_CAMELLIA is not set
# #define CONFIG_CRYPTO_CAST5 is not set
# #define CONFIG_CRYPTO_CAST6 is not set
# #define CONFIG_CRYPTO_DES is not set
# #define CONFIG_CRYPTO_FCRYPT is not set
# #define CONFIG_CRYPTO_KHAZAD is not set
# #define CONFIG_CRYPTO_SEED is not set
# #define CONFIG_CRYPTO_SERPENT is not set
# #define CONFIG_CRYPTO_SERPENT_SSE2_586 is not set
# #define CONFIG_CRYPTO_TEA is not set
# #define CONFIG_CRYPTO_TWOFISH is not set
# #define CONFIG_CRYPTO_TWOFISH_586 is not set

#
# Compression
#
# #define CONFIG_CRYPTO_DEFLATE is not set
# #define CONFIG_CRYPTO_ZLIB is not set
# #define CONFIG_CRYPTO_LZO is not set

#
# Random Number Generation
#
#define CONFIG_CRYPTO_ANSI_CPRNG m
# #define CONFIG_CRYPTO_USER_API_HASH is not set
# #define CONFIG_CRYPTO_USER_API_SKCIPHER is not set
#define CONFIG_CRYPTO_HW y
# #define CONFIG_CRYPTO_DEV_PADLOCK is not set
# #define CONFIG_CRYPTO_DEV_GEODE is not set
# #define CONFIG_CRYPTO_DEV_HIFN_795X is not set
#define CONFIG_HAVE_KVM y
# #define CONFIG_VIRTUALIZATION is not set
# #define CONFIG_BINARY_PRINTF is not set

#
# Library routines
#
#define CONFIG_BITREVERSE y
#define CONFIG_GENERIC_STRNCPY_FROM_USER y
#define CONFIG_GENERIC_STRNLEN_USER y
#define CONFIG_GENERIC_FIND_FIRST_BIT y
#define CONFIG_GENERIC_PCI_IOMAP y
#define CONFIG_GENERIC_IOMAP y
#define CONFIG_GENERIC_IO y
# #define CONFIG_CRC_CCITT is not set
#define CONFIG_CRC16 y
# #define CONFIG_CRC_T10DIF is not set
# #define CONFIG_CRC_ITU_T is not set
#define CONFIG_CRC32 y
# #define CONFIG_CRC32_SELFTEST is not set
#define CONFIG_CRC32_SLICEBY8 y
# #define CONFIG_CRC32_SLICEBY4 is not set
# #define CONFIG_CRC32_SARWATE is not set
# #define CONFIG_CRC32_BIT is not set
# #define CONFIG_CRC7 is not set
# #define CONFIG_LIBCRC32C is not set
# #define CONFIG_CRC8 is not set
#define CONFIG_ZLIB_INFLATE y
#define CONFIG_LZO_DECOMPRESS y
#define CONFIG_XZ_DEC y
#define CONFIG_XZ_DEC_X86 y
#define CONFIG_XZ_DEC_POWERPC y
#define CONFIG_XZ_DEC_IA64 y
#define CONFIG_XZ_DEC_ARM y
#define CONFIG_XZ_DEC_ARMTHUMB y
#define CONFIG_XZ_DEC_SPARC y
#define CONFIG_XZ_DEC_BCJ y
# #define CONFIG_XZ_DEC_TEST is not set
#define CONFIG_DECOMPRESS_GZIP y
#define CONFIG_DECOMPRESS_BZIP2 y
#define CONFIG_DECOMPRESS_LZMA y
#define CONFIG_DECOMPRESS_XZ y
#define CONFIG_DECOMPRESS_LZO y
#define CONFIG_HAS_IOMEM y
#define CONFIG_HAS_IOPORT y
#define CONFIG_HAS_DMA y
#define CONFIG_DQL y
#define CONFIG_NLATTR y
#define CONFIG_ARCH_HAS_ATOMIC64_DEC_IF_POSITIVE y
# #define CONFIG_AVERAGE is not set
# #define CONFIG_CORDIC is not set
# #define CONFIG_DDR is not set