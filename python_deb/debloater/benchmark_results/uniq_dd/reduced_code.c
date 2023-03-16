typedef long __time_t;
typedef long __syscall_slong_t;
typedef __time_t time_t;
struct timespec
{

  __syscall_slong_t tv_nsec;
};
typedef unsigned long size_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __uid_t uid_t;
struct stat
{















};
typedef __ino_t ino_t;
typedef __dev_t dev_t;
struct di_set;
struct di_set;
struct hash_tuning
{
  float shrink_threshold;
  float shrink_factor;
  float growth_threshold;
  float growth_factor;
  _Bool is_n_buckets;
};
typedef struct hash_tuning Hash_tuning;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
struct ino_map;
struct ino_map;
typedef size_t hashint;
struct di_ent
{
  dev_t dev;
  struct hash_table *ino_set;
};
struct di_set
{
  struct hash_table *dev_map;
  struct ino_map *ino_map;
  struct di_ent *probe;
};
typedef unsigned long uintmax_t;
struct dev_ino
{
  ino_t st_ino;
  dev_t st_dev;
};
struct cycle_check_state
{
  struct dev_ino dev_ino;
  uintmax_t chdir_counter;
  int magic;
};
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker
{
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
struct _IO_FILE
{
  int _flags;
























  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[((15UL * (sizeof(int))) - (4UL * (sizeof(void *)))) - (sizeof(size_t))];
};
typedef __off_t off_t;
struct cd_buf
{
  int fd;
};
typedef long __ssize_t;
typedef __ssize_t ssize_t;
struct allocator;
struct allocator;
struct allocator
{
  void *(*allocate)(size_t);
  void *(*reallocate)(void *, size_t);
  void (*free)(void *);
  void (*die)(size_t);
};
typedef long ptrdiff_t;
enum canonicalize_mode_t
{
  CAN_EXISTING = 0,
  CAN_ALL_BUT_LAST = 1,
  CAN_MISSING = 2,
  CAN_NOLINKS = 4
};
typedef enum canonicalize_mode_t canonicalize_mode_t;
typedef unsigned int __socklen_t;
typedef __socklen_t socklen_t;
typedef unsigned short sa_family_t;
struct sockaddr
{
  sa_family_t sa_family;
  char sa_data[14];
};
struct addrinfo
{







  struct addrinfo *ai_next;
};
struct __locale_data;
struct __locale_data;
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
struct base64_decode_context
{
  unsigned int i;
  char buf[4];
};
enum backup_type
{
  no_backups = 0,
  simple_backups = 1,
  numbered_existing_backups = 2,
  numbered_backups = 3
};
struct dirent
{
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
};
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
enum numbered_backup_result
{
  BACKUP_IS_SAME_LENGTH = 0,
  BACKUP_IS_LONGER = 1,
  BACKUP_IS_NEW = 2
};
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
struct argv_iterator;
struct argv_iterator;
enum argv_iter_err
{
  AI_ERR_OK = 1,
  AI_ERR_EOF = 2,
  AI_ERR_MEM = 3,
  AI_ERR_READ = 4
};
struct argv_iterator
{
  FILE *fp;
  size_t item_idx;
  char *tok;
  size_t buf_len;
  char **arg_list;
  char **p;
};
enum quoting_style
{







  clocale_quoting_style = 7,
  custom_quoting_style = 8
};
enum strtol_error
{
  LONGINT_OK = 0,
  LONGINT_OVERFLOW = 1,
  LONGINT_INVALID_SUFFIX_CHAR = 2,
  LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
  LONGINT_INVALID = 4
};
typedef enum strtol_error strtol_error;
struct option
{
  const char *name;
  int has_arg;
  int *flag;
  int val;
};
typedef long intmax_t;
typedef void *iconv_t;
typedef __nlink_t nlink_t;
struct I_ring
{
  int ir_data[4];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;
struct _ftsent;
struct _ftsent;
union __anonunion_fts_cycle_25
{
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_24
{







  size_t fts_pathlen;
  size_t fts_nitems;
  int (*fts_compar)(const struct _ftsent **, const struct _ftsent **);
  int fts_options;
  struct hash_table *fts_leaf_optimization_works_ht;
  union __anonunion_fts_cycle_25 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_24 FTS;
struct _ftsent
{















  unsigned short fts_info;
  unsigned short fts_flags;
  unsigned short fts_instr;
  struct stat fts_statp[1];
  char fts_name[1];
};
typedef struct _ftsent FTSENT;
typedef unsigned int uint32_t;
typedef uint32_t ucs4_t;
typedef int __pid_t;
typedef __pid_t pid_t;
typedef int __sig_atomic_t;
typedef __sig_atomic_t sig_atomic_t;
struct __anonstruct_slaves_entry_t_50
{
  volatile sig_atomic_t used;
  volatile pid_t child;
};
typedef struct __anonstruct_slaves_entry_t_50 slaves_entry_t;
union __anonunion_51
{
  int __in;
  int __i;
};
union __anonunion_52
{
  int __in;
  int __i;
};
union __anonunion_53
{
  int __in;
  int __i;
};
union __anonunion_54
{
  int __in;
  int __i;
};
union __anonunion_55
{
  int __in;
  int __i;
};
union __anonunion_56
{
  int __in;
  int __i;
};
union __anonunion_57
{
  int __in;
  int __i;
};
union __anonunion_58
{
  int __in;
  int __i;
};
typedef int wchar_t;
typedef int nl_item;
typedef unsigned int wint_t;
enum __anonenum_arg_type_27
{















  TYPE_STRING = 15,
  TYPE_WIDE_STRING = 16,
  TYPE_POINTER = 17,
  TYPE_COUNT_SCHAR_POINTER = 18,
  TYPE_COUNT_SHORT_POINTER = 19,
  TYPE_COUNT_INT_POINTER = 20,
  TYPE_COUNT_LONGINT_POINTER = 21,
  TYPE_COUNT_LONGLONGINT_POINTER = 22
};
typedef enum __anonenum_arg_type_27 arg_type;
union __anonunion_a_29
{























};
struct __anonstruct_argument_28
{
  arg_type type;
  union __anonunion_a_29 a;
};
typedef struct __anonstruct_argument_28 argument;
struct __anonstruct_arguments_30
{
  size_t count;
  argument *arg;
  argument direct_alloc_arg[7];
};
typedef struct __anonstruct_arguments_30 arguments;
struct __anonstruct_char_directive_31
{







  const char *precision_end;
  size_t precision_arg_index;
  char conversion;
  size_t arg_index;
};
typedef struct __anonstruct_char_directive_31 char_directive;
struct __anonstruct_char_directives_32
{
  size_t count;
  char_directive *dir;
  size_t max_width_length;
  size_t max_precision_length;
  char_directive direct_alloc_dir[7];
};
typedef struct __anonstruct_char_directives_32 char_directives;
typedef unsigned short fpucw_t;
struct saved_cwd
{
  int desc;
  char *name;
};
typedef long __suseconds_t;
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
struct fs_res
{
  dev_t dev;
  int resolution;
  _Bool exact;
};
struct passwd
{







};
struct group
{
  char *gr_name;
  char *gr_passwd;
  __gid_t gr_gid;
  char **gr_mem;
};
typedef unsigned char uint8_t;
union __anonunion___value_23
{
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_22
{
  int __count;
  union __anonunion___value_23 __value;
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
typedef __mbstate_t mbstate_t;
struct mbchar
{
  const char *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
struct mbiter_multi
{
  const char *limit;
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbiter_multi mbi_iterator_t;
typedef uintmax_t randint;
struct randint_source;
struct randint_source;
union __anonunion_tmp_21
{
  unsigned int align;
  char buf[4096];
};
struct tm
{







  int tm_yday;
  int tm_isdst;
  long tm_gmtoff;
  const char *tm_zone;
};
struct __anonstruct___sigset_t_9
{
  unsigned long __val[1024UL / (8UL * (sizeof(unsigned long)))];
};
typedef struct __anonstruct___sigset_t_9 __sigset_t;
typedef __sigset_t sigset_t;
struct sched_param
{
  int __sched_priority;
};
struct __anonstruct_posix_spawnattr_t_50
{







};
typedef struct __anonstruct_posix_spawnattr_t_50 posix_spawnattr_t;
struct __spawn_action;
struct __spawn_action;
struct __anonstruct_posix_spawn_file_actions_t_51
{
  int __allocated;
  int __used;
  struct __spawn_action *__actions;
  int __pad[16];
};
typedef struct __anonstruct_posix_spawn_file_actions_t_51 posix_spawn_file_actions_t;
struct numname
{
  int num;
  const char name[8];
};
typedef unsigned long uint64_t;
typedef uint64_t u64;
struct sha512_ctx
{
  u64 state[8];
  u64 total[2];
  size_t buflen;
  u64 buffer[32];
};
struct sha256_ctx
{
  uint32_t state[8];
  uint32_t total[2];
  size_t buflen;
  uint32_t buffer[32];
};
struct sha1_ctx
{







  uint32_t buffer[32];
};
typedef int __clockid_t;
typedef __clockid_t clockid_t;
struct timezone
{
  int tz_minuteswest;
  int tz_dsttime;
};
enum __anonenum_state_14
{
  INITIAL_STATE = 0,
  FD_STATE = 1,
  FD_POST_CHDIR_STATE = 2,
  FORKING_STATE = 3,
  ERROR_STATE = 4,
  FINAL_STATE = 5
};
union __anonunion_val_15
{
  int fd;
  int errnum;
  pid_t child;
};
struct savewd
{
  enum __anonenum_state_14 state;
  union __anonunion_val_15 val;
};
union __anonunion_52___0
{
  int __in;
  int __i;
};
union __anonunion_53___0
{
  int __in;
  int __i;
};
union __anonunion_54___0
{
  int __in;
  int __i;
};
typedef int __int32_t;
struct __exit_status
{
  short e_termination;
  short e_exit;
};
struct __anonstruct_ut_tv_15
{
  __int32_t tv_sec;
  __int32_t tv_usec;
};
struct utmpx
{







  __int32_t ut_session;
  struct __anonstruct_ut_tv_15 ut_tv;
  __int32_t ut_addr_v6[4];
  char __glibc_reserved[20];
};
typedef struct utmpx STRUCT_UTMP;
struct obstack;
struct obstack;
struct _obstack_chunk
{
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};
union __anonunion_temp_26
{
  long tempint;
  void *tempptr;
};
struct obstack
{







  struct _obstack_chunk *(*chunkfun)(void *, long);
  void (*freefun)(void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned int use_extra_arg : 1;
  unsigned int maybe_empty_object : 1;
  unsigned int alloc_failed : 1;
};
struct Tokens
{
  size_t n_tok;
  char **tok;
  size_t *tok_len;
  struct obstack o_data;
  struct obstack o_tok;
  struct obstack o_tok_len;
};
struct tokenbuffer
{
  size_t size;
  char *buffer;
};
typedef struct tokenbuffer token_buffer;
typedef size_t word;
struct randread_source;
struct randread_source;
typedef unsigned long uint_least64_t;
typedef struct timezone *__restrict __timezone_ptr_t;
typedef uint_least64_t isaac_word;
struct isaac_state
{
  isaac_word m[1 << 8];
  isaac_word a;
  isaac_word b;
  isaac_word c;
};
union __anonunion_data_31
{
  isaac_word w[1 << 8];
  unsigned char b[((unsigned long) (1 << 8)) * (sizeof(isaac_word))];
};
struct isaac
{
  size_t buffered;
  struct isaac_state state;
  union __anonunion_data_31 data;
};
union __anonunion_buf_30
{
  char c[2UL * (((unsigned long) (1 << 8)) * (sizeof(isaac_word)))];
  struct isaac isaac;
};
struct randread_source
{
  FILE *source;
  void (*handler)(const void *);
  const void *handler_arg;
  union __anonunion_buf_30 buf;
};
struct sparse_ent_
{
  size_t index;
  size_t val;
};
typedef Hash_table sparse_map;
struct randint_source
{
  struct randread_source *source;
  randint randnum;
  randint randmax;
};
struct quoting_options;
struct quoting_options;
struct quoting_options
{
  enum quoting_style style;
  int flags;
  unsigned int quote_these_too[(255UL / ((sizeof(int)) * 8UL)) + 1UL];
  const char *left_quote;
  const char *right_quote;
};
struct slotvec
{
  size_t size;
  char *val;
};
typedef struct mbchar mbchar_t;
struct mbuiter_multi
{
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbuiter_multi mbui_iterator_t;
typedef long long_time_t;
struct __anonstruct_textint_27
{
  _Bool negative;
  long value;
  size_t digits;
};
typedef struct __anonstruct_textint_27 textint;
struct __anonstruct_table_28
{
  const char *name;
  int type;
  int value;
};
typedef struct __anonstruct_table_28 table;
struct __anonstruct_relative_time_31
{







};
typedef struct __anonstruct_relative_time_31 relative_time;
struct __anonstruct_parser_control_32
{















  size_t dates_seen;
  size_t days_seen;
  size_t local_zones_seen;
  size_t dsts_seen;
  size_t times_seen;
  size_t zones_seen;
  table local_time_zone_table[3];
};
typedef struct __anonstruct_parser_control_32 parser_control;
union YYSTYPE;
union YYSTYPE;
union YYSTYPE
{
  long intval;
  textint textintval;
  struct timespec timespec;
  relative_time rel;
};
typedef union YYSTYPE YYSTYPE;
typedef unsigned char yytype_uint8;
typedef signed char yytype_int8;
typedef short yytype_int16;
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};
enum nproc_query
{
  NPROC_ALL = 0,
  NPROC_CURRENT = 1,
  NPROC_CURRENT_OVERRIDABLE = 2
};
typedef unsigned long __cpu_mask;
struct __anonstruct_cpu_set_t_24
{
  __cpu_mask __bits[1024UL / (8UL * (sizeof(__cpu_mask)))];
};
typedef struct __anonstruct_cpu_set_t_24 cpu_set_t;
struct mount_entry
{







  struct mount_entry *me_next;
};
struct mntent
{
  char *mnt_fsname;
  char *mnt_dir;
  char *mnt_type;
  char *mnt_opts;
  int mnt_freq;
  int mnt_passno;
};
struct mode_change;
struct mode_change;
struct mode_change
{
  char op;
  char flag;
  mode_t affected;
  mode_t value;
  mode_t mentioned;
};
typedef unsigned long longword;
struct md5_ctx
{







};
enum __anonenum_mbs_align_t_1
{
  MBS_ALIGN_LEFT = 0,
  MBS_ALIGN_RIGHT = 1,
  MBS_ALIGN_CENTER = 2
};
typedef enum __anonenum_mbs_align_t_1 mbs_align_t;
typedef unsigned long uintptr_t;
struct preliminary_header
{
  void *next;
  char room[sizeof(int)];
};
struct header
{
  void *next;
  char room[((((((sizeof(struct preliminary_header)) + 16UL) - 1UL) / 16UL) * 16UL) - (sizeof(struct preliminary_header))) + (sizeof(int))];
};
struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s
{







  __pthread_list_t __list;
};
union __anonunion_pthread_mutex_t_11
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long __align;
};
typedef union __anonunion_pthread_mutex_t_11 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_12
{
  char __size[4];
  int __align;
};
typedef union __anonunion_pthread_mutexattr_t_12 pthread_mutexattr_t;
typedef int pthread_once_t;
typedef pthread_mutex_t gl_recursive_lock_t;
struct linebuffer
{
  size_t size;
  size_t length;
  char *buffer;
};
union __anonunion_memory_double_1
{
  long double value;
  unsigned int word[(((sizeof(long double)) + (sizeof(unsigned int))) - 1UL) / (sizeof(unsigned int))];
};
typedef union __anonunion_memory_double_1 memory_double;
struct ino_map_ent
{
  ino_t ino;
  size_t mapped_ino;
};
struct ino_map
{
  struct hash_table *map;
  size_t next_mapped_ino;
  struct ino_map_ent *probe;
};
union __anonunion_id_23
{
  uid_t u;
  gid_t g;
};
struct userid
{
  union __anonunion_id_23 id;
  struct userid *next;
  char name[];
};
struct lconv
{























  char int_n_sign_posn;
};
struct heap;
struct heap;
struct heap
{
  void **array;
  size_t capacity;
  size_t count;
  int (*compare)(const void *, const void *);
};
struct hash_entry
{
  void *data;
  struct hash_entry *next;
};
struct hash_table
{







  _Bool (*comparator)(const void *, const void *);
  void (*data_freer)(void *);
  struct hash_entry *free_entry_list;
};
struct F_triple
{
  char *name;
  ino_t st_ino;
  dev_t st_dev;
};
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;
struct termios
{







  speed_t c_ospeed;
};
typedef long long xtime_t;
struct __anonstruct___fsid_t_1
{
  int __val[2];
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
struct Active_dir
{
  dev_t dev;
  ino_t ino;
  FTSENT *fts_ent;
};
struct statfs
{







  __fsid_t f_fsid;
  __fsword_t f_namelen;
  __fsword_t f_frsize;
  __fsword_t f_flags;
  __fsword_t f_spare[4];
};
struct LCO_ent
{
  dev_t st_dev;
  _Bool opt_ok;
};
struct fs_usage
{







};
typedef long __clock_t;
union sigval
{
  int sival_int;
  void *sival_ptr;
};
typedef union sigval sigval_t;
typedef __clock_t __sigchld_clock_t;
struct __anonstruct__kill_23
{
  __pid_t si_pid;
  __uid_t si_uid;
};
struct __anonstruct__timer_24
{
  int si_tid;
  int si_overrun;
  sigval_t si_sigval;
};
struct __anonstruct__rt_25
{
  __pid_t si_pid;
  __uid_t si_uid;
  sigval_t si_sigval;
};
struct __anonstruct__sigchld_26
{
  __pid_t si_pid;
  __uid_t si_uid;
  int si_status;
  __sigchld_clock_t si_utime;
  __sigchld_clock_t si_stime;
};
struct __anonstruct__sigfault_27
{
  void *si_addr;
  short si_addr_lsb;
};
struct __anonstruct__sigpoll_28
{
  long si_band;
  int si_fd;
};
struct __anonstruct__sigsys_29
{
  void *_call_addr;
  int _syscall;
  unsigned int _arch;
};
union __anonunion__sifields_22
{







  struct __anonstruct__sigsys_29 _sigsys;
};
struct __anonstruct_siginfo_t_21
{
  int si_signo;
  int si_errno;
  int si_code;
  union __anonunion__sifields_22 _sifields;
};
typedef struct __anonstruct_siginfo_t_21 siginfo_t;
union __anonunion___sigaction_handler_41
{
  void (*sa_handler)(int);
  void (*sa_sigaction)(int, siginfo_t *, void *);
};
struct sigaction
{
  union __anonunion___sigaction_handler_41 __sigaction_handler;
  __sigset_t sa_mask;
  int sa_flags;
  void (*sa_restorer)(void);
};
typedef void (*sa_handler_t)(int);
struct __anonstruct_actions_entry_t_50
{
  void (*volatile action)(void);
};
typedef struct __anonstruct_actions_entry_t_50 actions_entry_t;
enum __anonenum_fadvice_t_19
{
  FADVISE_NORMAL = 0,
  FADVISE_SEQUENTIAL = 2,
  FADVISE_NOREUSE = 5,
  FADVISE_DONTNEED = 4,
  FADVISE_WILLNEED = 3,
  FADVISE_RANDOM = 1
};
typedef enum __anonenum_fadvice_t_19 fadvice_t;
struct exclude;
struct exclude;
struct patopts
{
  const char *pattern;
  int options;
};
struct exclude_pattern
{
  struct patopts *exclude;
  size_t exclude_alloc;
  size_t exclude_count;
};
enum exclude_type
{
  exclude_hash = 0,
  exclude_pattern = 1
};
union __anonunion_v_29
{
  Hash_table *table;
  struct exclude_pattern pat;
};
struct exclude_segment
{
  struct exclude_segment *next;
  enum exclude_type type;
  int options;
  union __anonunion_v_29 v;
};
struct exclude
{
  struct exclude_segment *head;
  struct exclude_segment *tail;
};
enum countmode
{
  count_occurrences = 0,
  count_none = 1
};
enum delimit_method
{
  DM_NONE = 0,
  DM_PREPEND = 1,
  DM_SEPARATE = 2
};
enum Skip_field_option_type
{
  SFO_NONE = 0,
  SFO_OBSOLETE = 1,
  SFO_NEW = 2
};
extern int snprintf(char *__restrict __s, size_t __maxlen, const char *__restrict __format, ...);
extern double strtod(const char *__restrict __nptr, char **__restrict __endptr);
void xalloc_die(void);
char *last_component(const char *name);
extern void *malloc(size_t __size);
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
extern int *__errno_location(void);








const char diacrit_base[256];
const char diacrit_diac[256];
const char diacrit_base[256] = {(const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 'A', (const char) 'B', (const char) 'C', (const char) 'D', (const char) 'E', (const char) 'F', (const char) 'G', (const char) 'H', (const char) 'I', (const char) 'J', (const char) 'K', (const char) 'L', (const char) 'M', (const char) 'N', (const char) 'O', (const char) 'P', (const char) 'Q', (const char) 'R', (const char) 'S', (const char) 'T', (const char) 'U', (const char) 'V', (const char) 'W', (const char) 'X', (const char) 'Y', (const char) 'Z', (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 'a', (const char) 'b', (const char) 'c', (const char) 'd', (const char) 'e', (const char) 'f', (const char) 'g', (const char) 'h', (const char) 'i', (const char) 'j', (const char) 'k', (const char) 'l', (const char) 'm', (const char) 'n', (const char) 'o', (const char) 'p', (const char) 'q', (const char) 'r', (const char) 's', (const char) 't', (const char) 'u', (const char) 'v', (const char) 'w', (const char) 'x', (const char) 'y', (const char) 'z', (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'C', (const char) 'E', (const char) 'E', (const char) 'E', (const char) 'E', (const char) 'I', (const char) 'I', (const char) 'I', (const char) 'I', (const char) 0, (const char) 'N', (const char) 'O', (const char) 'O', (const char) 'O', (const char) 'O', (const char) 'O', (const char) 0, (const char) 'O', (const char) 'U', (const char) 'U', (const char) 'U', (const char) 'U', (const char) 'Y', (const char) 0, (const char) 0, (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'c', (const char) 'e', (const char) 'e', (const char) 'e', (const char) 'e', (const char) 'i', (const char) 'i', (const char) 'i', (const char) 'i', (const char) 0, (const char) 'n', (const char) 'o', (const char) 'o', (const char) 'o', (const char) 'o', (const char) 'o', (const char) 0, (const char) 'o', (const char) 'u', (const char) 'u', (const char) 'u', (const char) 'u', (const char) 'y', (const char) 0, (const char) 'y'};
const char diacrit_diac[256] = {(const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 4, (const char) 0, (const char) 3, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 6, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 3, (const char) 2, (const char) 4, (const char) 6, (const char) 5, (const char) 8, (const char) 1, (const char) 7, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 0, (const char) 6, (const char) 3, (const char) 2, (const char) 4, (const char) 6, (const char) 5, (const char) 0, (const char) 9, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 2, (const char) 0, (const char) 0, (const char) 3, (const char) 2, (const char) 4, (const char) 6, (const char) 5, (const char) 8, (const char) 1, (const char) 7, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 0, (const char) 6, (const char) 3, (const char) 2, (const char) 4, (const char) 6, (const char) 5, (const char) 0, (const char) 9, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 2, (const char) 0, (const char) 0};
extern void free(void *__ptr);
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function);
extern int creat(const char *__file, mode_t __mode);
extern void error(int __status, int __errnum, const char *__format, ...);
const char *quote(const char *name);
extern char *gettext(const char *__msgid);
void close_stdout(void);
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern void _exit(int __status);
int close_stream(FILE *stream);
volatile int exit_failure;
char *quotearg_colon(const char *arg);
static const char *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void)
{





  int tmp___3;



  {
    {
      tmp___3 = close_stream(stdout);
    }
    if (tmp___3 != 0)
    {





      {










        {
        }
      }

    }










  }
}

extern struct _IO_FILE *stdin;






int close_stream(FILE *stream)
{







  int *tmp___3;
  {
    {














      {





        {
          if ((* tmp___3) != 9)
          {








          }

        }

      }

    }

    return 0;
  }
}









extern void abort(void);
const struct allocator stdlib_allocator;
extern void *memmove(void *__dest, const void *__src, size_t __n);
extern char *strchr(const char *__s, int __c);
extern int lstat(const char *__restrict __file, struct stat *__restrict __buf);
void *xmalloc(size_t n);
void *xrealloc(void *p, size_t n);














int c_strcasecmp(const char *s1, const char *s2)
{
  exit(-1);
}


int c_tolower(int c)
{
  exit(-1);
}


char *last_component(const char *name)
{
  exit(-1);
}

__inline static unsigned char to_uchar(char ch)
{
  {
    return (unsigned char) ch;
  }
}



























static void __argmatch_die(void)
{
  exit(-1);
}



ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize)
{
  exit(-1);
}

void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem)
{
  exit(-1);
}

void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize)
{
  exit(-1);
}

ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void))
{
  exit(-1);
}








__inline static void *xnmalloc(size_t n, size_t s)
{
  int tmp;
  void *tmp___0;
  {
    if ((sizeof(ptrdiff_t)) <= (sizeof(size_t)))
    {
      tmp = - 1;
    }
    else
    {
      tmp = - 2;
    }

    if ((((size_t) tmp) / s) < n)
    {
      {
        xalloc_die();
      }
    }

    {
      tmp___0 = xmalloc(n * s);
    }
    return tmp___0;
  }
}

extern const unsigned short **__ctype_b_loc(void);



static strtol_error bkm_scale___0(unsigned long *x, int scale_factor)
{
  exit(-1);
}

static strtol_error bkm_scale_by_power___0(unsigned long *x, int base, int power)
{
  exit(-1);
}

strtol_error xstrtoul(const char *s, char **ptr, int strtol_base, unsigned long *val, const char *valid_suffixes)
{
  char *t_ptr;
  char **p;
  unsigned long tmp;
  strtol_error err;
  const char *q;
  unsigned char ch;
  const unsigned short **tmp___0;
  int *tmp___1;

  int *tmp___3;
  int *tmp___4;



  char *tmp___5;
  char *tmp___6;
  {


    {















































    }
    if (((unsigned long) (* p)) == ((unsigned long) s))
    {












      {





      }






    }

    if (((int) (* (* p))) != 0)
    {








      {
        {































          ;

        }
      }

      {




























































































































































        ;





      }

    }



  }
}








static void collate_error(int collation_errno, const char *s1, size_t s1len, const char *s2, size_t s2len)
{
  exit(-1);
}

int xmemcoll(char *s1, size_t s1len, char *s2, size_t s2len)
{
  int diff;
  int tmp;
  int collation_errno;
  int *tmp___0;
  {
    {
      tmp = memcoll(s1, s1len, s2, s2len);

      tmp___0 = __errno_location();
      collation_errno = * tmp___0;
    }
    if (collation_errno)
    {
      exit(-1);
    }

    return diff;
  }
}


__inline static void *x2nrealloc(void *p, size_t *pn, size_t s)
{
  size_t n;
  void *tmp;
  {
    n = * pn;
    if (! p)
    {
      if (! n)
      {
        n = 128UL / s;

      }

    }
    else
    {
      if ((0xaaaaaaaaaaaaaaaaUL / s) <= n)
      {
        exit(-1);
      }

      n += (n + 1UL) / 2UL;
    }

    {
      * pn = n;
      tmp = xrealloc(p, n * s);
    }
    return tmp;
  }
}




void *xmalloc(size_t n)
{
  exit(-1);
}


void *xrealloc(void *p, size_t n)
{
  {
    if (! n)
    {
      if (p)
      {
        exit(-1);
      }

    }

    {
      p = realloc(p, n);
    }
    if (! p)
    {
      if (n)
      {
        exit(-1);
      }

    }

    return p;
  }
}

void *x2realloc(void *p, size_t *pn)
{
  void *tmp;
  {
    {
      tmp = x2nrealloc(p, pn, (size_t) 1);
    }
    return tmp;
  }
}





void xalloc_die(void)
{
  exit(-1);
}





















void version_etc_arn(FILE *stream, const char *command_name, const char *package, const char *version, const char *const *authors, size_t n_authors)
{
  exit(-1);
}

void version_etc_va(FILE *stream, const char *command_name, const char *package, const char *version, va_list authors)
{
  exit(-1);
}


void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...)
{
  exit(-1);
}














































































































__inline static char *xcharalloc(size_t n)
{
  exit(-1);
}





int set_char_quoting(struct quoting_options *o, char c, int i)
{
  exit(-1);
}

static struct quoting_options quoting_options_from_style(enum quoting_style style)
{
  exit(-1);
}

static const char *gettext_quote(const char *msgid, enum quoting_style s)
{
  exit(-1);
}

static size_t quotearg_buffer_restyled(char *buffer, size_t buffersize, const char *arg, size_t argsize, enum quoting_style quoting_style, int flags, const unsigned int *quote_these_too, const char *left_quote, const char *right_quote)
{
  exit(-1);
}





static char *quotearg_n_options(int n, const char *arg, size_t argsize, const struct quoting_options *options)
{
  exit(-1);
}

char *quotearg_n_style(int n, enum quoting_style s, const char *arg)
{
  exit(-1);
}

char *quotearg_n_style_mem(int n, enum quoting_style s, const char *arg, size_t argsize)
{
  exit(-1);
}

char *quotearg_char_mem(const char *arg, size_t argsize, char ch)
{
  exit(-1);
}

char *quotearg_char(const char *arg, char ch)
{
  exit(-1);
}

char *quotearg_colon(const char *arg)
{
  exit(-1);
}


const char *quote_n(int n, const char *name)
{
  exit(-1);
}

const char *quote(const char *name)
{
  exit(-1);
}

#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
extern int iswalnum(wint_t __wc);
const char *program_name;
void set_program_name(const char *argv0);
extern char *program_invocation_name;




void set_program_name(const char *argv0)
{




  {














    {
      {









      }

    }




  }
}







int posix2_version(void)
{
  exit(-1);
}












































__inline static int strcoll_loop(const char *s1, size_t s1size, const char *s2, size_t s2size)
{
  int diff;




  int *tmp___1;


  {
    {
      while (1)
      {



        {
          tmp___1 = __errno_location();
          * tmp___1 = 0;





        }










        {
          goto while_break;
        }

        {
        }










      }

      while_break:
      ;

    }
    return diff;
  }
}

int memcoll(char *s1, size_t s1len, char *s2, size_t s2len)
{
  int diff;



  int tmp___0;
  {
    if (s1len == s2len)
    {
      {
        tmp___0 = memcmp((const void *) s1, (const void *) s2, s1len);
      }









      {
        goto _L;
      }

    }
    else
    {
      _L:
      {




        diff = strcoll_loop((const char *) s1, s1len + 1UL, (const char *) s2, s2len + 1UL);


      }

    }

    return diff;
  }
}



int memcasecmp(const void *vs1, const void *vs2, size_t n)
{
  size_t i;








  int diff;
  {



    {
      while (1)
      {




        {











        }
        if (diff)
        {
          return diff;
        }

        i++;
      }




    }
    return 0;
  }
}









extern int wcswidth(const wchar_t *__s, size_t __n);
const unsigned int is_basic_table[8] = {(const unsigned int) 6656, (const unsigned int) 4294967279U, (const unsigned int) 4294967294U, (const unsigned int) 2147483646};
static void *mmalloca_results[257];
extern void exit(int __status);
extern int optind;
































static const char *get_charset_aliases(void)
{
  exit(-1);
}

const char *locale_charset(void)
{
  exit(-1);
}





void initbuffer(struct linebuffer *linebuffer)
{
  {
    {
      memset((void *) linebuffer, 0, sizeof(* linebuffer));
    }
    return;
  }
}

struct linebuffer *readlinebuffer_delim(struct linebuffer *linebuffer, FILE *stream, char delimiter)
{
  int c;
  char *buffer;
  char *p;
  char *end;


  size_t oldsize;
  char *tmp___1;
  {
    {
      buffer = linebuffer->buffer;
      p = linebuffer->buffer;
      end = buffer + linebuffer->size;









      {



        {
          c = getc_unlocked(stream);
        }
        if (c == (- 1))
        {
          if (((unsigned long) p) == ((unsigned long) buffer))
          {
            return (struct linebuffer *) ((void *) 0);
          }
          else
          {










          }

        }

        if (((unsigned long) p) == ((unsigned long) end))
        {
          {
            oldsize = linebuffer->size;
            buffer = (char *) x2realloc((void *) buffer, & linebuffer->size);
            p = buffer + oldsize;
            linebuffer->buffer = buffer;

          }
        }

        tmp___1 = p;
        p++;






      }




    }
    linebuffer->length = (size_t) (p - buffer);

  }
}








static struct userid *nogroup_alist;
extern struct lconv *localeconv(void);
static const char power_letter[9] = {(const char) 0, (const char) 'K', (const char) 'M', (const char) 'G', (const char) 'T', (const char) 'P', (const char) 'E', (const char) 'Z', (const char) 'Y'};
static const char *const block_size_args[3] = {(const char *) "human-readable", (const char *) "si", (const char *) 0};
static const int block_size_opts[2] = {(const int) 176, (const int) 144};
static const struct hash_tuning default_tuning = {0.0f, 1.0f, 0.8f, 1.414f, (_Bool) 0};
_Bool hard_locale(int category);
extern char *setlocale(int __category, const char *__locale);
_Bool hard_locale(int category)
{
  _Bool hard;
  const char *p;

  int tmp___0;

  char *locale;

  int tmp___3;

  {
    {







      {
        {
          tmp___0 = strcmp(p, "C");
        }





        {
          {





          }

        }









        {
          {
            p = (const char *) setlocale(category, "C");
          }
          if (p)
          {
            {
              tmp___3 = strcmp(p, (const char *) locale);
            }


















            {
              {





              }

            }

          }

          {


          }
        }

      }

    }

    return hard;
  }
}
















int rpl_fseeko(FILE *fp, off_t offset, int whence)
{
  exit(-1);
}



static _Bool protect_fd(int fd)
{
  exit(-1);
}

FILE *freopen_safer(const char *name, const char *mode, FILE *f)
{
  _Bool protect_in;
  _Bool protect_out;
  _Bool protect_err;








  int *tmp___6;

  {
    {




    }
    {









































































      {
        _L:
        if (protect_err)
        {





        }
        else
        {
          {
            f = freopen((const char *) name, (const char *) mode, (FILE *) f);
          }
        }


      }


    }

    {
      tmp___6 = __errno_location();




















    }

    return f;
  }
}






__inline static void clear_ungetc_buffer_preserving_position(FILE *fp)
{
  {
    if (fp->_flags & 256)
    {
      exit(-1);
    }

    return;
  }
}

int rpl_fflush(FILE *stream)
{
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    if (((unsigned long) stream) == ((unsigned long) ((void *) 0)))
    {
      exit(-1);
    }
    else
    {
      {
        tmp___0 = __freading(stream);
      }
      if (! (tmp___0 != 0))
      {
        {
          tmp = fflush(stream);
        }
        return tmp;
      }

    }

    {
      clear_ungetc_buffer_preserving_position(stream);
      tmp___1 = fflush(stream);
    }
    return tmp___1;
  }
}




int rpl_fclose(FILE *fp)
{

  int fd;
  int result;







  {
    {



    }
    if (fd < 0)
    {













      {
        _L:
        {






        }

      }





    }

    {
      result = fclose(fp);
    }






  }
}

extern int sigemptyset(sigset_t *__set);















void fdadvise(int fd, off_t offset, off_t len, fadvice_t advice)
{


  {
    {


    }
    return;
  }
}

void fadvise(FILE *fp, fadvice_t advice)
{

  {









  }
}
































#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
const char *Version = "8.16";
extern char *optarg;




__inline static void emit_ancillary_info(void)
{
  exit(-1);
}

__inline static void emit_try_help(void)
{
  exit(-1);
}

static _Bool hard_LC_COLLATE;
static size_t skip_fields;
static size_t skip_chars;
static size_t check_chars;
static enum countmode countmode;
static _Bool output_unique;
static _Bool output_first_repeated;
static _Bool output_later_repeated;
static _Bool ignore_case;
static const char *const delimit_method_string[4] = {(const char *) "none", (const char *) "prepend", (const char *) "separate", (const char *) ((void *) 0)};
static const enum delimit_method delimit_method_map[3] = {(const enum delimit_method) 0, (const enum delimit_method) 1, (const enum delimit_method) 2};
static enum delimit_method delimit_groups;
static const struct option longopts[12] = {{"count", 0, (int *) ((void *) 0), 'c'}, {"repeated", 0, (int *) ((void *) 0), 'd'}, {"all-repeated", 2, (int *) ((void *) 0), 'D'}, {"ignore-case", 0, (int *) ((void *) 0), 'i'}, {"unique", 0, (int *) ((void *) 0), 'u'}, {"skip-fields", 1, (int *) ((void *) 0), 'f'}, {"skip-chars", 1, (int *) ((void *) 0), 's'}, {"check-chars", 1, (int *) ((void *) 0), 'w'}, {"zero-terminated", 0, (int *) ((void *) 0), 'z'}, {"help", 0, (int *) ((void *) 0), - 130}, {"version", 0, (int *) ((void *) 0), - 131}, {(const char *) ((void *) 0), 0, (int *) ((void *) 0), 0}};

void usage(int status)
{
  exit(-1);
}

static size_t size_opt(const char *opt, const char *msgid)
{



  unsigned long tmp___1;

  {
    {
























      ;





    }

    return tmp___1;
  }
}

static char *find_field(const struct linebuffer *line)
{
  size_t count;

  size_t size;
  size_t i;


  const unsigned short **tmp___1;
  unsigned char tmp___2;
  size_t tmp___3;
  {


    i = (size_t) 0;

    {
      while (1)
      {



        if (count < skip_fields)
        {
          if (! (i < size))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;




          {





















          }




        }
        {
          while (1)
          {



            if (i < size)
            {
              {


              }
              if (((const int) (* ((* tmp___1) + ((int) tmp___2)))) & 1)
              {
                goto while_break___1;
              }





            }

            i++;
          }

          while_break___1:
          ;

        }
        count++;
      }

      while_break:
      ;

    }
    if (skip_chars < (size - i))
    {
      tmp___3 = skip_chars;
    }
    else
    {
      tmp___3 = size - i;
    }

    i += tmp___3;
    return (char *) (line->buffer + i);
  }
}

static _Bool different(char *old, char *new, size_t oldlen, size_t newlen)
{
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;

  {
    if (check_chars < oldlen)
    {
      oldlen = check_chars;
    }

    if (check_chars < newlen)
    {
      newlen = check_chars;
    }

    if (ignore_case)
    {
      if (oldlen != newlen)
      {
        tmp___0 = 1;
      }
      else
      {
        {
          tmp = memcasecmp((const void *) old, (const void *) new, oldlen);
        }
        if (tmp)
        {
          tmp___0 = 1;
        }
        else
        {
          tmp___0 = 0;
        }

      }

      return (_Bool) tmp___0;
    }
    else
    {
      if (hard_LC_COLLATE)
      {
        {
          tmp___1 = xmemcoll(old, oldlen, new, newlen);
        }
        return (_Bool) (tmp___1 != 0);
      }
      else
      {
        if (oldlen != newlen)
        {
          exit(-1);
        }
        else
        {
          if (tmp___2)
          {
            exit(-1);
          }

        }

      }

    }

  }
}

static void writeline(const struct linebuffer *line, _Bool match, uintmax_t linecount)
{
  int tmp;
  int tmp___0;
  {
    if (linecount == 0UL)
    {
      tmp___0 = (int) output_unique;
    }
    else
    {
      if (! match)
      {
        tmp = (int) output_first_repeated;
      }

      tmp___0 = tmp;
    }

    if (! tmp___0)
    {
      return;
    }

    if (((unsigned int) countmode) == 0U)
    {
      {
        printf((const char *) "%7lu ", linecount + 1UL);
      }
    }

    {
      fwrite_unlocked((const void *) line->buffer, sizeof(char), (size_t) line->length, (FILE *) stdout);
    }
    return;
  }
}

static void check_file(const char *infile, const char *outfile, char delimiter)
{





  int tmp___0;
  FILE *tmp___1;
































  {
    {
      tmp___0 = strcmp(infile, "-");
    }
    if (! (tmp___0 == 0))
    {
      {
        tmp___1 = freopen_safer(infile, "r", stdin);
































        {
          {
            while (1)
            {















              {
                goto while_break;
              }

              {


              }





              {
                {





                  {





                    {







                    }




                  }


                }

              }

            }

            while_break:
            ;

          }
        }









      }





      {
















        {















          {
            {





            }








          }

















          {





            {





            }










            {



              {




                {







                }










              }

            }

          }

        }







      }
    }



























  }
}

int main(int argc, char **argv)
{
  int optc;
  _Bool posixly_correct;
































  {
    {

























      {



        if (optc == (- 1))




        {
          if (posixly_correct)
          {





























            {
              {















































































































                if (((int) (* (optarg + 0))) == 43)
                {














                  {



                  }


                }







































































































                ;

              }
            }

          }

        }

      }

      while_break:
      ;

    }
    if (((unsigned int) countmode) == 0U)
    {





    }

    {


    }
  }
}

