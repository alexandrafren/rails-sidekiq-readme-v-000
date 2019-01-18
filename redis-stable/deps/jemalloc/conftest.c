/* confdefs.h */
#define PACKAGE_NAME ""
#define PACKAGE_TARNAME ""
#define PACKAGE_VERSION ""
#define PACKAGE_STRING ""
#define PACKAGE_BUGREPORT ""
#define PACKAGE_URL ""
#define JEMALLOC_HAS_RESTRICT 1
#define HAVE_CXX14 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define SIZEOF_VOID_P 8
#define LG_SIZEOF_PTR 3
#define SIZEOF_INT 4
#define LG_SIZEOF_INT 2
#define SIZEOF_LONG 8
#define LG_SIZEOF_LONG 3
#define SIZEOF_LONG_LONG 8
#define LG_SIZEOF_LONG_LONG 3
#define SIZEOF_INTMAX_T 8
#define LG_SIZEOF_INTMAX_T 3
#define HAVE_CPU_SPINWAIT 1
#define CPU_SPINWAIT __asm__ volatile("pause")
#define LG_VADDR 48
#define LG_VADDR 48
#define JEMALLOC_PURGE_MADVISE_DONTNEED_ZEROS  
#define JEMALLOC_HAS_ALLOCA_H 1
#define JEMALLOC_PROC_SYS_VM_OVERCOMMIT_MEMORY  
#define JEMALLOC_THREADED_INIT  
#define JEMALLOC_USE_CXX_THROW  
#define HAVE_MALLOC_H 1
#define JEMALLOC_USABLE_SIZE_CONST 
/* end confdefs.h.  */

/* Override any GCC internal prototype to avoid an error.
   Use char because int might match the return type of a GCC
   builtin and then its argument prototype would still apply.  */
#ifdef __cplusplus
extern "C"
#endif
char log ();
int
main ()
{
return log ();
  ;
  return 0;
}
