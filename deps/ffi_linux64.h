


















extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));








typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef int wchar_t;




typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));



extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));



extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int system (__const char *__command) ;

typedef int (*__compar_fn_t) (__const void *, __const void *);



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));















typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;



typedef __clock_t clock_t;



typedef __time_t time_t;



struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;





  long int __tm_gmtoff;
  __const char *__tm_zone;

};




extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));




extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));




extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));

extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;















extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


typedef __loff_t loff_t;



typedef __ino_t ino_t;
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __ssize_t ssize_t;
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;





struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


extern int fcntl (int __fd, int __cmd, ...);
extern int open (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
extern int creat (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));


extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
extern unsigned int sleep (unsigned int __seconds);
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__)) ;
extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));
extern char **__environ;







extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern void _exit (int __status) __attribute__ ((__noreturn__));





enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__));
extern __pid_t getpid (void) __attribute__ ((__nothrow__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));
extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
extern __pid_t setsid (void) __attribute__ ((__nothrow__));







extern __uid_t getuid (void) __attribute__ ((__nothrow__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__)) ;
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));
extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));
extern __pid_t fork (void) __attribute__ ((__nothrow__));
extern char *ttyname (int __fd) __attribute__ ((__nothrow__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__));
extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;
extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));






extern char *getlogin (void);








typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;






typedef int __gwchar_t;





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__));


extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__));

uint32_t al_get_allegro_version (void);
int al_run_main (int argc, char **argv, int (*)(int, char **));

typedef struct ALLEGRO_TIMEOUT ALLEGRO_TIMEOUT;
struct ALLEGRO_TIMEOUT {
   uint64_t __pad1__;
   uint64_t __pad2__;
};



double al_get_time (void);
void al_rest (double seconds);
void al_init_timeout (ALLEGRO_TIMEOUT *timeout, double seconds);



typedef struct ALLEGRO_COLOR ALLEGRO_COLOR;

struct ALLEGRO_COLOR
{
   float r, g, b, a;
};




typedef enum ALLEGRO_PIXEL_FORMAT
{
   ALLEGRO_PIXEL_FORMAT_ANY = 0,
   ALLEGRO_PIXEL_FORMAT_ANY_NO_ALPHA,
   ALLEGRO_PIXEL_FORMAT_ANY_WITH_ALPHA,
   ALLEGRO_PIXEL_FORMAT_ANY_15_NO_ALPHA,
   ALLEGRO_PIXEL_FORMAT_ANY_16_NO_ALPHA,
   ALLEGRO_PIXEL_FORMAT_ANY_16_WITH_ALPHA,
   ALLEGRO_PIXEL_FORMAT_ANY_24_NO_ALPHA,
   ALLEGRO_PIXEL_FORMAT_ANY_32_NO_ALPHA,
   ALLEGRO_PIXEL_FORMAT_ANY_32_WITH_ALPHA,
   ALLEGRO_PIXEL_FORMAT_ARGB_8888,
   ALLEGRO_PIXEL_FORMAT_RGBA_8888,
   ALLEGRO_PIXEL_FORMAT_ARGB_4444,
   ALLEGRO_PIXEL_FORMAT_RGB_888,
   ALLEGRO_PIXEL_FORMAT_RGB_565,
   ALLEGRO_PIXEL_FORMAT_RGB_555,
   ALLEGRO_PIXEL_FORMAT_RGBA_5551,
   ALLEGRO_PIXEL_FORMAT_ARGB_1555,
   ALLEGRO_PIXEL_FORMAT_ABGR_8888,
   ALLEGRO_PIXEL_FORMAT_XBGR_8888,
   ALLEGRO_PIXEL_FORMAT_BGR_888,
   ALLEGRO_PIXEL_FORMAT_BGR_565,
   ALLEGRO_PIXEL_FORMAT_BGR_555,
   ALLEGRO_PIXEL_FORMAT_RGBX_8888,
   ALLEGRO_PIXEL_FORMAT_XRGB_8888,
   ALLEGRO_PIXEL_FORMAT_ABGR_F32,
   ALLEGRO_PIXEL_FORMAT_ABGR_8888_LE,
   ALLEGRO_PIXEL_FORMAT_RGBA_4444,
   ALLEGRO_NUM_PIXEL_FORMATS
} ALLEGRO_PIXEL_FORMAT;



ALLEGRO_COLOR al_map_rgb (unsigned char r, unsigned char g, unsigned char b);
ALLEGRO_COLOR al_map_rgba (unsigned char r, unsigned char g, unsigned char b, unsigned char a);
ALLEGRO_COLOR al_map_rgb_f (float r, float g, float b);
ALLEGRO_COLOR al_map_rgba_f (float r, float g, float b, float a);


void al_unmap_rgb (ALLEGRO_COLOR color, unsigned char *r, unsigned char *g, unsigned char *b);
void al_unmap_rgba (ALLEGRO_COLOR color, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
void al_unmap_rgb_f (ALLEGRO_COLOR color, float *r, float *g, float *b);
void al_unmap_rgba_f (ALLEGRO_COLOR color, float *r, float *g, float *b, float *a);


int al_get_pixel_size (int format);
int al_get_pixel_format_bits (int format);







typedef struct ALLEGRO_BITMAP ALLEGRO_BITMAP;





enum {
   ALLEGRO_MEMORY_BITMAP = 0x0001,
   ALLEGRO_KEEP_BITMAP_FORMAT = 0x0002,
   ALLEGRO_FORCE_LOCKING = 0x0004,
   ALLEGRO_NO_PRESERVE_TEXTURE = 0x0008,
   ALLEGRO_ALPHA_TEST = 0x0010,
   _ALLEGRO_INTERNAL_OPENGL = 0x0020,
   ALLEGRO_MIN_LINEAR = 0x0040,
   ALLEGRO_MAG_LINEAR = 0x0080,
   ALLEGRO_MIPMAP = 0x0100,
   ALLEGRO_NO_PREMULTIPLIED_ALPHA = 0x0200,
   ALLEGRO_VIDEO_BITMAP = 0x0400
};


void al_set_new_bitmap_format (int format);
void al_set_new_bitmap_flags (int flags);
int al_get_new_bitmap_format (void);
int al_get_new_bitmap_flags (void);
void al_add_new_bitmap_flag (int flag);

int al_get_bitmap_width (ALLEGRO_BITMAP *bitmap);
int al_get_bitmap_height (ALLEGRO_BITMAP *bitmap);
int al_get_bitmap_format (ALLEGRO_BITMAP *bitmap);
int al_get_bitmap_flags (ALLEGRO_BITMAP *bitmap);

ALLEGRO_BITMAP* al_create_bitmap (int w, int h);
void al_destroy_bitmap (ALLEGRO_BITMAP *bitmap);

void al_put_pixel (int x, int y, ALLEGRO_COLOR color);
void al_put_blended_pixel (int x, int y, ALLEGRO_COLOR color);
ALLEGRO_COLOR al_get_pixel (ALLEGRO_BITMAP *bitmap, int x, int y);


void al_convert_mask_to_alpha (ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR mask_color);


void al_set_clipping_rectangle (int x, int y, int width, int height);
void al_reset_clipping_rectangle (void);
void al_get_clipping_rectangle (int *x, int *y, int *w, int *h);


ALLEGRO_BITMAP * al_create_sub_bitmap (ALLEGRO_BITMAP *parent, int x, int y, int w, int h);
_Bool al_is_sub_bitmap (ALLEGRO_BITMAP *bitmap);
ALLEGRO_BITMAP * al_get_parent_bitmap (ALLEGRO_BITMAP *bitmap);


ALLEGRO_BITMAP * al_clone_bitmap (ALLEGRO_BITMAP *bitmap);
enum {
   ALLEGRO_FLIP_HORIZONTAL = 0x00001,
   ALLEGRO_FLIP_VERTICAL = 0x00002
};


void al_draw_bitmap (ALLEGRO_BITMAP *bitmap, float dx, float dy, int flags);
void al_draw_bitmap_region (ALLEGRO_BITMAP *bitmap, float sx, float sy, float sw, float sh, float dx, float dy, int flags);
void al_draw_scaled_bitmap (ALLEGRO_BITMAP *bitmap, float sx, float sy, float sw, float sh, float dx, float dy, float dw, float dh, int flags);
void al_draw_rotated_bitmap (ALLEGRO_BITMAP *bitmap, float cx, float cy, float dx, float dy, float angle, int flags);
void al_draw_scaled_rotated_bitmap (ALLEGRO_BITMAP *bitmap, float cx, float cy, float dx, float dy, float xscale, float yscale, float angle, int flags);


void al_draw_tinted_bitmap (ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float dx, float dy, int flags);
void al_draw_tinted_bitmap_region (ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float sx, float sy, float sw, float sh, float dx, float dy, int flags);
void al_draw_tinted_scaled_bitmap (ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float sx, float sy, float sw, float sh, float dx, float dy, float dw, float dh, int flags);
void al_draw_tinted_rotated_bitmap (ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float cx, float cy, float dx, float dy, float angle, int flags);
void al_draw_tinted_scaled_rotated_bitmap (ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float cx, float cy, float dx, float dy, float xscale, float yscale, float angle, int flags);
void al_draw_tinted_scaled_rotated_bitmap_region ( ALLEGRO_BITMAP *bitmap, float sx, float sy, float sw, float sh, ALLEGRO_COLOR tint, float cx, float cy, float dx, float dy, float xscale, float yscale, float angle, int flags)




                           ;








typedef struct ALLEGRO_PATH ALLEGRO_PATH;

ALLEGRO_PATH* al_create_path (const char *str);
ALLEGRO_PATH* al_create_path_for_directory (const char *str);
ALLEGRO_PATH* al_clone_path (const ALLEGRO_PATH *path);

int al_get_path_num_components (const ALLEGRO_PATH *path);
const char* al_get_path_component (const ALLEGRO_PATH *path, int i);
void al_replace_path_component (ALLEGRO_PATH *path, int i, const char *s);
void al_remove_path_component (ALLEGRO_PATH *path, int i);
void al_insert_path_component (ALLEGRO_PATH *path, int i, const char *s);
const char* al_get_path_tail (const ALLEGRO_PATH *path);
void al_drop_path_tail (ALLEGRO_PATH *path);
void al_append_path_component (ALLEGRO_PATH *path, const char *s);
_Bool al_join_paths (ALLEGRO_PATH *path, const ALLEGRO_PATH *tail);
_Bool al_rebase_path (const ALLEGRO_PATH *head, ALLEGRO_PATH *tail);
const char* al_path_cstr (const ALLEGRO_PATH *path, char delim);
void al_destroy_path (ALLEGRO_PATH *path);

void al_set_path_drive (ALLEGRO_PATH *path, const char *drive);
const char* al_get_path_drive (const ALLEGRO_PATH *path);

void al_set_path_filename (ALLEGRO_PATH *path, const char *filename);
const char* al_get_path_filename (const ALLEGRO_PATH *path);

const char* al_get_path_extension (const ALLEGRO_PATH *path);
_Bool al_set_path_extension (ALLEGRO_PATH *path, char const *extension);
const char* al_get_path_basename (const ALLEGRO_PATH *path);

_Bool al_make_path_canonical (ALLEGRO_PATH *path);
typedef struct _al_tagbstring ALLEGRO_USTR;



typedef struct _al_tagbstring ALLEGRO_USTR_INFO;



struct _al_tagbstring {
 int mlen;
 int slen;
 unsigned char * data;
};



ALLEGRO_USTR * al_ustr_new (const char *s);
ALLEGRO_USTR * al_ustr_new_from_buffer (const char *s, size_t size);
ALLEGRO_USTR * al_ustr_newf (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void al_ustr_free (ALLEGRO_USTR *us);
const char * al_cstr (const ALLEGRO_USTR *us);
void al_ustr_to_buffer (const ALLEGRO_USTR *us, char *buffer, int size);
char * al_cstr_dup (const ALLEGRO_USTR *us);
ALLEGRO_USTR * al_ustr_dup (const ALLEGRO_USTR *us);
ALLEGRO_USTR * al_ustr_dup_substr (const ALLEGRO_USTR *us, int start_pos, int end_pos)
                                  ;


const ALLEGRO_USTR * al_ustr_empty_string (void);


const ALLEGRO_USTR * al_ref_cstr (ALLEGRO_USTR_INFO *info, const char *s);
const ALLEGRO_USTR * al_ref_buffer (ALLEGRO_USTR_INFO *info, const char *s, size_t size)
                   ;
const ALLEGRO_USTR * al_ref_ustr (ALLEGRO_USTR_INFO *info, const ALLEGRO_USTR *us, int start_pos, int end_pos)
                                                          ;


size_t al_ustr_size (const ALLEGRO_USTR *us);
size_t al_ustr_length (const ALLEGRO_USTR *us);
int al_ustr_offset (const ALLEGRO_USTR *us, int index);
_Bool al_ustr_next (const ALLEGRO_USTR *us, int *pos);
_Bool al_ustr_prev (const ALLEGRO_USTR *us, int *pos);


int32_t al_ustr_get (const ALLEGRO_USTR *us, int pos);
int32_t al_ustr_get_next (const ALLEGRO_USTR *us, int *pos);
int32_t al_ustr_prev_get (const ALLEGRO_USTR *us, int *pos);


_Bool al_ustr_insert (ALLEGRO_USTR *us1, int pos, const ALLEGRO_USTR *us2)
                               ;
_Bool al_ustr_insert_cstr (ALLEGRO_USTR *us, int pos, const char *us2)
                       ;
size_t al_ustr_insert_chr (ALLEGRO_USTR *us, int pos, int32_t c);


_Bool al_ustr_append (ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2);
_Bool al_ustr_append_cstr (ALLEGRO_USTR *us, const char *s);
size_t al_ustr_append_chr (ALLEGRO_USTR *us, int32_t c);
_Bool al_ustr_appendf (ALLEGRO_USTR *us, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)))
           ;
_Bool al_ustr_vappendf (ALLEGRO_USTR *us, const char *fmt, va_list ap)
                  ;


_Bool al_ustr_remove_chr (ALLEGRO_USTR *us, int pos);
_Bool al_ustr_remove_range (ALLEGRO_USTR *us, int start_pos, int end_pos)
                   ;
_Bool al_ustr_truncate (ALLEGRO_USTR *us, int start_pos);
_Bool al_ustr_ltrim_ws (ALLEGRO_USTR *us);
_Bool al_ustr_rtrim_ws (ALLEGRO_USTR *us);
_Bool al_ustr_trim_ws (ALLEGRO_USTR *us);


_Bool al_ustr_assign (ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2);
_Bool al_ustr_assign_substr (ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2, int start_pos, int end_pos)
                                  ;
_Bool al_ustr_assign_cstr (ALLEGRO_USTR *us1, const char *s);


size_t al_ustr_set_chr (ALLEGRO_USTR *us, int pos, int32_t c);
_Bool al_ustr_replace_range (ALLEGRO_USTR *us1, int start_pos1, int end_pos1, const ALLEGRO_USTR *us2)
                                             ;


int al_ustr_find_chr (const ALLEGRO_USTR *us, int start_pos, int32_t c)
                 ;
int al_ustr_rfind_chr (const ALLEGRO_USTR *us, int start_pos, int32_t c)
                 ;
int al_ustr_find_set (const ALLEGRO_USTR *us, int start_pos, const ALLEGRO_USTR *accept)
                                  ;
int al_ustr_find_set_cstr (const ALLEGRO_USTR *us, int start_pos, const char *accept)
                          ;
int al_ustr_find_cset (const ALLEGRO_USTR *us, int start_pos, const ALLEGRO_USTR *reject)
                                  ;
int al_ustr_find_cset_cstr (const ALLEGRO_USTR *us, int start_pos, const char *reject)
                          ;
int al_ustr_find_str (const ALLEGRO_USTR *haystack, int start_pos, const ALLEGRO_USTR *needle)
                                  ;
int al_ustr_find_cstr (const ALLEGRO_USTR *haystack, int start_pos, const char *needle)
                          ;
int al_ustr_rfind_str (const ALLEGRO_USTR *haystack, int start_pos, const ALLEGRO_USTR *needle)
                                  ;
int al_ustr_rfind_cstr (const ALLEGRO_USTR *haystack, int start_pos, const char *needle)
                          ;
_Bool al_ustr_find_replace (ALLEGRO_USTR *us, int start_pos, const ALLEGRO_USTR *find, const ALLEGRO_USTR *replace)
                                                             ;
_Bool al_ustr_find_replace_cstr (ALLEGRO_USTR *us, int start_pos, const char *find, const char *replace)
                                             ;


_Bool al_ustr_equal (const ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2);
int al_ustr_compare (const ALLEGRO_USTR *u, const ALLEGRO_USTR *v);
int al_ustr_ncompare (const ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2, int n)
             ;
_Bool al_ustr_has_prefix (const ALLEGRO_USTR *u, const ALLEGRO_USTR *v);
_Bool al_ustr_has_prefix_cstr (const ALLEGRO_USTR *u, const char *s);
_Bool al_ustr_has_suffix (const ALLEGRO_USTR *u, const ALLEGRO_USTR *v);
_Bool al_ustr_has_suffix_cstr (const ALLEGRO_USTR *us1, const char *s);


size_t al_utf8_width (int32_t c);
size_t al_utf8_encode (char s[], int32_t c);


ALLEGRO_USTR * al_ustr_new_from_utf16 (uint16_t const *s);
size_t al_ustr_size_utf16 (const ALLEGRO_USTR *us);
size_t al_ustr_encode_utf16 (const ALLEGRO_USTR *us, uint16_t *s, size_t n);
size_t al_utf16_width (int c);
size_t al_utf16_encode (uint16_t s[], int32_t c);
typedef struct ALLEGRO_FILE ALLEGRO_FILE;




typedef struct ALLEGRO_FILE_INTERFACE
{
   void * (*fi_fopen) (const char *path, const char *mode);
   void (*fi_fclose) (ALLEGRO_FILE *handle);
   size_t (*fi_fread) (ALLEGRO_FILE *f, void *ptr, size_t size);
   size_t (*fi_fwrite) (ALLEGRO_FILE *f, const void *ptr, size_t size);
   _Bool (*fi_fflush) (ALLEGRO_FILE *f);
   int64_t (*fi_ftell) (ALLEGRO_FILE *f);
   _Bool (*fi_fseek) (ALLEGRO_FILE *f, int64_t offset, int whence);
   _Bool (*fi_feof) (ALLEGRO_FILE *f);
   _Bool (*fi_ferror) (ALLEGRO_FILE *f);
   void (*fi_fclearerr) (ALLEGRO_FILE *f);
   int (*fi_fungetc) (ALLEGRO_FILE *f, int c);
   off_t (*fi_fsize) (ALLEGRO_FILE *f);
} ALLEGRO_FILE_INTERFACE;




typedef enum ALLEGRO_SEEK
{
   ALLEGRO_SEEK_SET = 0,
   ALLEGRO_SEEK_CUR,
   ALLEGRO_SEEK_END
} ALLEGRO_SEEK;



ALLEGRO_FILE* al_fopen (const char *path, const char *mode);
ALLEGRO_FILE* al_fopen_interface (const ALLEGRO_FILE_INTERFACE *vt, const char *path, const char *mode);
ALLEGRO_FILE* al_create_file_handle (const ALLEGRO_FILE_INTERFACE *vt, void *userdata);
void al_fclose (ALLEGRO_FILE *f);
size_t al_fread (ALLEGRO_FILE *f, void *ptr, size_t size);
size_t al_fwrite (ALLEGRO_FILE *f, const void *ptr, size_t size);
_Bool al_fflush (ALLEGRO_FILE *f);
int64_t al_ftell (ALLEGRO_FILE *f);
_Bool al_fseek (ALLEGRO_FILE *f, int64_t offset, int whence);
_Bool al_feof (ALLEGRO_FILE *f);
_Bool al_ferror (ALLEGRO_FILE *f);
void al_fclearerr (ALLEGRO_FILE *f);
int al_fungetc (ALLEGRO_FILE *f, int c);
int64_t al_fsize (ALLEGRO_FILE *f);


int al_fgetc (ALLEGRO_FILE *f);
int al_fputc (ALLEGRO_FILE *f, int c);
int16_t al_fread16le (ALLEGRO_FILE *f);
int16_t al_fread16be (ALLEGRO_FILE *f);
size_t al_fwrite16le (ALLEGRO_FILE *f, int16_t w);
size_t al_fwrite16be (ALLEGRO_FILE *f, int16_t w);
int32_t al_fread32le (ALLEGRO_FILE *f);
int32_t al_fread32be (ALLEGRO_FILE *f);
size_t al_fwrite32le (ALLEGRO_FILE *f, int32_t l);
size_t al_fwrite32be (ALLEGRO_FILE *f, int32_t l);
char* al_fgets (ALLEGRO_FILE *f, char * const p, size_t max);
ALLEGRO_USTR * al_fget_ustr (ALLEGRO_FILE *f);
int al_fputs (ALLEGRO_FILE *f, const char *p);


ALLEGRO_FILE* al_fopen_fd (int fd, const char *mode);
ALLEGRO_FILE* al_make_temp_file (const char *tmpl, ALLEGRO_PATH **ret_path)
                               ;


ALLEGRO_FILE* al_fopen_slice (ALLEGRO_FILE *fp, size_t initial_size, const char *mode)
                                             ;


const ALLEGRO_FILE_INTERFACE * al_get_new_file_interface (void);
void al_set_new_file_interface (const ALLEGRO_FILE_INTERFACE * file_interface)
                      ;
void al_set_standard_file_interface (void);


void * al_get_file_userdata (ALLEGRO_FILE *f);





typedef ALLEGRO_BITMAP *(*ALLEGRO_IIO_LOADER_FUNCTION)(const char *filename);
typedef ALLEGRO_BITMAP *(*ALLEGRO_IIO_FS_LOADER_FUNCTION)(ALLEGRO_FILE *fp);
typedef _Bool (*ALLEGRO_IIO_SAVER_FUNCTION)(const char *filename, ALLEGRO_BITMAP *bitmap);
typedef _Bool (*ALLEGRO_IIO_FS_SAVER_FUNCTION)(ALLEGRO_FILE *fp, ALLEGRO_BITMAP *bitmap);

_Bool al_register_bitmap_loader (const char *ext, ALLEGRO_IIO_LOADER_FUNCTION loader);
_Bool al_register_bitmap_saver (const char *ext, ALLEGRO_IIO_SAVER_FUNCTION saver);
_Bool al_register_bitmap_loader_f (const char *ext, ALLEGRO_IIO_FS_LOADER_FUNCTION fs_loader);
_Bool al_register_bitmap_saver_f (const char *ext, ALLEGRO_IIO_FS_SAVER_FUNCTION fs_saver);
ALLEGRO_BITMAP * al_load_bitmap (const char *filename);
ALLEGRO_BITMAP * al_load_bitmap_f (ALLEGRO_FILE *fp, const char *ident);
_Bool al_save_bitmap (const char *filename, ALLEGRO_BITMAP *bitmap);
_Bool al_save_bitmap_f (ALLEGRO_FILE *fp, const char *ident, ALLEGRO_BITMAP *bitmap);
enum {
   ALLEGRO_LOCK_READWRITE = 0,
   ALLEGRO_LOCK_READONLY = 1,
   ALLEGRO_LOCK_WRITEONLY = 2
};




typedef struct ALLEGRO_LOCKED_REGION ALLEGRO_LOCKED_REGION;
struct ALLEGRO_LOCKED_REGION {
   void *data;
   int format;
   int pitch;
   int pixel_size;
};


ALLEGRO_LOCKED_REGION* al_lock_bitmap (ALLEGRO_BITMAP *bitmap, int format, int flags);
ALLEGRO_LOCKED_REGION* al_lock_bitmap_region (ALLEGRO_BITMAP *bitmap, int x, int y, int width, int height, int format, int flags);
void al_unlock_bitmap (ALLEGRO_BITMAP *bitmap);
_Bool al_is_bitmap_locked (ALLEGRO_BITMAP *bitmap);
enum ALLEGRO_BLEND_MODE {
   ALLEGRO_ZERO = 0,
   ALLEGRO_ONE = 1,
   ALLEGRO_ALPHA = 2,
   ALLEGRO_INVERSE_ALPHA = 3,
   ALLEGRO_SRC_COLOR = 4,
   ALLEGRO_DEST_COLOR = 5,
   ALLEGRO_INVERSE_SRC_COLOR = 6,
   ALLEGRO_INVERSE_DEST_COLOR = 7,
   ALLEGRO_NUM_BLEND_MODES
};

enum ALLEGRO_BLEND_OPERATIONS {
   ALLEGRO_ADD = 0,
   ALLEGRO_SRC_MINUS_DEST = 1,
   ALLEGRO_DEST_MINUS_SRC = 2,
   ALLEGRO_NUM_BLEND_OPERATIONS
};


void al_set_blender (int op, int source, int dest);
void al_get_blender (int *op, int *source, int *dest);
void al_set_separate_blender (int op, int source, int dest, int alpha_op, int alpha_source, int alpha_dest)
                                                   ;
void al_get_separate_blender (int *op, int *source, int *dest, int *alpha_op, int *alpha_src, int *alpha_dest)
                                                   ;

typedef struct ALLEGRO_CONFIG ALLEGRO_CONFIG;



typedef struct ALLEGRO_CONFIG_SECTION ALLEGRO_CONFIG_SECTION;



typedef struct ALLEGRO_CONFIG_ENTRY ALLEGRO_CONFIG_ENTRY;

ALLEGRO_CONFIG * al_create_config (void);
void al_add_config_section (ALLEGRO_CONFIG *config, const char *name);
void al_set_config_value (ALLEGRO_CONFIG *config, const char *section, const char *key, const char *value);
void al_add_config_comment (ALLEGRO_CONFIG *config, const char *section, const char *comment);
const char* al_get_config_value (const ALLEGRO_CONFIG *config, const char *section, const char *key);
ALLEGRO_CONFIG* al_load_config_file (const char *filename);
ALLEGRO_CONFIG* al_load_config_file_f (ALLEGRO_FILE *filename);
_Bool al_save_config_file (const char *filename, const ALLEGRO_CONFIG *config);
_Bool al_save_config_file_f (ALLEGRO_FILE *file, const ALLEGRO_CONFIG *config);
void al_merge_config_into (ALLEGRO_CONFIG *master, const ALLEGRO_CONFIG *add);
ALLEGRO_CONFIG * al_merge_config (const ALLEGRO_CONFIG *cfg1, const ALLEGRO_CONFIG *cfg2);
void al_destroy_config (ALLEGRO_CONFIG *config);

char const * al_get_first_config_section (ALLEGRO_CONFIG const *config, ALLEGRO_CONFIG_SECTION **iterator);
char const * al_get_next_config_section (ALLEGRO_CONFIG_SECTION **iterator);
char const * al_get_first_config_entry (ALLEGRO_CONFIG const *config, char const *section, ALLEGRO_CONFIG_ENTRY **iterator)
                                  ;
char const * al_get_next_config_entry (ALLEGRO_CONFIG_ENTRY **iterator);



extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));









_Bool _al_trace_prefix (char const *channel, int level, char const *file, int line, char const *function)
                                                     ;

void _al_trace_suffix (const char *msg, ...) __attribute__ ((format (printf, 1, 2)));
extern void (*_al_user_assert_handler) (char const *expr, char const *file, int line, char const *func)
                               ;

void al_register_assert_handler (void (*handler)(char const *expr, char const *file, int line, char const *func))
                                                  ;





typedef unsigned int ALLEGRO_EVENT_TYPE;

enum
{
   ALLEGRO_EVENT_JOYSTICK_AXIS = 1,
   ALLEGRO_EVENT_JOYSTICK_BUTTON_DOWN = 2,
   ALLEGRO_EVENT_JOYSTICK_BUTTON_UP = 3,
   ALLEGRO_EVENT_JOYSTICK_CONFIGURATION = 4,

   ALLEGRO_EVENT_KEY_DOWN = 10,
   ALLEGRO_EVENT_KEY_CHAR = 11,
   ALLEGRO_EVENT_KEY_UP = 12,

   ALLEGRO_EVENT_MOUSE_AXES = 20,
   ALLEGRO_EVENT_MOUSE_BUTTON_DOWN = 21,
   ALLEGRO_EVENT_MOUSE_BUTTON_UP = 22,
   ALLEGRO_EVENT_MOUSE_ENTER_DISPLAY = 23,
   ALLEGRO_EVENT_MOUSE_LEAVE_DISPLAY = 24,
   ALLEGRO_EVENT_MOUSE_WARPED = 25,

   ALLEGRO_EVENT_TIMER = 30,

   ALLEGRO_EVENT_DISPLAY_EXPOSE = 40,
   ALLEGRO_EVENT_DISPLAY_RESIZE = 41,
   ALLEGRO_EVENT_DISPLAY_CLOSE = 42,
   ALLEGRO_EVENT_DISPLAY_LOST = 43,
   ALLEGRO_EVENT_DISPLAY_FOUND = 44,
   ALLEGRO_EVENT_DISPLAY_SWITCH_IN = 45,
   ALLEGRO_EVENT_DISPLAY_SWITCH_OUT = 46,
   ALLEGRO_EVENT_DISPLAY_ORIENTATION = 47
};
typedef struct ALLEGRO_EVENT_SOURCE ALLEGRO_EVENT_SOURCE;

struct ALLEGRO_EVENT_SOURCE
{
   int __pad[32];
};
typedef struct ALLEGRO_ANY_EVENT
{
   ALLEGRO_EVENT_TYPE type; ALLEGRO_EVENT_SOURCE *source; double timestamp;
} ALLEGRO_ANY_EVENT;


typedef struct ALLEGRO_DISPLAY_EVENT
{
   ALLEGRO_EVENT_TYPE type; struct ALLEGRO_DISPLAY *source; double timestamp;
   int x, y;
   int width, height;
   int orientation;
} ALLEGRO_DISPLAY_EVENT;


typedef struct ALLEGRO_JOYSTICK_EVENT
{
   ALLEGRO_EVENT_TYPE type; struct ALLEGRO_JOYSTICK *source; double timestamp;
   struct ALLEGRO_JOYSTICK *id;
   int stick;
   int axis;
   float pos;
   int button;
} ALLEGRO_JOYSTICK_EVENT;



typedef struct ALLEGRO_KEYBOARD_EVENT
{
   ALLEGRO_EVENT_TYPE type; struct ALLEGRO_KEYBOARD *source; double timestamp;
   struct ALLEGRO_DISPLAY *display;
   int keycode;
   int unichar;
   unsigned int modifiers;
   _Bool repeat;
} ALLEGRO_KEYBOARD_EVENT;



typedef struct ALLEGRO_MOUSE_EVENT
{
   ALLEGRO_EVENT_TYPE type; struct ALLEGRO_MOUSE *source; double timestamp;
   struct ALLEGRO_DISPLAY *display;






   int x, y, z, w;
   int dx, dy, dz, dw;
   unsigned int button;
   float pressure;
} ALLEGRO_MOUSE_EVENT;



typedef struct ALLEGRO_TIMER_EVENT
{
   ALLEGRO_EVENT_TYPE type; struct ALLEGRO_TIMER *source; double timestamp;
   int64_t count;
   double error;
} ALLEGRO_TIMER_EVENT;





typedef struct ALLEGRO_USER_EVENT ALLEGRO_USER_EVENT;

struct ALLEGRO_USER_EVENT
{
   ALLEGRO_EVENT_TYPE type; struct ALLEGRO_EVENT_SOURCE *source; double timestamp;
   struct ALLEGRO_USER_EVENT_DESCRIPTOR *__internal__descr;
   intptr_t data1;
   intptr_t data2;
   intptr_t data3;
   intptr_t data4;
};





typedef union ALLEGRO_EVENT ALLEGRO_EVENT;

union ALLEGRO_EVENT
{

   ALLEGRO_EVENT_TYPE type;




   ALLEGRO_ANY_EVENT any;
   ALLEGRO_DISPLAY_EVENT display;
   ALLEGRO_JOYSTICK_EVENT joystick;
   ALLEGRO_KEYBOARD_EVENT keyboard;
   ALLEGRO_MOUSE_EVENT mouse;
   ALLEGRO_TIMER_EVENT timer;
   ALLEGRO_USER_EVENT user;
};





void al_init_user_event_source (ALLEGRO_EVENT_SOURCE *);
void al_destroy_user_event_source (ALLEGRO_EVENT_SOURCE *);



_Bool al_emit_user_event (ALLEGRO_EVENT_SOURCE *, ALLEGRO_EVENT *, void (*dtor)(ALLEGRO_USER_EVENT *))
                                                                       ;
void al_unref_user_event (ALLEGRO_USER_EVENT *);
void al_set_event_source_data (ALLEGRO_EVENT_SOURCE*, intptr_t data);
intptr_t al_get_event_source_data (const ALLEGRO_EVENT_SOURCE*);







typedef struct ALLEGRO_EVENT_QUEUE ALLEGRO_EVENT_QUEUE;

ALLEGRO_EVENT_QUEUE* al_create_event_queue (void);
void al_destroy_event_queue (ALLEGRO_EVENT_QUEUE*);
void al_register_event_source (ALLEGRO_EVENT_QUEUE*, ALLEGRO_EVENT_SOURCE*);
void al_unregister_event_source (ALLEGRO_EVENT_QUEUE*, ALLEGRO_EVENT_SOURCE*);
_Bool al_is_event_queue_empty (ALLEGRO_EVENT_QUEUE*);
_Bool al_get_next_event (ALLEGRO_EVENT_QUEUE*, ALLEGRO_EVENT *ret_event);
_Bool al_peek_next_event (ALLEGRO_EVENT_QUEUE*, ALLEGRO_EVENT *ret_event);
_Bool al_drop_next_event (ALLEGRO_EVENT_QUEUE*);
void al_flush_event_queue (ALLEGRO_EVENT_QUEUE*);
void al_wait_for_event (ALLEGRO_EVENT_QUEUE*, ALLEGRO_EVENT *ret_event)
                                                            ;
_Bool al_wait_for_event_timed (ALLEGRO_EVENT_QUEUE*, ALLEGRO_EVENT *ret_event, float secs)

                                                    ;
_Bool al_wait_for_event_until (ALLEGRO_EVENT_QUEUE *queue, ALLEGRO_EVENT *ret_event, ALLEGRO_TIMEOUT *timeout)

                                                                  ;






enum {
   ALLEGRO_WINDOWED = 1 << 0,
   ALLEGRO_FULLSCREEN = 1 << 1,
   ALLEGRO_OPENGL = 1 << 2,
   ALLEGRO_DIRECT3D_INTERNAL = 1 << 3,
   ALLEGRO_RESIZABLE = 1 << 4,
   ALLEGRO_FRAMELESS = 1 << 5,
   ALLEGRO_NOFRAME = ALLEGRO_FRAMELESS,
   ALLEGRO_GENERATE_EXPOSE_EVENTS = 1 << 6,
   ALLEGRO_OPENGL_3_0 = 1 << 7,
   ALLEGRO_OPENGL_FORWARD_COMPATIBLE = 1 << 8,
   ALLEGRO_FULLSCREEN_WINDOW = 1 << 9,
   ALLEGRO_MINIMIZED = 1 << 10
};





enum ALLEGRO_DISPLAY_OPTIONS {
   ALLEGRO_RED_SIZE,
   ALLEGRO_GREEN_SIZE,
   ALLEGRO_BLUE_SIZE,
   ALLEGRO_ALPHA_SIZE,
   ALLEGRO_RED_SHIFT,
   ALLEGRO_GREEN_SHIFT,
   ALLEGRO_BLUE_SHIFT,
   ALLEGRO_ALPHA_SHIFT,
   ALLEGRO_ACC_RED_SIZE,
   ALLEGRO_ACC_GREEN_SIZE,
   ALLEGRO_ACC_BLUE_SIZE,
   ALLEGRO_ACC_ALPHA_SIZE,
   ALLEGRO_STEREO,
   ALLEGRO_AUX_BUFFERS,
   ALLEGRO_COLOR_SIZE,
   ALLEGRO_DEPTH_SIZE,
   ALLEGRO_STENCIL_SIZE,
   ALLEGRO_SAMPLE_BUFFERS,
   ALLEGRO_SAMPLES,
   ALLEGRO_RENDER_METHOD,
   ALLEGRO_FLOAT_COLOR,
   ALLEGRO_FLOAT_DEPTH,
   ALLEGRO_SINGLE_BUFFER,
   ALLEGRO_SWAP_METHOD,
   ALLEGRO_COMPATIBLE_DISPLAY,
   ALLEGRO_UPDATE_DISPLAY_REGION,
   ALLEGRO_VSYNC,
   ALLEGRO_MAX_BITMAP_SIZE,
   ALLEGRO_SUPPORT_NPOT_BITMAP,
   ALLEGRO_CAN_DRAW_INTO_BITMAP,
   ALLEGRO_SUPPORT_SEPARATE_ALPHA,
   ALLEGRO_DISPLAY_OPTIONS_COUNT
};

enum
{
   ALLEGRO_DONTCARE,
   ALLEGRO_REQUIRE,
   ALLEGRO_SUGGEST
};


enum ALLEGRO_DISPLAY_ORIENTATION
{
   ALLEGRO_DISPLAY_ORIENTATION_0_DEGREES,
   ALLEGRO_DISPLAY_ORIENTATION_90_DEGREES,
   ALLEGRO_DISPLAY_ORIENTATION_180_DEGREES,
   ALLEGRO_DISPLAY_ORIENTATION_270_DEGREES,
   ALLEGRO_DISPLAY_ORIENTATION_FACE_UP,
   ALLEGRO_DISPLAY_ORIENTATION_FACE_DOWN
};




typedef struct ALLEGRO_DISPLAY ALLEGRO_DISPLAY;


void al_set_new_display_refresh_rate (int refresh_rate);
void al_set_new_display_flags (int flags);
int al_get_new_display_refresh_rate (void);
int al_get_new_display_flags (void);

int al_get_display_width (ALLEGRO_DISPLAY *display);
int al_get_display_height (ALLEGRO_DISPLAY *display);
int al_get_display_format (ALLEGRO_DISPLAY *display);
int al_get_display_refresh_rate (ALLEGRO_DISPLAY *display);
int al_get_display_flags (ALLEGRO_DISPLAY *display);
_Bool al_set_display_flag (ALLEGRO_DISPLAY *display, int flag, _Bool onoff);
_Bool al_toggle_display_flag (ALLEGRO_DISPLAY *display, int flag, _Bool onoff);

ALLEGRO_DISPLAY* al_create_display (int w, int h);
void al_destroy_display (ALLEGRO_DISPLAY *display);
ALLEGRO_DISPLAY* al_get_current_display (void);
void al_set_target_bitmap (ALLEGRO_BITMAP *bitmap);
void al_set_target_backbuffer (ALLEGRO_DISPLAY *display);
ALLEGRO_BITMAP* al_get_backbuffer (ALLEGRO_DISPLAY *display);
ALLEGRO_BITMAP* al_get_target_bitmap (void);

_Bool al_acknowledge_resize (ALLEGRO_DISPLAY *display);
_Bool al_resize_display (ALLEGRO_DISPLAY *display, int width, int height);
void al_flip_display (void);
void al_update_display_region (int x, int y, int width, int height);
_Bool al_is_compatible_bitmap (ALLEGRO_BITMAP *bitmap);

_Bool al_wait_for_vsync (void);

ALLEGRO_EVENT_SOURCE * al_get_display_event_source (ALLEGRO_DISPLAY *display);

void al_set_display_icon (ALLEGRO_DISPLAY *display, ALLEGRO_BITMAP *icon);
void al_set_display_icons (ALLEGRO_DISPLAY *display, int num_icons, ALLEGRO_BITMAP *icons[]);


int al_get_new_display_adapter (void);
void al_set_new_display_adapter (int adapter);
void al_set_new_window_position (int x, int y);
void al_get_new_window_position (int *x, int *y);
void al_set_window_position (ALLEGRO_DISPLAY *display, int x, int y);
void al_get_window_position (ALLEGRO_DISPLAY *display, int *x, int *y);

void al_set_window_title (ALLEGRO_DISPLAY *display, const char *title);


void al_set_new_display_option (int option, int value, int importance);
int al_get_new_display_option (int option, int *importance);
void al_reset_new_display_options (void);
int al_get_display_option (ALLEGRO_DISPLAY *display, int option);


void al_hold_bitmap_drawing (_Bool hold);
_Bool al_is_bitmap_drawing_held (void);
void al_clear_to_color (ALLEGRO_COLOR color);
void al_draw_pixel (float x, float y, ALLEGRO_COLOR color);
int al_get_errno (void);
void al_set_errno (int errnum);


typedef int32_t al_fixed;

extern const al_fixed al_fixtorad_r;
extern const al_fixed al_radtofix_r;
al_fixed al_fixsqrt (al_fixed x);
al_fixed al_fixhypot (al_fixed x, al_fixed y);
al_fixed al_fixatan (al_fixed x);
al_fixed al_fixatan2 (al_fixed y, al_fixed x);

extern al_fixed _al_fix_cos_tbl[];
extern al_fixed _al_fix_tan_tbl[];
extern al_fixed _al_fix_acos_tbl[];





extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_ftofix (double x); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_ftofix (double x) { if (x > 32767.0) { al_set_errno(34); return 0x7FFFFFFF; } if (x < -32767.0) { al_set_errno(34); return -0x7FFFFFFF; } return (al_fixed)(x * 65536.0 + (x < 0 ? -0.5 : 0.5)); }
extern __inline__ __attribute__((__gnu_inline__)) double al_fixtof (al_fixed x); extern __inline__ __attribute__((__gnu_inline__)) double al_fixtof (al_fixed x) { return (double)x / 65536.0; }





extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixadd (al_fixed x, al_fixed y); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixadd (al_fixed x, al_fixed y) { al_fixed result = x + y; if (result >= 0) { if ((x < 0) && (y < 0)) { al_set_errno(34); return -0x7FFFFFFF; } else return result; } else { if ((x > 0) && (y > 0)) { al_set_errno(34); return 0x7FFFFFFF; } else return result; } }
extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixsub (al_fixed x, al_fixed y); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixsub (al_fixed x, al_fixed y) { al_fixed result = x - y; if (result >= 0) { if ((x < 0) && (y > 0)) { al_set_errno(34); return -0x7FFFFFFF; } else return result; } else { if ((x > 0) && (y < 0)) { al_set_errno(34); return 0x7FFFFFFF; } else return result; } }
   extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixmul (al_fixed x, al_fixed y); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixmul (al_fixed x, al_fixed y) { long long lx = x; long long ly = y; long long lres = (lx*ly); if (lres > 0x7FFFFFFF0000LL) { al_set_errno(34); return 0x7FFFFFFF; } else if (lres < -0x7FFFFFFF0000LL) { al_set_errno(34); return 0x80000000; } else { int res = lres >> 16; return res; } }
extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixdiv (al_fixed x, al_fixed y); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixdiv (al_fixed x, al_fixed y) { if (y == 0) { al_set_errno(34); return (x < 0) ? -0x7FFFFFFF : 0x7FFFFFFF; } else return al_ftofix(al_fixtof(x) / al_fixtof(y)); }
extern __inline__ __attribute__((__gnu_inline__)) int al_fixfloor (al_fixed x); extern __inline__ __attribute__((__gnu_inline__)) int al_fixfloor (al_fixed x) { if (x >= 0) return (x >> 16); else return ~((~x) >> 16); }
extern __inline__ __attribute__((__gnu_inline__)) int al_fixceil (al_fixed x); extern __inline__ __attribute__((__gnu_inline__)) int al_fixceil (al_fixed x) { if (x > 0x7FFF0000) { al_set_errno(34); return 0x7FFF; } return al_fixfloor(x + 0xFFFF); }
extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_itofix (int x); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_itofix (int x) { return x << 16; }





extern __inline__ __attribute__((__gnu_inline__)) int al_fixtoi (al_fixed x); extern __inline__ __attribute__((__gnu_inline__)) int al_fixtoi (al_fixed x) { return al_fixfloor(x) + ((x & 0x8000) >> 15); }





extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixcos (al_fixed x); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixcos (al_fixed x) { return _al_fix_cos_tbl[((x + 0x4000) >> 15) & 0x1FF]; }





extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixsin (al_fixed x); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixsin (al_fixed x) { return _al_fix_cos_tbl[((x - 0x400000 + 0x4000) >> 15) & 0x1FF]; }





extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixtan (al_fixed x); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixtan (al_fixed x) { return _al_fix_tan_tbl[((x + 0x4000) >> 15) & 0xFF]; }





extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixacos (al_fixed x); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixacos (al_fixed x) { if ((x < -65536) || (x > 65536)) { al_set_errno(33); return 0; } return _al_fix_acos_tbl[(x+65536+127)>>8]; }
extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixasin (al_fixed x); extern __inline__ __attribute__((__gnu_inline__)) al_fixed al_fixasin (al_fixed x) { if ((x < -65536) || (x > 65536)) { al_set_errno(33); return 0; } return 0x00400000 - _al_fix_acos_tbl[(x+65536+127)>>8]; }
typedef struct ALLEGRO_FS_ENTRY ALLEGRO_FS_ENTRY;

struct ALLEGRO_FS_ENTRY {
   struct ALLEGRO_FS_INTERFACE const *vtable;
};




typedef enum ALLEGRO_FILE_MODE
{
   ALLEGRO_FILEMODE_READ = 1,
   ALLEGRO_FILEMODE_WRITE = 1 << 1,
   ALLEGRO_FILEMODE_EXECUTE = 1 << 2,
   ALLEGRO_FILEMODE_HIDDEN = 1 << 3,
   ALLEGRO_FILEMODE_ISFILE = 1 << 4,
   ALLEGRO_FILEMODE_ISDIR = 1 << 5
} ALLEGRO_FILE_MODE;
typedef struct ALLEGRO_FS_INTERFACE ALLEGRO_FS_INTERFACE;

struct ALLEGRO_FS_INTERFACE {
   ALLEGRO_FS_ENTRY * (*fs_create_entry) (const char *path);
   void (*fs_destroy_entry) (ALLEGRO_FS_ENTRY *e);
   const char * (*fs_entry_name) (ALLEGRO_FS_ENTRY *e);
   _Bool (*fs_update_entry) (ALLEGRO_FS_ENTRY *e);
   uint32_t (*fs_entry_mode) (ALLEGRO_FS_ENTRY *e);
   time_t (*fs_entry_atime) (ALLEGRO_FS_ENTRY *e);
   time_t (*fs_entry_mtime) (ALLEGRO_FS_ENTRY *e);
   time_t (*fs_entry_ctime) (ALLEGRO_FS_ENTRY *e);
   off_t (*fs_entry_size) (ALLEGRO_FS_ENTRY *e);
   _Bool (*fs_entry_exists) (ALLEGRO_FS_ENTRY *e);
   _Bool (*fs_remove_entry) (ALLEGRO_FS_ENTRY *e);

   _Bool (*fs_open_directory) (ALLEGRO_FS_ENTRY *e);
   ALLEGRO_FS_ENTRY * (*fs_read_directory) (ALLEGRO_FS_ENTRY *e);
   _Bool (*fs_close_directory) (ALLEGRO_FS_ENTRY *e);

   _Bool (*fs_filename_exists) (const char *path);
   _Bool (*fs_remove_filename) (const char *path);
   char * (*fs_get_current_directory) (void);
   _Bool (*fs_change_directory) (const char *path);
   _Bool (*fs_make_directory) (const char *path);

   ALLEGRO_FILE * (*fs_open_file) (ALLEGRO_FS_ENTRY *e, const char *mode)
                                                                      ;
};

ALLEGRO_FS_ENTRY * al_create_fs_entry (const char *path);
void al_destroy_fs_entry (ALLEGRO_FS_ENTRY *e);
const char * al_get_fs_entry_name (ALLEGRO_FS_ENTRY *e);
_Bool al_update_fs_entry (ALLEGRO_FS_ENTRY *e);
uint32_t al_get_fs_entry_mode (ALLEGRO_FS_ENTRY *e);
time_t al_get_fs_entry_atime (ALLEGRO_FS_ENTRY *e);
time_t al_get_fs_entry_mtime (ALLEGRO_FS_ENTRY *e);
time_t al_get_fs_entry_ctime (ALLEGRO_FS_ENTRY *e);
off_t al_get_fs_entry_size (ALLEGRO_FS_ENTRY *e);
_Bool al_fs_entry_exists (ALLEGRO_FS_ENTRY *e);
_Bool al_remove_fs_entry (ALLEGRO_FS_ENTRY *e);

_Bool al_open_directory (ALLEGRO_FS_ENTRY *e);
ALLEGRO_FS_ENTRY * al_read_directory (ALLEGRO_FS_ENTRY *e);
_Bool al_close_directory (ALLEGRO_FS_ENTRY *e);

_Bool al_filename_exists (const char *path);
_Bool al_remove_filename (const char *path);
char * al_get_current_directory (void);
_Bool al_change_directory (const char *path);
_Bool al_make_directory (const char *path);

ALLEGRO_FILE * al_open_fs_entry (ALLEGRO_FS_ENTRY *e, const char *mode)
                                                                      ;



const ALLEGRO_FS_INTERFACE * al_get_fs_interface (void);
void al_set_fs_interface (const ALLEGRO_FS_INTERFACE *vtable);
void al_set_standard_fs_interface (void);
typedef struct ALLEGRO_DISPLAY_MODE
{
   int width;
   int height;
   int format;
   int refresh_rate;
} ALLEGRO_DISPLAY_MODE;


int al_get_num_display_modes (void);
ALLEGRO_DISPLAY_MODE* al_get_display_mode (int index, ALLEGRO_DISPLAY_MODE *mode)
                                    ;
typedef struct ALLEGRO_JOYSTICK ALLEGRO_JOYSTICK;





typedef struct ALLEGRO_JOYSTICK_STATE ALLEGRO_JOYSTICK_STATE;

struct ALLEGRO_JOYSTICK_STATE
{
   struct {
      float axis[3];
   } stick[8];
   int button[32];
};




enum ALLEGRO_JOYFLAGS
{
   ALLEGRO_JOYFLAG_DIGITAL = 0x01,
   ALLEGRO_JOYFLAG_ANALOGUE = 0x02
};



_Bool al_install_joystick (void);
void al_uninstall_joystick (void);
_Bool al_is_joystick_installed (void);
_Bool al_reconfigure_joysticks (void);

int al_get_num_joysticks (void);
ALLEGRO_JOYSTICK * al_get_joystick (int joyn);
void al_release_joystick (ALLEGRO_JOYSTICK *);
_Bool al_get_joystick_active (ALLEGRO_JOYSTICK *);
const char* al_get_joystick_name (ALLEGRO_JOYSTICK *);

int al_get_joystick_num_sticks (ALLEGRO_JOYSTICK *);
int al_get_joystick_stick_flags (ALLEGRO_JOYSTICK *, int stick);
const char* al_get_joystick_stick_name (ALLEGRO_JOYSTICK *, int stick);

int al_get_joystick_num_axes (ALLEGRO_JOYSTICK *, int stick);
const char* al_get_joystick_axis_name (ALLEGRO_JOYSTICK *, int stick, int axis);

int al_get_joystick_num_buttons (ALLEGRO_JOYSTICK *);
const char* al_get_joystick_button_name (ALLEGRO_JOYSTICK *, int buttonn);

void al_get_joystick_state (ALLEGRO_JOYSTICK *, ALLEGRO_JOYSTICK_STATE *ret_state);

ALLEGRO_EVENT_SOURCE * al_get_joystick_event_source (void);
enum
{
   ALLEGRO_KEY_A = 1,
   ALLEGRO_KEY_B = 2,
   ALLEGRO_KEY_C = 3,
   ALLEGRO_KEY_D = 4,
   ALLEGRO_KEY_E = 5,
   ALLEGRO_KEY_F = 6,
   ALLEGRO_KEY_G = 7,
   ALLEGRO_KEY_H = 8,
   ALLEGRO_KEY_I = 9,
   ALLEGRO_KEY_J = 10,
   ALLEGRO_KEY_K = 11,
   ALLEGRO_KEY_L = 12,
   ALLEGRO_KEY_M = 13,
   ALLEGRO_KEY_N = 14,
   ALLEGRO_KEY_O = 15,
   ALLEGRO_KEY_P = 16,
   ALLEGRO_KEY_Q = 17,
   ALLEGRO_KEY_R = 18,
   ALLEGRO_KEY_S = 19,
   ALLEGRO_KEY_T = 20,
   ALLEGRO_KEY_U = 21,
   ALLEGRO_KEY_V = 22,
   ALLEGRO_KEY_W = 23,
   ALLEGRO_KEY_X = 24,
   ALLEGRO_KEY_Y = 25,
   ALLEGRO_KEY_Z = 26,

   ALLEGRO_KEY_0 = 27,
   ALLEGRO_KEY_1 = 28,
   ALLEGRO_KEY_2 = 29,
   ALLEGRO_KEY_3 = 30,
   ALLEGRO_KEY_4 = 31,
   ALLEGRO_KEY_5 = 32,
   ALLEGRO_KEY_6 = 33,
   ALLEGRO_KEY_7 = 34,
   ALLEGRO_KEY_8 = 35,
   ALLEGRO_KEY_9 = 36,

   ALLEGRO_KEY_PAD_0 = 37,
   ALLEGRO_KEY_PAD_1 = 38,
   ALLEGRO_KEY_PAD_2 = 39,
   ALLEGRO_KEY_PAD_3 = 40,
   ALLEGRO_KEY_PAD_4 = 41,
   ALLEGRO_KEY_PAD_5 = 42,
   ALLEGRO_KEY_PAD_6 = 43,
   ALLEGRO_KEY_PAD_7 = 44,
   ALLEGRO_KEY_PAD_8 = 45,
   ALLEGRO_KEY_PAD_9 = 46,

   ALLEGRO_KEY_F1 = 47,
   ALLEGRO_KEY_F2 = 48,
   ALLEGRO_KEY_F3 = 49,
   ALLEGRO_KEY_F4 = 50,
   ALLEGRO_KEY_F5 = 51,
   ALLEGRO_KEY_F6 = 52,
   ALLEGRO_KEY_F7 = 53,
   ALLEGRO_KEY_F8 = 54,
   ALLEGRO_KEY_F9 = 55,
   ALLEGRO_KEY_F10 = 56,
   ALLEGRO_KEY_F11 = 57,
   ALLEGRO_KEY_F12 = 58,

   ALLEGRO_KEY_ESCAPE = 59,
   ALLEGRO_KEY_TILDE = 60,
   ALLEGRO_KEY_MINUS = 61,
   ALLEGRO_KEY_EQUALS = 62,
   ALLEGRO_KEY_BACKSPACE = 63,
   ALLEGRO_KEY_TAB = 64,
   ALLEGRO_KEY_OPENBRACE = 65,
   ALLEGRO_KEY_CLOSEBRACE = 66,
   ALLEGRO_KEY_ENTER = 67,
   ALLEGRO_KEY_SEMICOLON = 68,
   ALLEGRO_KEY_QUOTE = 69,
   ALLEGRO_KEY_BACKSLASH = 70,
   ALLEGRO_KEY_BACKSLASH2 = 71,
   ALLEGRO_KEY_COMMA = 72,
   ALLEGRO_KEY_FULLSTOP = 73,
   ALLEGRO_KEY_SLASH = 74,
   ALLEGRO_KEY_SPACE = 75,

   ALLEGRO_KEY_INSERT = 76,
   ALLEGRO_KEY_DELETE = 77,
   ALLEGRO_KEY_HOME = 78,
   ALLEGRO_KEY_END = 79,
   ALLEGRO_KEY_PGUP = 80,
   ALLEGRO_KEY_PGDN = 81,
   ALLEGRO_KEY_LEFT = 82,
   ALLEGRO_KEY_RIGHT = 83,
   ALLEGRO_KEY_UP = 84,
   ALLEGRO_KEY_DOWN = 85,

   ALLEGRO_KEY_PAD_SLASH = 86,
   ALLEGRO_KEY_PAD_ASTERISK = 87,
   ALLEGRO_KEY_PAD_MINUS = 88,
   ALLEGRO_KEY_PAD_PLUS = 89,
   ALLEGRO_KEY_PAD_DELETE = 90,
   ALLEGRO_KEY_PAD_ENTER = 91,

   ALLEGRO_KEY_PRINTSCREEN = 92,
   ALLEGRO_KEY_PAUSE = 93,

   ALLEGRO_KEY_ABNT_C1 = 94,
   ALLEGRO_KEY_YEN = 95,
   ALLEGRO_KEY_KANA = 96,
   ALLEGRO_KEY_CONVERT = 97,
   ALLEGRO_KEY_NOCONVERT = 98,
   ALLEGRO_KEY_AT = 99,
   ALLEGRO_KEY_CIRCUMFLEX = 100,
   ALLEGRO_KEY_COLON2 = 101,
   ALLEGRO_KEY_KANJI = 102,

   ALLEGRO_KEY_PAD_EQUALS = 103,
   ALLEGRO_KEY_BACKQUOTE = 104,
   ALLEGRO_KEY_SEMICOLON2 = 105,
   ALLEGRO_KEY_COMMAND = 106,
   ALLEGRO_KEY_UNKNOWN = 107,






   ALLEGRO_KEY_MODIFIERS = 215,

   ALLEGRO_KEY_LSHIFT = 215,
   ALLEGRO_KEY_RSHIFT = 216,
   ALLEGRO_KEY_LCTRL = 217,
   ALLEGRO_KEY_RCTRL = 218,
   ALLEGRO_KEY_ALT = 219,
   ALLEGRO_KEY_ALTGR = 220,
   ALLEGRO_KEY_LWIN = 221,
   ALLEGRO_KEY_RWIN = 222,
   ALLEGRO_KEY_MENU = 223,
   ALLEGRO_KEY_SCROLLLOCK = 224,
   ALLEGRO_KEY_NUMLOCK = 225,
   ALLEGRO_KEY_CAPSLOCK = 226,

   ALLEGRO_KEY_MAX
};



enum
{
   ALLEGRO_KEYMOD_SHIFT = 0x00001,
   ALLEGRO_KEYMOD_CTRL = 0x00002,
   ALLEGRO_KEYMOD_ALT = 0x00004,
   ALLEGRO_KEYMOD_LWIN = 0x00008,
   ALLEGRO_KEYMOD_RWIN = 0x00010,
   ALLEGRO_KEYMOD_MENU = 0x00020,
   ALLEGRO_KEYMOD_ALTGR = 0x00040,
   ALLEGRO_KEYMOD_COMMAND = 0x00080,
   ALLEGRO_KEYMOD_SCROLLLOCK = 0x00100,
   ALLEGRO_KEYMOD_NUMLOCK = 0x00200,
   ALLEGRO_KEYMOD_CAPSLOCK = 0x00400,
   ALLEGRO_KEYMOD_INALTSEQ = 0x00800,
   ALLEGRO_KEYMOD_ACCENT1 = 0x01000,
   ALLEGRO_KEYMOD_ACCENT2 = 0x02000,
   ALLEGRO_KEYMOD_ACCENT3 = 0x04000,
   ALLEGRO_KEYMOD_ACCENT4 = 0x08000
};





typedef struct ALLEGRO_KEYBOARD ALLEGRO_KEYBOARD;





typedef struct ALLEGRO_KEYBOARD_STATE ALLEGRO_KEYBOARD_STATE;

struct ALLEGRO_KEYBOARD_STATE
{
   struct ALLEGRO_DISPLAY *display;

   unsigned int __key_down__internal__[(ALLEGRO_KEY_MAX + 31) / 32];
};


_Bool al_is_keyboard_installed (void);
_Bool al_install_keyboard (void);
void al_uninstall_keyboard (void);

_Bool al_set_keyboard_leds (int leds);

const char * al_keycode_to_name (int keycode);

void al_get_keyboard_state (ALLEGRO_KEYBOARD_STATE *ret_state);
_Bool al_key_down (const ALLEGRO_KEYBOARD_STATE *, int keycode);

ALLEGRO_EVENT_SOURCE * al_get_keyboard_event_source (void);



extern _Bool _al_three_finger_flag;
extern _Bool _al_key_led_flag;
typedef struct ALLEGRO_MEMORY_INTERFACE ALLEGRO_MEMORY_INTERFACE;

struct ALLEGRO_MEMORY_INTERFACE {
   void *(*mi_malloc)(size_t n, int line, const char *file, const char *func);
   void (*mi_free)(void *ptr, int line, const char *file, const char *func);
   void *(*mi_realloc)(void *ptr, size_t n, int line, const char *file, const char *func);
   void *(*mi_calloc)(size_t count, size_t n, int line, const char *file, const char *func);
};

void al_set_memory_interface (ALLEGRO_MEMORY_INTERFACE *iface);
void * al_malloc_with_context (size_t n, int line, const char *file, const char *func)
                                                 ;
void al_free_with_context (void *ptr, int line, const char *file, const char *func)
                                                 ;
void * al_realloc_with_context (void *ptr, size_t n, int line, const char *file, const char *func)
                                                 ;
void * al_calloc_with_context (size_t count, size_t n, int line, const char *file, const char *func)
                                                 ;
typedef struct ALLEGRO_MONITOR_INFO
{
   int x1;
   int y1;
   int x2;
   int y2;
} ALLEGRO_MONITOR_INFO;

enum {
   ALLEGRO_DEFAULT_DISPLAY_ADAPTER = -1
};

int al_get_num_video_adapters (void);
_Bool al_get_monitor_info (int adapter, ALLEGRO_MONITOR_INFO *info);
typedef struct ALLEGRO_MOUSE ALLEGRO_MOUSE;




typedef struct ALLEGRO_MOUSE_STATE ALLEGRO_MOUSE_STATE;

struct ALLEGRO_MOUSE_STATE
{






   int x;
   int y;
   int z;
   int w;
   int more_axes[4];
   int buttons;
   float pressure;
   struct ALLEGRO_DISPLAY *display;
};


_Bool al_is_mouse_installed (void);
_Bool al_install_mouse (void);
void al_uninstall_mouse (void);
unsigned int al_get_mouse_num_buttons (void);
unsigned int al_get_mouse_num_axes (void);
_Bool al_set_mouse_xy (struct ALLEGRO_DISPLAY *display, int x, int y);
_Bool al_set_mouse_z (int z);
_Bool al_set_mouse_w (int w);
_Bool al_set_mouse_axis (int axis, int value);
void al_get_mouse_state (ALLEGRO_MOUSE_STATE *ret_state);
_Bool al_mouse_button_down (const ALLEGRO_MOUSE_STATE *state, int button);
int al_get_mouse_state_axis (const ALLEGRO_MOUSE_STATE *state, int axis);
_Bool al_get_mouse_cursor_position (int *ret_x, int *ret_y);
_Bool al_grab_mouse (struct ALLEGRO_DISPLAY *display);
_Bool al_ungrab_mouse (void);

ALLEGRO_EVENT_SOURCE * al_get_mouse_event_source (void);
typedef struct ALLEGRO_MOUSE_CURSOR ALLEGRO_MOUSE_CURSOR;

typedef enum ALLEGRO_SYSTEM_MOUSE_CURSOR
{
   ALLEGRO_SYSTEM_MOUSE_CURSOR_NONE = 0,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_DEFAULT = 1,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_ARROW = 2,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_BUSY = 3,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_QUESTION = 4,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_EDIT = 5,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_MOVE = 6,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_N = 7,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_W = 8,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_S = 9,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_E = 10,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_NW = 11,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_SW = 12,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_SE = 13,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_NE = 14,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_PROGRESS = 15,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_PRECISION = 16,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_LINK = 17,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_ALT_SELECT = 18,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_UNAVAILABLE = 19,
   ALLEGRO_NUM_SYSTEM_MOUSE_CURSORS
} ALLEGRO_SYSTEM_MOUSE_CURSOR;

struct ALLEGRO_BITMAP;
struct ALLEGRO_DISPLAY;


ALLEGRO_MOUSE_CURSOR * al_create_mouse_cursor ( struct ALLEGRO_BITMAP *sprite, int xfocus, int yfocus)
                                                               ;
void al_destroy_mouse_cursor (ALLEGRO_MOUSE_CURSOR *);
_Bool al_set_mouse_cursor (struct ALLEGRO_DISPLAY *display, ALLEGRO_MOUSE_CURSOR *cursor)
                                                                  ;
_Bool al_set_system_mouse_cursor (struct ALLEGRO_DISPLAY *display, ALLEGRO_SYSTEM_MOUSE_CURSOR cursor_id)
                                                                                  ;
_Bool al_show_mouse_cursor (struct ALLEGRO_DISPLAY *display);
_Bool al_hide_mouse_cursor (struct ALLEGRO_DISPLAY *display);

typedef struct ALLEGRO_SYSTEM ALLEGRO_SYSTEM;





_Bool al_install_system (int version, int (*atexit_ptr)(void (*)(void)));
void al_uninstall_system (void);
_Bool al_is_system_installed (void);
ALLEGRO_SYSTEM * al_get_system_driver (void);
ALLEGRO_CONFIG * al_get_system_config (void);

enum {
   ALLEGRO_RESOURCES_PATH = 0,
   ALLEGRO_TEMP_PATH,
   ALLEGRO_USER_DATA_PATH,
   ALLEGRO_USER_HOME_PATH,
   ALLEGRO_USER_SETTINGS_PATH,
   ALLEGRO_USER_DOCUMENTS_PATH,
   ALLEGRO_EXENAME_PATH,
   ALLEGRO_LAST_PATH
};

ALLEGRO_PATH * al_get_standard_path (int id);
void al_set_exe_name (char const *path);

void al_set_org_name (const char *org_name);
void al_set_app_name (const char *app_name);
const char * al_get_org_name (void);
const char * al_get_app_name (void);

_Bool al_inhibit_screensaver (_Bool inhibit);
typedef struct ALLEGRO_THREAD ALLEGRO_THREAD;



typedef struct ALLEGRO_MUTEX ALLEGRO_MUTEX;



typedef struct ALLEGRO_COND ALLEGRO_COND;


ALLEGRO_THREAD * al_create_thread (void *(*proc)(ALLEGRO_THREAD *thread, void *arg), void *arg)
                                                                 ;
void al_start_thread (ALLEGRO_THREAD *outer);
void al_join_thread (ALLEGRO_THREAD *outer, void **ret_value);
void al_set_thread_should_stop (ALLEGRO_THREAD *outer);
_Bool al_get_thread_should_stop (ALLEGRO_THREAD *outer);
void al_destroy_thread (ALLEGRO_THREAD *thread);
void al_run_detached_thread (void *(*proc)(void *arg), void *arg);

ALLEGRO_MUTEX * al_create_mutex (void);
ALLEGRO_MUTEX * al_create_mutex_recursive (void);
void al_lock_mutex (ALLEGRO_MUTEX *mutex);
void al_unlock_mutex (ALLEGRO_MUTEX *mutex);
void al_destroy_mutex (ALLEGRO_MUTEX *mutex);

ALLEGRO_COND * al_create_cond (void);
void al_destroy_cond (ALLEGRO_COND *cond);
void al_wait_cond (ALLEGRO_COND *cond, ALLEGRO_MUTEX *mutex);
int al_wait_cond_until (ALLEGRO_COND *cond, ALLEGRO_MUTEX *mutex, const ALLEGRO_TIMEOUT *timeout)
                                                    ;
void al_broadcast_cond (ALLEGRO_COND *cond);
void al_signal_cond (ALLEGRO_COND *cond);
typedef struct ALLEGRO_TIMER ALLEGRO_TIMER;


ALLEGRO_TIMER* al_create_timer (double speed_secs);
void al_destroy_timer (ALLEGRO_TIMER *timer);
void al_start_timer (ALLEGRO_TIMER *timer);
void al_stop_timer (ALLEGRO_TIMER *timer);
_Bool al_get_timer_started (const ALLEGRO_TIMER *timer);
double al_get_timer_speed (const ALLEGRO_TIMER *timer);
void al_set_timer_speed (ALLEGRO_TIMER *timer, double speed_secs);
int64_t al_get_timer_count (const ALLEGRO_TIMER *timer);
void al_set_timer_count (ALLEGRO_TIMER *timer, int64_t count);
void al_add_timer_count (ALLEGRO_TIMER *timer, int64_t diff);
ALLEGRO_EVENT_SOURCE * al_get_timer_event_source (ALLEGRO_TIMER *timer);
typedef enum ALLEGRO_STATE_FLAGS
{
    ALLEGRO_STATE_NEW_DISPLAY_PARAMETERS = 0x0001,
    ALLEGRO_STATE_NEW_BITMAP_PARAMETERS = 0x0002,
    ALLEGRO_STATE_DISPLAY = 0x0004,
    ALLEGRO_STATE_TARGET_BITMAP = 0x0008,
    ALLEGRO_STATE_BLENDER = 0x0010,
    ALLEGRO_STATE_NEW_FILE_INTERFACE = 0x0020,
    ALLEGRO_STATE_TRANSFORM = 0x0040,

    ALLEGRO_STATE_BITMAP = ALLEGRO_STATE_TARGET_BITMAP +
                                           ALLEGRO_STATE_NEW_BITMAP_PARAMETERS,

    ALLEGRO_STATE_ALL = 0xffff

} ALLEGRO_STATE_FLAGS;




typedef struct ALLEGRO_STATE ALLEGRO_STATE;

struct ALLEGRO_STATE
{

   char _tls[1024];
};


void al_store_state (ALLEGRO_STATE *state, int flags);
void al_restore_state (ALLEGRO_STATE const *state);
typedef struct ALLEGRO_TRANSFORM ALLEGRO_TRANSFORM;

struct ALLEGRO_TRANSFORM {
   float m[4][4];
};


void al_use_transform (const ALLEGRO_TRANSFORM* trans);
void al_copy_transform (ALLEGRO_TRANSFORM* dest, const ALLEGRO_TRANSFORM* src);
void al_identity_transform (ALLEGRO_TRANSFORM* trans);
void al_build_transform (ALLEGRO_TRANSFORM* trans, float x, float y, float sx, float sy, float theta);
void al_translate_transform (ALLEGRO_TRANSFORM* trans, float x, float y);
void al_rotate_transform (ALLEGRO_TRANSFORM* trans, float theta);
void al_scale_transform (ALLEGRO_TRANSFORM* trans, float sx, float sy);
void al_transform_coordinates (const ALLEGRO_TRANSFORM* trans, float* x, float* y);
void al_compose_transform (ALLEGRO_TRANSFORM* trans, const ALLEGRO_TRANSFORM* other);
const ALLEGRO_TRANSFORM* al_get_current_transform (void);
void al_invert_transform (ALLEGRO_TRANSFORM *trans);
int al_check_inverse (const ALLEGRO_TRANSFORM *trans, float tol);








typedef struct ALLEGRO_FONT ALLEGRO_FONT;
typedef struct ALLEGRO_FONT_VTABLE ALLEGRO_FONT_VTABLE;

struct ALLEGRO_FONT
{
   void *data;
   int height;
   ALLEGRO_FONT_VTABLE *vtable;
};


struct ALLEGRO_FONT_VTABLE
{
   int (*font_height) (const ALLEGRO_FONT *f);
   int (*font_ascent) (const ALLEGRO_FONT *f);
   int (*font_descent) (const ALLEGRO_FONT *f);
   int (*char_length) (const ALLEGRO_FONT *f, int ch);
   int (*text_length) (const ALLEGRO_FONT *f, const ALLEGRO_USTR *text);
   int (*render_char) (const ALLEGRO_FONT *f, ALLEGRO_COLOR color, int ch, float x, float y);
   int (*render) (const ALLEGRO_FONT *f, ALLEGRO_COLOR color, const ALLEGRO_USTR *text, float x, float y);
   void (*destroy) (ALLEGRO_FONT *f);
   void (*get_text_dimensions) (const ALLEGRO_FONT *f, const ALLEGRO_USTR *text, int *bbx, int *bby, int *bbw, int *bbh)
                                                                        ;
};

enum {
   ALLEGRO_ALIGN_LEFT = 0,
   ALLEGRO_ALIGN_CENTRE = 1,
   ALLEGRO_ALIGN_CENTER = 1,
   ALLEGRO_ALIGN_RIGHT = 2,
   ALLEGRO_ALIGN_INTEGER = 4
};

_Bool al_register_font_loader (const char *ext, ALLEGRO_FONT *(*load)(const char *filename, int size, int flags));
ALLEGRO_FONT * al_load_bitmap_font (const char *filename);
ALLEGRO_FONT * al_load_font (const char *filename, int size, int flags);

ALLEGRO_FONT * al_grab_font_from_bitmap (ALLEGRO_BITMAP *bmp, int n, const int ranges[]);
ALLEGRO_FONT * al_create_builtin_font (void);

void al_draw_ustr (const ALLEGRO_FONT *font, ALLEGRO_COLOR color, float x, float y, int flags, ALLEGRO_USTR const *ustr);
void al_draw_text (const ALLEGRO_FONT *font, ALLEGRO_COLOR color, float x, float y, int flags, char const *text);
void al_draw_justified_text (const ALLEGRO_FONT *font, ALLEGRO_COLOR color, float x1, float x2, float y, float diff, int flags, char const *text);
void al_draw_justified_ustr (const ALLEGRO_FONT *font, ALLEGRO_COLOR color, float x1, float x2, float y, float diff, int flags, ALLEGRO_USTR const *text);
void al_draw_textf (const ALLEGRO_FONT *font, ALLEGRO_COLOR color, float x, float y, int flags, char const *format, ...) __attribute__ ((format (printf, 6, 7)));
void al_draw_justified_textf (const ALLEGRO_FONT *font, ALLEGRO_COLOR color, float x1, float x2, float y, float diff, int flags, char const *format, ...) __attribute__ ((format (printf, 8, 9)));
int al_get_text_width (const ALLEGRO_FONT *f, const char *str);
int al_get_ustr_width (const ALLEGRO_FONT *f, const ALLEGRO_USTR *ustr);
int al_get_font_line_height (const ALLEGRO_FONT *f);
int al_get_font_ascent (const ALLEGRO_FONT *f);
int al_get_font_descent (const ALLEGRO_FONT *f);
void al_destroy_font (ALLEGRO_FONT *f);
void al_get_ustr_dimensions (const ALLEGRO_FONT *f, ALLEGRO_USTR const *text, int *bbx, int *bby, int *bbw, int *bbh)

                                           ;
void al_get_text_dimensions (const ALLEGRO_FONT *f, char const *text, int *bbx, int *bby, int *bbw, int *bbh)

                                           ;
void al_init_font_addon (void);
void al_shutdown_font_addon (void);
uint32_t al_get_allegro_font_version (void);
ALLEGRO_FONT * al_load_ttf_font (char const *filename, int size, int flags);
ALLEGRO_FONT * al_load_ttf_font_f (ALLEGRO_FILE *file, char const *filename, int size, int flags);
ALLEGRO_FONT * al_load_ttf_font_stretch (char const *filename, int w, int h, int flags);
ALLEGRO_FONT * al_load_ttf_font_stretch_f (ALLEGRO_FILE *file, char const *filename, int w, int h, int flags);
_Bool al_init_ttf_addon (void);
void al_shutdown_ttf_addon (void);
uint32_t al_get_allegro_ttf_version (void);
_Bool al_init_image_addon (void);
void al_shutdown_image_addon (void);
uint32_t al_get_allegro_image_version (void);
enum ALLEGRO_AUDIO_DEPTH
{




   ALLEGRO_AUDIO_DEPTH_INT8 = 0x00,
   ALLEGRO_AUDIO_DEPTH_INT16 = 0x01,
   ALLEGRO_AUDIO_DEPTH_INT24 = 0x02,
   ALLEGRO_AUDIO_DEPTH_FLOAT32 = 0x03,

   ALLEGRO_AUDIO_DEPTH_UNSIGNED = 0x08,


   ALLEGRO_AUDIO_DEPTH_UINT8 = ALLEGRO_AUDIO_DEPTH_INT8 |
                                 ALLEGRO_AUDIO_DEPTH_UNSIGNED,
   ALLEGRO_AUDIO_DEPTH_UINT16 = ALLEGRO_AUDIO_DEPTH_INT16 |
                                 ALLEGRO_AUDIO_DEPTH_UNSIGNED,
   ALLEGRO_AUDIO_DEPTH_UINT24 = ALLEGRO_AUDIO_DEPTH_INT24 |
                                 ALLEGRO_AUDIO_DEPTH_UNSIGNED
};




enum ALLEGRO_CHANNEL_CONF
{







   ALLEGRO_CHANNEL_CONF_1 = 0x10,
   ALLEGRO_CHANNEL_CONF_2 = 0x20,
   ALLEGRO_CHANNEL_CONF_3 = 0x30,
   ALLEGRO_CHANNEL_CONF_4 = 0x40,
   ALLEGRO_CHANNEL_CONF_5_1 = 0x51,
   ALLEGRO_CHANNEL_CONF_6_1 = 0x61,
   ALLEGRO_CHANNEL_CONF_7_1 = 0x71

};




enum ALLEGRO_PLAYMODE
{
   ALLEGRO_PLAYMODE_ONCE = 0x100,
   ALLEGRO_PLAYMODE_LOOP = 0x101,
   ALLEGRO_PLAYMODE_BIDIR = 0x102,
   _ALLEGRO_PLAYMODE_STREAM_ONCE = 0x103,
   _ALLEGRO_PLAYMODE_STREAM_ONEDIR = 0x104
};




enum ALLEGRO_MIXER_QUALITY
{
   ALLEGRO_MIXER_QUALITY_POINT = 0x110,
   ALLEGRO_MIXER_QUALITY_LINEAR = 0x111,
   ALLEGRO_MIXER_QUALITY_CUBIC = 0x112
};
typedef struct ALLEGRO_SAMPLE ALLEGRO_SAMPLE;




typedef struct ALLEGRO_SAMPLE_ID ALLEGRO_SAMPLE_ID;

struct ALLEGRO_SAMPLE_ID {
   int _index;
   int _id;
};




typedef struct ALLEGRO_SAMPLE_INSTANCE ALLEGRO_SAMPLE_INSTANCE;




typedef struct ALLEGRO_AUDIO_STREAM ALLEGRO_AUDIO_STREAM;




typedef struct ALLEGRO_MIXER ALLEGRO_MIXER;




typedef struct ALLEGRO_VOICE ALLEGRO_VOICE;



typedef enum ALLEGRO_AUDIO_DEPTH ALLEGRO_AUDIO_DEPTH;
typedef enum ALLEGRO_CHANNEL_CONF ALLEGRO_CHANNEL_CONF;
typedef enum ALLEGRO_PLAYMODE ALLEGRO_PLAYMODE;
typedef enum ALLEGRO_MIXER_QUALITY ALLEGRO_MIXER_QUALITY;





ALLEGRO_SAMPLE * al_create_sample (void *buf, unsigned int samples, unsigned int freq, ALLEGRO_AUDIO_DEPTH depth, ALLEGRO_CHANNEL_CONF chan_conf, _Bool free_buf)

                                                     ;
void al_destroy_sample (ALLEGRO_SAMPLE *spl);



ALLEGRO_SAMPLE_INSTANCE* al_create_sample_instance ( ALLEGRO_SAMPLE *data)
                            ;
void al_destroy_sample_instance ( ALLEGRO_SAMPLE_INSTANCE *spl)
                                    ;

unsigned int al_get_sample_frequency (const ALLEGRO_SAMPLE *spl);
unsigned int al_get_sample_length (const ALLEGRO_SAMPLE *spl);
ALLEGRO_AUDIO_DEPTH al_get_sample_depth (const ALLEGRO_SAMPLE *spl);
ALLEGRO_CHANNEL_CONF al_get_sample_channels (const ALLEGRO_SAMPLE *spl);
void * al_get_sample_data (const ALLEGRO_SAMPLE *spl);

unsigned int al_get_sample_instance_frequency (const ALLEGRO_SAMPLE_INSTANCE *spl);
unsigned int al_get_sample_instance_length (const ALLEGRO_SAMPLE_INSTANCE *spl);
unsigned int al_get_sample_instance_position (const ALLEGRO_SAMPLE_INSTANCE *spl);

float al_get_sample_instance_speed (const ALLEGRO_SAMPLE_INSTANCE *spl);
float al_get_sample_instance_gain (const ALLEGRO_SAMPLE_INSTANCE *spl);
float al_get_sample_instance_pan (const ALLEGRO_SAMPLE_INSTANCE *spl);
float al_get_sample_instance_time (const ALLEGRO_SAMPLE_INSTANCE *spl);

ALLEGRO_AUDIO_DEPTH al_get_sample_instance_depth (const ALLEGRO_SAMPLE_INSTANCE *spl);
ALLEGRO_CHANNEL_CONF al_get_sample_instance_channels (const ALLEGRO_SAMPLE_INSTANCE *spl);
ALLEGRO_PLAYMODE al_get_sample_instance_playmode (const ALLEGRO_SAMPLE_INSTANCE *spl);

_Bool al_get_sample_instance_playing (const ALLEGRO_SAMPLE_INSTANCE *spl);
_Bool al_get_sample_instance_attached (const ALLEGRO_SAMPLE_INSTANCE *spl);

_Bool al_set_sample_instance_position (ALLEGRO_SAMPLE_INSTANCE *spl, unsigned int val);
_Bool al_set_sample_instance_length (ALLEGRO_SAMPLE_INSTANCE *spl, unsigned int val);

_Bool al_set_sample_instance_speed (ALLEGRO_SAMPLE_INSTANCE *spl, float val);
_Bool al_set_sample_instance_gain (ALLEGRO_SAMPLE_INSTANCE *spl, float val);
_Bool al_set_sample_instance_pan (ALLEGRO_SAMPLE_INSTANCE *spl, float val);

_Bool al_set_sample_instance_playmode (ALLEGRO_SAMPLE_INSTANCE *spl, ALLEGRO_PLAYMODE val);

_Bool al_set_sample_instance_playing (ALLEGRO_SAMPLE_INSTANCE *spl, _Bool val);
_Bool al_detach_sample_instance (ALLEGRO_SAMPLE_INSTANCE *spl);

_Bool al_set_sample (ALLEGRO_SAMPLE_INSTANCE *spl, ALLEGRO_SAMPLE *data);
ALLEGRO_SAMPLE * al_get_sample (ALLEGRO_SAMPLE_INSTANCE *spl);
_Bool al_play_sample_instance (ALLEGRO_SAMPLE_INSTANCE *spl);
_Bool al_stop_sample_instance (ALLEGRO_SAMPLE_INSTANCE *spl);



ALLEGRO_AUDIO_STREAM* al_create_audio_stream (size_t buffer_count, unsigned int samples, unsigned int freq, ALLEGRO_AUDIO_DEPTH depth, ALLEGRO_CHANNEL_CONF chan_conf)

                                                                 ;
void al_destroy_audio_stream (ALLEGRO_AUDIO_STREAM *stream);
void al_drain_audio_stream (ALLEGRO_AUDIO_STREAM *stream);

unsigned int al_get_audio_stream_frequency (const ALLEGRO_AUDIO_STREAM *stream);
unsigned int al_get_audio_stream_length (const ALLEGRO_AUDIO_STREAM *stream);
unsigned int al_get_audio_stream_fragments (const ALLEGRO_AUDIO_STREAM *stream);
unsigned int al_get_available_audio_stream_fragments (const ALLEGRO_AUDIO_STREAM *stream);

float al_get_audio_stream_speed (const ALLEGRO_AUDIO_STREAM *stream);
float al_get_audio_stream_gain (const ALLEGRO_AUDIO_STREAM *stream);
float al_get_audio_stream_pan (const ALLEGRO_AUDIO_STREAM *stream);

ALLEGRO_CHANNEL_CONF al_get_audio_stream_channels (const ALLEGRO_AUDIO_STREAM *stream);
ALLEGRO_AUDIO_DEPTH al_get_audio_stream_depth (const ALLEGRO_AUDIO_STREAM *stream);
ALLEGRO_PLAYMODE al_get_audio_stream_playmode (const ALLEGRO_AUDIO_STREAM *stream);

_Bool al_get_audio_stream_playing (const ALLEGRO_AUDIO_STREAM *spl);
_Bool al_get_audio_stream_attached (const ALLEGRO_AUDIO_STREAM *spl);

void * al_get_audio_stream_fragment (const ALLEGRO_AUDIO_STREAM *stream);

_Bool al_set_audio_stream_speed (ALLEGRO_AUDIO_STREAM *stream, float val);
_Bool al_set_audio_stream_gain (ALLEGRO_AUDIO_STREAM *stream, float val);
_Bool al_set_audio_stream_pan (ALLEGRO_AUDIO_STREAM *stream, float val);

_Bool al_set_audio_stream_playmode (ALLEGRO_AUDIO_STREAM *stream, ALLEGRO_PLAYMODE val);

_Bool al_set_audio_stream_playing (ALLEGRO_AUDIO_STREAM *stream, _Bool val);
_Bool al_detach_audio_stream (ALLEGRO_AUDIO_STREAM *stream);
_Bool al_set_audio_stream_fragment (ALLEGRO_AUDIO_STREAM *stream, void *val);

_Bool al_rewind_audio_stream (ALLEGRO_AUDIO_STREAM *stream);
_Bool al_seek_audio_stream_secs (ALLEGRO_AUDIO_STREAM *stream, double time);
double al_get_audio_stream_position_secs (ALLEGRO_AUDIO_STREAM *stream);
double al_get_audio_stream_length_secs (ALLEGRO_AUDIO_STREAM *stream);
_Bool al_set_audio_stream_loop_secs (ALLEGRO_AUDIO_STREAM *stream, double start, double end);

ALLEGRO_EVENT_SOURCE * al_get_audio_stream_event_source (ALLEGRO_AUDIO_STREAM *stream);


ALLEGRO_MIXER* al_create_mixer (unsigned int freq, ALLEGRO_AUDIO_DEPTH depth, ALLEGRO_CHANNEL_CONF chan_conf)
                                                                 ;
void al_destroy_mixer (ALLEGRO_MIXER *mixer);
_Bool al_attach_sample_instance_to_mixer ( ALLEGRO_SAMPLE_INSTANCE *stream, ALLEGRO_MIXER *mixer)
                                                          ;
_Bool al_attach_audio_stream_to_mixer (ALLEGRO_AUDIO_STREAM *stream, ALLEGRO_MIXER *mixer)
                         ;
_Bool al_attach_mixer_to_mixer (ALLEGRO_MIXER *stream, ALLEGRO_MIXER *mixer)
                         ;
_Bool al_set_mixer_postprocess_callback ( ALLEGRO_MIXER *mixer, void (*cb)(void *buf, unsigned int samples, void *data), void *data)


                  ;

unsigned int al_get_mixer_frequency (const ALLEGRO_MIXER *mixer);
ALLEGRO_CHANNEL_CONF al_get_mixer_channels (const ALLEGRO_MIXER *mixer);
ALLEGRO_AUDIO_DEPTH al_get_mixer_depth (const ALLEGRO_MIXER *mixer);
ALLEGRO_MIXER_QUALITY al_get_mixer_quality (const ALLEGRO_MIXER *mixer);
float al_get_mixer_gain (const ALLEGRO_MIXER *mixer);
_Bool al_get_mixer_playing (const ALLEGRO_MIXER *mixer);
_Bool al_get_mixer_attached (const ALLEGRO_MIXER *mixer);
_Bool al_set_mixer_frequency (ALLEGRO_MIXER *mixer, unsigned int val);
_Bool al_set_mixer_quality (ALLEGRO_MIXER *mixer, ALLEGRO_MIXER_QUALITY val);
_Bool al_set_mixer_gain (ALLEGRO_MIXER *mixer, float gain);
_Bool al_set_mixer_playing (ALLEGRO_MIXER *mixer, _Bool val);
_Bool al_detach_mixer (ALLEGRO_MIXER *mixer);


ALLEGRO_VOICE* al_create_voice (unsigned int freq, ALLEGRO_AUDIO_DEPTH depth, ALLEGRO_CHANNEL_CONF chan_conf)

                                      ;
void al_destroy_voice (ALLEGRO_VOICE *voice);
_Bool al_attach_sample_instance_to_voice ( ALLEGRO_SAMPLE_INSTANCE *stream, ALLEGRO_VOICE *voice)
                                                          ;
_Bool al_attach_audio_stream_to_voice ( ALLEGRO_AUDIO_STREAM *stream, ALLEGRO_VOICE *voice )
                                                        ;
_Bool al_attach_mixer_to_voice (ALLEGRO_MIXER *mixer, ALLEGRO_VOICE *voice)
                         ;
void al_detach_voice (ALLEGRO_VOICE *voice);

unsigned int al_get_voice_frequency (const ALLEGRO_VOICE *voice);
unsigned int al_get_voice_position (const ALLEGRO_VOICE *voice);
ALLEGRO_CHANNEL_CONF al_get_voice_channels (const ALLEGRO_VOICE *voice);
ALLEGRO_AUDIO_DEPTH al_get_voice_depth (const ALLEGRO_VOICE *voice);
_Bool al_get_voice_playing (const ALLEGRO_VOICE *voice);
_Bool al_set_voice_position (ALLEGRO_VOICE *voice, unsigned int val);
_Bool al_set_voice_playing (ALLEGRO_VOICE *voice, _Bool val);


_Bool al_install_audio (void);
void al_uninstall_audio (void);
_Bool al_is_audio_installed (void);
uint32_t al_get_allegro_audio_version (void);

size_t al_get_channel_count (ALLEGRO_CHANNEL_CONF conf);
size_t al_get_audio_depth_size (ALLEGRO_AUDIO_DEPTH conf);


_Bool al_reserve_samples (int reserve_samples);
ALLEGRO_MIXER * al_get_default_mixer (void);
_Bool al_set_default_mixer (ALLEGRO_MIXER *mixer);
_Bool al_restore_default_mixer (void);
_Bool al_play_sample (ALLEGRO_SAMPLE *data, float gain, float pan, float speed, ALLEGRO_PLAYMODE loop, ALLEGRO_SAMPLE_ID *ret_id)
                                                                                            ;
void al_stop_sample (ALLEGRO_SAMPLE_ID *spl_id);
void al_stop_samples (void);


_Bool al_register_sample_loader (const char *ext, ALLEGRO_SAMPLE *(*loader)(const char *filename))
                                                  ;
_Bool al_register_sample_saver (const char *ext, _Bool (*saver)(const char *filename, ALLEGRO_SAMPLE *spl))
                                                           ;
_Bool al_register_audio_stream_loader (const char *ext, ALLEGRO_AUDIO_STREAM *(*stream_loader)(const char *filename, size_t buffer_count, unsigned int samples))

                                                 ;

_Bool al_register_sample_loader_f (const char *ext, ALLEGRO_SAMPLE *(*loader)(ALLEGRO_FILE *fp))
                                              ;
_Bool al_register_sample_saver_f (const char *ext, _Bool (*saver)(ALLEGRO_FILE *fp, ALLEGRO_SAMPLE *spl))
                                                       ;
_Bool al_register_audio_stream_loader_f (const char *ext, ALLEGRO_AUDIO_STREAM *(*stream_loader)(ALLEGRO_FILE *fp, size_t buffer_count, unsigned int samples))

                                                 ;

ALLEGRO_SAMPLE * al_load_sample (const char *filename);
_Bool al_save_sample (const char *filename, ALLEGRO_SAMPLE *spl)
                      ;
ALLEGRO_AUDIO_STREAM * al_load_audio_stream (const char *filename, size_t buffer_count, unsigned int samples)
                                            ;

ALLEGRO_SAMPLE * al_load_sample_f (ALLEGRO_FILE* fp, const char *ident);
_Bool al_save_sample_f (ALLEGRO_FILE* fp, const char *ident, ALLEGRO_SAMPLE *spl)
                      ;
ALLEGRO_AUDIO_STREAM * al_load_audio_stream_f (ALLEGRO_FILE* fp, const char *ident, size_t buffer_count, unsigned int samples)
                                            ;
_Bool al_init_acodec_addon (void);
uint32_t al_get_allegro_acodec_version (void);
typedef struct ALLEGRO_FILECHOOSER ALLEGRO_FILECHOOSER;



typedef struct ALLEGRO_TEXTLOG ALLEGRO_TEXTLOG;

_Bool al_init_native_dialog_addon (void);
void al_shutdown_native_dialog_addon (void);

ALLEGRO_FILECHOOSER * al_create_native_file_dialog (char const *initial_path, char const *title, char const *patterns, int mode)
                                                      ;
_Bool al_show_native_file_dialog (ALLEGRO_DISPLAY *display, ALLEGRO_FILECHOOSER *dialog);
int al_get_native_file_dialog_count (const ALLEGRO_FILECHOOSER *dialog);
const char * al_get_native_file_dialog_path (const ALLEGRO_FILECHOOSER *dialog, size_t index)
                 ;
void al_destroy_native_file_dialog (ALLEGRO_FILECHOOSER *dialog);

int al_show_native_message_box (ALLEGRO_DISPLAY *display, char const *title, char const *heading, char const *text, char const *buttons, int flags)
                                                                          ;

ALLEGRO_TEXTLOG * al_open_native_text_log (char const *title, int flags);
void al_close_native_text_log (ALLEGRO_TEXTLOG *textlog);
void al_append_native_text_log (ALLEGRO_TEXTLOG *textlog, char const *format, ...);
ALLEGRO_EVENT_SOURCE * al_get_native_text_log_event_source (ALLEGRO_TEXTLOG *textlog);

uint32_t al_get_allegro_native_dialog_version (void);

enum {
   ALLEGRO_FILECHOOSER_FILE_MUST_EXIST = 1,
   ALLEGRO_FILECHOOSER_SAVE = 2,
   ALLEGRO_FILECHOOSER_FOLDER = 4,
   ALLEGRO_FILECHOOSER_PICTURES = 8,
   ALLEGRO_FILECHOOSER_SHOW_HIDDEN = 16,
   ALLEGRO_FILECHOOSER_MULTIPLE = 32
};

enum {
   ALLEGRO_MESSAGEBOX_WARN = 1<<0,
   ALLEGRO_MESSAGEBOX_ERROR = 1<<1,
   ALLEGRO_MESSAGEBOX_OK_CANCEL = 1<<2,
   ALLEGRO_MESSAGEBOX_YES_NO = 1<<3,
   ALLEGRO_MESSAGEBOX_QUESTION = 1<<4
};

enum {
   ALLEGRO_TEXTLOG_NO_CLOSE = 1<<0,
   ALLEGRO_TEXTLOG_MONOSPACE = 1<<1
};

enum {
   ALLEGRO_EVENT_NATIVE_DIALOG_CLOSE = 600
};
typedef enum ALLEGRO_PRIM_TYPE
{
  ALLEGRO_PRIM_LINE_LIST,
  ALLEGRO_PRIM_LINE_STRIP,
  ALLEGRO_PRIM_LINE_LOOP,
  ALLEGRO_PRIM_TRIANGLE_LIST,
  ALLEGRO_PRIM_TRIANGLE_STRIP,
  ALLEGRO_PRIM_TRIANGLE_FAN,
  ALLEGRO_PRIM_POINT_LIST,
  ALLEGRO_PRIM_NUM_TYPES
} ALLEGRO_PRIM_TYPE;



typedef enum ALLEGRO_PRIM_ATTR
{
   ALLEGRO_PRIM_POSITION = 1,
   ALLEGRO_PRIM_COLOR_ATTR,
   ALLEGRO_PRIM_TEX_COORD,
   ALLEGRO_PRIM_TEX_COORD_PIXEL,
   ALLEGRO_PRIM_ATTR_NUM
} ALLEGRO_PRIM_ATTR;



typedef enum ALLEGRO_PRIM_STORAGE
{
   ALLEGRO_PRIM_FLOAT_2,
   ALLEGRO_PRIM_FLOAT_3,
   ALLEGRO_PRIM_SHORT_2
} ALLEGRO_PRIM_STORAGE;
typedef struct ALLEGRO_VERTEX_ELEMENT ALLEGRO_VERTEX_ELEMENT;

struct ALLEGRO_VERTEX_ELEMENT {
   int attribute;
   int storage;
   int offset;
};



typedef struct ALLEGRO_VERTEX_DECL ALLEGRO_VERTEX_DECL;







typedef struct ALLEGRO_VERTEX ALLEGRO_VERTEX;

struct ALLEGRO_VERTEX {
  float x, y, z;
  float u, v;
  ALLEGRO_COLOR color;
};


uint32_t al_get_allegro_primitives_version (void);




_Bool al_init_primitives_addon (void);
void al_shutdown_primitives_addon (void);
int al_draw_prim (const void* vtxs, const ALLEGRO_VERTEX_DECL* decl, ALLEGRO_BITMAP* texture, int start, int end, int type);
int al_draw_indexed_prim (const void* vtxs, const ALLEGRO_VERTEX_DECL* decl, ALLEGRO_BITMAP* texture, const int* indices, int num_vtx, int type);

ALLEGRO_VERTEX_DECL* al_create_vertex_decl (const ALLEGRO_VERTEX_ELEMENT* elements, int stride);
void al_destroy_vertex_decl (ALLEGRO_VERTEX_DECL* decl);




void al_draw_soft_triangle (ALLEGRO_VERTEX* v1, ALLEGRO_VERTEX* v2, ALLEGRO_VERTEX* v3, uintptr_t state, void (*init)(uintptr_t, ALLEGRO_VERTEX*, ALLEGRO_VERTEX*, ALLEGRO_VERTEX*), void (*first)(uintptr_t, int, int, int, int), void (*step)(uintptr_t, int), void (*draw)(uintptr_t, int, int, int))



                                                                                   ;
void al_draw_soft_line (ALLEGRO_VERTEX* v1, ALLEGRO_VERTEX* v2, uintptr_t state, void (*first)(uintptr_t, int, int, ALLEGRO_VERTEX*, ALLEGRO_VERTEX*), void (*step)(uintptr_t, int), void (*draw)(uintptr_t, int, int))


                                                                          ;




void al_draw_line (float x1, float y1, float x2, float y2, ALLEGRO_COLOR color, float thickness);
void al_draw_triangle (float x1, float y1, float x2, float y2, float x3, float y3, ALLEGRO_COLOR color, float thickness);
void al_draw_rectangle (float x1, float y1, float x2, float y2, ALLEGRO_COLOR color, float thickness);
void al_draw_rounded_rectangle (float x1, float y1, float x2, float y2, float rx, float ry, ALLEGRO_COLOR color, float thickness);

void al_calculate_arc (float* dest, int stride, float cx, float cy, float rx, float ry, float start_theta, float delta_theta, float thickness, int num_segments);
void al_draw_circle (float cx, float cy, float r, ALLEGRO_COLOR color, float thickness);
void al_draw_ellipse (float cx, float cy, float rx, float ry, ALLEGRO_COLOR color, float thickness);
void al_draw_arc (float cx, float cy, float r, float start_theta, float delta_theta, ALLEGRO_COLOR color, float thickness);
void al_draw_elliptical_arc (float cx, float cy, float rx, float ry, float start_theta, float delta_theta, ALLEGRO_COLOR color, float thickness);
void al_draw_pieslice (float cx, float cy, float r, float start_theta, float delta_theta, ALLEGRO_COLOR color, float thickness);

void al_calculate_spline (float* dest, int stride, float points[8], float thickness, int num_segments);
void al_draw_spline (float points[8], ALLEGRO_COLOR color, float thickness);

void al_calculate_ribbon (float* dest, int dest_stride, const float *points, int points_stride, float thickness, int num_segments);
void al_draw_ribbon (const float *points, int points_stride, ALLEGRO_COLOR color, float thickness, int num_segments);

void al_draw_filled_triangle (float x1, float y1, float x2, float y2, float x3, float y3, ALLEGRO_COLOR color);
void al_draw_filled_rectangle (float x1, float y1, float x2, float y2, ALLEGRO_COLOR color);
void al_draw_filled_ellipse (float cx, float cy, float rx, float ry, ALLEGRO_COLOR color);
void al_draw_filled_circle (float cx, float cy, float r, ALLEGRO_COLOR color);
void al_draw_filled_pieslice (float cx, float cy, float r, float start_theta, float delta_theta, ALLEGRO_COLOR color);
void al_draw_filled_rounded_rectangle (float x1, float y1, float x2, float y2, float rx, float ry, ALLEGRO_COLOR color);

















typedef float float_t;
typedef double double_t;


extern double acos (double __x) __attribute__ ((__nothrow__)); extern double __acos (double __x) __attribute__ ((__nothrow__));

extern double asin (double __x) __attribute__ ((__nothrow__)); extern double __asin (double __x) __attribute__ ((__nothrow__));

extern double atan (double __x) __attribute__ ((__nothrow__)); extern double __atan (double __x) __attribute__ ((__nothrow__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__));


extern double cos (double __x) __attribute__ ((__nothrow__)); extern double __cos (double __x) __attribute__ ((__nothrow__));

extern double sin (double __x) __attribute__ ((__nothrow__)); extern double __sin (double __x) __attribute__ ((__nothrow__));

extern double tan (double __x) __attribute__ ((__nothrow__)); extern double __tan (double __x) __attribute__ ((__nothrow__));




extern double cosh (double __x) __attribute__ ((__nothrow__)); extern double __cosh (double __x) __attribute__ ((__nothrow__));

extern double sinh (double __x) __attribute__ ((__nothrow__)); extern double __sinh (double __x) __attribute__ ((__nothrow__));

extern double tanh (double __x) __attribute__ ((__nothrow__)); extern double __tanh (double __x) __attribute__ ((__nothrow__));



extern double acosh (double __x) __attribute__ ((__nothrow__)); extern double __acosh (double __x) __attribute__ ((__nothrow__));

extern double asinh (double __x) __attribute__ ((__nothrow__)); extern double __asinh (double __x) __attribute__ ((__nothrow__));

extern double atanh (double __x) __attribute__ ((__nothrow__)); extern double __atanh (double __x) __attribute__ ((__nothrow__));







extern double exp (double __x) __attribute__ ((__nothrow__)); extern double __exp (double __x) __attribute__ ((__nothrow__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));


extern double log (double __x) __attribute__ ((__nothrow__)); extern double __log (double __x) __attribute__ ((__nothrow__));


extern double log10 (double __x) __attribute__ ((__nothrow__)); extern double __log10 (double __x) __attribute__ ((__nothrow__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__));



extern double expm1 (double __x) __attribute__ ((__nothrow__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__));


extern double log1p (double __x) __attribute__ ((__nothrow__)); extern double __log1p (double __x) __attribute__ ((__nothrow__));


extern double logb (double __x) __attribute__ ((__nothrow__)); extern double __logb (double __x) __attribute__ ((__nothrow__));






extern double exp2 (double __x) __attribute__ ((__nothrow__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__));


extern double log2 (double __x) __attribute__ ((__nothrow__)); extern double __log2 (double __x) __attribute__ ((__nothrow__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__));


extern double sqrt (double __x) __attribute__ ((__nothrow__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__));






extern double cbrt (double __x) __attribute__ ((__nothrow__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__));








extern double ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__));




extern int __isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern double nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double erf (double) __attribute__ ((__nothrow__)); extern double __erf (double) __attribute__ ((__nothrow__));
extern double erfc (double) __attribute__ ((__nothrow__)); extern double __erfc (double) __attribute__ ((__nothrow__));
extern double lgamma (double) __attribute__ ((__nothrow__)); extern double __lgamma (double) __attribute__ ((__nothrow__));






extern double tgamma (double) __attribute__ ((__nothrow__)); extern double __tgamma (double) __attribute__ ((__nothrow__));




extern double rint (double __x) __attribute__ ((__nothrow__)); extern double __rint (double __x) __attribute__ ((__nothrow__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogb (double __x) __attribute__ ((__nothrow__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__));



extern double round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrint (double __x) __attribute__ ((__nothrow__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__));
extern long long int llrint (double __x) __attribute__ ((__nothrow__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__));



extern long int lround (double __x) __attribute__ ((__nothrow__)); extern long int __lround (double __x) __attribute__ ((__nothrow__));
extern long long int llround (double __x) __attribute__ ((__nothrow__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__));






extern float acosf (float __x) __attribute__ ((__nothrow__)); extern float __acosf (float __x) __attribute__ ((__nothrow__));

extern float asinf (float __x) __attribute__ ((__nothrow__)); extern float __asinf (float __x) __attribute__ ((__nothrow__));

extern float atanf (float __x) __attribute__ ((__nothrow__)); extern float __atanf (float __x) __attribute__ ((__nothrow__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__));


extern float cosf (float __x) __attribute__ ((__nothrow__)); extern float __cosf (float __x) __attribute__ ((__nothrow__));

extern float sinf (float __x) __attribute__ ((__nothrow__)); extern float __sinf (float __x) __attribute__ ((__nothrow__));

extern float tanf (float __x) __attribute__ ((__nothrow__)); extern float __tanf (float __x) __attribute__ ((__nothrow__));




extern float coshf (float __x) __attribute__ ((__nothrow__)); extern float __coshf (float __x) __attribute__ ((__nothrow__));

extern float sinhf (float __x) __attribute__ ((__nothrow__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__));

extern float tanhf (float __x) __attribute__ ((__nothrow__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__));



extern float acoshf (float __x) __attribute__ ((__nothrow__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__));

extern float asinhf (float __x) __attribute__ ((__nothrow__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__));

extern float atanhf (float __x) __attribute__ ((__nothrow__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__));







extern float expf (float __x) __attribute__ ((__nothrow__)); extern float __expf (float __x) __attribute__ ((__nothrow__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));


extern float logf (float __x) __attribute__ ((__nothrow__)); extern float __logf (float __x) __attribute__ ((__nothrow__));


extern float log10f (float __x) __attribute__ ((__nothrow__)); extern float __log10f (float __x) __attribute__ ((__nothrow__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__));



extern float expm1f (float __x) __attribute__ ((__nothrow__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__));


extern float log1pf (float __x) __attribute__ ((__nothrow__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__));


extern float logbf (float __x) __attribute__ ((__nothrow__)); extern float __logbf (float __x) __attribute__ ((__nothrow__));






extern float exp2f (float __x) __attribute__ ((__nothrow__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__));


extern float log2f (float __x) __attribute__ ((__nothrow__)); extern float __log2f (float __x) __attribute__ ((__nothrow__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__));








extern float ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__));




extern int __isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern float nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float erff (float) __attribute__ ((__nothrow__)); extern float __erff (float) __attribute__ ((__nothrow__));
extern float erfcf (float) __attribute__ ((__nothrow__)); extern float __erfcf (float) __attribute__ ((__nothrow__));
extern float lgammaf (float) __attribute__ ((__nothrow__)); extern float __lgammaf (float) __attribute__ ((__nothrow__));






extern float tgammaf (float) __attribute__ ((__nothrow__)); extern float __tgammaf (float) __attribute__ ((__nothrow__));




extern float rintf (float __x) __attribute__ ((__nothrow__)); extern float __rintf (float __x) __attribute__ ((__nothrow__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__));



extern float roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__));
extern long long int llrintf (float __x) __attribute__ ((__nothrow__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__));
extern long long int llroundf (float __x) __attribute__ ((__nothrow__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__));






extern long double acosl (long double __x) __attribute__ ((__nothrow__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__));



extern long double acoshl (long double __x) __attribute__ ((__nothrow__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__));







extern long double expl (long double __x) __attribute__ ((__nothrow__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));


extern long double logl (long double __x) __attribute__ ((__nothrow__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));



extern long double expm1l (long double __x) __attribute__ ((__nothrow__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double erfl (long double) __attribute__ ((__nothrow__)); extern long double __erfl (long double) __attribute__ ((__nothrow__));
extern long double erfcl (long double) __attribute__ ((__nothrow__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__));
extern long double lgammal (long double) __attribute__ ((__nothrow__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__));






extern long double tgammal (long double) __attribute__ ((__nothrow__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__));




extern long double rintl (long double __x) __attribute__ ((__nothrow__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__));
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__));
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));




enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };

void cpMessage(const char *condition, const char *file, int line, int isError, int isHardError, const char *message, ...);
 typedef double cpFloat;
static inline cpFloat cpfmax(cpFloat a, cpFloat b)
{
 return (a > b) ? a : b;
}


static inline cpFloat cpfmin(cpFloat a, cpFloat b)
{
 return (a < b) ? a : b;
}


static inline cpFloat cpfabs(cpFloat f)
{
 return (f < 0) ? -f : f;
}


static inline cpFloat cpfclamp(cpFloat f, cpFloat min, cpFloat max)
{
 return cpfmin(cpfmax(f, min), max);
}


static inline cpFloat cpfclamp01(cpFloat f)
{
 return cpfmax(0.0f, cpfmin(f, 1.0f));
}




static inline cpFloat cpflerp(cpFloat f1, cpFloat f2, cpFloat t)
{
 return f1*(1.0f - t) + f2*t;
}


static inline cpFloat cpflerpconst(cpFloat f1, cpFloat f2, cpFloat d)
{
 return f1 + cpfclamp(f2 - f1, -d, d);
}


typedef uintptr_t cpHashValue;






 typedef int cpBool;
 typedef void * cpDataPointer;






 typedef uintptr_t cpCollisionType;






 typedef uintptr_t cpGroup;






 typedef unsigned int cpLayers;






 typedef unsigned int cpTimestamp;
 typedef struct cpVect{cpFloat x,y;} cpVect;


typedef struct cpMat2x2 {

 cpFloat a, b, c, d;
} cpMat2x2;
typedef struct cpArray cpArray;
typedef struct cpHashSet cpHashSet;

typedef struct cpBody cpBody;
typedef struct cpShape cpShape;
typedef struct cpConstraint cpConstraint;

typedef struct cpCollisionHandler cpCollisionHandler;
typedef struct cpArbiter cpArbiter;

typedef struct cpSpace cpSpace;



static inline cpVect cpv(const cpFloat x, const cpFloat y)
{
 cpVect v = {x, y};
 return v;
}


cpVect cpvslerp(const cpVect v1, const cpVect v2, const cpFloat t);


cpVect cpvslerpconst(const cpVect v1, const cpVect v2, const cpFloat a);




char* cpvstr(const cpVect v);


static inline cpBool cpveql(const cpVect v1, const cpVect v2)
{
 return (v1.x == v2.x && v1.y == v2.y);
}


static inline cpVect cpvadd(const cpVect v1, const cpVect v2)
{
 return cpv(v1.x + v2.x, v1.y + v2.y);
}


static inline cpVect cpvsub(const cpVect v1, const cpVect v2)
{
 return cpv(v1.x - v2.x, v1.y - v2.y);
}


static inline cpVect cpvneg(const cpVect v)
{
 return cpv(-v.x, -v.y);
}


static inline cpVect cpvmult(const cpVect v, const cpFloat s)
{
 return cpv(v.x*s, v.y*s);
}


static inline cpFloat cpvdot(const cpVect v1, const cpVect v2)
{
 return v1.x*v2.x + v1.y*v2.y;
}




static inline cpFloat cpvcross(const cpVect v1, const cpVect v2)
{
 return v1.x*v2.y - v1.y*v2.x;
}


static inline cpVect cpvperp(const cpVect v)
{
 return cpv(-v.y, v.x);
}


static inline cpVect cpvrperp(const cpVect v)
{
 return cpv(v.y, -v.x);
}


static inline cpVect cpvproject(const cpVect v1, const cpVect v2)
{
 return cpvmult(v2, cpvdot(v1, v2)/cpvdot(v2, v2));
}


static inline cpVect cpvforangle(const cpFloat a)
{
 return cpv(cos(a), sin(a));
}


static inline cpFloat cpvtoangle(const cpVect v)
{
 return atan2(v.y, v.x);
}


static inline cpVect cpvrotate(const cpVect v1, const cpVect v2)
{
 return cpv(v1.x*v2.x - v1.y*v2.y, v1.x*v2.y + v1.y*v2.x);
}


static inline cpVect cpvunrotate(const cpVect v1, const cpVect v2)
{
 return cpv(v1.x*v2.x + v1.y*v2.y, v1.y*v2.x - v1.x*v2.y);
}


static inline cpFloat cpvlengthsq(const cpVect v)
{
 return cpvdot(v, v);
}


static inline cpFloat cpvlength(const cpVect v)
{
 return sqrt(cpvdot(v, v));
}


static inline cpVect cpvlerp(const cpVect v1, const cpVect v2, const cpFloat t)
{
 return cpvadd(cpvmult(v1, 1.0f - t), cpvmult(v2, t));
}


static inline cpVect cpvnormalize(const cpVect v)
{
 return cpvmult(v, 1.0f/cpvlength(v));
}


static inline cpVect cpvnormalize_safe(const cpVect v)
{
 return (v.x == 0.0f && v.y == 0.0f ? cpvzero : cpvnormalize(v));
}


static inline cpVect cpvclamp(const cpVect v, const cpFloat len)
{
 return (cpvdot(v,v) > len*len) ? cpvmult(cpvnormalize(v), len) : v;
}


static inline cpVect cpvlerpconst(cpVect v1, cpVect v2, cpFloat d)
{
 return cpvadd(v1, cpvclamp(cpvsub(v2, v1), d));
}


static inline cpFloat cpvdist(const cpVect v1, const cpVect v2)
{
 return cpvlength(cpvsub(v1, v2));
}


static inline cpFloat cpvdistsq(const cpVect v1, const cpVect v2)
{
 return cpvlengthsq(cpvsub(v1, v2));
}


static inline cpBool cpvnear(const cpVect v1, const cpVect v2, const cpFloat dist)
{
 return cpvdistsq(v1, v2) < dist*dist;
}







static inline cpMat2x2
cpMat2x2New(cpFloat a, cpFloat b, cpFloat c, cpFloat d)
{
 cpMat2x2 m = {a, b, c, d};
 return m;
}

static inline cpVect
cpMat2x2Transform(cpMat2x2 m, cpVect v)
{
 return cpv(v.x*m.a + v.y*m.b, v.x*m.c + v.y*m.d);
}
typedef struct cpBB{
 cpFloat l, b, r ,t;
} cpBB;


static inline cpBB cpBBNew(const cpFloat l, const cpFloat b, const cpFloat r, const cpFloat t)
{
 cpBB bb = {l, b, r, t};
 return bb;
}


static inline cpBB cpBBNewForCircle(const cpVect p, const cpFloat r)
{
 return cpBBNew(p.x - r, p.y - r, p.x + r, p.y + r);
}


static inline cpBool cpBBIntersects(const cpBB a, const cpBB b)
{
 return (a.l <= b.r && b.l <= a.r && a.b <= b.t && b.b <= a.t);
}


static inline cpBool cpBBContainsBB(const cpBB bb, const cpBB other)
{
 return (bb.l <= other.l && bb.r >= other.r && bb.b <= other.b && bb.t >= other.t);
}


static inline cpBool cpBBContainsVect(const cpBB bb, const cpVect v)
{
 return (bb.l <= v.x && bb.r >= v.x && bb.b <= v.y && bb.t >= v.y);
}


static inline cpBB cpBBMerge(const cpBB a, const cpBB b){
 return cpBBNew(
  cpfmin(a.l, b.l),
  cpfmin(a.b, b.b),
  cpfmax(a.r, b.r),
  cpfmax(a.t, b.t)
 );
}


static inline cpBB cpBBExpand(const cpBB bb, const cpVect v){
 return cpBBNew(
  cpfmin(bb.l, v.x),
  cpfmin(bb.b, v.y),
  cpfmax(bb.r, v.x),
  cpfmax(bb.t, v.y)
 );
}


static inline cpFloat cpBBArea(cpBB bb)
{
 return (bb.r - bb.l)*(bb.t - bb.b);
}


static inline cpFloat cpBBMergedArea(cpBB a, cpBB b)
{
 return (cpfmax(a.r, b.r) - cpfmin(a.l, b.l))*(cpfmax(a.t, b.t) - cpfmin(a.b, b.b));
}


static inline cpFloat cpBBSegmentQuery(cpBB bb, cpVect a, cpVect b)
{
 cpFloat idx = 1.0f/(b.x - a.x);
 cpFloat tx1 = (bb.l == a.x ? -(__builtin_inff()) : (bb.l - a.x)*idx);
 cpFloat tx2 = (bb.r == a.x ? (__builtin_inff()) : (bb.r - a.x)*idx);
 cpFloat txmin = cpfmin(tx1, tx2);
 cpFloat txmax = cpfmax(tx1, tx2);

 cpFloat idy = 1.0f/(b.y - a.y);
 cpFloat ty1 = (bb.b == a.y ? -(__builtin_inff()) : (bb.b - a.y)*idy);
 cpFloat ty2 = (bb.t == a.y ? (__builtin_inff()) : (bb.t - a.y)*idy);
 cpFloat tymin = cpfmin(ty1, ty2);
 cpFloat tymax = cpfmax(ty1, ty2);

 if(tymin <= txmax && txmin <= tymax){
  cpFloat min = cpfmax(txmin, tymin);
  cpFloat max = cpfmin(txmax, tymax);

  if(0.0 <= max && min <= 1.0) return cpfmax(min, 0.0);
 }

 return (__builtin_inff());
}


static inline cpBool cpBBIntersectsSegment(cpBB bb, cpVect a, cpVect b)
{
 return (cpBBSegmentQuery(bb, a, b) != (__builtin_inff()));
}


static inline cpVect
cpBBClampVect(const cpBB bb, const cpVect v)
{
 return cpv(cpfclamp(v.x, bb.l, bb.r), cpfclamp(v.y, bb.b, bb.t));
}



cpVect cpBBWrapVect(const cpBB bb, const cpVect v);
typedef cpBB (*cpSpatialIndexBBFunc)(void *obj);

typedef void (*cpSpatialIndexIteratorFunc)(void *obj, void *data);

typedef void (*cpSpatialIndexQueryFunc)(void *obj1, void *obj2, void *data);

typedef cpFloat (*cpSpatialIndexSegmentQueryFunc)(void *obj1, void *obj2, void *data);


typedef struct cpSpatialIndexClass cpSpatialIndexClass;
typedef struct cpSpatialIndex cpSpatialIndex;


struct cpSpatialIndex {
 cpSpatialIndexClass *klass;

 cpSpatialIndexBBFunc bbfunc;

 cpSpatialIndex *staticIndex, *dynamicIndex;
};




typedef struct cpSpaceHash cpSpaceHash;


cpSpaceHash* cpSpaceHashAlloc(void);

cpSpatialIndex* cpSpaceHashInit(cpSpaceHash *hash, cpFloat celldim, int numcells, cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);

cpSpatialIndex* cpSpaceHashNew(cpFloat celldim, int cells, cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);





void cpSpaceHashResize(cpSpaceHash *hash, cpFloat celldim, int numcells);



typedef struct cpBBTree cpBBTree;


cpBBTree* cpBBTreeAlloc(void);

cpSpatialIndex* cpBBTreeInit(cpBBTree *tree, cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);

cpSpatialIndex* cpBBTreeNew(cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);


void cpBBTreeOptimize(cpSpatialIndex *index);



typedef cpVect (*cpBBTreeVelocityFunc)(void *obj);

void cpBBTreeSetVelocityFunc(cpSpatialIndex *index, cpBBTreeVelocityFunc func);



typedef struct cpSweep1D cpSweep1D;


cpSweep1D* cpSweep1DAlloc(void);

cpSpatialIndex* cpSweep1DInit(cpSweep1D *sweep, cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);

cpSpatialIndex* cpSweep1DNew(cpSpatialIndexBBFunc bbfunc, cpSpatialIndex *staticIndex);



typedef void (*cpSpatialIndexDestroyImpl)(cpSpatialIndex *index);

typedef int (*cpSpatialIndexCountImpl)(cpSpatialIndex *index);
typedef void (*cpSpatialIndexEachImpl)(cpSpatialIndex *index, cpSpatialIndexIteratorFunc func, void *data);

typedef cpBool (*cpSpatialIndexContainsImpl)(cpSpatialIndex *index, void *obj, cpHashValue hashid);
typedef void (*cpSpatialIndexInsertImpl)(cpSpatialIndex *index, void *obj, cpHashValue hashid);
typedef void (*cpSpatialIndexRemoveImpl)(cpSpatialIndex *index, void *obj, cpHashValue hashid);

typedef void (*cpSpatialIndexReindexImpl)(cpSpatialIndex *index);
typedef void (*cpSpatialIndexReindexObjectImpl)(cpSpatialIndex *index, void *obj, cpHashValue hashid);
typedef void (*cpSpatialIndexReindexQueryImpl)(cpSpatialIndex *index, cpSpatialIndexQueryFunc func, void *data);

typedef void (*cpSpatialIndexQueryImpl)(cpSpatialIndex *index, void *obj, cpBB bb, cpSpatialIndexQueryFunc func, void *data);
typedef void (*cpSpatialIndexSegmentQueryImpl)(cpSpatialIndex *index, void *obj, cpVect a, cpVect b, cpFloat t_exit, cpSpatialIndexSegmentQueryFunc func, void *data);

struct cpSpatialIndexClass {
 cpSpatialIndexDestroyImpl destroy;

 cpSpatialIndexCountImpl count;
 cpSpatialIndexEachImpl each;

 cpSpatialIndexContainsImpl contains;
 cpSpatialIndexInsertImpl insert;
 cpSpatialIndexRemoveImpl remove;

 cpSpatialIndexReindexImpl reindex;
 cpSpatialIndexReindexObjectImpl reindexObject;
 cpSpatialIndexReindexQueryImpl reindexQuery;

 cpSpatialIndexQueryImpl query;
 cpSpatialIndexSegmentQueryImpl segmentQuery;
};


void cpSpatialIndexFree(cpSpatialIndex *index);

void cpSpatialIndexCollideStatic(cpSpatialIndex *dynamicIndex, cpSpatialIndex *staticIndex, cpSpatialIndexQueryFunc func, void *data);


static inline void cpSpatialIndexDestroy(cpSpatialIndex *index)
{
 if(index->klass) index->klass->destroy(index);
}


static inline int cpSpatialIndexCount(cpSpatialIndex *index)
{
 return index->klass->count(index);
}


static inline void cpSpatialIndexEach(cpSpatialIndex *index, cpSpatialIndexIteratorFunc func, void *data)
{
 index->klass->each(index, func, data);
}



static inline cpBool cpSpatialIndexContains(cpSpatialIndex *index, void *obj, cpHashValue hashid)
{
 return index->klass->contains(index, obj, hashid);
}



static inline void cpSpatialIndexInsert(cpSpatialIndex *index, void *obj, cpHashValue hashid)
{
 index->klass->insert(index, obj, hashid);
}



static inline void cpSpatialIndexRemove(cpSpatialIndex *index, void *obj, cpHashValue hashid)
{
 index->klass->remove(index, obj, hashid);
}


static inline void cpSpatialIndexReindex(cpSpatialIndex *index)
{
 index->klass->reindex(index);
}


static inline void cpSpatialIndexReindexObject(cpSpatialIndex *index, void *obj, cpHashValue hashid)
{
 index->klass->reindexObject(index, obj, hashid);
}


static inline void cpSpatialIndexQuery(cpSpatialIndex *index, void *obj, cpBB bb, cpSpatialIndexQueryFunc func, void *data)
{
 index->klass->query(index, obj, bb, func, data);
}


static inline void cpSpatialIndexSegmentQuery(cpSpatialIndex *index, void *obj, cpVect a, cpVect b, cpFloat t_exit, cpSpatialIndexSegmentQueryFunc func, void *data)
{
 index->klass->segmentQuery(index, obj, a, b, t_exit, func, data);
}




static inline void cpSpatialIndexReindexQuery(cpSpatialIndex *index, cpSpatialIndexQueryFunc func, void *data)
{
 index->klass->reindexQuery(index, func, data);
}

typedef void (*cpBodyVelocityFunc)(cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt);

typedef void (*cpBodyPositionFunc)(cpBody *body, cpFloat dt);



typedef struct cpComponentNode {
 cpBody *root;
 cpBody *next;
 cpFloat idleTime;
} cpComponentNode;


struct cpBody {

 cpBodyVelocityFunc velocity_func;


 cpBodyPositionFunc position_func;



 cpFloat m;

 cpFloat m_inv;



 cpFloat i;

 cpFloat i_inv;


 cpVect p;

 cpVect v;

 cpVect f;



 cpFloat a;

 cpFloat w;

 cpFloat t;



 cpVect rot;




 cpDataPointer data;


 cpFloat v_limit;

 cpFloat w_limit;

 cpVect v_bias_private;
 cpFloat w_bias_private;

 cpSpace *space_private;

 cpShape *shapeList_private;
 cpArbiter *arbiterList_private;
 cpConstraint *constraintList_private;

 cpComponentNode node_private;
};


cpBody* cpBodyAlloc(void);

cpBody* cpBodyInit(cpBody *body, cpFloat m, cpFloat i);

cpBody* cpBodyNew(cpFloat m, cpFloat i);


cpBody* cpBodyInitStatic(cpBody *body);

cpBody* cpBodyNewStatic(void);


void cpBodyDestroy(cpBody *body);

void cpBodyFree(cpBody *body);





 void cpBodySanityCheck(cpBody *body);





void cpBodyActivate(cpBody *body);

void cpBodyActivateStatic(cpBody *body, cpShape *filter);


void cpBodySleep(cpBody *body);

void cpBodySleepWithGroup(cpBody *body, cpBody *group);


static inline cpBool cpBodyIsSleeping(const cpBody *body)
{
 return (body->node_private.root != ((cpBody*)0));
}


static inline cpBool cpBodyIsStatic(const cpBody *body)
{
 return body->node_private.idleTime == (__builtin_inff());
}



static inline cpBool cpBodyIsRogue(const cpBody *body)
{
 return (body->space_private == ((cpSpace*)0));
}
static inline cpSpace* cpBodyGetSpace(const cpBody *body){return body->space_private;}

static inline cpFloat cpBodyGetMass(const cpBody *body){return body->m;}

void cpBodySetMass(cpBody *body, cpFloat m);

static inline cpFloat cpBodyGetMoment(const cpBody *body){return body->i;}

void cpBodySetMoment(cpBody *body, cpFloat i);

static inline cpVect cpBodyGetPos(const cpBody *body){return body->p;}

void cpBodySetPos(cpBody *body, cpVect pos);
static inline cpVect cpBodyGetVel(const cpBody *body){return body->v;} static inline void cpBodySetVel(cpBody *body, const cpVect value){ cpBodyActivate(body); body->v = value; cpBodySanityCheck(body); }
static inline cpVect cpBodyGetForce(const cpBody *body){return body->f;} static inline void cpBodySetForce(cpBody *body, const cpVect value){ cpBodyActivate(body); body->f = value; cpBodySanityCheck(body); }
static inline cpFloat cpBodyGetAngle(const cpBody *body){return body->a;}

void cpBodySetAngle(cpBody *body, cpFloat a);
static inline cpFloat cpBodyGetAngVel(const cpBody *body){return body->w;} static inline void cpBodySetAngVel(cpBody *body, const cpFloat value){ cpBodyActivate(body); body->w = value; cpBodySanityCheck(body); }
static inline cpFloat cpBodyGetTorque(const cpBody *body){return body->t;} static inline void cpBodySetTorque(cpBody *body, const cpFloat value){ cpBodyActivate(body); body->t = value; cpBodySanityCheck(body); }
static inline cpVect cpBodyGetRot(const cpBody *body){return body->rot;}
static inline cpFloat cpBodyGetVelLimit(const cpBody *body){return body->v_limit;} static inline void cpBodySetVelLimit(cpBody *body, const cpFloat value){ cpBodyActivate(body); body->v_limit = value; cpBodySanityCheck(body); }
static inline cpFloat cpBodyGetAngVelLimit(const cpBody *body){return body->w_limit;} static inline void cpBodySetAngVelLimit(cpBody *body, const cpFloat value){ cpBodyActivate(body); body->w_limit = value; cpBodySanityCheck(body); }
static inline cpDataPointer cpBodyGetUserData(const cpBody *body){return body->data;} static inline void cpBodySetUserData(cpBody *body, const cpDataPointer value){ cpBodyActivate(body); body->data = value; cpBodySanityCheck(body); }


void cpBodyUpdateVelocity(cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt);
void cpBodyUpdatePosition(cpBody *body, cpFloat dt);


static inline cpVect cpBodyLocal2World(const cpBody *body, const cpVect v)
{
 return cpvadd(body->p, cpvrotate(v, body->rot));
}


static inline cpVect cpBodyWorld2Local(const cpBody *body, const cpVect v)
{
 return cpvunrotate(cpvsub(v, body->p), body->rot);
}


void cpBodyResetForces(cpBody *body);

void cpBodyApplyForce(cpBody *body, const cpVect f, const cpVect r);

void cpBodyApplyImpulse(cpBody *body, const cpVect j, const cpVect r);


cpVect cpBodyGetVelAtWorldPoint(cpBody *body, cpVect point);

cpVect cpBodyGetVelAtLocalPoint(cpBody *body, cpVect point);



static inline cpFloat cpBodyKineticEnergy(const cpBody *body)
{

 cpFloat vsq = cpvdot(body->v, body->v);
 cpFloat wsq = body->w*body->w;
 return (vsq ? vsq*body->m : 0.0f) + (wsq ? wsq*body->i : 0.0f);
}


typedef void (*cpBodyShapeIteratorFunc)(cpBody *body, cpShape *shape, void *data);

void cpBodyEachShape(cpBody *body, cpBodyShapeIteratorFunc func, void *data);


typedef void (*cpBodyConstraintIteratorFunc)(cpBody *body, cpConstraint *constraint, void *data);

void cpBodyEachConstraint(cpBody *body, cpBodyConstraintIteratorFunc func, void *data);


typedef void (*cpBodyArbiterIteratorFunc)(cpBody *body, cpArbiter *arbiter, void *data);

void cpBodyEachArbiter(cpBody *body, cpBodyArbiterIteratorFunc func, void *data);
typedef struct cpShapeClass cpShapeClass;


typedef struct cpNearestPointQueryInfo {

 cpShape *shape;

 cpVect p;

 cpFloat d;
} cpNearestPointQueryInfo;


typedef struct cpSegmentQueryInfo {

 cpShape *shape;

 cpFloat t;

 cpVect n;
} cpSegmentQueryInfo;


typedef enum cpShapeType{
 CP_CIRCLE_SHAPE,
 CP_SEGMENT_SHAPE,
 CP_POLY_SHAPE,
 CP_NUM_SHAPES
} cpShapeType;

typedef cpBB (*cpShapeCacheDataImpl)(cpShape *shape, cpVect p, cpVect rot);
typedef void (*cpShapeDestroyImpl)(cpShape *shape);
typedef void (*cpShapeNearestPointQueryImpl)(cpShape *shape, cpVect p, cpNearestPointQueryInfo *info);
typedef void (*cpShapeSegmentQueryImpl)(cpShape *shape, cpVect a, cpVect b, cpSegmentQueryInfo *info);


struct cpShapeClass {
 cpShapeType type;

 cpShapeCacheDataImpl cacheData;
 cpShapeDestroyImpl destroy;
 cpShapeNearestPointQueryImpl nearestPointQuery;
 cpShapeSegmentQueryImpl segmentQuery;
};


struct cpShape {
 const cpShapeClass *klass_private;


 cpBody *body;


 cpBB bb;



 cpBool sensor;


 cpFloat e;

 cpFloat u;

 cpVect surface_v;




 cpDataPointer data;


 cpCollisionType collision_type;

 cpGroup group;

 cpLayers layers;

 cpSpace *space_private;

 cpShape *next_private;
 cpShape *prev_private;

 cpHashValue hashid_private;
};


void cpShapeDestroy(cpShape *shape);

void cpShapeFree(cpShape *shape);


cpBB cpShapeCacheBB(cpShape *shape);

cpBB cpShapeUpdate(cpShape *shape, cpVect pos, cpVect rot);


cpBool cpShapePointQuery(cpShape *shape, cpVect p);



cpFloat cpShapeNearestPointQuery(cpShape *shape, cpVect p, cpNearestPointQueryInfo *out);


cpBool cpShapeSegmentQuery(cpShape *shape, cpVect a, cpVect b, cpSegmentQueryInfo *info);


static inline cpVect cpSegmentQueryHitPoint(const cpVect start, const cpVect end, const cpSegmentQueryInfo info)
{
 return cpvlerp(start, end, info.t);
}


static inline cpFloat cpSegmentQueryHitDist(const cpVect start, const cpVect end, const cpSegmentQueryInfo info)
{
 return cpvdist(start, end)*info.t;
}
static inline cpSpace* cpShapeGetSpace(const cpShape *shape){return shape->space_private;}

static inline cpBody* cpShapeGetBody(const cpShape *shape){return shape->body;}
void cpShapeSetBody(cpShape *shape, cpBody *body);

static inline cpBB cpShapeGetBB(const cpShape *shape){return shape->bb;}
static inline cpBool cpShapeGetSensor(const cpShape *shape){return shape->sensor;} static inline void cpShapeSetSensor(cpShape *shape, cpBool value){ if(1 && shape->body) cpBodyActivate(shape->body); shape->sensor = value; }
static inline cpFloat cpShapeGetElasticity(const cpShape *shape){return shape->e;} static inline void cpShapeSetElasticity(cpShape *shape, cpFloat value){ if(0 && shape->body) cpBodyActivate(shape->body); shape->e = value; }
static inline cpFloat cpShapeGetFriction(const cpShape *shape){return shape->u;} static inline void cpShapeSetFriction(cpShape *shape, cpFloat value){ if(1 && shape->body) cpBodyActivate(shape->body); shape->u = value; }
static inline cpVect cpShapeGetSurfaceVelocity(const cpShape *shape){return shape->surface_v;} static inline void cpShapeSetSurfaceVelocity(cpShape *shape, cpVect value){ if(1 && shape->body) cpBodyActivate(shape->body); shape->surface_v = value; }
static inline cpDataPointer cpShapeGetUserData(const cpShape *shape){return shape->data;} static inline void cpShapeSetUserData(cpShape *shape, cpDataPointer value){ if(0 && shape->body) cpBodyActivate(shape->body); shape->data = value; }
static inline cpCollisionType cpShapeGetCollisionType(const cpShape *shape){return shape->collision_type;} static inline void cpShapeSetCollisionType(cpShape *shape, cpCollisionType value){ if(1 && shape->body) cpBodyActivate(shape->body); shape->collision_type = value; }
static inline cpGroup cpShapeGetGroup(const cpShape *shape){return shape->group;} static inline void cpShapeSetGroup(cpShape *shape, cpGroup value){ if(1 && shape->body) cpBodyActivate(shape->body); shape->group = value; }
static inline cpLayers cpShapeGetLayers(const cpShape *shape){return shape->layers;} static inline void cpShapeSetLayers(cpShape *shape, cpLayers value){ if(1 && shape->body) cpBodyActivate(shape->body); shape->layers = value; }




void cpResetShapeIdCounter(void);







typedef struct cpCircleShape {
 cpShape shape;

 cpVect c, tc;
 cpFloat r;
} cpCircleShape;


cpCircleShape* cpCircleShapeAlloc(void);

cpCircleShape* cpCircleShapeInit(cpCircleShape *circle, cpBody *body, cpFloat radius, cpVect offset);

cpShape* cpCircleShapeNew(cpBody *body, cpFloat radius, cpVect offset);

cpVect cpCircleShapeGetOffset(const cpShape *shape);
cpFloat cpCircleShapeGetRadius(const cpShape *shape);





typedef struct cpSegmentShape {
 cpShape shape;

 cpVect a, b, n;
 cpVect ta, tb, tn;
 cpFloat r;

 cpVect a_tangent, b_tangent;
} cpSegmentShape;


cpSegmentShape* cpSegmentShapeAlloc(void);

cpSegmentShape* cpSegmentShapeInit(cpSegmentShape *seg, cpBody *body, cpVect a, cpVect b, cpFloat radius);

cpShape* cpSegmentShapeNew(cpBody *body, cpVect a, cpVect b, cpFloat radius);

void cpSegmentShapeSetNeighbors(cpShape *shape, cpVect prev, cpVect next);

cpVect cpSegmentShapeGetA(const cpShape *shape);
cpVect cpSegmentShapeGetB(const cpShape *shape);
cpVect cpSegmentShapeGetNormal(const cpShape *shape);
cpFloat cpSegmentShapeGetRadius(const cpShape *shape);
typedef struct cpSplittingPlane {
 cpVect n;
 cpFloat d;
} cpSplittingPlane;


typedef struct cpPolyShape {
 cpShape shape;

 int numVerts;
 cpVect *verts, *tVerts;
 cpSplittingPlane *planes, *tPlanes;
} cpPolyShape;


cpPolyShape* cpPolyShapeAlloc(void);


cpPolyShape* cpPolyShapeInit(cpPolyShape *poly, cpBody *body, int numVerts, const cpVect *verts, cpVect offset);


cpShape* cpPolyShapeNew(cpBody *body, int numVerts, cpVect *verts, cpVect offset);


cpPolyShape* cpBoxShapeInit(cpPolyShape *poly, cpBody *body, cpFloat width, cpFloat height);

cpPolyShape* cpBoxShapeInit2(cpPolyShape *poly, cpBody *body, cpBB box);

cpShape* cpBoxShapeNew(cpBody *body, cpFloat width, cpFloat height);

cpShape* cpBoxShapeNew2(cpBody *body, cpBB box);



cpBool cpPolyValidate(const cpVect *verts, const int numVerts);


int cpPolyShapeGetNumVerts(cpShape *shape);

cpVect cpPolyShapeGetVert(cpShape *shape, int idx);

typedef cpBool (*cpCollisionBeginFunc)(cpArbiter *arb, cpSpace *space, void *data);


typedef cpBool (*cpCollisionPreSolveFunc)(cpArbiter *arb, cpSpace *space, void *data);

typedef void (*cpCollisionPostSolveFunc)(cpArbiter *arb, cpSpace *space, void *data);

typedef void (*cpCollisionSeparateFunc)(cpArbiter *arb, cpSpace *space, void *data);


struct cpCollisionHandler {
 cpCollisionType a;
 cpCollisionType b;
 cpCollisionBeginFunc begin;
 cpCollisionPreSolveFunc preSolve;
 cpCollisionPostSolveFunc postSolve;
 cpCollisionSeparateFunc separate;
 void *data;
};

typedef struct cpContact cpContact;




typedef enum cpArbiterState {

 cpArbiterStateFirstColl,

 cpArbiterStateNormal,


 cpArbiterStateIgnore,

 cpArbiterStateCached,
} cpArbiterState;


struct cpArbiterThread {

 struct cpArbiter *next, *prev;
};


struct cpArbiter {


 cpFloat e;


 cpFloat u;


 cpVect surface_vr;




 cpDataPointer data;

 cpShape *a_private;
 cpShape *b_private;
 cpBody *body_a_private;
 cpBody *body_b_private;

 struct cpArbiterThread thread_a_private;
 struct cpArbiterThread thread_b_private;

 int numContacts_private;
 cpContact *contacts_private;

 cpTimestamp stamp_private;
 cpCollisionHandler *handler_private;
 cpBool swappedColl_private;
 cpArbiterState state_private;
};
static inline cpFloat cpArbiterGetElasticity(const cpArbiter *arb){return arb->e;} static inline void cpArbiterSetElasticity(cpArbiter *arb, cpFloat value){arb->e = value;}
static inline cpFloat cpArbiterGetFriction(const cpArbiter *arb){return arb->u;} static inline void cpArbiterSetFriction(cpArbiter *arb, cpFloat value){arb->u = value;}


cpVect cpArbiterGetSurfaceVelocity(cpArbiter *arb);




void cpArbiterSetSurfaceVelocity(cpArbiter *arb, cpVect vr);

static inline cpDataPointer cpArbiterGetUserData(const cpArbiter *arb){return arb->data;} static inline void cpArbiterSetUserData(cpArbiter *arb, cpDataPointer value){arb->data = value;}



cpVect cpArbiterTotalImpulse(const cpArbiter *arb);


cpVect cpArbiterTotalImpulseWithFriction(const cpArbiter *arb);


cpFloat cpArbiterTotalKE(const cpArbiter *arb);





void cpArbiterIgnore(cpArbiter *arb);




static inline void cpArbiterGetShapes(const cpArbiter *arb, cpShape **a, cpShape **b)
{
 if(arb->swappedColl_private){
  (*a) = arb->b_private, (*b) = arb->a_private;
 } else {
  (*a) = arb->a_private, (*b) = arb->b_private;
 }
}






static inline void cpArbiterGetBodies(const cpArbiter *arb, cpBody **a, cpBody **b)
{
 cpShape *shape_a, *shape_b; cpArbiterGetShapes(arb, &shape_a, &shape_b);;
 (*a) = shape_a->body;
 (*b) = shape_b->body;
}




typedef struct cpContactPointSet {

 int count;


 struct {

  cpVect point;

  cpVect normal;

  cpFloat dist;
 } points[4];
} cpContactPointSet;


cpContactPointSet cpArbiterGetContactPointSet(const cpArbiter *arb);



void cpArbiterSetContactPointSet(cpArbiter *arb, cpContactPointSet *set);


cpBool cpArbiterIsFirstContact(const cpArbiter *arb);

int cpArbiterGetCount(const cpArbiter *arb);

cpVect cpArbiterGetNormal(const cpArbiter *arb, int i);

cpVect cpArbiterGetPoint(const cpArbiter *arb, int i);

cpFloat cpArbiterGetDepth(const cpArbiter *arb, int i);
typedef struct cpConstraintClass cpConstraintClass;

typedef void (*cpConstraintPreStepImpl)(cpConstraint *constraint, cpFloat dt);
typedef void (*cpConstraintApplyCachedImpulseImpl)(cpConstraint *constraint, cpFloat dt_coef);
typedef void (*cpConstraintApplyImpulseImpl)(cpConstraint *constraint, cpFloat dt);
typedef cpFloat (*cpConstraintGetImpulseImpl)(cpConstraint *constraint);


struct cpConstraintClass {
 cpConstraintPreStepImpl preStep;
 cpConstraintApplyCachedImpulseImpl applyCachedImpulse;
 cpConstraintApplyImpulseImpl applyImpulse;
 cpConstraintGetImpulseImpl getImpulse;
};


typedef void (*cpConstraintPreSolveFunc)(cpConstraint *constraint, cpSpace *space);

typedef void (*cpConstraintPostSolveFunc)(cpConstraint *constraint, cpSpace *space);



struct cpConstraint {
 const cpConstraintClass *klass_private;


 cpBody *a;

 cpBody *b;

 cpSpace *space_private;

 cpConstraint *next_a_private;
 cpConstraint *next_b_private;



 cpFloat maxForce;



 cpFloat errorBias;


 cpFloat maxBias;



 cpConstraintPreSolveFunc preSolve;



 cpConstraintPostSolveFunc postSolve;




 cpDataPointer data;
};


void cpConstraintDestroy(cpConstraint *constraint);

void cpConstraintFree(cpConstraint *constraint);


static inline void cpConstraintActivateBodies(cpConstraint *constraint)
{
 cpBody *a = constraint->a; if(a) cpBodyActivate(a);
 cpBody *b = constraint->b; if(b) cpBodyActivate(b);
}
static inline cpSpace* cpConstraintGetSpace(const cpConstraint *constraint){return constraint->space_private;}

static inline cpBody* cpConstraintGetA(const cpConstraint *constraint){return constraint->a;}
static inline cpBody* cpConstraintGetB(const cpConstraint *constraint){return constraint->b;}
static inline cpFloat cpConstraintGetMaxForce(const cpConstraint *constraint){return constraint->maxForce;} static inline void cpConstraintSetMaxForce(cpConstraint *constraint, cpFloat value){ cpConstraintActivateBodies(constraint); constraint->maxForce = value; }
static inline cpFloat cpConstraintGetErrorBias(const cpConstraint *constraint){return constraint->errorBias;} static inline void cpConstraintSetErrorBias(cpConstraint *constraint, cpFloat value){ cpConstraintActivateBodies(constraint); constraint->errorBias = value; }
static inline cpFloat cpConstraintGetMaxBias(const cpConstraint *constraint){return constraint->maxBias;} static inline void cpConstraintSetMaxBias(cpConstraint *constraint, cpFloat value){ cpConstraintActivateBodies(constraint); constraint->maxBias = value; }
static inline cpConstraintPreSolveFunc cpConstraintGetPreSolveFunc(const cpConstraint *constraint){return constraint->preSolve;} static inline void cpConstraintSetPreSolveFunc(cpConstraint *constraint, cpConstraintPreSolveFunc value){ cpConstraintActivateBodies(constraint); constraint->preSolve = value; }
static inline cpConstraintPostSolveFunc cpConstraintGetPostSolveFunc(const cpConstraint *constraint){return constraint->postSolve;} static inline void cpConstraintSetPostSolveFunc(cpConstraint *constraint, cpConstraintPostSolveFunc value){ cpConstraintActivateBodies(constraint); constraint->postSolve = value; }
static inline cpDataPointer cpConstraintGetUserData(const cpConstraint *constraint){return constraint->data;} static inline void cpConstraintSetUserData(cpConstraint *constraint, cpDataPointer value){ cpConstraintActivateBodies(constraint); constraint->data = value; }


static inline cpFloat cpConstraintGetImpulse(cpConstraint *constraint)
{
 return constraint->klass_private->getImpulse(constraint);
}
const cpConstraintClass *cpPinJointGetClass(void);


typedef struct cpPinJoint {
 cpConstraint constraint;
 cpVect anchr1, anchr2;
 cpFloat dist;

 cpVect r1, r2;
 cpVect n;
 cpFloat nMass;

 cpFloat jnAcc;
 cpFloat bias;
} cpPinJoint;


cpPinJoint* cpPinJointAlloc(void);

cpPinJoint* cpPinJointInit(cpPinJoint *joint, cpBody *a, cpBody *b, cpVect anchr1, cpVect anchr2);

cpConstraint* cpPinJointNew(cpBody *a, cpBody *b, cpVect anchr1, cpVect anchr2);

static inline cpVect cpPinJointGetAnchr1(const cpConstraint *constraint){ if(!(constraint->klass_private == cpPinJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPinJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPinJoint.h", 48, 1, 1, "Constraint is not a ""cpPinJoint"); return ((cpPinJoint *)constraint)->anchr1; } static inline void cpPinJointSetAnchr1(cpConstraint *constraint, cpVect value){ if(!(constraint->klass_private == cpPinJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPinJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPinJoint.h", 48, 1, 1, "Constraint is not a ""cpPinJoint"); cpConstraintActivateBodies(constraint); ((cpPinJoint *)constraint)->anchr1 = value; }
static inline cpVect cpPinJointGetAnchr2(const cpConstraint *constraint){ if(!(constraint->klass_private == cpPinJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPinJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPinJoint.h", 49, 1, 1, "Constraint is not a ""cpPinJoint"); return ((cpPinJoint *)constraint)->anchr2; } static inline void cpPinJointSetAnchr2(cpConstraint *constraint, cpVect value){ if(!(constraint->klass_private == cpPinJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPinJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPinJoint.h", 49, 1, 1, "Constraint is not a ""cpPinJoint"); cpConstraintActivateBodies(constraint); ((cpPinJoint *)constraint)->anchr2 = value; }
static inline cpFloat cpPinJointGetDist(const cpConstraint *constraint){ if(!(constraint->klass_private == cpPinJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPinJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPinJoint.h", 50, 1, 1, "Constraint is not a ""cpPinJoint"); return ((cpPinJoint *)constraint)->dist; } static inline void cpPinJointSetDist(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpPinJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPinJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPinJoint.h", 50, 1, 1, "Constraint is not a ""cpPinJoint"); cpConstraintActivateBodies(constraint); ((cpPinJoint *)constraint)->dist = value; }
const cpConstraintClass *cpSlideJointGetClass(void);


typedef struct cpSlideJoint {
 cpConstraint constraint;
 cpVect anchr1, anchr2;
 cpFloat min, max;

 cpVect r1, r2;
 cpVect n;
 cpFloat nMass;

 cpFloat jnAcc;
 cpFloat bias;
} cpSlideJoint;


cpSlideJoint* cpSlideJointAlloc(void);

cpSlideJoint* cpSlideJointInit(cpSlideJoint *joint, cpBody *a, cpBody *b, cpVect anchr1, cpVect anchr2, cpFloat min, cpFloat max);

cpConstraint* cpSlideJointNew(cpBody *a, cpBody *b, cpVect anchr1, cpVect anchr2, cpFloat min, cpFloat max);

static inline cpVect cpSlideJointGetAnchr1(const cpConstraint *constraint){ if(!(constraint->klass_private == cpSlideJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSlideJointGetClass()", "/usr/local/include/chipmunk/constraints/cpSlideJoint.h", 48, 1, 1, "Constraint is not a ""cpSlideJoint"); return ((cpSlideJoint *)constraint)->anchr1; } static inline void cpSlideJointSetAnchr1(cpConstraint *constraint, cpVect value){ if(!(constraint->klass_private == cpSlideJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSlideJointGetClass()", "/usr/local/include/chipmunk/constraints/cpSlideJoint.h", 48, 1, 1, "Constraint is not a ""cpSlideJoint"); cpConstraintActivateBodies(constraint); ((cpSlideJoint *)constraint)->anchr1 = value; }
static inline cpVect cpSlideJointGetAnchr2(const cpConstraint *constraint){ if(!(constraint->klass_private == cpSlideJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSlideJointGetClass()", "/usr/local/include/chipmunk/constraints/cpSlideJoint.h", 49, 1, 1, "Constraint is not a ""cpSlideJoint"); return ((cpSlideJoint *)constraint)->anchr2; } static inline void cpSlideJointSetAnchr2(cpConstraint *constraint, cpVect value){ if(!(constraint->klass_private == cpSlideJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSlideJointGetClass()", "/usr/local/include/chipmunk/constraints/cpSlideJoint.h", 49, 1, 1, "Constraint is not a ""cpSlideJoint"); cpConstraintActivateBodies(constraint); ((cpSlideJoint *)constraint)->anchr2 = value; }
static inline cpFloat cpSlideJointGetMin(const cpConstraint *constraint){ if(!(constraint->klass_private == cpSlideJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSlideJointGetClass()", "/usr/local/include/chipmunk/constraints/cpSlideJoint.h", 50, 1, 1, "Constraint is not a ""cpSlideJoint"); return ((cpSlideJoint *)constraint)->min; } static inline void cpSlideJointSetMin(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpSlideJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSlideJointGetClass()", "/usr/local/include/chipmunk/constraints/cpSlideJoint.h", 50, 1, 1, "Constraint is not a ""cpSlideJoint"); cpConstraintActivateBodies(constraint); ((cpSlideJoint *)constraint)->min = value; }
static inline cpFloat cpSlideJointGetMax(const cpConstraint *constraint){ if(!(constraint->klass_private == cpSlideJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSlideJointGetClass()", "/usr/local/include/chipmunk/constraints/cpSlideJoint.h", 51, 1, 1, "Constraint is not a ""cpSlideJoint"); return ((cpSlideJoint *)constraint)->max; } static inline void cpSlideJointSetMax(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpSlideJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSlideJointGetClass()", "/usr/local/include/chipmunk/constraints/cpSlideJoint.h", 51, 1, 1, "Constraint is not a ""cpSlideJoint"); cpConstraintActivateBodies(constraint); ((cpSlideJoint *)constraint)->max = value; }
const cpConstraintClass *cpPivotJointGetClass(void);


typedef struct cpPivotJoint {
 cpConstraint constraint;
 cpVect anchr1, anchr2;

 cpVect r1, r2;
 cpMat2x2 k;

 cpVect jAcc;
 cpVect bias;
} cpPivotJoint;


cpPivotJoint* cpPivotJointAlloc(void);

cpPivotJoint* cpPivotJointInit(cpPivotJoint *joint, cpBody *a, cpBody *b, cpVect anchr1, cpVect anchr2);

cpConstraint* cpPivotJointNew(cpBody *a, cpBody *b, cpVect pivot);

cpConstraint* cpPivotJointNew2(cpBody *a, cpBody *b, cpVect anchr1, cpVect anchr2);

static inline cpVect cpPivotJointGetAnchr1(const cpConstraint *constraint){ if(!(constraint->klass_private == cpPivotJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPivotJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPivotJoint.h", 48, 1, 1, "Constraint is not a ""cpPivotJoint"); return ((cpPivotJoint *)constraint)->anchr1; } static inline void cpPivotJointSetAnchr1(cpConstraint *constraint, cpVect value){ if(!(constraint->klass_private == cpPivotJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPivotJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPivotJoint.h", 48, 1, 1, "Constraint is not a ""cpPivotJoint"); cpConstraintActivateBodies(constraint); ((cpPivotJoint *)constraint)->anchr1 = value; }
static inline cpVect cpPivotJointGetAnchr2(const cpConstraint *constraint){ if(!(constraint->klass_private == cpPivotJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPivotJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPivotJoint.h", 49, 1, 1, "Constraint is not a ""cpPivotJoint"); return ((cpPivotJoint *)constraint)->anchr2; } static inline void cpPivotJointSetAnchr2(cpConstraint *constraint, cpVect value){ if(!(constraint->klass_private == cpPivotJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpPivotJointGetClass()", "/usr/local/include/chipmunk/constraints/cpPivotJoint.h", 49, 1, 1, "Constraint is not a ""cpPivotJoint"); cpConstraintActivateBodies(constraint); ((cpPivotJoint *)constraint)->anchr2 = value; }
const cpConstraintClass *cpGrooveJointGetClass(void);


typedef struct cpGrooveJoint {
 cpConstraint constraint;
 cpVect grv_n, grv_a, grv_b;
 cpVect anchr2;

 cpVect grv_tn;
 cpFloat clamp;
 cpVect r1, r2;
 cpMat2x2 k;

 cpVect jAcc;
 cpVect bias;
} cpGrooveJoint;


cpGrooveJoint* cpGrooveJointAlloc(void);

cpGrooveJoint* cpGrooveJointInit(cpGrooveJoint *joint, cpBody *a, cpBody *b, cpVect groove_a, cpVect groove_b, cpVect anchr2);

cpConstraint* cpGrooveJointNew(cpBody *a, cpBody *b, cpVect groove_a, cpVect groove_b, cpVect anchr2);

static inline cpVect cpGrooveJointGetGrooveA(const cpConstraint *constraint){ if(!(constraint->klass_private == cpGrooveJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpGrooveJointGetClass()", "/usr/local/include/chipmunk/constraints/cpGrooveJoint.h", 49, 1, 1, "Constraint is not a ""cpGrooveJoint"); return ((cpGrooveJoint *)constraint)->grv_a; }

void cpGrooveJointSetGrooveA(cpConstraint *constraint, cpVect value);
static inline cpVect cpGrooveJointGetGrooveB(const cpConstraint *constraint){ if(!(constraint->klass_private == cpGrooveJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpGrooveJointGetClass()", "/usr/local/include/chipmunk/constraints/cpGrooveJoint.h", 52, 1, 1, "Constraint is not a ""cpGrooveJoint"); return ((cpGrooveJoint *)constraint)->grv_b; }

void cpGrooveJointSetGrooveB(cpConstraint *constraint, cpVect value);
static inline cpVect cpGrooveJointGetAnchr2(const cpConstraint *constraint){ if(!(constraint->klass_private == cpGrooveJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpGrooveJointGetClass()", "/usr/local/include/chipmunk/constraints/cpGrooveJoint.h", 55, 1, 1, "Constraint is not a ""cpGrooveJoint"); return ((cpGrooveJoint *)constraint)->anchr2; } static inline void cpGrooveJointSetAnchr2(cpConstraint *constraint, cpVect value){ if(!(constraint->klass_private == cpGrooveJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpGrooveJointGetClass()", "/usr/local/include/chipmunk/constraints/cpGrooveJoint.h", 55, 1, 1, "Constraint is not a ""cpGrooveJoint"); cpConstraintActivateBodies(constraint); ((cpGrooveJoint *)constraint)->anchr2 = value; }
typedef struct cpDampedSpring cpDampedSpring;

typedef cpFloat (*cpDampedSpringForceFunc)(cpConstraint *spring, cpFloat dist);

const cpConstraintClass *cpDampedSpringGetClass(void);


struct cpDampedSpring {
 cpConstraint constraint;
 cpVect anchr1, anchr2;
 cpFloat restLength;
 cpFloat stiffness;
 cpFloat damping;
 cpDampedSpringForceFunc springForceFunc;

 cpFloat target_vrn;
 cpFloat v_coef;

 cpVect r1, r2;
 cpFloat nMass;
 cpVect n;

 cpFloat jAcc;
};


cpDampedSpring* cpDampedSpringAlloc(void);

cpDampedSpring* cpDampedSpringInit(cpDampedSpring *joint, cpBody *a, cpBody *b, cpVect anchr1, cpVect anchr2, cpFloat restLength, cpFloat stiffness, cpFloat damping);

cpConstraint* cpDampedSpringNew(cpBody *a, cpBody *b, cpVect anchr1, cpVect anchr2, cpFloat restLength, cpFloat stiffness, cpFloat damping);

static inline cpVect cpDampedSpringGetAnchr1(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 57, 1, 1, "Constraint is not a ""cpDampedSpring"); return ((cpDampedSpring *)constraint)->anchr1; } static inline void cpDampedSpringSetAnchr1(cpConstraint *constraint, cpVect value){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 57, 1, 1, "Constraint is not a ""cpDampedSpring"); cpConstraintActivateBodies(constraint); ((cpDampedSpring *)constraint)->anchr1 = value; }
static inline cpVect cpDampedSpringGetAnchr2(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 58, 1, 1, "Constraint is not a ""cpDampedSpring"); return ((cpDampedSpring *)constraint)->anchr2; } static inline void cpDampedSpringSetAnchr2(cpConstraint *constraint, cpVect value){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 58, 1, 1, "Constraint is not a ""cpDampedSpring"); cpConstraintActivateBodies(constraint); ((cpDampedSpring *)constraint)->anchr2 = value; }
static inline cpFloat cpDampedSpringGetRestLength(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 59, 1, 1, "Constraint is not a ""cpDampedSpring"); return ((cpDampedSpring *)constraint)->restLength; } static inline void cpDampedSpringSetRestLength(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 59, 1, 1, "Constraint is not a ""cpDampedSpring"); cpConstraintActivateBodies(constraint); ((cpDampedSpring *)constraint)->restLength = value; }
static inline cpFloat cpDampedSpringGetStiffness(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 60, 1, 1, "Constraint is not a ""cpDampedSpring"); return ((cpDampedSpring *)constraint)->stiffness; } static inline void cpDampedSpringSetStiffness(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 60, 1, 1, "Constraint is not a ""cpDampedSpring"); cpConstraintActivateBodies(constraint); ((cpDampedSpring *)constraint)->stiffness = value; }
static inline cpFloat cpDampedSpringGetDamping(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 61, 1, 1, "Constraint is not a ""cpDampedSpring"); return ((cpDampedSpring *)constraint)->damping; } static inline void cpDampedSpringSetDamping(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 61, 1, 1, "Constraint is not a ""cpDampedSpring"); cpConstraintActivateBodies(constraint); ((cpDampedSpring *)constraint)->damping = value; }
static inline cpDampedSpringForceFunc cpDampedSpringGetSpringForceFunc(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 62, 1, 1, "Constraint is not a ""cpDampedSpring"); return ((cpDampedSpring *)constraint)->springForceFunc; } static inline void cpDampedSpringSetSpringForceFunc(cpConstraint *constraint, cpDampedSpringForceFunc value){ if(!(constraint->klass_private == cpDampedSpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedSpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedSpring.h", 62, 1, 1, "Constraint is not a ""cpDampedSpring"); cpConstraintActivateBodies(constraint); ((cpDampedSpring *)constraint)->springForceFunc = value; }
typedef cpFloat (*cpDampedRotarySpringTorqueFunc)(struct cpConstraint *spring, cpFloat relativeAngle);

const cpConstraintClass *cpDampedRotarySpringGetClass(void);


typedef struct cpDampedRotarySpring {
 cpConstraint constraint;
 cpFloat restAngle;
 cpFloat stiffness;
 cpFloat damping;
 cpDampedRotarySpringTorqueFunc springTorqueFunc;

 cpFloat target_wrn;
 cpFloat w_coef;

 cpFloat iSum;
 cpFloat jAcc;
} cpDampedRotarySpring;


cpDampedRotarySpring* cpDampedRotarySpringAlloc(void);

cpDampedRotarySpring* cpDampedRotarySpringInit(cpDampedRotarySpring *joint, cpBody *a, cpBody *b, cpFloat restAngle, cpFloat stiffness, cpFloat damping);

cpConstraint* cpDampedRotarySpringNew(cpBody *a, cpBody *b, cpFloat restAngle, cpFloat stiffness, cpFloat damping);

static inline cpFloat cpDampedRotarySpringGetRestAngle(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedRotarySpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedRotarySpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedRotarySpring.h", 51, 1, 1, "Constraint is not a ""cpDampedRotarySpring"); return ((cpDampedRotarySpring *)constraint)->restAngle; } static inline void cpDampedRotarySpringSetRestAngle(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpDampedRotarySpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedRotarySpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedRotarySpring.h", 51, 1, 1, "Constraint is not a ""cpDampedRotarySpring"); cpConstraintActivateBodies(constraint); ((cpDampedRotarySpring *)constraint)->restAngle = value; }
static inline cpFloat cpDampedRotarySpringGetStiffness(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedRotarySpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedRotarySpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedRotarySpring.h", 52, 1, 1, "Constraint is not a ""cpDampedRotarySpring"); return ((cpDampedRotarySpring *)constraint)->stiffness; } static inline void cpDampedRotarySpringSetStiffness(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpDampedRotarySpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedRotarySpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedRotarySpring.h", 52, 1, 1, "Constraint is not a ""cpDampedRotarySpring"); cpConstraintActivateBodies(constraint); ((cpDampedRotarySpring *)constraint)->stiffness = value; }
static inline cpFloat cpDampedRotarySpringGetDamping(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedRotarySpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedRotarySpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedRotarySpring.h", 53, 1, 1, "Constraint is not a ""cpDampedRotarySpring"); return ((cpDampedRotarySpring *)constraint)->damping; } static inline void cpDampedRotarySpringSetDamping(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpDampedRotarySpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedRotarySpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedRotarySpring.h", 53, 1, 1, "Constraint is not a ""cpDampedRotarySpring"); cpConstraintActivateBodies(constraint); ((cpDampedRotarySpring *)constraint)->damping = value; }
static inline cpDampedRotarySpringTorqueFunc cpDampedRotarySpringGetSpringTorqueFunc(const cpConstraint *constraint){ if(!(constraint->klass_private == cpDampedRotarySpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedRotarySpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedRotarySpring.h", 54, 1, 1, "Constraint is not a ""cpDampedRotarySpring"); return ((cpDampedRotarySpring *)constraint)->springTorqueFunc; } static inline void cpDampedRotarySpringSetSpringTorqueFunc(cpConstraint *constraint, cpDampedRotarySpringTorqueFunc value){ if(!(constraint->klass_private == cpDampedRotarySpringGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpDampedRotarySpringGetClass()", "/usr/local/include/chipmunk/constraints/cpDampedRotarySpring.h", 54, 1, 1, "Constraint is not a ""cpDampedRotarySpring"); cpConstraintActivateBodies(constraint); ((cpDampedRotarySpring *)constraint)->springTorqueFunc = value; }
const cpConstraintClass *cpRotaryLimitJointGetClass(void);


typedef struct cpRotaryLimitJoint {
 cpConstraint constraint;
 cpFloat min, max;

 cpFloat iSum;

 cpFloat bias;
 cpFloat jAcc;
} cpRotaryLimitJoint;


cpRotaryLimitJoint* cpRotaryLimitJointAlloc(void);

cpRotaryLimitJoint* cpRotaryLimitJointInit(cpRotaryLimitJoint *joint, cpBody *a, cpBody *b, cpFloat min, cpFloat max);

cpConstraint* cpRotaryLimitJointNew(cpBody *a, cpBody *b, cpFloat min, cpFloat max);

static inline cpFloat cpRotaryLimitJointGetMin(const cpConstraint *constraint){ if(!(constraint->klass_private == cpRotaryLimitJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRotaryLimitJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRotaryLimitJoint.h", 45, 1, 1, "Constraint is not a ""cpRotaryLimitJoint"); return ((cpRotaryLimitJoint *)constraint)->min; } static inline void cpRotaryLimitJointSetMin(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpRotaryLimitJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRotaryLimitJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRotaryLimitJoint.h", 45, 1, 1, "Constraint is not a ""cpRotaryLimitJoint"); cpConstraintActivateBodies(constraint); ((cpRotaryLimitJoint *)constraint)->min = value; }
static inline cpFloat cpRotaryLimitJointGetMax(const cpConstraint *constraint){ if(!(constraint->klass_private == cpRotaryLimitJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRotaryLimitJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRotaryLimitJoint.h", 46, 1, 1, "Constraint is not a ""cpRotaryLimitJoint"); return ((cpRotaryLimitJoint *)constraint)->max; } static inline void cpRotaryLimitJointSetMax(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpRotaryLimitJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRotaryLimitJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRotaryLimitJoint.h", 46, 1, 1, "Constraint is not a ""cpRotaryLimitJoint"); cpConstraintActivateBodies(constraint); ((cpRotaryLimitJoint *)constraint)->max = value; }
const cpConstraintClass *cpRatchetJointGetClass(void);


typedef struct cpRatchetJoint {
 cpConstraint constraint;
 cpFloat angle, phase, ratchet;

 cpFloat iSum;

 cpFloat bias;
 cpFloat jAcc;
} cpRatchetJoint;


cpRatchetJoint* cpRatchetJointAlloc(void);

cpRatchetJoint* cpRatchetJointInit(cpRatchetJoint *joint, cpBody *a, cpBody *b, cpFloat phase, cpFloat ratchet);

cpConstraint* cpRatchetJointNew(cpBody *a, cpBody *b, cpFloat phase, cpFloat ratchet);

static inline cpFloat cpRatchetJointGetAngle(const cpConstraint *constraint){ if(!(constraint->klass_private == cpRatchetJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRatchetJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRatchetJoint.h", 45, 1, 1, "Constraint is not a ""cpRatchetJoint"); return ((cpRatchetJoint *)constraint)->angle; } static inline void cpRatchetJointSetAngle(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpRatchetJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRatchetJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRatchetJoint.h", 45, 1, 1, "Constraint is not a ""cpRatchetJoint"); cpConstraintActivateBodies(constraint); ((cpRatchetJoint *)constraint)->angle = value; }
static inline cpFloat cpRatchetJointGetPhase(const cpConstraint *constraint){ if(!(constraint->klass_private == cpRatchetJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRatchetJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRatchetJoint.h", 46, 1, 1, "Constraint is not a ""cpRatchetJoint"); return ((cpRatchetJoint *)constraint)->phase; } static inline void cpRatchetJointSetPhase(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpRatchetJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRatchetJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRatchetJoint.h", 46, 1, 1, "Constraint is not a ""cpRatchetJoint"); cpConstraintActivateBodies(constraint); ((cpRatchetJoint *)constraint)->phase = value; }
static inline cpFloat cpRatchetJointGetRatchet(const cpConstraint *constraint){ if(!(constraint->klass_private == cpRatchetJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRatchetJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRatchetJoint.h", 47, 1, 1, "Constraint is not a ""cpRatchetJoint"); return ((cpRatchetJoint *)constraint)->ratchet; } static inline void cpRatchetJointSetRatchet(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpRatchetJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpRatchetJointGetClass()", "/usr/local/include/chipmunk/constraints/cpRatchetJoint.h", 47, 1, 1, "Constraint is not a ""cpRatchetJoint"); cpConstraintActivateBodies(constraint); ((cpRatchetJoint *)constraint)->ratchet = value; }
const cpConstraintClass *cpGearJointGetClass(void);


typedef struct cpGearJoint {
 cpConstraint constraint;
 cpFloat phase, ratio;
 cpFloat ratio_inv;

 cpFloat iSum;

 cpFloat bias;
 cpFloat jAcc;
} cpGearJoint;


cpGearJoint* cpGearJointAlloc(void);

cpGearJoint* cpGearJointInit(cpGearJoint *joint, cpBody *a, cpBody *b, cpFloat phase, cpFloat ratio);

cpConstraint* cpGearJointNew(cpBody *a, cpBody *b, cpFloat phase, cpFloat ratio);

static inline cpFloat cpGearJointGetPhase(const cpConstraint *constraint){ if(!(constraint->klass_private == cpGearJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpGearJointGetClass()", "/usr/local/include/chipmunk/constraints/cpGearJoint.h", 46, 1, 1, "Constraint is not a ""cpGearJoint"); return ((cpGearJoint *)constraint)->phase; } static inline void cpGearJointSetPhase(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpGearJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpGearJointGetClass()", "/usr/local/include/chipmunk/constraints/cpGearJoint.h", 46, 1, 1, "Constraint is not a ""cpGearJoint"); cpConstraintActivateBodies(constraint); ((cpGearJoint *)constraint)->phase = value; }
static inline cpFloat cpGearJointGetRatio(const cpConstraint *constraint){ if(!(constraint->klass_private == cpGearJointGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpGearJointGetClass()", "/usr/local/include/chipmunk/constraints/cpGearJoint.h", 47, 1, 1, "Constraint is not a ""cpGearJoint"); return ((cpGearJoint *)constraint)->ratio; }

void cpGearJointSetRatio(cpConstraint *constraint, cpFloat value);
const cpConstraintClass *cpSimpleMotorGetClass(void);


typedef struct cpSimpleMotor {
 cpConstraint constraint;
 cpFloat rate;

 cpFloat iSum;

 cpFloat jAcc;
} cpSimpleMotor;


cpSimpleMotor* cpSimpleMotorAlloc(void);

cpSimpleMotor* cpSimpleMotorInit(cpSimpleMotor *joint, cpBody *a, cpBody *b, cpFloat rate);

cpConstraint* cpSimpleMotorNew(cpBody *a, cpBody *b, cpFloat rate);

static inline cpFloat cpSimpleMotorGetRate(const cpConstraint *constraint){ if(!(constraint->klass_private == cpSimpleMotorGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSimpleMotorGetClass()", "/usr/local/include/chipmunk/constraints/cpSimpleMotor.h", 44, 1, 1, "Constraint is not a ""cpSimpleMotor"); return ((cpSimpleMotor *)constraint)->rate; } static inline void cpSimpleMotorSetRate(cpConstraint *constraint, cpFloat value){ if(!(constraint->klass_private == cpSimpleMotorGetClass())) cpMessage("constraint->CP_PRIVATE(klass) == cpSimpleMotorGetClass()", "/usr/local/include/chipmunk/constraints/cpSimpleMotor.h", 44, 1, 1, "Constraint is not a ""cpSimpleMotor"); cpConstraintActivateBodies(constraint); ((cpSimpleMotor *)constraint)->rate = value; }

typedef struct cpContactBufferHeader cpContactBufferHeader;
typedef void (*cpSpaceArbiterApplyImpulseFunc)(cpArbiter *arb);


struct cpSpace {

 int iterations;


 cpVect gravity;





 cpFloat damping;



 cpFloat idleSpeedThreshold;




 cpFloat sleepTimeThreshold;





 cpFloat collisionSlop;




 cpFloat collisionBias;



 cpTimestamp collisionPersistence;



 cpBool enableContactGraph;




 cpDataPointer data;




 cpBody *staticBody;

 cpTimestamp stamp_private;
 cpFloat curr_dt_private;

 cpArray *bodies_private;
 cpArray *rousedBodies_private;
 cpArray *sleepingComponents_private;

 cpSpatialIndex *staticShapes_private;
 cpSpatialIndex *activeShapes_private;

 cpArray *arbiters_private;
 cpContactBufferHeader *contactBuffersHead_private;
 cpHashSet *cachedArbiters_private;
 cpArray *pooledArbiters_private;
 cpArray *constraints_private;

 cpArray *allocatedBuffers_private;
 int locked_private;

 cpHashSet *collisionHandlers_private;
 cpCollisionHandler defaultHandler_private;

 cpBool skipPostStep_private;
 cpArray *postStepCallbacks_private;

 cpBody _staticBody_private;
};


cpSpace* cpSpaceAlloc(void);

cpSpace* cpSpaceInit(cpSpace *space);

cpSpace* cpSpaceNew(void);


void cpSpaceDestroy(cpSpace *space);

void cpSpaceFree(cpSpace *space);
static inline int cpSpaceGetIterations(const cpSpace *space){return space->iterations;} static inline void cpSpaceSetIterations(cpSpace *space, int value){space->iterations = value;}
static inline cpVect cpSpaceGetGravity(const cpSpace *space){return space->gravity;} static inline void cpSpaceSetGravity(cpSpace *space, cpVect value){space->gravity = value;}
static inline cpFloat cpSpaceGetDamping(const cpSpace *space){return space->damping;} static inline void cpSpaceSetDamping(cpSpace *space, cpFloat value){space->damping = value;}
static inline cpFloat cpSpaceGetIdleSpeedThreshold(const cpSpace *space){return space->idleSpeedThreshold;} static inline void cpSpaceSetIdleSpeedThreshold(cpSpace *space, cpFloat value){space->idleSpeedThreshold = value;}
static inline cpFloat cpSpaceGetSleepTimeThreshold(const cpSpace *space){return space->sleepTimeThreshold;} static inline void cpSpaceSetSleepTimeThreshold(cpSpace *space, cpFloat value){space->sleepTimeThreshold = value;}
static inline cpFloat cpSpaceGetCollisionSlop(const cpSpace *space){return space->collisionSlop;} static inline void cpSpaceSetCollisionSlop(cpSpace *space, cpFloat value){space->collisionSlop = value;}
static inline cpFloat cpSpaceGetCollisionBias(const cpSpace *space){return space->collisionBias;} static inline void cpSpaceSetCollisionBias(cpSpace *space, cpFloat value){space->collisionBias = value;}
static inline cpTimestamp cpSpaceGetCollisionPersistence(const cpSpace *space){return space->collisionPersistence;} static inline void cpSpaceSetCollisionPersistence(cpSpace *space, cpTimestamp value){space->collisionPersistence = value;}
static inline cpBool cpSpaceGetEnableContactGraph(const cpSpace *space){return space->enableContactGraph;} static inline void cpSpaceSetEnableContactGraph(cpSpace *space, cpBool value){space->enableContactGraph = value;}
static inline cpDataPointer cpSpaceGetUserData(const cpSpace *space){return space->data;} static inline void cpSpaceSetUserData(cpSpace *space, cpDataPointer value){space->data = value;}
static inline cpBody* cpSpaceGetStaticBody(const cpSpace *space){return space->staticBody;}
static inline cpFloat cpSpaceGetCurrentTimeStep(const cpSpace *space){return space->curr_dt_private;}


static inline cpBool
cpSpaceIsLocked(cpSpace *space)
{
 return space->locked_private;
}





void cpSpaceSetDefaultCollisionHandler(
 cpSpace *space,
 cpCollisionBeginFunc begin,
 cpCollisionPreSolveFunc preSolve,
 cpCollisionPostSolveFunc postSolve,
 cpCollisionSeparateFunc separate,
 void *data
);



void cpSpaceAddCollisionHandler(
 cpSpace *space,
 cpCollisionType a, cpCollisionType b,
 cpCollisionBeginFunc begin,
 cpCollisionPreSolveFunc preSolve,
 cpCollisionPostSolveFunc postSolve,
 cpCollisionSeparateFunc separate,
 void *data
);


void cpSpaceRemoveCollisionHandler(cpSpace *space, cpCollisionType a, cpCollisionType b);



cpShape* cpSpaceAddShape(cpSpace *space, cpShape *shape);

cpShape* cpSpaceAddStaticShape(cpSpace *space, cpShape *shape);

cpBody* cpSpaceAddBody(cpSpace *space, cpBody *body);

cpConstraint* cpSpaceAddConstraint(cpSpace *space, cpConstraint *constraint);


void cpSpaceRemoveShape(cpSpace *space, cpShape *shape);

void cpSpaceRemoveStaticShape(cpSpace *space, cpShape *shape);

void cpSpaceRemoveBody(cpSpace *space, cpBody *body);

void cpSpaceRemoveConstraint(cpSpace *space, cpConstraint *constraint);


cpBool cpSpaceContainsShape(cpSpace *space, cpShape *shape);

cpBool cpSpaceContainsBody(cpSpace *space, cpBody *body);

cpBool cpSpaceContainsConstraint(cpSpace *space, cpConstraint *constraint);



void cpSpaceConvertBodyToStatic(cpSpace *space, cpBody *body);


void cpSpaceConvertBodyToDynamic(cpSpace *space, cpBody *body, cpFloat mass, cpFloat moment);


typedef void (*cpPostStepFunc)(cpSpace *space, void *key, void *data);




cpBool cpSpaceAddPostStepCallback(cpSpace *space, cpPostStepFunc func, void *key, void *data);


typedef void (*cpSpacePointQueryFunc)(cpShape *shape, void *data);

void cpSpacePointQuery(cpSpace *space, cpVect point, cpLayers layers, cpGroup group, cpSpacePointQueryFunc func, void *data);

cpShape *cpSpacePointQueryFirst(cpSpace *space, cpVect point, cpLayers layers, cpGroup group);


typedef void (*cpSpaceNearestPointQueryFunc)(cpShape *shape, cpFloat distance, cpVect point, void *data);

void cpSpaceNearestPointQuery(cpSpace *space, cpVect point, cpFloat maxDistance, cpLayers layers, cpGroup group, cpSpaceNearestPointQueryFunc func, void *data);

cpShape *cpSpaceNearestPointQueryNearest(cpSpace *space, cpVect point, cpFloat maxDistance, cpLayers layers, cpGroup group, cpNearestPointQueryInfo *out);


typedef void (*cpSpaceSegmentQueryFunc)(cpShape *shape, cpFloat t, cpVect n, void *data);

void cpSpaceSegmentQuery(cpSpace *space, cpVect start, cpVect end, cpLayers layers, cpGroup group, cpSpaceSegmentQueryFunc func, void *data);

cpShape *cpSpaceSegmentQueryFirst(cpSpace *space, cpVect start, cpVect end, cpLayers layers, cpGroup group, cpSegmentQueryInfo *out);


typedef void (*cpSpaceBBQueryFunc)(cpShape *shape, void *data);


void cpSpaceBBQuery(cpSpace *space, cpBB bb, cpLayers layers, cpGroup group, cpSpaceBBQueryFunc func, void *data);


typedef void (*cpSpaceShapeQueryFunc)(cpShape *shape, cpContactPointSet *points, void *data);

cpBool cpSpaceShapeQuery(cpSpace *space, cpShape *shape, cpSpaceShapeQueryFunc func, void *data);


void cpSpaceActivateShapesTouchingShape(cpSpace *space, cpShape *shape);



typedef void (*cpSpaceBodyIteratorFunc)(cpBody *body, void *data);

void cpSpaceEachBody(cpSpace *space, cpSpaceBodyIteratorFunc func, void *data);


typedef void (*cpSpaceShapeIteratorFunc)(cpShape *shape, void *data);

void cpSpaceEachShape(cpSpace *space, cpSpaceShapeIteratorFunc func, void *data);


typedef void (*cpSpaceConstraintIteratorFunc)(cpConstraint *constraint, void *data);

void cpSpaceEachConstraint(cpSpace *space, cpSpaceConstraintIteratorFunc func, void *data);


void cpSpaceReindexStatic(cpSpace *space);

void cpSpaceReindexShape(cpSpace *space, cpShape *shape);

void cpSpaceReindexShapesForBody(cpSpace *space, cpBody *body);


void cpSpaceUseSpatialHash(cpSpace *space, cpFloat dim, int count);


void cpSpaceStep(cpSpace *space, cpFloat dt);







extern const char *cpVersionString;


void cpInitChipmunk(void);


void cpEnableSegmentToSegmentCollisions(void);




cpFloat cpMomentForCircle(cpFloat m, cpFloat r1, cpFloat r2, cpVect offset);



cpFloat cpAreaForCircle(cpFloat r1, cpFloat r2);



cpFloat cpMomentForSegment(cpFloat m, cpVect a, cpVect b);


cpFloat cpAreaForSegment(cpVect a, cpVect b, cpFloat r);


cpFloat cpMomentForPoly(cpFloat m, int numVerts, const cpVect *verts, cpVect offset);



cpFloat cpAreaForPoly(const int numVerts, const cpVect *verts);


cpVect cpCentroidForPoly(const int numVerts, const cpVect *verts);


void cpRecenterPoly(const int numVerts, cpVect *verts);


cpFloat cpMomentForBox(cpFloat m, cpFloat width, cpFloat height);


cpFloat cpMomentForBox2(cpFloat m, cpBB box);





int cpConvexHull(int count, cpVect *verts, cpVect *result, int *first, cpFloat tol);

struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };



typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;



typedef __sigset_t sigset_t;









typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);









typedef void *__restrict __timezone_ptr_t;







extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
extern ssize_t readv (int __fd, __const struct iovec *__iovec, int __count)
  ;
extern ssize_t writev (int __fd, __const struct iovec *__iovec, int __count)
  ;







typedef __socklen_t socklen_t;




enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 04000


};
typedef unsigned short int sa_family_t;


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
struct sockaddr_storage
  {
    sa_family_t ss_family;
    unsigned long int __ss_align;
    char __ss_padding[(128 - (2 * sizeof (unsigned long int)))];
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };
struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__));
enum
  {
    SCM_RIGHTS = 0x01





  };



struct linger
  {
    int l_onoff;
    int l_linger;
  };









extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags,
       __const struct timespec *__tmo);


enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__));


extern int bind (int __fd, __const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));
extern int connect (int __fd, __const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));






extern ssize_t send (int __fd, __const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, __const void *__buf, size_t __n,
         int __flags, __const struct sockaddr * __addr,
         socklen_t __addr_len);
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, __const struct msghdr *__message,
   int __flags);






extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);





extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__));




extern int setsockopt (int __fd, int __level, int __optname,
         __const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__));
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__));




enum
  {
    IPPROTO_IP = 0,

    IPPROTO_HOPOPTS = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MTP = 92,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };



typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];




      } __in6_u;





  };

extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };


struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };
struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));










typedef int ENetSocket;

enum
{
    ENET_SOCKET_NULL = -1
};







typedef struct
{
    void * data;
    size_t dataLength;
} ENetBuffer;





typedef fd_set ENetSocketSet;









typedef unsigned char enet_uint8;
typedef unsigned short enet_uint16;
typedef unsigned int enet_uint32;
enum
{
   ENET_PROTOCOL_MINIMUM_MTU = 576,
   ENET_PROTOCOL_MAXIMUM_MTU = 4096,
   ENET_PROTOCOL_MAXIMUM_PACKET_COMMANDS = 32,
   ENET_PROTOCOL_MINIMUM_WINDOW_SIZE = 4096,
   ENET_PROTOCOL_MAXIMUM_WINDOW_SIZE = 32768,
   ENET_PROTOCOL_MINIMUM_CHANNEL_COUNT = 1,
   ENET_PROTOCOL_MAXIMUM_CHANNEL_COUNT = 255,
   ENET_PROTOCOL_MAXIMUM_PEER_ID = 0xFFF,
   ENET_PROTOCOL_MAXIMUM_PACKET_SIZE = 1024 * 1024 * 1024,
   ENET_PROTOCOL_MAXIMUM_FRAGMENT_COUNT = 1024 * 1024
};

typedef enum _ENetProtocolCommand
{
   ENET_PROTOCOL_COMMAND_NONE = 0,
   ENET_PROTOCOL_COMMAND_ACKNOWLEDGE = 1,
   ENET_PROTOCOL_COMMAND_CONNECT = 2,
   ENET_PROTOCOL_COMMAND_VERIFY_CONNECT = 3,
   ENET_PROTOCOL_COMMAND_DISCONNECT = 4,
   ENET_PROTOCOL_COMMAND_PING = 5,
   ENET_PROTOCOL_COMMAND_SEND_RELIABLE = 6,
   ENET_PROTOCOL_COMMAND_SEND_UNRELIABLE = 7,
   ENET_PROTOCOL_COMMAND_SEND_FRAGMENT = 8,
   ENET_PROTOCOL_COMMAND_SEND_UNSEQUENCED = 9,
   ENET_PROTOCOL_COMMAND_BANDWIDTH_LIMIT = 10,
   ENET_PROTOCOL_COMMAND_THROTTLE_CONFIGURE = 11,
   ENET_PROTOCOL_COMMAND_SEND_UNRELIABLE_FRAGMENT = 12,
   ENET_PROTOCOL_COMMAND_COUNT = 13,

   ENET_PROTOCOL_COMMAND_MASK = 0x0F
} ENetProtocolCommand;

typedef enum _ENetProtocolFlag
{
   ENET_PROTOCOL_COMMAND_FLAG_ACKNOWLEDGE = (1 << 7),
   ENET_PROTOCOL_COMMAND_FLAG_UNSEQUENCED = (1 << 6),

   ENET_PROTOCOL_HEADER_FLAG_COMPRESSED = (1 << 14),
   ENET_PROTOCOL_HEADER_FLAG_SENT_TIME = (1 << 15),
   ENET_PROTOCOL_HEADER_FLAG_MASK = ENET_PROTOCOL_HEADER_FLAG_COMPRESSED | ENET_PROTOCOL_HEADER_FLAG_SENT_TIME,

   ENET_PROTOCOL_HEADER_SESSION_MASK = (3 << 12),
   ENET_PROTOCOL_HEADER_SESSION_SHIFT = 12
} ENetProtocolFlag;
typedef struct _ENetProtocolHeader
{
   enet_uint16 peerID;
   enet_uint16 sentTime;
} __attribute__ ((packed)) ENetProtocolHeader;

typedef struct _ENetProtocolCommandHeader
{
   enet_uint8 command;
   enet_uint8 channelID;
   enet_uint16 reliableSequenceNumber;
} __attribute__ ((packed)) ENetProtocolCommandHeader;

typedef struct _ENetProtocolAcknowledge
{
   ENetProtocolCommandHeader header;
   enet_uint16 receivedReliableSequenceNumber;
   enet_uint16 receivedSentTime;
} __attribute__ ((packed)) ENetProtocolAcknowledge;

typedef struct _ENetProtocolConnect
{
   ENetProtocolCommandHeader header;
   enet_uint16 outgoingPeerID;
   enet_uint8 incomingSessionID;
   enet_uint8 outgoingSessionID;
   enet_uint32 mtu;
   enet_uint32 windowSize;
   enet_uint32 channelCount;
   enet_uint32 incomingBandwidth;
   enet_uint32 outgoingBandwidth;
   enet_uint32 packetThrottleInterval;
   enet_uint32 packetThrottleAcceleration;
   enet_uint32 packetThrottleDeceleration;
   enet_uint32 connectID;
   enet_uint32 data;
} __attribute__ ((packed)) ENetProtocolConnect;

typedef struct _ENetProtocolVerifyConnect
{
   ENetProtocolCommandHeader header;
   enet_uint16 outgoingPeerID;
   enet_uint8 incomingSessionID;
   enet_uint8 outgoingSessionID;
   enet_uint32 mtu;
   enet_uint32 windowSize;
   enet_uint32 channelCount;
   enet_uint32 incomingBandwidth;
   enet_uint32 outgoingBandwidth;
   enet_uint32 packetThrottleInterval;
   enet_uint32 packetThrottleAcceleration;
   enet_uint32 packetThrottleDeceleration;
   enet_uint32 connectID;
} __attribute__ ((packed)) ENetProtocolVerifyConnect;

typedef struct _ENetProtocolBandwidthLimit
{
   ENetProtocolCommandHeader header;
   enet_uint32 incomingBandwidth;
   enet_uint32 outgoingBandwidth;
} __attribute__ ((packed)) ENetProtocolBandwidthLimit;

typedef struct _ENetProtocolThrottleConfigure
{
   ENetProtocolCommandHeader header;
   enet_uint32 packetThrottleInterval;
   enet_uint32 packetThrottleAcceleration;
   enet_uint32 packetThrottleDeceleration;
} __attribute__ ((packed)) ENetProtocolThrottleConfigure;

typedef struct _ENetProtocolDisconnect
{
   ENetProtocolCommandHeader header;
   enet_uint32 data;
} __attribute__ ((packed)) ENetProtocolDisconnect;

typedef struct _ENetProtocolPing
{
   ENetProtocolCommandHeader header;
} __attribute__ ((packed)) ENetProtocolPing;

typedef struct _ENetProtocolSendReliable
{
   ENetProtocolCommandHeader header;
   enet_uint16 dataLength;
} __attribute__ ((packed)) ENetProtocolSendReliable;

typedef struct _ENetProtocolSendUnreliable
{
   ENetProtocolCommandHeader header;
   enet_uint16 unreliableSequenceNumber;
   enet_uint16 dataLength;
} __attribute__ ((packed)) ENetProtocolSendUnreliable;

typedef struct _ENetProtocolSendUnsequenced
{
   ENetProtocolCommandHeader header;
   enet_uint16 unsequencedGroup;
   enet_uint16 dataLength;
} __attribute__ ((packed)) ENetProtocolSendUnsequenced;

typedef struct _ENetProtocolSendFragment
{
   ENetProtocolCommandHeader header;
   enet_uint16 startSequenceNumber;
   enet_uint16 dataLength;
   enet_uint32 fragmentCount;
   enet_uint32 fragmentNumber;
   enet_uint32 totalLength;
   enet_uint32 fragmentOffset;
} __attribute__ ((packed)) ENetProtocolSendFragment;

typedef union _ENetProtocol
{
   ENetProtocolCommandHeader header;
   ENetProtocolAcknowledge acknowledge;
   ENetProtocolConnect connect;
   ENetProtocolVerifyConnect verifyConnect;
   ENetProtocolDisconnect disconnect;
   ENetProtocolPing ping;
   ENetProtocolSendReliable sendReliable;
   ENetProtocolSendUnreliable sendUnreliable;
   ENetProtocolSendUnsequenced sendUnsequenced;
   ENetProtocolSendFragment sendFragment;
   ENetProtocolBandwidthLimit bandwidthLimit;
   ENetProtocolThrottleConfigure throttleConfigure;
} __attribute__ ((packed)) ENetProtocol;
typedef struct _ENetListNode
{
   struct _ENetListNode * next;
   struct _ENetListNode * previous;
} ENetListNode;

typedef ENetListNode * ENetListIterator;

typedef struct _ENetList
{
   ENetListNode sentinel;
} ENetList;

extern void enet_list_clear (ENetList *);

extern ENetListIterator enet_list_insert (ENetListIterator, void *);
extern void * enet_list_remove (ENetListIterator);
extern ENetListIterator enet_list_move (ENetListIterator, void *, void *);

extern size_t enet_list_size (ENetList *);
typedef struct _ENetCallbacks
{
    void * ( * malloc) (size_t size);
    void ( * free) (void * memory);
    void ( * no_memory) (void);
} ENetCallbacks;





extern void * enet_malloc (size_t);
extern void enet_free (void *);
typedef enet_uint32 ENetVersion;

struct _ENetHost;
struct _ENetEvent;
struct _ENetPacket;

typedef enum _ENetSocketType
{
   ENET_SOCKET_TYPE_STREAM = 1,
   ENET_SOCKET_TYPE_DATAGRAM = 2
} ENetSocketType;

typedef enum _ENetSocketWait
{
   ENET_SOCKET_WAIT_NONE = 0,
   ENET_SOCKET_WAIT_SEND = (1 << 0),
   ENET_SOCKET_WAIT_RECEIVE = (1 << 1),
   ENET_SOCKET_WAIT_INTERRUPT = (1 << 2)
} ENetSocketWait;

typedef enum _ENetSocketOption
{
   ENET_SOCKOPT_NONBLOCK = 1,
   ENET_SOCKOPT_BROADCAST = 2,
   ENET_SOCKOPT_RCVBUF = 3,
   ENET_SOCKOPT_SNDBUF = 4,
   ENET_SOCKOPT_REUSEADDR = 5,
   ENET_SOCKOPT_RCVTIMEO = 6,
   ENET_SOCKOPT_SNDTIMEO = 7
} ENetSocketOption;

typedef enum _ENetSocketShutdown
{
    ENET_SOCKET_SHUTDOWN_READ = 0,
    ENET_SOCKET_SHUTDOWN_WRITE = 1,
    ENET_SOCKET_SHUTDOWN_READ_WRITE = 2
} ENetSocketShutdown;

enum
{
   ENET_HOST_ANY = 0,
   ENET_HOST_BROADCAST = 0xFFFFFFFF,

   ENET_PORT_ANY = 0
};
typedef struct _ENetAddress
{
   enet_uint32 host;
   enet_uint16 port;
} ENetAddress;
typedef enum _ENetPacketFlag
{


   ENET_PACKET_FLAG_RELIABLE = (1 << 0),



   ENET_PACKET_FLAG_UNSEQUENCED = (1 << 1),

   ENET_PACKET_FLAG_NO_ALLOCATE = (1 << 2),


   ENET_PACKET_FLAG_UNRELIABLE_FRAGMENT = (1 << 3),


   ENET_PACKET_FLAG_SENT = (1<<8)
} ENetPacketFlag;

typedef void ( * ENetPacketFreeCallback) (struct _ENetPacket *);
typedef struct _ENetPacket
{
   size_t referenceCount;
   enet_uint32 flags;
   enet_uint8 * data;
   size_t dataLength;
   ENetPacketFreeCallback freeCallback;
   void * userData;
} ENetPacket;

typedef struct _ENetAcknowledgement
{
   ENetListNode acknowledgementList;
   enet_uint32 sentTime;
   ENetProtocol command;
} ENetAcknowledgement;

typedef struct _ENetOutgoingCommand
{
   ENetListNode outgoingCommandList;
   enet_uint16 reliableSequenceNumber;
   enet_uint16 unreliableSequenceNumber;
   enet_uint32 sentTime;
   enet_uint32 roundTripTimeout;
   enet_uint32 roundTripTimeoutLimit;
   enet_uint32 fragmentOffset;
   enet_uint16 fragmentLength;
   enet_uint16 sendAttempts;
   ENetProtocol command;
   ENetPacket * packet;
} ENetOutgoingCommand;

typedef struct _ENetIncomingCommand
{
   ENetListNode incomingCommandList;
   enet_uint16 reliableSequenceNumber;
   enet_uint16 unreliableSequenceNumber;
   ENetProtocol command;
   enet_uint32 fragmentCount;
   enet_uint32 fragmentsRemaining;
   enet_uint32 * fragments;
   ENetPacket * packet;
} ENetIncomingCommand;

typedef enum _ENetPeerState
{
   ENET_PEER_STATE_DISCONNECTED = 0,
   ENET_PEER_STATE_CONNECTING = 1,
   ENET_PEER_STATE_ACKNOWLEDGING_CONNECT = 2,
   ENET_PEER_STATE_CONNECTION_PENDING = 3,
   ENET_PEER_STATE_CONNECTION_SUCCEEDED = 4,
   ENET_PEER_STATE_CONNECTED = 5,
   ENET_PEER_STATE_DISCONNECT_LATER = 6,
   ENET_PEER_STATE_DISCONNECTING = 7,
   ENET_PEER_STATE_ACKNOWLEDGING_DISCONNECT = 8,
   ENET_PEER_STATE_ZOMBIE = 9
} ENetPeerState;





enum
{
   ENET_HOST_RECEIVE_BUFFER_SIZE = 256 * 1024,
   ENET_HOST_SEND_BUFFER_SIZE = 256 * 1024,
   ENET_HOST_BANDWIDTH_THROTTLE_INTERVAL = 1000,
   ENET_HOST_DEFAULT_MTU = 1400,

   ENET_PEER_DEFAULT_ROUND_TRIP_TIME = 500,
   ENET_PEER_DEFAULT_PACKET_THROTTLE = 32,
   ENET_PEER_PACKET_THROTTLE_SCALE = 32,
   ENET_PEER_PACKET_THROTTLE_COUNTER = 7,
   ENET_PEER_PACKET_THROTTLE_ACCELERATION = 2,
   ENET_PEER_PACKET_THROTTLE_DECELERATION = 2,
   ENET_PEER_PACKET_THROTTLE_INTERVAL = 5000,
   ENET_PEER_PACKET_LOSS_SCALE = (1 << 16),
   ENET_PEER_PACKET_LOSS_INTERVAL = 10000,
   ENET_PEER_WINDOW_SIZE_SCALE = 64 * 1024,
   ENET_PEER_TIMEOUT_LIMIT = 32,
   ENET_PEER_TIMEOUT_MINIMUM = 5000,
   ENET_PEER_TIMEOUT_MAXIMUM = 30000,
   ENET_PEER_PING_INTERVAL = 500,
   ENET_PEER_UNSEQUENCED_WINDOWS = 64,
   ENET_PEER_UNSEQUENCED_WINDOW_SIZE = 1024,
   ENET_PEER_FREE_UNSEQUENCED_WINDOWS = 32,
   ENET_PEER_RELIABLE_WINDOWS = 16,
   ENET_PEER_RELIABLE_WINDOW_SIZE = 0x1000,
   ENET_PEER_FREE_RELIABLE_WINDOWS = 8
};

typedef struct _ENetChannel
{
   enet_uint16 outgoingReliableSequenceNumber;
   enet_uint16 outgoingUnreliableSequenceNumber;
   enet_uint16 usedReliableWindows;
   enet_uint16 reliableWindows [ENET_PEER_RELIABLE_WINDOWS];
   enet_uint16 incomingReliableSequenceNumber;
   enet_uint16 incomingUnreliableSequenceNumber;
   ENetList incomingReliableCommands;
   ENetList incomingUnreliableCommands;
} ENetChannel;






typedef struct _ENetPeer
{
   ENetListNode dispatchList;
   struct _ENetHost * host;
   enet_uint16 outgoingPeerID;
   enet_uint16 incomingPeerID;
   enet_uint32 connectID;
   enet_uint8 outgoingSessionID;
   enet_uint8 incomingSessionID;
   ENetAddress address;
   void * data;
   ENetPeerState state;
   ENetChannel * channels;
   size_t channelCount;
   enet_uint32 incomingBandwidth;
   enet_uint32 outgoingBandwidth;
   enet_uint32 incomingBandwidthThrottleEpoch;
   enet_uint32 outgoingBandwidthThrottleEpoch;
   enet_uint32 incomingDataTotal;
   enet_uint32 outgoingDataTotal;
   enet_uint32 lastSendTime;
   enet_uint32 lastReceiveTime;
   enet_uint32 nextTimeout;
   enet_uint32 earliestTimeout;
   enet_uint32 packetLossEpoch;
   enet_uint32 packetsSent;
   enet_uint32 packetsLost;
   enet_uint32 packetLoss;
   enet_uint32 packetLossVariance;
   enet_uint32 packetThrottle;
   enet_uint32 packetThrottleLimit;
   enet_uint32 packetThrottleCounter;
   enet_uint32 packetThrottleEpoch;
   enet_uint32 packetThrottleAcceleration;
   enet_uint32 packetThrottleDeceleration;
   enet_uint32 packetThrottleInterval;
   enet_uint32 pingInterval;
   enet_uint32 timeoutLimit;
   enet_uint32 timeoutMinimum;
   enet_uint32 timeoutMaximum;
   enet_uint32 lastRoundTripTime;
   enet_uint32 lowestRoundTripTime;
   enet_uint32 lastRoundTripTimeVariance;
   enet_uint32 highestRoundTripTimeVariance;
   enet_uint32 roundTripTime;
   enet_uint32 roundTripTimeVariance;
   enet_uint32 mtu;
   enet_uint32 windowSize;
   enet_uint32 reliableDataInTransit;
   enet_uint16 outgoingReliableSequenceNumber;
   ENetList acknowledgements;
   ENetList sentReliableCommands;
   ENetList sentUnreliableCommands;
   ENetList outgoingReliableCommands;
   ENetList outgoingUnreliableCommands;
   ENetList dispatchedCommands;
   int needsDispatch;
   enet_uint16 incomingUnsequencedGroup;
   enet_uint16 outgoingUnsequencedGroup;
   enet_uint32 unsequencedWindow [ENET_PEER_UNSEQUENCED_WINDOW_SIZE / 32];
   enet_uint32 eventData;
} ENetPeer;



typedef struct _ENetCompressor
{

   void * context;

   size_t ( * compress) (void * context, const ENetBuffer * inBuffers, size_t inBufferCount, size_t inLimit, enet_uint8 * outData, size_t outLimit);

   size_t ( * decompress) (void * context, const enet_uint8 * inData, size_t inLimit, enet_uint8 * outData, size_t outLimit);

   void ( * destroy) (void * context);
} ENetCompressor;


typedef enet_uint32 ( * ENetChecksumCallback) (const ENetBuffer * buffers, size_t bufferCount);


typedef int ( * ENetInterceptCallback) (struct _ENetHost * host, struct _ENetEvent * event);
typedef struct _ENetHost
{
   ENetSocket socket;
   ENetAddress address;
   enet_uint32 incomingBandwidth;
   enet_uint32 outgoingBandwidth;
   enet_uint32 bandwidthThrottleEpoch;
   enet_uint32 mtu;
   enet_uint32 randomSeed;
   int recalculateBandwidthLimits;
   ENetPeer * peers;
   size_t peerCount;
   size_t channelLimit;
   enet_uint32 serviceTime;
   ENetList dispatchQueue;
   int continueSending;
   size_t packetSize;
   enet_uint16 headerFlags;
   ENetProtocol commands [ENET_PROTOCOL_MAXIMUM_PACKET_COMMANDS];
   size_t commandCount;
   ENetBuffer buffers [(1 + 2 * ENET_PROTOCOL_MAXIMUM_PACKET_COMMANDS)];
   size_t bufferCount;
   ENetChecksumCallback checksum;
   ENetCompressor compressor;
   enet_uint8 packetData [2][ENET_PROTOCOL_MAXIMUM_MTU];
   ENetAddress receivedAddress;
   enet_uint8 * receivedData;
   size_t receivedDataLength;
   enet_uint32 totalSentData;
   enet_uint32 totalSentPackets;
   enet_uint32 totalReceivedData;
   enet_uint32 totalReceivedPackets;
   ENetInterceptCallback intercept;
   size_t connectedPeers;
   size_t bandwidthLimitedPeers;
} ENetHost;




typedef enum _ENetEventType
{

   ENET_EVENT_TYPE_NONE = 0,




   ENET_EVENT_TYPE_CONNECT = 1,
   ENET_EVENT_TYPE_DISCONNECT = 2,







   ENET_EVENT_TYPE_RECEIVE = 3
} ENetEventType;






typedef struct _ENetEvent
{
   ENetEventType type;
   ENetPeer * peer;
   enet_uint8 channelID;
   enet_uint32 data;
   ENetPacket * packet;
} ENetEvent;
extern int enet_initialize (void);
extern int enet_initialize_with_callbacks (ENetVersion version, const ENetCallbacks * inits);





extern void enet_deinitialize (void);





extern ENetVersion enet_linked_version (void);
extern enet_uint32 enet_time_get (void);



extern void enet_time_set (enet_uint32);




extern ENetSocket enet_socket_create (ENetSocketType);
extern int enet_socket_bind (ENetSocket, const ENetAddress *);
extern int enet_socket_get_address (ENetSocket, ENetAddress *);
extern int enet_socket_listen (ENetSocket, int);
extern ENetSocket enet_socket_accept (ENetSocket, ENetAddress *);
extern int enet_socket_connect (ENetSocket, const ENetAddress *);
extern int enet_socket_send (ENetSocket, const ENetAddress *, const ENetBuffer *, size_t);
extern int enet_socket_receive (ENetSocket, ENetAddress *, ENetBuffer *, size_t);
extern int enet_socket_wait (ENetSocket, enet_uint32 *, enet_uint32);
extern int enet_socket_set_option (ENetSocket, ENetSocketOption, int);
extern int enet_socket_shutdown (ENetSocket, ENetSocketShutdown);
extern void enet_socket_destroy (ENetSocket);
extern int enet_socketset_select (ENetSocket, ENetSocketSet *, ENetSocketSet *, enet_uint32);
extern int enet_address_set_host (ENetAddress * address, const char * hostName);
extern int enet_address_get_host_ip (const ENetAddress * address, char * hostName, size_t nameLength);
extern int enet_address_get_host (const ENetAddress * address, char * hostName, size_t nameLength);



extern ENetPacket * enet_packet_create (const void *, size_t, enet_uint32);
extern void enet_packet_destroy (ENetPacket *);
extern int enet_packet_resize (ENetPacket *, size_t);
extern enet_uint32 enet_crc32 (const ENetBuffer *, size_t);

extern ENetHost * enet_host_create (const ENetAddress *, size_t, size_t, enet_uint32, enet_uint32);
extern void enet_host_destroy (ENetHost *);
extern ENetPeer * enet_host_connect (ENetHost *, const ENetAddress *, size_t, enet_uint32);
extern int enet_host_check_events (ENetHost *, ENetEvent *);
extern int enet_host_service (ENetHost *, ENetEvent *, enet_uint32);
extern void enet_host_flush (ENetHost *);
extern void enet_host_broadcast (ENetHost *, enet_uint8, ENetPacket *);
extern void enet_host_compress (ENetHost *, const ENetCompressor *);
extern int enet_host_compress_with_range_coder (ENetHost * host);
extern void enet_host_channel_limit (ENetHost *, size_t);
extern void enet_host_bandwidth_limit (ENetHost *, enet_uint32, enet_uint32);
extern void enet_host_bandwidth_throttle (ENetHost *);

extern int enet_peer_send (ENetPeer *, enet_uint8, ENetPacket *);
extern ENetPacket * enet_peer_receive (ENetPeer *, enet_uint8 * channelID);
extern void enet_peer_ping (ENetPeer *);
extern void enet_peer_ping_interval (ENetPeer *, enet_uint32);
extern void enet_peer_timeout (ENetPeer *, enet_uint32, enet_uint32, enet_uint32);
extern void enet_peer_reset (ENetPeer *);
extern void enet_peer_disconnect (ENetPeer *, enet_uint32);
extern void enet_peer_disconnect_now (ENetPeer *, enet_uint32);
extern void enet_peer_disconnect_later (ENetPeer *, enet_uint32);
extern void enet_peer_throttle_configure (ENetPeer *, enet_uint32, enet_uint32, enet_uint32);
extern int enet_peer_throttle (ENetPeer *, enet_uint32);
extern void enet_peer_reset_queues (ENetPeer *);
extern void enet_peer_setup_outgoing_command (ENetPeer *, ENetOutgoingCommand *);
extern ENetOutgoingCommand * enet_peer_queue_outgoing_command (ENetPeer *, const ENetProtocol *, ENetPacket *, enet_uint32, enet_uint16);
extern ENetIncomingCommand * enet_peer_queue_incoming_command (ENetPeer *, const ENetProtocol *, ENetPacket *, enet_uint32);
extern ENetAcknowledgement * enet_peer_queue_acknowledgement (ENetPeer *, const ENetProtocol *, enet_uint16);
extern void enet_peer_dispatch_incoming_unreliable_commands (ENetPeer *, ENetChannel *);
extern void enet_peer_dispatch_incoming_reliable_commands (ENetPeer *, ENetChannel *);
extern void enet_peer_on_connect (ENetPeer *);
extern void enet_peer_on_disconnect (ENetPeer *);

extern void * enet_range_coder_create (void);
extern void enet_range_coder_destroy (void *);
extern size_t enet_range_coder_compress (void *, const ENetBuffer *, size_t, size_t, enet_uint8 *, size_t);
extern size_t enet_range_coder_decompress (void *, const enet_uint8 *, size_t, enet_uint8 *, size_t);

extern size_t enet_protocol_command_size (enet_uint8);
