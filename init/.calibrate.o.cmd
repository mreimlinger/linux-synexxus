cmd_init/calibrate.o := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,init/.calibrate.o.d  -nostdinc -isystem /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.8.3/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(calibrate)"  -D"KBUILD_MODNAME=KBUILD_STR(calibrate)" -c -o init/.tmp_calibrate.o init/calibrate.c

source_init/calibrate.o := init/calibrate.c

deps_init/calibrate.o := \
  include/linux/jiffies.h \
  include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi/asm/posix_types.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/asm-generic/posix_types.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/div64.h \
    $(wildcard include/config/aeabi.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/compiler.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  include/linux/linkage.h \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/linkage.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/endian/be32.h) \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/swab.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi/asm/swab.h \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
    $(wildcard include/config/smp.h) \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/lib/gcc/arm-linux-gnueabihf/4.8.3/include/stdarg.h \
  include/linux/bitops.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/bitops.h \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/irqflags.h \
    $(wildcard include/config/cpu/v7m.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi/asm/ptrace.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/hwcap.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi/asm/hwcap.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/asm-generic/bitops/le.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/lto.h) \
  include/linux/kern_levels.h \
  include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  include/uapi/linux/kernel.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/linux/sysinfo.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
  include/linux/dynamic_debug.h \
  include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  include/linux/seqlock.h \
    $(wildcard include/config/debug/lock/alloc.h) \
  include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/preempt.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/context/tracking.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/linux/const.h \
  arch/arm/include/generated/asm/preempt.h \
  include/asm-generic/preempt.h \
  include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  include/linux/bug.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  include/linux/bottom_half.h \
  include/linux/preempt_mask.h \
  include/linux/spinlock_types.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/spinlock_types.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  include/linux/rwlock_types.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/spinlock.h \
  include/linux/prefetch.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/hw_breakpoint.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  include/linux/rwlock.h \
  include/linux/spinlock_api_smp.h \
    $(wildcard include/config/inline/spin/lock.h) \
    $(wildcard include/config/inline/spin/lock/bh.h) \
    $(wildcard include/config/inline/spin/lock/irq.h) \
    $(wildcard include/config/inline/spin/lock/irqsave.h) \
    $(wildcard include/config/inline/spin/trylock.h) \
    $(wildcard include/config/inline/spin/trylock/bh.h) \
    $(wildcard include/config/uninline/spin/unlock.h) \
    $(wildcard include/config/inline/spin/unlock/bh.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/inline/spin/unlock/irqrestore.h) \
  include/linux/rwlock_api_smp.h \
    $(wildcard include/config/inline/read/lock.h) \
    $(wildcard include/config/inline/write/lock.h) \
    $(wildcard include/config/inline/read/lock/bh.h) \
    $(wildcard include/config/inline/write/lock/bh.h) \
    $(wildcard include/config/inline/read/lock/irq.h) \
    $(wildcard include/config/inline/write/lock/irq.h) \
    $(wildcard include/config/inline/read/lock/irqsave.h) \
    $(wildcard include/config/inline/write/lock/irqsave.h) \
    $(wildcard include/config/inline/read/trylock.h) \
    $(wildcard include/config/inline/write/trylock.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/inline/write/unlock.h) \
    $(wildcard include/config/inline/read/unlock/bh.h) \
    $(wildcard include/config/inline/write/unlock/bh.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/inline/read/unlock/irqrestore.h) \
    $(wildcard include/config/inline/write/unlock/irqrestore.h) \
  include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/atomic.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/atomic-long.h \
  include/uapi/linux/time.h \
  include/linux/timex.h \
  include/uapi/linux/timex.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/linux/param.h \
  arch/arm/include/generated/asm/param.h \
  include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  include/uapi/asm-generic/param.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/timex.h \
  include/linux/delay.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/delay.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/phys/offset.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/virt/to/bus.h) \
  include/linux/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  include/linux/smp.h \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/asm-generic/errno.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/asm-generic/errno-base.h \
  include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  include/linux/bitmap.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  include/uapi/linux/string.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/string.h \
  include/linux/llist.h \
    $(wildcard include/config/arch/have/nmi/safe/cmpxchg.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/smp.h \
  include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
  include/linux/pfn.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/percpu.h \
  include/asm-generic/percpu.h \
  include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \

init/calibrate.o: $(deps_init/calibrate.o)

$(deps_init/calibrate.o):