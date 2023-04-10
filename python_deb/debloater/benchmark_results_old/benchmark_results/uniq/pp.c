typedef long __time_t;
typedef long __syscall_slong_t;
typedef __time_t time_t;
struct timespec
{
  __time_t tv_sec;
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
  __dev_t st_dev;
  __ino_t st_ino;
  __nlink_t st_nlink;
  __mode_t st_mode;
  __uid_t st_uid;
  __gid_t st_gid;
  int __pad0;
  __dev_t st_rdev;
  __off_t st_size;
  __blksize_t st_blksize;
  __blkcnt_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
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
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
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
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
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
  literal_quoting_style = 0,
  shell_quoting_style = 1,
  shell_always_quoting_style = 2,
  c_quoting_style = 3,
  c_maybe_quoting_style = 4,
  escape_quoting_style = 5,
  locale_quoting_style = 6,
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
  struct _ftsent *fts_cur;
  struct _ftsent *fts_child;
  struct _ftsent **fts_array;
  dev_t fts_dev;
  char *fts_path;
  int fts_rfd;
  int fts_cwd_fd;
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
  struct _ftsent *fts_cycle;
  struct _ftsent *fts_parent;
  struct _ftsent *fts_link;
  DIR *fts_dirp;
  long fts_number;
  void *fts_pointer;
  char *fts_accpath;
  char *fts_path;
  int fts_errno;
  int fts_symfd;
  size_t fts_pathlen;
  FTS *fts_fts;
  ptrdiff_t fts_level;
  size_t fts_namelen;
  nlink_t fts_n_dirs_remaining;
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
  TYPE_NONE = 0,
  TYPE_SCHAR = 1,
  TYPE_UCHAR = 2,
  TYPE_SHORT = 3,
  TYPE_USHORT = 4,
  TYPE_INT = 5,
  TYPE_UINT = 6,
  TYPE_LONGINT = 7,
  TYPE_ULONGINT = 8,
  TYPE_LONGLONGINT = 9,
  TYPE_ULONGLONGINT = 10,
  TYPE_DOUBLE = 11,
  TYPE_LONGDOUBLE = 12,
  TYPE_CHAR = 13,
  TYPE_WIDE_CHAR = 14,
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
  signed char a_schar;
  unsigned char a_uchar;
  short a_short;
  unsigned short a_ushort;
  int a_int;
  unsigned int a_uint;
  long a_longint;
  unsigned long a_ulongint;
  long long a_longlongint;
  unsigned long long a_ulonglongint;
  float a_float;
  double a_double;
  long double a_longdouble;
  int a_char;
  wint_t a_wide_char;
  const char *a_string;
  const wchar_t *a_wide_string;
  void *a_pointer;
  signed char *a_count_schar_pointer;
  short *a_count_short_pointer;
  int *a_count_int_pointer;
  long *a_count_longint_pointer;
  long long *a_count_longlongint_pointer;
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
  const char *dir_start;
  const char *dir_end;
  int flags;
  const char *width_start;
  const char *width_end;
  size_t width_arg_index;
  const char *precision_start;
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
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
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
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
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
  short __flags;
  pid_t __pgrp;
  sigset_t __sd;
  sigset_t __ss;
  struct sched_param __sp;
  int __policy;
  int __pad[16];
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
  uint32_t A;
  uint32_t B;
  uint32_t C;
  uint32_t D;
  uint32_t E;
  uint32_t total[2];
  uint32_t buflen;
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
  short ut_type;
  __pid_t ut_pid;
  char ut_line[32];
  char ut_id[4];
  char ut_user[32];
  char ut_host[256];
  struct __exit_status ut_exit;
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
  long chunk_size;
  struct _obstack_chunk *chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  union __anonunion_temp_26 temp;
  int alignment_mask;
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
  long year;
  long month;
  long day;
  long hour;
  long minutes;
  long_time_t seconds;
  long ns;
};
typedef struct __anonstruct_relative_time_31 relative_time;
struct __anonstruct_parser_control_32
{
  const char *input;
  long day_ordinal;
  int day_number;
  int local_isdst;
  long time_zone;
  int meridian;
  textint year;
  long month;
  long day;
  long hour;
  long minutes;
  struct timespec seconds;
  relative_time rel;
  _Bool timespec_seen;
  _Bool rels_seen;
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
  char *me_devname;
  char *me_mountdir;
  char *me_type;
  dev_t me_dev;
  unsigned int me_dummy : 1;
  unsigned int me_remote : 1;
  unsigned int me_type_malloced : 1;
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
  uint32_t A;
  uint32_t B;
  uint32_t C;
  uint32_t D;
  uint32_t total[2];
  uint32_t buflen;
  uint32_t buffer[32];
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
  int __lock;
  unsigned int __count;
  int __owner;
  unsigned int __nusers;
  int __kind;
  short __spins;
  short __elision;
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
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_p_sep_by_space;
  char int_n_cs_precedes;
  char int_n_sep_by_space;
  char int_p_sign_posn;
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
  struct hash_entry *bucket;
  const struct hash_entry *bucket_limit;
  size_t n_buckets;
  size_t n_buckets_used;
  size_t n_entries;
  const Hash_tuning *tuning;
  size_t (*hasher)(const void *, size_t);
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
  tcflag_t c_iflag;
  tcflag_t c_oflag;
  tcflag_t c_cflag;
  tcflag_t c_lflag;
  cc_t c_line;
  cc_t c_cc[32];
  speed_t c_ispeed;
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
  __fsword_t f_type;
  __fsword_t f_bsize;
  __fsblkcnt_t f_blocks;
  __fsblkcnt_t f_bfree;
  __fsblkcnt_t f_bavail;
  __fsfilcnt_t f_files;
  __fsfilcnt_t f_ffree;
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
  uintmax_t fsu_blocksize;
  uintmax_t fsu_blocks;
  uintmax_t fsu_bfree;
  uintmax_t fsu_bavail;
  _Bool fsu_bavail_top_bit_set;
  uintmax_t fsu_files;
  uintmax_t fsu_ffree;
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
  int _pad[(128UL / (sizeof(int))) - 4UL];
  struct __anonstruct__kill_23 _kill;
  struct __anonstruct__timer_24 _timer;
  struct __anonstruct__rt_25 _rt;
  struct __anonstruct__sigchld_26 _sigchld;
  struct __anonstruct__sigfault_27 _sigfault;
  struct __anonstruct__sigpoll_28 _sigpoll;
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
extern int stat(const char *__restrict __file, struct stat *__restrict __buf);
extern int fstat(int __fd, struct stat *__buf);
extern int chmod(const char *__file, __mode_t __mode);
extern int fchmod(int __fd, __mode_t __mode);
extern int close(int __fd);
extern int chown(const char *__file, __uid_t __owner, __gid_t __group);
extern int fchown(int __fd, __uid_t __owner, __gid_t __group);
extern int lchown(const char *__file, __uid_t __owner, __gid_t __group);
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
  const char *write_error;
  const char *tmp;
  char *tmp___0;
  int *tmp___1;
  int *tmp___2;
  int tmp___3;
  int *tmp___4;
  int tmp___5;
  char *__cil_tmp10;
  {
    {
      tmp___3 = close_stream(stdout);
    }
    if (tmp___3 != 0)
    {
      if (ignore_EPIPE)
      {
        {
          tmp___4 = __errno_location();
        }
        if (! ((* tmp___4) == 32))
        {
          goto _L;
        }

      }
      else
      {
        _L:
        {
          tmp = (const char *) gettext("write error");
          write_error = tmp;
        }

        if (file_name)
        {
          {
            tmp___0 = quotearg_colon(file_name);
            tmp___1 = __errno_location();
            error(0, * tmp___1, "%s: %s", tmp___0, write_error);
          }
        }
        else
        {
          {
            tmp___2 = __errno_location();
            error(0, * tmp___2, "%s", write_error);
          }
        }

        {
          _exit((int) exit_failure);
        }
      }

    }

    {
      tmp___5 = close_stream(stderr);
    }
    if (tmp___5 != 0)
    {
      {
        _exit((int) exit_failure);
      }
    }

    return;
  }
}

extern struct _IO_FILE *stdin;
int rpl_fflush(FILE *stream);
int rpl_fseeko(FILE *fp, off_t offset, int whence);
static const char *file_name___0;
extern int ferror_unlocked(FILE *__stream);
int rpl_fclose(FILE *fp);
extern size_t __fpending(FILE *__fp);
int close_stream(FILE *stream)
{
  _Bool some_pending;
  size_t tmp;
  _Bool prev_fail;
  int tmp___0;
  _Bool fclose_fail;
  int tmp___1;
  int *tmp___2;
  int *tmp___3;
  {
    {
      tmp = __fpending(stream);
      some_pending = (_Bool) (tmp != 0UL);
      tmp___0 = ferror_unlocked(stream);
      prev_fail = (_Bool) (tmp___0 != 0);
      tmp___1 = rpl_fclose(stream);
      fclose_fail = (_Bool) (tmp___1 != 0);
    }
    if (prev_fail)
    {
      goto _L___0;
    }
    else
    {
      if (fclose_fail)
      {
        if (some_pending)
        {
          goto _L___0;
        }
        else
        {
          {
            tmp___3 = __errno_location();
          }
          if ((* tmp___3) != 9)
          {
            _L___0:
            if (! fclose_fail)
            {
              {
                tmp___2 = __errno_location();
                * tmp___2 = 0;
              }
            }


            return - 1;
          }

        }

      }

    }

    return 0;
  }
}

extern int chdir(const char *__path);
extern int fchdir(int __fd);
extern int openat(int __fd, const char *__file, int __oflag, ...);
extern void *memchr(const void *__s, int __c, size_t __n);
extern void *memrchr(const void *__s, int __c, size_t __n);
extern size_t strspn(const char *__s, const char *__accept);
extern size_t strlen(const char *__s);
extern ssize_t readlink(const char *__restrict __path, char *__restrict __buf, size_t __len);
extern void abort(void);
const struct allocator stdlib_allocator;
extern void *memmove(void *__dest, const void *__src, size_t __n);
extern char *strchr(const char *__s, int __c);
extern int lstat(const char *__restrict __file, struct stat *__restrict __buf);
void *xmalloc(size_t n);
void *xrealloc(void *p, size_t n);
extern char *strdup(const char *__s);
extern int getaddrinfo(const char *__restrict __name, const char *__restrict __service, const struct addrinfo *__restrict __req, struct addrinfo **__restrict __pai);
extern void freeaddrinfo(struct addrinfo *__ai);
extern const char *gai_strerror(int __ecode);
static int last_cherror;
static struct addrinfo hints;
extern __locale_t newlocale(int __category_mask, const char *__locale, __locale_t __base);
extern long double strtold_l(const char *__restrict __nptr, char **__restrict __endptr, __locale_t __loc);
static volatile locale_t c_locale_cache;
extern double strtod_l(const char *__restrict __nptr, char **__restrict __endptr, __locale_t __loc);
static volatile locale_t c_locale_cache___0;
int c_tolower(int c);
int c_strcasecmp(const char *s1, const char *s2);
int c_strcasecmp(const char *s1, const char *s2);
int c_strcasecmp(const char *s1, const char *s2)
{
  const unsigned char *p1;
  const unsigned char *p2;
  unsigned char c1;
  unsigned char c2;
  {
    p1 = (const unsigned char *) s1;
    p2 = (const unsigned char *) s2;
    if (((unsigned long) p1) == ((unsigned long) p2))
    {
      return 0;
    }

    {
      while (1)
      {
        while_continue:
        ;

        {
          c1 = (unsigned char) c_tolower((int) (* p1));
          c2 = (unsigned char) c_tolower((int) (* p2));
        }
        if (((int) c1) == 0)
        {
          goto while_break;
        }

        p1++;
        p2++;
        if (! (((int) c1) == ((int) c2)))
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    return ((int) c1) - ((int) c2);
  }
}

int c_tolower(int c);
int c_tolower(int c)
{
  int tmp;
  {
    if (c >= 65)
    {
      if (c <= 90)
      {
        tmp = (c - 65) + 97;
      }
      else
      {
        tmp = c;
      }

    }
    else
    {
      tmp = c;
    }

    return tmp;
  }
}

char *last_component(const char *name);
char *last_component(const char *name)
{
  const char *base;
  const char *p;
  _Bool saw_slash;
  {
    base = name + 0;
    saw_slash = (_Bool) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((const int) (* base)) == 47))
        {
          goto while_break;
        }

        base++;
      }

      while_break:
      ;

    }
    p = base;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (* p))
        {
          goto while_break___0;
        }

        if (((const int) (* p)) == 47)
        {
          saw_slash = (_Bool) 1;
        }
        else
        {
          if (saw_slash)
          {
            base = p;
            saw_slash = (_Bool) 0;
          }

        }

        p++;
      }

      while_break___0:
      ;

    }
    return (char *) base;
  }
}

__inline static unsigned char to_uchar(char ch)
{
  {
    return (unsigned char) ch;
  }
}

static const char b64str[64] = {(const char) 'A', (const char) 'B', (const char) 'C', (const char) 'D', (const char) 'E', (const char) 'F', (const char) 'G', (const char) 'H', (const char) 'I', (const char) 'J', (const char) 'K', (const char) 'L', (const char) 'M', (const char) 'N', (const char) 'O', (const char) 'P', (const char) 'Q', (const char) 'R', (const char) 'S', (const char) 'T', (const char) 'U', (const char) 'V', (const char) 'W', (const char) 'X', (const char) 'Y', (const char) 'Z', (const char) 'a', (const char) 'b', (const char) 'c', (const char) 'd', (const char) 'e', (const char) 'f', (const char) 'g', (const char) 'h', (const char) 'i', (const char) 'j', (const char) 'k', (const char) 'l', (const char) 'm', (const char) 'n', (const char) 'o', (const char) 'p', (const char) 'q', (const char) 'r', (const char) 's', (const char) 't', (const char) 'u', (const char) 'v', (const char) 'w', (const char) 'x', (const char) 'y', (const char) 'z', (const char) '0', (const char) '1', (const char) '2', (const char) '3', (const char) '4', (const char) '5', (const char) '6', (const char) '7', (const char) '8', (const char) '9', (const char) '+', (const char) '/'};
static const signed char b64[256] = {(const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) 62, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) 63, (const signed char) 52, (const signed char) 53, (const signed char) 54, (const signed char) 55, (const signed char) 56, (const signed char) 57, (const signed char) 58, (const signed char) 59, (const signed char) 60, (const signed char) 61, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) 0, (const signed char) 1, (const signed char) 2, (const signed char) 3, (const signed char) 4, (const signed char) 5, (const signed char) 6, (const signed char) 7, (const signed char) 8, (const signed char) 9, (const signed char) 10, (const signed char) 11, (const signed char) 12, (const signed char) 13, (const signed char) 14, (const signed char) 15, (const signed char) 16, (const signed char) 17, (const signed char) 18, (const signed char) 19, (const signed char) 20, (const signed char) 21, (const signed char) 22, (const signed char) 23, (const signed char) 24, (const signed char) 25, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) 26, (const signed char) 27, (const signed char) 28, (const signed char) 29, (const signed char) 30, (const signed char) 31, (const signed char) 32, (const signed char) 33, (const signed char) 34, (const signed char) 35, (const signed char) 36, (const signed char) 37, (const signed char) 38, (const signed char) 39, (const signed char) 40, (const signed char) 41, (const signed char) 42, (const signed char) 43, (const signed char) 44, (const signed char) 45, (const signed char) 46, (const signed char) 47, (const signed char) 48, (const signed char) 49, (const signed char) 50, (const signed char) 51, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1)};
const char *simple_backup_suffix;
void (*argmatch_die)(void);
ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void));
extern char *getenv(const char *__name);
extern int memcmp(const void *__s1, const void *__s2, size_t __n);
extern char *strcpy(char *__restrict __dest, const char *__restrict __src);
extern long pathconf(const char *__path, int __name);
extern int closedir(DIR *__dirp);
extern struct dirent *readdir(DIR *__dirp);
const char *simple_backup_suffix = "~";
static const char *const backup_args[9] = {(const char *) "none", (const char *) "off", (const char *) "simple", (const char *) "never", (const char *) "existing", (const char *) "nil", (const char *) "numbered", (const char *) "t", (const char *) ((void *) 0)};
static const enum backup_type backup_types[8] = {(const enum backup_type) 0, (const enum backup_type) 0, (const enum backup_type) 1, (const enum backup_type) 1, (const enum backup_type) 2, (const enum backup_type) 2, (const enum backup_type) 3, (const enum backup_type) 3};
extern __ssize_t getdelim(char **__restrict __lineptr, size_t *__restrict __n, int __delimiter, FILE *__restrict __stream);
extern int feof(FILE *__stream);
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize);
void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem);
void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize);
extern int fprintf(FILE *__restrict __stream, const char *__restrict __format, ...);
extern int putc_unlocked(int __c, FILE *__stream);
extern int fputs_unlocked(const char *__restrict __s, FILE *__restrict __stream);
extern int strncmp(const char *__s1, const char *__s2, size_t __n);
char *quotearg_n_style(int n, enum quoting_style s, const char *arg);
const char *quote_n(int n, const char *name);
void usage(int status);
static void __argmatch_die(void)
{
  {
    {
      usage(1);
    }
    return;
  }
}

void (*argmatch_die)(void) = & __argmatch_die;
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize);
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize)
{
  size_t i;
  size_t arglen;
  ptrdiff_t matchind;
  _Bool ambiguous;
  int tmp;
  size_t tmp___0;
  int tmp___1;
  {
    {
      matchind = (ptrdiff_t) (- 1);
      ambiguous = (_Bool) 0;
      arglen = strlen(arg);
      i = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (* (arglist + i)))
        {
          goto while_break;
        }

        {
          tmp___1 = strncmp((const char *) (* (arglist + i)), arg, arglen);
        }
        if (! tmp___1)
        {
          {
            tmp___0 = strlen((const char *) (* (arglist + i)));
          }
          if (tmp___0 == arglen)
          {
            return (ptrdiff_t) i;
          }
          else
          {
            if (matchind == (- 1L))
            {
              matchind = (ptrdiff_t) i;
            }
            else
            {
              if (((unsigned long) vallist) == ((unsigned long) ((void *) 0)))
              {
                ambiguous = (_Bool) 1;
              }
              else
              {
                {
                  tmp = memcmp((const void *) (vallist + (valsize * ((size_t) matchind))), (const void *) (vallist + (valsize * i)), valsize);
                }
                if (tmp)
                {
                  ambiguous = (_Bool) 1;
                }

              }

            }

          }

        }

        i++;
      }

      while_break:
      ;

    }
    if (ambiguous)
    {
      return (ptrdiff_t) (- 2);
    }
    else
    {
      return matchind;
    }

  }
}

void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem)
{
  const char *format;
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  const char *tmp___2;
  char *tmp___3;
  char *__cil_tmp10;
  char *__cil_tmp11;
  {
    if (problem == (- 1L))
    {
      {
        tmp = gettext("invalid argument %s for %s");
        tmp___1 = tmp;
      }
    }
    else
    {
      {
        tmp___0 = gettext("ambiguous argument %s for %s");
        tmp___1 = tmp___0;
      }
    }

    {
      format = (const char *) tmp___1;
      tmp___2 = quote_n(1, context);
      tmp___3 = quotearg_n_style(0, (enum quoting_style) 6, value);
      error(0, 0, format, tmp___3, tmp___2);
    }
    return;
  }
}

void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize)
{
  size_t i;
  const char *last_val;
  char *tmp;
  const char *tmp___0;
  const char *tmp___1;
  int tmp___2;
  char *__cil_tmp10;
  {
    {
      last_val = (const char *) ((void *) 0);
      tmp = gettext("Valid arguments are:");
      fputs_unlocked((const char *) tmp, (FILE *) stderr);
      i = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (* (arglist + i)))
        {
          goto while_break;
        }

        if (i == 0UL)
        {
          {
            tmp___0 = quote((const char *) (* (arglist + i)));
            fprintf((FILE *) stderr, (const char *) "\n  - %s", tmp___0);
            last_val = vallist + (valsize * i);
          }
        }
        else
        {
          {
            tmp___2 = memcmp((const void *) last_val, (const void *) (vallist + (valsize * i)), valsize);
          }
          if (tmp___2)
          {
            {
              tmp___0 = quote((const char *) (* (arglist + i)));
              fprintf((FILE *) stderr, (const char *) "\n  - %s", tmp___0);
              last_val = vallist + (valsize * i);
            }
          }
          else
          {
            {
              tmp___1 = quote((const char *) (* (arglist + i)));
              fprintf((FILE *) stderr, (const char *) ", %s", tmp___1);
            }
          }

        }

        i++;
      }

      while_break:
      ;

    }
    {
      putc_unlocked('\n', stderr);
    }
    return;
  }
}

ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void))
{
  ptrdiff_t res;
  ptrdiff_t tmp;
  {
    {
      tmp = argmatch(arg, arglist, vallist, valsize);
      res = tmp;
    }
    if (res >= 0L)
    {
      return res;
    }

    {
      argmatch_invalid(context, arg, res);
      argmatch_valid(arglist, vallist, valsize);
      (* exit_fn)();
    }
    return (ptrdiff_t) (- 1);
  }
}

extern ssize_t readlinkat(int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len);
extern void *realloc(void *__ptr, size_t __size);
const struct allocator stdlib_allocator = {(void *(*)(size_t)) (& malloc), (void *(*)(void *, size_t)) (& realloc), (void (*)(void *)) (& free), (void (*)(size_t)) ((void *) 0)};
extern int rpmatch(const char *__response);
extern __ssize_t getline(char **__restrict __lineptr, size_t *__restrict __n, FILE *__restrict __stream);
__inline static void *xnmalloc(size_t n, size_t s);
__inline static void *xnmalloc(size_t n, size_t s);
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
extern uintmax_t strtoumax(const char *__restrict __nptr, char **__restrict __endptr, int __base);
strtol_error xstrtoul(const char *s, char **ptr, int strtol_base, unsigned long *val, const char *valid_suffixes);
extern unsigned long strtoul(const char *__restrict __nptr, char **__restrict __endptr, int __base);
static strtol_error bkm_scale___0(unsigned long *x, int scale_factor)
{
  {
    if ((0xffffffffffffffffUL / ((unsigned long) scale_factor)) < (* x))
    {
      * x = 0xffffffffffffffffUL;
      return (strtol_error) 1;
    }

    * x *= (unsigned long) scale_factor;
    return (strtol_error) 0;
  }
}

static strtol_error bkm_scale_by_power___0(unsigned long *x, int base, int power)
{
  strtol_error err;
  strtol_error tmp;
  int tmp___0;
  {
    err = (strtol_error) 0;
    {
      while (1)
      {
        while_continue:
        ;

        tmp___0 = power;
        power--;
        if (! tmp___0)
        {
          goto while_break;
        }

        {
          tmp = bkm_scale___0(x, base);
          err = (strtol_error) (((unsigned int) err) | ((unsigned int) tmp));
        }
      }

      while_break:
      ;

    }
    return err;
  }
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
  char *tmp___2;
  int *tmp___3;
  int *tmp___4;
  int base;
  int suffixes;
  strtol_error overflow;
  char *tmp___5;
  char *tmp___6;
  {
    err = (strtol_error) 0;
    if (0 <= strtol_base)
    {
      if (! (strtol_base <= 36))
      {
        {
          __assert_fail("0 <= strtol_base && strtol_base <= 36", "/home/khheo/project/program-reduce/benchmark/coreutils-8.16/lib/xstrtol.c", 96U, "xstrtoul");
        }
      }

    }
    else
    {
      {
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "/home/khheo/project/program-reduce/benchmark/coreutils-8.16/lib/xstrtol.c", 96U, "xstrtoul");
      }
    }

    if (ptr)
    {
      p = ptr;
    }
    else
    {
      p = & t_ptr;
    }

    q = s;
    ch = (unsigned char) (* q);
    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp___0 = __ctype_b_loc();
        }
        if (! (((const int) (* ((* tmp___0) + ((int) ch)))) & 8192))
        {
          goto while_break;
        }

        q++;
        ch = (unsigned char) (* q);
      }

      while_break:
      ;

    }
    if (((int) ch) == 45)
    {
      return (strtol_error) 4;
    }

    {
      tmp___1 = __errno_location();
      * tmp___1 = 0;
      tmp = strtoul((const char *) s, (char **) p, strtol_base);
    }
    if (((unsigned long) (* p)) == ((unsigned long) s))
    {
      if (valid_suffixes)
      {
        if (* (* p))
        {
          {
            tmp___2 = strchr(valid_suffixes, (int) (* (* p)));
          }
          if (tmp___2)
          {
            tmp = 1UL;
          }
          else
          {
            return (strtol_error) 4;
          }

        }
        else
        {
          return (strtol_error) 4;
        }

      }
      else
      {
        return (strtol_error) 4;
      }

    }
    else
    {
      {
        tmp___4 = __errno_location();
      }
      if ((* tmp___4) != 0)
      {
        {
          tmp___3 = __errno_location();
        }
        if ((* tmp___3) != 34)
        {
          return (strtol_error) 4;
        }

        err = (strtol_error) 1;
      }

    }

    if (! valid_suffixes)
    {
      * val = tmp;
      return err;
    }

    if (((int) (* (* p))) != 0)
    {
      {
        base = 1024;
        suffixes = 1;
        tmp___5 = strchr(valid_suffixes, (int) (* (* p)));
      }
      if (! tmp___5)
      {
        * val = tmp;
        return (strtol_error) (((unsigned int) err) | 2U);
      }

      {
        tmp___6 = strchr(valid_suffixes, '0');
      }
      if (tmp___6)
      {
        {
          if (((int) (* ((* (p + 0)) + 1))) == 105)
          {
            goto case_105;
          }

          if (((int) (* ((* (p + 0)) + 1))) == 66)
          {
            goto case_66;
          }

          if (((int) (* ((* (p + 0)) + 1))) == 68)
          {
            goto case_66;
          }

          goto switch_break;
          case_105:
          if (((int) (* ((* (p + 0)) + 2))) == 66)
          {
            suffixes += 2;
          }


          goto switch_break;
          case_66:
          case_68:
          base = 1000;


          suffixes++;
          goto switch_break;
          switch_break:
          ;

        }
      }

      {
        if (((int) (* (* p))) == 98)
        {
          goto case_98;
        }

        if (((int) (* (* p))) == 66)
        {
          goto case_66___0;
        }

        if (((int) (* (* p))) == 99)
        {
          goto case_99;
        }

        if (((int) (* (* p))) == 69)
        {
          goto case_69;
        }

        if (((int) (* (* p))) == 71)
        {
          goto case_71;
        }

        if (((int) (* (* p))) == 103)
        {
          goto case_71;
        }

        if (((int) (* (* p))) == 107)
        {
          goto case_107;
        }

        if (((int) (* (* p))) == 75)
        {
          goto case_107;
        }

        if (((int) (* (* p))) == 77)
        {
          goto case_77;
        }

        if (((int) (* (* p))) == 109)
        {
          goto case_77;
        }

        if (((int) (* (* p))) == 80)
        {
          goto case_80;
        }

        if (((int) (* (* p))) == 84)
        {
          goto case_84;
        }

        if (((int) (* (* p))) == 116)
        {
          goto case_84;
        }

        if (((int) (* (* p))) == 119)
        {
          goto case_119;
        }

        if (((int) (* (* p))) == 89)
        {
          goto case_89;
        }

        if (((int) (* (* p))) == 90)
        {
          goto case_90;
        }

        goto switch_default;
        case_98:
        {
          overflow = bkm_scale___0(& tmp, 512);
        }

        goto switch_break___0;
        case_66___0:
        {
          overflow = bkm_scale___0(& tmp, 1024);
        }

        goto switch_break___0;
        case_99:
        overflow = (strtol_error) 0;

        goto switch_break___0;
        case_69:
        {
          overflow = bkm_scale_by_power___0(& tmp, base, 6);
        }

        goto switch_break___0;
        case_71:
        case_103:
        {
          overflow = bkm_scale_by_power___0(& tmp, base, 3);
        }


        goto switch_break___0;
        case_107:
        case_75:
        {
          overflow = bkm_scale_by_power___0(& tmp, base, 1);
        }


        goto switch_break___0;
        case_77:
        case_109:
        {
          overflow = bkm_scale_by_power___0(& tmp, base, 2);
        }


        goto switch_break___0;
        case_80:
        {
          overflow = bkm_scale_by_power___0(& tmp, base, 5);
        }

        goto switch_break___0;
        case_84:
        case_116:
        {
          overflow = bkm_scale_by_power___0(& tmp, base, 4);
        }


        goto switch_break___0;
        case_119:
        {
          overflow = bkm_scale___0(& tmp, 2);
        }

        goto switch_break___0;
        case_89:
        {
          overflow = bkm_scale_by_power___0(& tmp, base, 8);
        }

        goto switch_break___0;
        case_90:
        {
          overflow = bkm_scale_by_power___0(& tmp, base, 7);
        }

        goto switch_break___0;
        switch_default:
        * val = tmp;

        return (strtol_error) (((unsigned int) err) | 2U);
        switch_break___0:
        ;

      }
      err = (strtol_error) (((unsigned int) err) | ((unsigned int) overflow));
      * p += suffixes;
      if (* (* p))
      {
        err = (strtol_error) (((unsigned int) err) | 2U);
      }

    }

    * val = tmp;
    return err;
  }
}

extern long strtol(const char *__restrict __nptr, char **__restrict __endptr, int __base);
extern intmax_t strtoimax(const char *__restrict __nptr, char **__restrict __endptr, int __base);
extern char *strndup(const char *__string, size_t __n);
extern int ferror(FILE *__stream);
int memcoll(char *s1, size_t s1len, char *s2, size_t s2len);
char *quotearg_n_style_mem(int n, enum quoting_style s, const char *arg, size_t argsize);
int xmemcoll(char *s1, size_t s1len, char *s2, size_t s2len);
static void collate_error(int collation_errno, const char *s1, size_t s1len, const char *s2, size_t s2len)
{
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *__cil_tmp11;
  char *__cil_tmp12;
  char *__cil_tmp13;
  {
    {
      tmp = gettext("string comparison failed");
      error(0, collation_errno, (const char *) tmp);
      tmp___0 = gettext("Set LC_ALL=\'C\' to work around the problem.");
      error(0, 0, (const char *) tmp___0);
      tmp___1 = quotearg_n_style_mem(1, (enum quoting_style) 6, s2, s2len);
      tmp___2 = quotearg_n_style_mem(0, (enum quoting_style) 6, s1, s1len);
      tmp___3 = gettext("The strings compared were %s and %s.");
      error((int) exit_failure, 0, (const char *) tmp___3, tmp___2, tmp___1);
    }
    return;
  }
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
      diff = tmp;
      tmp___0 = __errno_location();
      collation_errno = * tmp___0;
    }
    if (collation_errno)
    {
      {
        collate_error(collation_errno, (const char *) s1, s1len, (const char *) s2, s2len);
      }
    }

    return diff;
  }
}

void *x2realloc(void *p, size_t *pn);
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
        n += (size_t) (! n);
      }

    }
    else
    {
      if ((0xaaaaaaaaaaaaaaaaUL / s) <= n)
      {
        {
          xalloc_die();
        }
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

extern void *calloc(size_t __nmemb, size_t __size);
extern void *memset(void *__s, int __c, size_t __n);
void *xmalloc(size_t n);
void *xmalloc(size_t n)
{
  void *p;
  void *tmp;
  {
    {
      tmp = malloc(n);
      p = tmp;
    }
    if (! p)
    {
      if (n != 0UL)
      {
        {
          xalloc_die();
        }
      }

    }

    return p;
  }
}

void *xrealloc(void *p, size_t n);
void *xrealloc(void *p, size_t n)
{
  {
    if (! n)
    {
      if (p)
      {
        {
          free(p);
        }
        return (void *) 0;
      }

    }

    {
      p = realloc(p, n);
    }
    if (! p)
    {
      if (n)
      {
        {
          xalloc_die();
        }
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

extern int gethostname(char *__name, size_t __len);
extern char *getcwd(char *__buf, size_t __size);
FILE *freopen_safer(const char *name, const char *mode, FILE *f);
void xalloc_die(void);
void xalloc_die(void)
{
  char *tmp;
  char *__cil_tmp2;
  {
    {
      tmp = gettext("memory exhausted");
      error((int) exit_failure, 0, "%s", tmp);
      abort();
    }
  }
}

extern __uid_t geteuid(void);
static _Bool initialized;
static _Bool can_write;
extern int strcmp(const char *__s1, const char *__s2);
static const unsigned char nonspacing_table_data[1728] = {(const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 128, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 0, (const unsigned char) 32, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 248, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 254, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 191, (const unsigned char) 182, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 15, (const unsigned char) 0, (const unsigned char) 255, (const unsigned char) 7, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 248, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 1, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 192, (const unsigned char) 191, (const unsigned char) 159, (const unsigned char) 61, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 128, (const unsigned char) 2, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 7, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 192, (const unsigned char) 255, (const unsigned char) 1, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 248, (const unsigned char) 15, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 192, (const unsigned char) 251, (const unsigned char) 239, (const unsigned char) 62, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 14, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 7, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 20, (const unsigned char) 254, (const unsigned char) 33, (const unsigned char) 254, (const unsigned char) 0, (const unsigned char) 12, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 2, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 16, (const unsigned char) 30, (const unsigned char) 32, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 12, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 6, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 16, (const unsigned char) 134, (const unsigned char) 57, (const unsigned char) 2, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 35, (const unsigned char) 0, (const unsigned char) 6, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 16, (const unsigned char) 190, (const unsigned char) 33, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 12, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 2, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 144, (const unsigned char) 30, (const unsigned char) 32, (const unsigned char) 64, (const unsigned char) 0, (const unsigned char) 12, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 4, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 1, (const unsigned char) 32, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 192, (const unsigned char) 193, (const unsigned char) 61, (const unsigned char) 96, (const unsigned char) 0, (const unsigned char) 12, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 16, (const unsigned char) 0, (const unsigned char) 48, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 12, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 30, (const unsigned char) 32, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 12, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 4, (const unsigned char) 92, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 242, (const unsigned char) 7, (const unsigned char) 128, (const unsigned char) 127, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 242, (const unsigned char) 27, (const unsigned char) 0, (const unsigned char) 63, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 160, (const unsigned char) 2, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 254, (const unsigned char) 127, (const unsigned char) 223, (const unsigned char) 224, (const unsigned char) 255, (const unsigned char) 254, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 31, (const unsigned char) 64, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 224, (const unsigned char) 253, (const unsigned char) 102, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 195, (const unsigned char) 1, (const unsigned char) 0, (const unsigned char) 30, (const unsigned char) 0, (const unsigned char) 100, (const unsigned char) 32, (const unsigned char) 0, (const unsigned char) 32, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 224, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 28, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 28, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 12, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 12, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 176, (const unsigned char) 63, (const unsigned char) 64, (const unsigned char) 254, (const unsigned char) 15, (const unsigned char) 32, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 56, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 2, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 135, (const unsigned char) 1, (const unsigned char) 4, (const unsigned char) 14, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 128, (const unsigned char) 1, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 64, (const unsigned char) 127, (const unsigned char) 229, (const unsigned char) 31, (const unsigned char) 248, (const unsigned char) 159, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 15, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 208, (const unsigned char) 23, (const unsigned char) 4, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 248, (const unsigned char) 15, (const unsigned char) 0, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 60, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 64, (const unsigned char) 163, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 240, (const unsigned char) 207, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 247, (const unsigned char) 255, (const unsigned char) 253, (const unsigned char) 33, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 127, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 240, (const unsigned char) 0, (const unsigned char) 248, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 124, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 31, (const unsigned char) 252, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 1, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 128, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 128, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 252, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 6, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 128, (const unsigned char) 7, (const unsigned char) 48, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 68, (const unsigned char) 8, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 96, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 16, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 192, (const unsigned char) 63, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 128, (const unsigned char) 255, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 7, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 200, (const unsigned char) 19, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 126, (const unsigned char) 102, (const unsigned char) 0, (const unsigned char) 8, (const unsigned char) 16, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 157, (const unsigned char) 193, (const unsigned char) 2, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 32, (const unsigned char) 33, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 64, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 255, (const unsigned char) 255, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 127, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 128, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 14, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 32, (const unsigned char) 110, (const unsigned char) 240, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 135, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 2, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 255, (const unsigned char) 127, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 3, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 120, (const unsigned char) 38, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 128, (const unsigned char) 3, (const unsigned char) 248, (const unsigned char) 255, (const unsigned char) 231, (const unsigned char) 15, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 60, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 28, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0, (const unsigned char) 0};
static const signed char nonspacing_table_ind[240] = {(const signed char) 0, (const signed char) 1, (const signed char) 2, (const signed char) 3, (const signed char) 4, (const signed char) 5, (const signed char) 6, (const signed char) 7, (const signed char) 8, (const signed char) 9, (const signed char) (- 1), (const signed char) 10, (const signed char) 11, (const signed char) 12, (const signed char) 13, (const signed char) (- 1), (const signed char) 14, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) 15, (const signed char) (- 1), (const signed char) 16, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) 17, (const signed char) 18, (const signed char) 19, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) 20, (const signed char) (- 1), (const signed char) 21, (const signed char) 22, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) 23, (const signed char) (- 1), (const signed char) (- 1), (const signed char) 24, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) 25, (const signed char) 26, (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1), (const signed char) (- 1)};
extern int atexit(void (*__func)(void));
extern int kill(__pid_t __pid, int __sig);
extern __pid_t waitpid(__pid_t __pid, int *__stat_loc, int __options);
static slaves_entry_t static_slaves[32];
static slaves_entry_t *volatile slaves = (slaves_entry_t *) static_slaves;
static volatile int slaves_count = (volatile int) 0;
static size_t slaves_allocated = (sizeof(static_slaves)) / (sizeof(static_slaves[0]));
static _Bool cleanup_slaves_registered = (_Bool) 0;
extern size_t fwrite(const void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __s);
extern int printf(const char *__restrict __format, ...);
const char version_etc_copyright[47];
void version_etc_arn(FILE *stream, const char *command_name, const char *package, const char *version, const char *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, const char *command_name, const char *package, const char *version, va_list authors);
void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...);
void version_etc_arn(FILE *stream, const char *command_name, const char *package, const char *version, const char *const *authors, size_t n_authors)
{
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *tmp___9;
  char *tmp___10;
  char *__cil_tmp19;
  char *__cil_tmp20;
  char *__cil_tmp21;
  char *__cil_tmp22;
  char *__cil_tmp23;
  char *__cil_tmp24;
  char *__cil_tmp25;
  char *__cil_tmp26;
  char *__cil_tmp27;
  char *__cil_tmp28;
  char *__cil_tmp29;
  char *__cil_tmp30;
  {
    if (command_name)
    {
      {
        fprintf((FILE *) stream, (const char *) "%s (%s) %s\n", command_name, package, version);
      }
    }
    else
    {
      {
        fprintf((FILE *) stream, (const char *) "%s %s\n", package, version);
      }
    }

    {
      tmp = gettext("(C)");
      fprintf((FILE *) stream, (const char *) version_etc_copyright, tmp, 2012);
      tmp___0 = gettext("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
      fputs_unlocked((const char *) tmp___0, (FILE *) stream);
    }
    {
      if (n_authors == 0UL)
      {
        goto case_0;
      }

      if (n_authors == 1UL)
      {
        goto case_1;
      }

      if (n_authors == 2UL)
      {
        goto case_2;
      }

      if (n_authors == 3UL)
      {
        goto case_3;
      }

      if (n_authors == 4UL)
      {
        goto case_4;
      }

      if (n_authors == 5UL)
      {
        goto case_5;
      }

      if (n_authors == 6UL)
      {
        goto case_6;
      }

      if (n_authors == 7UL)
      {
        goto case_7;
      }

      if (n_authors == 8UL)
      {
        goto case_8;
      }

      if (n_authors == 9UL)
      {
        goto case_9;
      }

      goto switch_default;
      case_0:
      {
        abort();
      }

      case_1:
      {
        tmp___1 = gettext("Written by %s.\n");
        fprintf((FILE *) stream, (const char *) tmp___1, * (authors + 0));
      }

      goto switch_break;
      case_2:
      {
        tmp___2 = gettext("Written by %s and %s.\n");
        fprintf((FILE *) stream, (const char *) tmp___2, * (authors + 0), * (authors + 1));
      }

      goto switch_break;
      case_3:
      {
        tmp___3 = gettext("Written by %s, %s, and %s.\n");
        fprintf((FILE *) stream, (const char *) tmp___3, * (authors + 0), * (authors + 1), * (authors + 2));
      }

      goto switch_break;
      case_4:
      {
        tmp___4 = gettext("Written by %s, %s, %s,\nand %s.\n");
        fprintf((FILE *) stream, (const char *) tmp___4, * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3));
      }

      goto switch_break;
      case_5:
      {
        tmp___5 = gettext("Written by %s, %s, %s,\n%s, and %s.\n");
        fprintf((FILE *) stream, (const char *) tmp___5, * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4));
      }

      goto switch_break;
      case_6:
      {
        tmp___6 = gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
        fprintf((FILE *) stream, (const char *) tmp___6, * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5));
      }

      goto switch_break;
      case_7:
      {
        tmp___7 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
        fprintf((FILE *) stream, (const char *) tmp___7, * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5), * (authors + 6));
      }

      goto switch_break;
      case_8:
      {
        tmp___8 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
        fprintf((FILE *) stream, (const char *) tmp___8, * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5), * (authors + 6), * (authors + 7));
      }

      goto switch_break;
      case_9:
      {
        tmp___9 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
        fprintf((FILE *) stream, (const char *) tmp___9, * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5), * (authors + 6), * (authors + 7), * (authors + 8));
      }

      goto switch_break;
      switch_default:
      {
        tmp___10 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
        fprintf((FILE *) stream, (const char *) tmp___10, * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5), * (authors + 6), * (authors + 7), * (authors + 8));
      }

      goto switch_break;
      switch_break:
      ;

    }
    return;
  }
}

void version_etc_va(FILE *stream, const char *command_name, const char *package, const char *version, va_list authors)
{
  size_t n_authors;
  const char *authtab[10];
  const char *tmp;
  void *__cil_tmp9;
  {
    n_authors = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (n_authors < 10UL)
        {
          {
          }
          if (! (((unsigned long) tmp) != ((unsigned long) ((void *) 0))))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        n_authors++;
      }

      while_break:
      ;

    }
    {
      version_etc_arn(stream, command_name, package, version, (const char *const *) authtab, n_authors);
    }
    return;
  }
}

void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...);
void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...)
{
  va_list authors;
  {
    {
      __builtin_va_start(authors, version);
      version_etc_va(stream, command_name, package, version, authors);
      __builtin_va_end(authors);
    }
    return;
  }
}

const char version_etc_copyright[47] = {(const char) 'C', (const char) 'o', (const char) 'p', (const char) 'y', (const char) 'r', (const char) 'i', (const char) 'g', (const char) 'h', (const char) 't', (const char) ' ', (const char) '%', (const char) 's', (const char) ' ', (const char) '%', (const char) 'd', (const char) ' ', (const char) 'F', (const char) 'r', (const char) 'e', (const char) 'e', (const char) ' ', (const char) 'S', (const char) 'o', (const char) 'f', (const char) 't', (const char) 'w', (const char) 'a', (const char) 'r', (const char) 'e', (const char) ' ', (const char) 'F', (const char) 'o', (const char) 'u', (const char) 'n', (const char) 'd', (const char) 'a', (const char) 't', (const char) 'i', (const char) 'o', (const char) 'n', (const char) ',', (const char) ' ', (const char) 'I', (const char) 'n', (const char) 'c', (const char) '.', (const char) '\000'};
extern void error_at_line(int __status, int __errnum, const char *__fname, unsigned int __lineno, const char *__format, ...);
extern char *nl_langinfo(nl_item __item);
extern int fstatat(int __fd, const char *__restrict __file, struct stat *__restrict __buf, int __flag);
extern int utimensat(int __fd, const char *__path, const struct timespec *__times, int __flags);
static int utimensat_works_really;
extern int futimens(int __fd, const struct timespec *__times);
extern int utimes(const char *__file, const struct timeval *__tvp);
extern int futimesat(int __fd, const char *__file, const struct timeval *__tvp);
static int utimensat_works_really___0;
static int lutimensat_works_really;
static Hash_table *ht;
static struct fs_res *new_dst_res;
extern void endpwent(void);
extern struct passwd *getpwnam(const char *__name);
extern void endgrent(void);
extern struct group *getgrgid(__gid_t __gid);
extern struct group *getgrnam(const char *__name);
static const char *E_invalid_user = "invalid user";
static const char *E_invalid_group = "invalid group";
static const char *E_bad_spec = "invalid spec";
extern iconv_t iconv_open(const char *__tocode, const char *__fromcode);
extern size_t iconv(iconv_t __cd, char **__restrict __inbuf, size_t *__restrict __inbytesleft, char **__restrict __outbuf, size_t *__restrict __outbytesleft);
const char *locale_charset(void);
static int initialized___0;
static int is_utf8;
static iconv_t utf8_to_local;
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
extern size_t __ctype_get_mb_cur_max(void);
extern int mbsinit(const mbstate_t *__ps);
extern size_t mbrtowc(wchar_t *__restrict __pwc, const char *__restrict __s, size_t __n, mbstate_t *__restrict __p);
extern int iswspace(wint_t __wc);
const unsigned int is_basic_table[8];
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
extern int open(const char *__file, int __oflag, ...);
extern int mkdir(const char *__path, __mode_t __mode);
static const char letters[63] = {(const char) 'a', (const char) 'b', (const char) 'c', (const char) 'd', (const char) 'e', (const char) 'f', (const char) 'g', (const char) 'h', (const char) 'i', (const char) 'j', (const char) 'k', (const char) 'l', (const char) 'm', (const char) 'n', (const char) 'o', (const char) 'p', (const char) 'q', (const char) 'r', (const char) 's', (const char) 't', (const char) 'u', (const char) 'v', (const char) 'w', (const char) 'x', (const char) 'y', (const char) 'z', (const char) 'A', (const char) 'B', (const char) 'C', (const char) 'D', (const char) 'E', (const char) 'F', (const char) 'G', (const char) 'H', (const char) 'I', (const char) 'J', (const char) 'K', (const char) 'L', (const char) 'M', (const char) 'N', (const char) 'O', (const char) 'P', (const char) 'Q', (const char) 'R', (const char) 'S', (const char) 'T', (const char) 'U', (const char) 'V', (const char) 'W', (const char) 'X', (const char) 'Y', (const char) 'Z', (const char) '0', (const char) '1', (const char) '2', (const char) '3', (const char) '4', (const char) '5', (const char) '6', (const char) '7', (const char) '8', (const char) '9', (const char) '\000'};
extern int iconv_close(iconv_t __cd);
extern time_t mktime(struct tm *__tp);
extern size_t strftime(char *__restrict __s, size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp);
extern int tolower(int __c);
extern int toupper(int __c);
extern char **environ;
extern int sigprocmask(int __how, const sigset_t *__restrict __set, sigset_t *__restrict __oset);
extern int posix_spawnp(pid_t *__pid, const char *__file, const posix_spawn_file_actions_t *__file_actions, const posix_spawnattr_t *__attrp, char *const *__argv, char *const *__envp);
extern int posix_spawnattr_init(posix_spawnattr_t *__attr);
extern int posix_spawnattr_destroy(posix_spawnattr_t *__attr);
extern int posix_spawnattr_setsigmask(posix_spawnattr_t *__restrict __attr, const sigset_t *__restrict __sigmask);
extern int posix_spawnattr_setflags(posix_spawnattr_t *_attr, short __flags);
extern int posix_spawn_file_actions_init(posix_spawn_file_actions_t *__file_actions);
extern int posix_spawn_file_actions_destroy(posix_spawn_file_actions_t *__file_actions);
extern int posix_spawn_file_actions_addopen(posix_spawn_file_actions_t *__restrict __file_actions, int __fd, const char *__restrict __path, int __oflag, mode_t __mode);
extern int posix_spawn_file_actions_addclose(posix_spawn_file_actions_t *__file_actions, int __fd);
extern int posix_spawn_file_actions_adddup2(posix_spawn_file_actions_t *__file_actions, int __fd, int __newfd);
extern int __libc_current_sigrtmin(void);
extern int __libc_current_sigrtmax(void);
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...);
static struct numname numname_table[35] = {{1, {(const char) 'H', (const char) 'U', (const char) 'P', (const char) '\000'}}, {2, {(const char) 'I', (const char) 'N', (const char) 'T', (const char) '\000'}}, {3, {(const char) 'Q', (const char) 'U', (const char) 'I', (const char) 'T', (const char) '\000'}}, {4, {(const char) 'I', (const char) 'L', (const char) 'L', (const char) '\000'}}, {5, {(const char) 'T', (const char) 'R', (const char) 'A', (const char) 'P', (const char) '\000'}}, {6, {(const char) 'A', (const char) 'B', (const char) 'R', (const char) 'T', (const char) '\000'}}, {8, {(const char) 'F', (const char) 'P', (const char) 'E', (const char) '\000'}}, {9, {(const char) 'K', (const char) 'I', (const char) 'L', (const char) 'L', (const char) '\000'}}, {11, {(const char) 'S', (const char) 'E', (const char) 'G', (const char) 'V', (const char) '\000'}}, {7, {(const char) 'B', (const char) 'U', (const char) 'S', (const char) '\000'}}, {13, {(const char) 'P', (const char) 'I', (const char) 'P', (const char) 'E', (const char) '\000'}}, {14, {(const char) 'A', (const char) 'L', (const char) 'R', (const char) 'M', (const char) '\000'}}, {15, {(const char) 'T', (const char) 'E', (const char) 'R', (const char) 'M', (const char) '\000'}}, {10, {(const char) 'U', (const char) 'S', (const char) 'R', (const char) '1', (const char) '\000'}}, {12, {(const char) 'U', (const char) 'S', (const char) 'R', (const char) '2', (const char) '\000'}}, {17, {(const char) 'C', (const char) 'H', (const char) 'L', (const char) 'D', (const char) '\000'}}, {23, {(const char) 'U', (const char) 'R', (const char) 'G', (const char) '\000'}}, {19, {(const char) 'S', (const char) 'T', (const char) 'O', (const char) 'P', (const char) '\000'}}, {20, {(const char) 'T', (const char) 'S', (const char) 'T', (const char) 'P', (const char) '\000'}}, {18, {(const char) 'C', (const char) 'O', (const char) 'N', (const char) 'T', (const char) '\000'}}, {21, {(const char) 'T', (const char) 'T', (const char) 'I', (const char) 'N', (const char) '\000'}}, {22, {(const char) 'T', (const char) 'T', (const char) 'O', (const char) 'U', (const char) '\000'}}, {31, {(const char) 'S', (const char) 'Y', (const char) 'S', (const char) '\000'}}, {29, {(const char) 'P', (const char) 'O', (const char) 'L', (const char) 'L', (const char) '\000'}}, {26, {(const char) 'V', (const char) 'T', (const char) 'A', (const char) 'L', (const char) 'R', (const char) 'M', (const char) '\000'}}, {27, {(const char) 'P', (const char) 'R', (const char) 'O', (const char) 'F', (const char) '\000'}}, {24, {(const char) 'X', (const char) 'C', (const char) 'P', (const char) 'U', (const char) '\000'}}, {25, {(const char) 'X', (const char) 'F', (const char) 'S', (const char) 'Z', (const char) '\000'}}, {6, {(const char) 'I', (const char) 'O', (const char) 'T', (const char) '\000'}}, {17, {(const char) 'C', (const char) 'L', (const char) 'D', (const char) '\000'}}, {30, {(const char) 'P', (const char) 'W', (const char) 'R', (const char) '\000'}}, {28, {(const char) 'W', (const char) 'I', (const char) 'N', (const char) 'C', (const char) 'H', (const char) '\000'}}, {29, {(const char) 'I', (const char) 'O', (const char) '\000'}}, {16, {(const char) 'S', (const char) 'T', (const char) 'K', (const char) 'F', (const char) 'L', (const char) 'T', (const char) '\000'}}, {0, {(const char) 'E', (const char) 'X', (const char) 'I', (const char) 'T', (const char) '\000'}}};
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern int feof_unlocked(FILE *__stream);
static const unsigned char fillbuf[128] = {(const unsigned char) 128, (const unsigned char) 0};
static const u64 sha512_round_constants[80] = {(const u64) ((1116352408UL << 32) + 3609767458UL), (const u64) ((1899447441UL << 32) + 602891725UL), (const u64) ((3049323471UL << 32) + 3964484399UL), (const u64) ((3921009573UL << 32) + 2173295548UL), (const u64) ((961987163UL << 32) + 4081628472UL), (const u64) ((1508970993UL << 32) + 3053834265UL), (const u64) ((2453635748UL << 32) + 2937671579UL), (const u64) ((2870763221UL << 32) + 3664609560UL), (const u64) ((3624381080UL << 32) + 2734883394UL), (const u64) ((310598401UL << 32) + 1164996542UL), (const u64) ((607225278UL << 32) + 1323610764UL), (const u64) ((1426881987UL << 32) + 3590304994UL), (const u64) ((1925078388UL << 32) + 4068182383UL), (const u64) ((2162078206UL << 32) + 991336113UL), (const u64) ((2614888103UL << 32) + 633803317UL), (const u64) ((3248222580UL << 32) + 3479774868UL), (const u64) ((3835390401UL << 32) + 2666613458UL), (const u64) ((4022224774UL << 32) + 944711139UL), (const u64) ((264347078UL << 32) + 2341262773UL), (const u64) ((604807628UL << 32) + 2007800933UL), (const u64) ((770255983UL << 32) + 1495990901UL), (const u64) ((1249150122UL << 32) + 1856431235UL), (const u64) ((1555081692UL << 32) + 3175218132UL), (const u64) ((1996064986UL << 32) + 2198950837UL), (const u64) ((2554220882UL << 32) + 3999719339UL), (const u64) ((2821834349UL << 32) + 766784016UL), (const u64) ((2952996808UL << 32) + 2566594879UL), (const u64) ((3210313671UL << 32) + 3203337956UL), (const u64) ((3336571891UL << 32) + 1034457026UL), (const u64) ((3584528711UL << 32) + 2466948901UL), (const u64) ((113926993UL << 32) + 3758326383UL), (const u64) ((338241895UL << 32) + 168717936UL), (const u64) ((666307205UL << 32) + 1188179964UL), (const u64) ((773529912UL << 32) + 1546045734UL), (const u64) ((1294757372UL << 32) + 1522805485UL), (const u64) ((1396182291UL << 32) + 2643833823UL), (const u64) ((1695183700UL << 32) + 2343527390UL), (const u64) ((1986661051UL << 32) + 1014477480UL), (const u64) ((2177026350UL << 32) + 1206759142UL), (const u64) ((2456956037UL << 32) + 344077627UL), (const u64) ((2730485921UL << 32) + 1290863460UL), (const u64) ((2820302411UL << 32) + 3158454273UL), (const u64) ((3259730800UL << 32) + 3505952657UL), (const u64) ((3345764771UL << 32) + 106217008UL), (const u64) ((3516065817UL << 32) + 3606008344UL), (const u64) ((3600352804UL << 32) + 1432725776UL), (const u64) ((4094571909UL << 32) + 1467031594UL), (const u64) ((275423344UL << 32) + 851169720UL), (const u64) ((430227734UL << 32) + 3100823752UL), (const u64) ((506948616UL << 32) + 1363258195UL), (const u64) ((659060556UL << 32) + 3750685593UL), (const u64) ((883997877UL << 32) + 3785050280UL), (const u64) ((958139571UL << 32) + 3318307427UL), (const u64) ((1322822218UL << 32) + 3812723403UL), (const u64) ((1537002063UL << 32) + 2003034995UL), (const u64) ((1747873779UL << 32) + 3602036899UL), (const u64) ((1955562222UL << 32) + 1575990012UL), (const u64) ((2024104815UL << 32) + 1125592928UL), (const u64) ((2227730452UL << 32) + 2716904306UL), (const u64) ((2361852424UL << 32) + 442776044UL), (const u64) ((2428436474UL << 32) + 593698344UL), (const u64) ((2756734187UL << 32) + 3733110249UL), (const u64) ((3204031479UL << 32) + 2999351573UL), (const u64) ((3329325298UL << 32) + 3815920427UL), (const u64) ((3391569614UL << 32) + 3928383900UL), (const u64) ((3515267271UL << 32) + 566280711UL), (const u64) ((3940187606UL << 32) + 3454069534UL), (const u64) ((4118630271UL << 32) + 4000239992UL), (const u64) ((116418474UL << 32) + 1914138554UL), (const u64) ((174292421UL << 32) + 2731055270UL), (const u64) ((289380356UL << 32) + 3203993006UL), (const u64) ((460393269UL << 32) + 320620315UL), (const u64) ((685471733UL << 32) + 587496836UL), (const u64) ((852142971UL << 32) + 1086792851UL), (const u64) ((1017036298UL << 32) + 365543100UL), (const u64) ((1126000580UL << 32) + 2618297676UL), (const u64) ((1288033470UL << 32) + 3409855158UL), (const u64) ((1501505948UL << 32) + 4234509866UL), (const u64) ((1607167915UL << 32) + 987167468UL), (const u64) ((1816402316UL << 32) + 1246189591UL)};
static const unsigned char fillbuf___0[64] = {(const unsigned char) 128, (const unsigned char) 0};
static const uint32_t sha256_round_constants[64] = {(const uint32_t) 1116352408UL, (const uint32_t) 1899447441UL, (const uint32_t) 3049323471UL, (const uint32_t) 3921009573UL, (const uint32_t) 961987163UL, (const uint32_t) 1508970993UL, (const uint32_t) 2453635748UL, (const uint32_t) 2870763221UL, (const uint32_t) 3624381080UL, (const uint32_t) 310598401UL, (const uint32_t) 607225278UL, (const uint32_t) 1426881987UL, (const uint32_t) 1925078388UL, (const uint32_t) 2162078206UL, (const uint32_t) 2614888103UL, (const uint32_t) 3248222580UL, (const uint32_t) 3835390401UL, (const uint32_t) 4022224774UL, (const uint32_t) 264347078UL, (const uint32_t) 604807628UL, (const uint32_t) 770255983UL, (const uint32_t) 1249150122UL, (const uint32_t) 1555081692UL, (const uint32_t) 1996064986UL, (const uint32_t) 2554220882UL, (const uint32_t) 2821834349UL, (const uint32_t) 2952996808UL, (const uint32_t) 3210313671UL, (const uint32_t) 3336571891UL, (const uint32_t) 3584528711UL, (const uint32_t) 113926993UL, (const uint32_t) 338241895UL, (const uint32_t) 666307205UL, (const uint32_t) 773529912UL, (const uint32_t) 1294757372UL, (const uint32_t) 1396182291UL, (const uint32_t) 1695183700UL, (const uint32_t) 1986661051UL, (const uint32_t) 2177026350UL, (const uint32_t) 2456956037UL, (const uint32_t) 2730485921UL, (const uint32_t) 2820302411UL, (const uint32_t) 3259730800UL, (const uint32_t) 3345764771UL, (const uint32_t) 3516065817UL, (const uint32_t) 3600352804UL, (const uint32_t) 4094571909UL, (const uint32_t) 275423344UL, (const uint32_t) 430227734UL, (const uint32_t) 506948616UL, (const uint32_t) 659060556UL, (const uint32_t) 883997877UL, (const uint32_t) 958139571UL, (const uint32_t) 1322822218UL, (const uint32_t) 1537002063UL, (const uint32_t) 1747873779UL, (const uint32_t) 1955562222UL, (const uint32_t) 2024104815UL, (const uint32_t) 2227730452UL, (const uint32_t) 2361852424UL, (const uint32_t) 2428436474UL, (const uint32_t) 2756734187UL, (const uint32_t) 3204031479UL, (const uint32_t) 3329325298UL};
static const unsigned char fillbuf___1[64] = {(const unsigned char) 128, (const unsigned char) 0};
extern int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
extern int settimeofday(const struct timeval *__tv, const struct timezone *__tz);
extern int raise(int __sig);
extern __pid_t fork(void);
extern DIR *fdopendir(int __fd);
extern ssize_t write(int __fd, const void *__buf, size_t __n);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern int unlink(const char *__name);
extern int rmdir(const char *__path);
extern void setutxent(void);
extern void endutxent(void);
extern struct utmpx *getutxent(void);
extern int utmpxname(const char *__file);
extern char *strncpy(char *__restrict __dest, const char *__restrict __src, size_t __n);
extern int fgetc(FILE *__stream);
extern void _obstack_newchunk(struct obstack *, int);
extern int _obstack_begin(struct obstack *, int, int, void *(*)(long), void (*)(void *));
extern void obstack_free(struct obstack *obstack, void *block);
extern int getc_unlocked(FILE *__stream);
extern FILE *fopen(const char *__restrict __filename, const char *__restrict __modes);
extern size_t fread(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern __off_t ftello(FILE *__stream);
extern int fileno(FILE *__stream);
extern int setvbuf(FILE *__restrict __stream, char *__restrict __buf, int __modes, size_t __n);
extern int gettimeofday(struct timeval *__restrict __tv, __timezone_ptr_t __tz);
extern __pid_t getpid(void);
extern __pid_t getppid(void);
extern __uid_t getuid(void);
extern __gid_t getgid(void);
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
const char *const quoting_style_args[9];
const enum quoting_style quoting_style_vals[8];
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(const char *arg, char ch);
char *quotearg_char_mem(const char *arg, size_t argsize, char ch);
struct quoting_options quote_quoting_options;
__inline static char *xcharalloc(size_t n);
__inline static char *xcharalloc(size_t n);
__inline static char *xcharalloc(size_t n)
{
  void *tmp;
  void *tmp___0;
  void *tmp___1;
  {
    if ((sizeof(char)) == 1UL)
    {
      {
        tmp = xmalloc(n);
        tmp___1 = tmp;
      }
    }
    else
    {
      {
        tmp___0 = xnmalloc(n, sizeof(char));
        tmp___1 = tmp___0;
      }
    }

    return (char *) tmp___1;
  }
}

extern int iswprint(wint_t __wc);
const char *const quoting_style_args[9] = {(const char *) "literal", (const char *) "shell", (const char *) "shell-always", (const char *) "c", (const char *) "c-maybe", (const char *) "escape", (const char *) "locale", (const char *) "clocale", (const char *) 0};
const enum quoting_style quoting_style_vals[8] = {(const enum quoting_style) 0, (const enum quoting_style) 1, (const enum quoting_style) 2, (const enum quoting_style) 3, (const enum quoting_style) 4, (const enum quoting_style) 5, (const enum quoting_style) 6, (const enum quoting_style) 7};
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i)
{
  unsigned char uc;
  unsigned int *p;
  struct quoting_options *tmp;
  int shift;
  int r;
  {
    uc = (unsigned char) c;
    if (o)
    {
      tmp = o;
    }
    else
    {
      tmp = & default_quoting_options;
    }

    p = tmp->quote_these_too + (((unsigned long) uc) / ((sizeof(int)) * 8UL));
    shift = (int) (((unsigned long) uc) % ((sizeof(int)) * 8UL));
    r = (int) (((* p) >> shift) & 1U);
    * p ^= (unsigned int) (((i & 1) ^ r) << shift);
    return r;
  }
}

static struct quoting_options quoting_options_from_style(enum quoting_style style)
{
  struct quoting_options o;
  unsigned int tmp;
  void *__cil_tmp4;
  {
    o.style = (enum quoting_style) 0;
    o.flags = 0;
    o.quote_these_too[0] = 0U;
    tmp = 1U;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (! (tmp >= 8U)))
        {
          goto while_break;
        }

        o.quote_these_too[tmp] = 0U;
        tmp++;
      }

      while_break:
      ;

    }
    o.left_quote = (const char *) ((void *) 0);
    o.right_quote = (const char *) ((void *) 0);
    if (((unsigned int) style) == 8U)
    {
      {
        abort();
      }
    }

    o.style = style;
    return o;
  }
}

static const char *gettext_quote(const char *msgid, enum quoting_style s)
{
  const char *translation;
  const char *tmp;
  const char *locale_code;
  const char *tmp___0;
  int tmp___1;
  const char *tmp___2;
  int tmp___3;
  const char *tmp___4;
  char *__cil_tmp12;
  char *__cil_tmp13;
  char *__cil_tmp14;
  char *__cil_tmp15;
  char *__cil_tmp16;
  char *__cil_tmp17;
  char *__cil_tmp18;
  char *__cil_tmp19;
  {
    {
      tmp = (const char *) gettext(msgid);
      translation = tmp;
    }
    if (((unsigned long) translation) != ((unsigned long) msgid))
    {
      return translation;
    }

    {
      locale_code = locale_charset();
      tmp___1 = c_strcasecmp(locale_code, "UTF-8");
    }
    if (tmp___1 == 0)
    {
      if (((const int) (* (msgid + 0))) == 96)
      {
        tmp___0 = "\342\200\230";
      }
      else
      {
        tmp___0 = "\342\200\231";
      }

      return tmp___0;
    }

    {
      tmp___3 = c_strcasecmp(locale_code, "GB18030");
    }
    if (tmp___3 == 0)
    {
      if (((const int) (* (msgid + 0))) == 96)
      {
        tmp___2 = "\241\ae";
      }
      else
      {
        tmp___2 = "\241\257";
      }

      return tmp___2;
    }

    if (((unsigned int) s) == 7U)
    {
      tmp___4 = "\"";
    }
    else
    {
      tmp___4 = "\'";
    }

    return tmp___4;
  }
}

static size_t quotearg_buffer_restyled(char *buffer, size_t buffersize, const char *arg, size_t argsize, enum quoting_style quoting_style, int flags, const unsigned int *quote_these_too, const char *left_quote, const char *right_quote)
{
  size_t i;
  size_t len;
  const char *quote_string;
  size_t quote_string_len;
  _Bool backslash_escapes;
  _Bool unibyte_locale;
  size_t tmp;
  _Bool elide_outer_quotes;
  unsigned char c;
  unsigned char esc;
  _Bool is_right_quote;
  int tmp___0;
  int tmp___1;
  size_t m;
  _Bool printable;
  const unsigned short **tmp___2;
  mbstate_t mbstate;
  wchar_t w;
  size_t bytes;
  size_t tmp___3;
  size_t j;
  int tmp___4;
  int tmp___5;
  size_t ilim;
  int tmp___6;
  size_t tmp___7;
  void *__cil_tmp36;
  char *__cil_tmp37;
  char *__cil_tmp38;
  char *__cil_tmp39;
  char *__cil_tmp40;
  {
    {
      len = (size_t) 0;
      quote_string = (const char *) 0;
      quote_string_len = (size_t) 0;
      backslash_escapes = (_Bool) 0;
      tmp = __ctype_get_mb_cur_max();
      unibyte_locale = (_Bool) (tmp == 1UL);
      elide_outer_quotes = (_Bool) ((flags & 2) != 0);
    }
    {
      if (((unsigned int) quoting_style) == 4U)
      {
        goto case_4;
      }

      if (((unsigned int) quoting_style) == 3U)
      {
        goto case_3;
      }

      if (((unsigned int) quoting_style) == 5U)
      {
        goto case_5;
      }

      if (((unsigned int) quoting_style) == 6U)
      {
        goto case_6;
      }

      if (((unsigned int) quoting_style) == 7U)
      {
        goto case_6;
      }

      if (((unsigned int) quoting_style) == 8U)
      {
        goto case_6;
      }

      if (((unsigned int) quoting_style) == 1U)
      {
        goto case_1;
      }

      if (((unsigned int) quoting_style) == 2U)
      {
        goto case_2;
      }

      if (((unsigned int) quoting_style) == 0U)
      {
        goto case_0;
      }

      goto switch_default;
      case_4:
      quoting_style = (enum quoting_style) 3;

      elide_outer_quotes = (_Bool) 1;
      case_3:
      if (! elide_outer_quotes)
      {
        {
          while (1)
          {
            while_continue:
            ;

            if (len < buffersize)
            {
              * (buffer + len) = (char) '\"';
            }

            len++;
            goto while_break;
          }

          while_break:
          ;

        }
      }


      backslash_escapes = (_Bool) 1;
      quote_string = "\"";
      quote_string_len = (size_t) 1;
      goto switch_break;
      case_5:
      backslash_escapes = (_Bool) 1;

      elide_outer_quotes = (_Bool) 0;
      goto switch_break;
      case_6:
      case_7:
      case_8:
      if (((unsigned int) quoting_style) != 8U)
      {
        {
          left_quote = gettext_quote("`", quoting_style);
          right_quote = gettext_quote("\'", quoting_style);
        }
      }




      if (! elide_outer_quotes)
      {
        quote_string = left_quote;
        {
          while (1)
          {
            while_continue___0:
            ;

            if (! (* quote_string))
            {
              goto while_break___0;
            }

            {
              while (1)
              {
                while_continue___1:
                ;

                if (len < buffersize)
                {
                  * (buffer + len) = (char) (* quote_string);
                }

                len++;
                goto while_break___1;
              }

              while_break___1:
              ;

            }
            quote_string++;
          }

          while_break___0:
          ;

        }
      }

      {
        backslash_escapes = (_Bool) 1;
        quote_string = right_quote;
        quote_string_len = strlen(quote_string);
      }
      goto switch_break;
      case_1:
      quoting_style = (enum quoting_style) 2;

      elide_outer_quotes = (_Bool) 1;
      case_2:
      if (! elide_outer_quotes)
      {
        {
          while (1)
          {
            while_continue___2:
            ;

            if (len < buffersize)
            {
              * (buffer + len) = (char) '\'';
            }

            len++;
            goto while_break___2;
          }

          while_break___2:
          ;

        }
      }


      quote_string = "\'";
      quote_string_len = (size_t) 1;
      goto switch_break;
      case_0:
      elide_outer_quotes = (_Bool) 0;

      goto switch_break;
      switch_default:
      {
        abort();
      }

      switch_break:
      ;

    }
    i = (size_t) 0;
    {
      while (1)
      {
        while_continue___3:
        ;

        if (argsize == 0xffffffffffffffffUL)
        {
          tmp___6 = ((const int) (* (arg + i))) == 0;
        }
        else
        {
          tmp___6 = i == argsize;
        }

        if (tmp___6)
        {
          goto while_break___3;
        }

        is_right_quote = (_Bool) 0;
        if (backslash_escapes)
        {
          if (quote_string_len)
          {
            if ((i + quote_string_len) <= argsize)
            {
              {
                tmp___0 = memcmp((const void *) (arg + i), (const void *) quote_string, quote_string_len);
              }
              if (tmp___0 == 0)
              {
                if (elide_outer_quotes)
                {
                  goto force_outer_quoting_style;
                }

                is_right_quote = (_Bool) 1;
              }

            }

          }

        }

        c = (unsigned char) (* (arg + i));
        {
          if (((int) c) == 0)
          {
            goto case_0___0;
          }

          if (((int) c) == 63)
          {
            goto case_63;
          }

          if (((int) c) == 7)
          {
            goto case_7___0;
          }

          if (((int) c) == 8)
          {
            goto case_8___0;
          }

          if (((int) c) == 12)
          {
            goto case_12;
          }

          if (((int) c) == 10)
          {
            goto case_10;
          }

          if (((int) c) == 13)
          {
            goto case_13;
          }

          if (((int) c) == 9)
          {
            goto case_9;
          }

          if (((int) c) == 11)
          {
            goto case_11;
          }

          if (((int) c) == 92)
          {
            goto case_92;
          }

          if (((int) c) == 123)
          {
            goto case_123;
          }

          if (((int) c) == 125)
          {
            goto case_123;
          }

          if (((int) c) == 35)
          {
            goto case_35;
          }

          if (((int) c) == 126)
          {
            goto case_35;
          }

          if (((int) c) == 32)
          {
            goto case_32;
          }

          if (((int) c) == 33)
          {
            goto case_32;
          }

          if (((int) c) == 34)
          {
            goto case_32;
          }

          if (((int) c) == 36)
          {
            goto case_32;
          }

          if (((int) c) == 38)
          {
            goto case_32;
          }

          if (((int) c) == 40)
          {
            goto case_32;
          }

          if (((int) c) == 41)
          {
            goto case_32;
          }

          if (((int) c) == 42)
          {
            goto case_32;
          }

          if (((int) c) == 59)
          {
            goto case_32;
          }

          if (((int) c) == 60)
          {
            goto case_32;
          }

          if (((int) c) == 61)
          {
            goto case_32;
          }

          if (((int) c) == 62)
          {
            goto case_32;
          }

          if (((int) c) == 91)
          {
            goto case_32;
          }

          if (((int) c) == 94)
          {
            goto case_32;
          }

          if (((int) c) == 96)
          {
            goto case_32;
          }

          if (((int) c) == 124)
          {
            goto case_32;
          }

          if (((int) c) == 39)
          {
            goto case_39___0;
          }

          if (((int) c) == 37)
          {
            goto case_37;
          }

          if (((int) c) == 43)
          {
            goto case_37;
          }

          if (((int) c) == 44)
          {
            goto case_37;
          }

          if (((int) c) == 45)
          {
            goto case_37;
          }

          if (((int) c) == 46)
          {
            goto case_37;
          }

          if (((int) c) == 47)
          {
            goto case_37;
          }

          if (((int) c) == 48)
          {
            goto case_37;
          }

          if (((int) c) == 49)
          {
            goto case_37;
          }

          if (((int) c) == 50)
          {
            goto case_37;
          }

          if (((int) c) == 51)
          {
            goto case_37;
          }

          if (((int) c) == 52)
          {
            goto case_37;
          }

          if (((int) c) == 53)
          {
            goto case_37;
          }

          if (((int) c) == 54)
          {
            goto case_37;
          }

          if (((int) c) == 55)
          {
            goto case_37;
          }

          if (((int) c) == 56)
          {
            goto case_37;
          }

          if (((int) c) == 57)
          {
            goto case_37;
          }

          if (((int) c) == 58)
          {
            goto case_37;
          }

          if (((int) c) == 65)
          {
            goto case_37;
          }

          if (((int) c) == 66)
          {
            goto case_37;
          }

          if (((int) c) == 67)
          {
            goto case_37;
          }

          if (((int) c) == 68)
          {
            goto case_37;
          }

          if (((int) c) == 69)
          {
            goto case_37;
          }

          if (((int) c) == 70)
          {
            goto case_37;
          }

          if (((int) c) == 71)
          {
            goto case_37;
          }

          if (((int) c) == 72)
          {
            goto case_37;
          }

          if (((int) c) == 73)
          {
            goto case_37;
          }

          if (((int) c) == 74)
          {
            goto case_37;
          }

          if (((int) c) == 75)
          {
            goto case_37;
          }

          if (((int) c) == 76)
          {
            goto case_37;
          }

          if (((int) c) == 77)
          {
            goto case_37;
          }

          if (((int) c) == 78)
          {
            goto case_37;
          }

          if (((int) c) == 79)
          {
            goto case_37;
          }

          if (((int) c) == 80)
          {
            goto case_37;
          }

          if (((int) c) == 81)
          {
            goto case_37;
          }

          if (((int) c) == 82)
          {
            goto case_37;
          }

          if (((int) c) == 83)
          {
            goto case_37;
          }

          if (((int) c) == 84)
          {
            goto case_37;
          }

          if (((int) c) == 85)
          {
            goto case_37;
          }

          if (((int) c) == 86)
          {
            goto case_37;
          }

          if (((int) c) == 87)
          {
            goto case_37;
          }

          if (((int) c) == 88)
          {
            goto case_37;
          }

          if (((int) c) == 89)
          {
            goto case_37;
          }

          if (((int) c) == 90)
          {
            goto case_37;
          }

          if (((int) c) == 93)
          {
            goto case_37;
          }

          if (((int) c) == 95)
          {
            goto case_37;
          }

          if (((int) c) == 97)
          {
            goto case_37;
          }

          if (((int) c) == 98)
          {
            goto case_37;
          }

          if (((int) c) == 99)
          {
            goto case_37;
          }

          if (((int) c) == 100)
          {
            goto case_37;
          }

          if (((int) c) == 101)
          {
            goto case_37;
          }

          if (((int) c) == 102)
          {
            goto case_37;
          }

          if (((int) c) == 103)
          {
            goto case_37;
          }

          if (((int) c) == 104)
          {
            goto case_37;
          }

          if (((int) c) == 105)
          {
            goto case_37;
          }

          if (((int) c) == 106)
          {
            goto case_37;
          }

          if (((int) c) == 107)
          {
            goto case_37;
          }

          if (((int) c) == 108)
          {
            goto case_37;
          }

          if (((int) c) == 109)
          {
            goto case_37;
          }

          if (((int) c) == 110)
          {
            goto case_37;
          }

          if (((int) c) == 111)
          {
            goto case_37;
          }

          if (((int) c) == 112)
          {
            goto case_37;
          }

          if (((int) c) == 113)
          {
            goto case_37;
          }

          if (((int) c) == 114)
          {
            goto case_37;
          }

          if (((int) c) == 115)
          {
            goto case_37;
          }

          if (((int) c) == 116)
          {
            goto case_37;
          }

          if (((int) c) == 117)
          {
            goto case_37;
          }

          if (((int) c) == 118)
          {
            goto case_37;
          }

          if (((int) c) == 119)
          {
            goto case_37;
          }

          if (((int) c) == 120)
          {
            goto case_37;
          }

          if (((int) c) == 121)
          {
            goto case_37;
          }

          if (((int) c) == 122)
          {
            goto case_37;
          }

          goto switch_default___2;
          case_0___0:
          if (backslash_escapes)
          {
            if (elide_outer_quotes)
            {
              goto force_outer_quoting_style;
            }

            {
              while (1)
              {
                while_continue___4:
                ;

                if (len < buffersize)
                {
                  * (buffer + len) = (char) '\\';
                }

                len++;
                goto while_break___4;
              }

              while_break___4:
              ;

            }
            if ((i + 1UL) < argsize)
            {
              if (48 <= ((int) (* (arg + (i + 1UL)))))
              {
                if (((const int) (* (arg + (i + 1UL)))) <= 57)
                {
                  {
                    while (1)
                    {
                      while_continue___5:
                      ;

                      if (len < buffersize)
                      {
                        * (buffer + len) = (char) '0';
                      }

                      len++;
                      goto while_break___5;
                    }

                    while_break___5:
                    ;

                  }
                  {
                    while (1)
                    {
                      while_continue___6:
                      ;

                      if (len < buffersize)
                      {
                        * (buffer + len) = (char) '0';
                      }

                      len++;
                      goto while_break___6;
                    }

                    while_break___6:
                    ;

                  }
                }

              }

            }

            c = (unsigned char) '0';
          }
          else
          {
            if (flags & 1)
            {
              goto __Cont;
            }

          }


          goto switch_break___0;
          case_63:
          {
            if (((unsigned int) quoting_style) == 2U)
            {
              goto case_2___0;
            }

            if (((unsigned int) quoting_style) == 3U)
            {
              goto case_3___0;
            }

            goto switch_default___1;
            case_2___0:
            if (elide_outer_quotes)
            {
              goto force_outer_quoting_style;
            }


            goto switch_break___1;
            case_3___0:
            if (flags & 4)
            {
              if ((i + 2UL) < argsize)
              {
                if (((const int) (* (arg + (i + 1UL)))) == 63)
                {
                  {
                    if (((const int) (* (arg + (i + 2UL)))) == 33)
                    {
                      goto case_33;
                    }

                    if (((const int) (* (arg + (i + 2UL)))) == 39)
                    {
                      goto case_33;
                    }

                    if (((const int) (* (arg + (i + 2UL)))) == 40)
                    {
                      goto case_33;
                    }

                    if (((const int) (* (arg + (i + 2UL)))) == 41)
                    {
                      goto case_33;
                    }

                    if (((const int) (* (arg + (i + 2UL)))) == 45)
                    {
                      goto case_33;
                    }

                    if (((const int) (* (arg + (i + 2UL)))) == 47)
                    {
                      goto case_33;
                    }

                    if (((const int) (* (arg + (i + 2UL)))) == 60)
                    {
                      goto case_33;
                    }

                    if (((const int) (* (arg + (i + 2UL)))) == 61)
                    {
                      goto case_33;
                    }

                    if (((const int) (* (arg + (i + 2UL)))) == 62)
                    {
                      goto case_33;
                    }

                    goto switch_default___0;
                    case_33:
                    case_39:
                    case_40:
                    case_41:
                    case_45:
                    case_47:
                    case_60:
                    case_61:
                    case_62:
                    if (elide_outer_quotes)
                    {
                      goto force_outer_quoting_style;
                    }










                    c = (unsigned char) (* (arg + (i + 2UL)));
                    i += 2UL;
                    {
                      while (1)
                      {
                        while_continue___7:
                        ;

                        if (len < buffersize)
                        {
                          * (buffer + len) = (char) '?';
                        }

                        len++;
                        goto while_break___7;
                      }

                      while_break___7:
                      ;

                    }
                    {
                      while (1)
                      {
                        while_continue___8:
                        ;

                        if (len < buffersize)
                        {
                          * (buffer + len) = (char) '\"';
                        }

                        len++;
                        goto while_break___8;
                      }

                      while_break___8:
                      ;

                    }
                    {
                      while (1)
                      {
                        while_continue___9:
                        ;

                        if (len < buffersize)
                        {
                          * (buffer + len) = (char) '\"';
                        }

                        len++;
                        goto while_break___9;
                      }

                      while_break___9:
                      ;

                    }
                    {
                      while (1)
                      {
                        while_continue___10:
                        ;

                        if (len < buffersize)
                        {
                          * (buffer + len) = (char) '?';
                        }

                        len++;
                        goto while_break___10;
                      }

                      while_break___10:
                      ;

                    }
                    goto switch_break___2;
                    switch_default___0:
                    goto switch_break___2;

                    switch_break___2:
                    ;

                  }
                }

              }

            }


            goto switch_break___1;
            switch_default___1:
            goto switch_break___1;

            switch_break___1:
            ;

          }

          goto switch_break___0;
          case_7___0:
          esc = (unsigned char) 'a';

          goto c_escape;
          case_8___0:
          esc = (unsigned char) 'b';

          goto c_escape;
          case_12:
          esc = (unsigned char) 'f';

          goto c_escape;
          case_10:
          esc = (unsigned char) 'n';

          goto c_and_shell_escape;
          case_13:
          esc = (unsigned char) 'r';

          goto c_and_shell_escape;
          case_9:
          esc = (unsigned char) 't';

          goto c_and_shell_escape;
          case_11:
          esc = (unsigned char) 'v';

          goto c_escape;
          case_92:
          esc = c;

          if (backslash_escapes)
          {
            if (elide_outer_quotes)
            {
              if (quote_string_len)
              {
                goto store_c;
              }

            }

          }

          c_and_shell_escape:
          if (((unsigned int) quoting_style) == 2U)
          {
            if (elide_outer_quotes)
            {
              goto force_outer_quoting_style;
            }

          }


          c_escape:
          if (backslash_escapes)
          {
            c = esc;
            goto store_escape;
          }


          goto switch_break___0;
          case_123:
          case_125:
          if (argsize == 0xffffffffffffffffUL)
          {
            tmp___1 = ((const int) (* (arg + 1))) == 0;
          }
          else
          {
            tmp___1 = argsize == 1UL;
          }



          if (! tmp___1)
          {
            goto switch_break___0;
          }

          case_35:
          case_126:
          if (i != 0UL)
          {
            goto switch_break___0;
          }



          case_32:
          case_33___0:
          case_34:
          case_36:
          case_38:
          case_40___0:
          case_41___0:
          case_42:
          case_59:
          case_60___0:
          case_61___0:
          case_62___0:
          case_91:
          case_94:
          case_96:
          case_124:
          if (((unsigned int) quoting_style) == 2U)
          {
            if (elide_outer_quotes)
            {
              goto force_outer_quoting_style;
            }

          }

















          goto switch_break___0;
          case_39___0:
          if (((unsigned int) quoting_style) == 2U)
          {
            if (elide_outer_quotes)
            {
              goto force_outer_quoting_style;
            }

            {
              while (1)
              {
                while_continue___11:
                ;

                if (len < buffersize)
                {
                  * (buffer + len) = (char) '\'';
                }

                len++;
                goto while_break___11;
              }

              while_break___11:
              ;

            }
            {
              while (1)
              {
                while_continue___12:
                ;

                if (len < buffersize)
                {
                  * (buffer + len) = (char) '\\';
                }

                len++;
                goto while_break___12;
              }

              while_break___12:
              ;

            }
            {
              while (1)
              {
                while_continue___13:
                ;

                if (len < buffersize)
                {
                  * (buffer + len) = (char) '\'';
                }

                len++;
                goto while_break___13;
              }

              while_break___13:
              ;

            }
          }


          goto switch_break___0;
          case_37:
          case_43:
          case_44:
          case_45___0:
          case_46:
          case_47___0:
          case_48:
          case_49:
          case_50:
          case_51:
          case_52:
          case_53:
          case_54:
          case_55:
          case_56:
          case_57:
          case_58:
          case_65:
          case_66:
          case_67:
          case_68:
          case_69:
          case_70:
          case_71:
          case_72:
          case_73:
          case_74:
          case_75:
          case_76:
          case_77:
          case_78:
          case_79:
          case_80:
          case_81:
          case_82:
          case_83:
          case_84:
          case_85:
          case_86:
          case_87:
          case_88:
          case_89:
          case_90:
          case_93:
          case_95:
          case_97:
          case_98:
          case_99:
          case_100:
          case_101:
          case_102:
          case_103:
          case_104:
          case_105:
          case_106:
          case_107:
          case_108:
          case_109:
          case_110:
          case_111:
          case_112:
          case_113:
          case_114:
          case_115:
          case_116:
          case_117:
          case_118:
          case_119:
          case_120:
          case_121:
          case_122:
          goto switch_break___0;







































































          switch_default___2:
          if (unibyte_locale)
          {
            {
              m = (size_t) 1;
              tmp___2 = __ctype_b_loc();
              printable = (_Bool) ((((const int) (* ((* tmp___2) + ((int) c)))) & 16384) != 0);
            }
          }
          else
          {
            {
              memset((void *) (& mbstate), 0, sizeof(mbstate));
              m = (size_t) 0;
              printable = (_Bool) 1;
            }
            if (argsize == 0xffffffffffffffffUL)
            {
              {
                argsize = strlen(arg);
              }
            }

            {
              while (1)
              {
                while_continue___14:
                ;

                {
                  tmp___3 = mbrtowc((wchar_t *) (& w), (const char *) (arg + (i + m)), argsize - (i + m), (mbstate_t *) (& mbstate));
                  bytes = tmp___3;
                }
                if (bytes == 0UL)
                {
                  goto while_break___14;
                }
                else
                {
                  if (bytes == 0xffffffffffffffffUL)
                  {
                    printable = (_Bool) 0;
                    goto while_break___14;
                  }
                  else
                  {
                    if (bytes == 0xfffffffffffffffeUL)
                    {
                      printable = (_Bool) 0;
                      {
                        while (1)
                        {
                          while_continue___15:
                          ;

                          if ((i + m) < argsize)
                          {
                            if (! (* (arg + (i + m))))
                            {
                              goto while_break___15;
                            }

                          }
                          else
                          {
                            goto while_break___15;
                          }

                          m++;
                        }

                        while_break___15:
                        ;

                      }
                      goto while_break___14;
                    }
                    else
                    {
                      if (elide_outer_quotes)
                      {
                        if (((unsigned int) quoting_style) == 2U)
                        {
                          j = (size_t) 1;
                          {
                            while (1)
                            {
                              while_continue___16:
                              ;

                              if (! (j < bytes))
                              {
                                goto while_break___16;
                              }

                              {
                                if (((const int) (* (arg + ((i + m) + j)))) == 91)
                                {
                                  goto case_91___0;
                                }

                                if (((const int) (* (arg + ((i + m) + j)))) == 92)
                                {
                                  goto case_91___0;
                                }

                                if (((const int) (* (arg + ((i + m) + j)))) == 94)
                                {
                                  goto case_91___0;
                                }

                                if (((const int) (* (arg + ((i + m) + j)))) == 96)
                                {
                                  goto case_91___0;
                                }

                                if (((const int) (* (arg + ((i + m) + j)))) == 124)
                                {
                                  goto case_91___0;
                                }

                                goto switch_default___3;
                                case_91___0:
                                case_92___0:
                                case_94___0:
                                case_96___0:
                                case_124___0:
                                goto force_outer_quoting_style;





                                switch_default___3:
                                goto switch_break___3;

                                switch_break___3:
                                ;

                              }
                              j++;
                            }

                            while_break___16:
                            ;

                          }
                        }

                      }

                      {
                        tmp___4 = iswprint((wint_t) w);
                      }
                      if (! tmp___4)
                      {
                        printable = (_Bool) 0;
                      }

                      m += bytes;
                    }

                  }

                }

                {
                  tmp___5 = mbsinit((const mbstate_t *) (& mbstate));
                }
                if (tmp___5)
                {
                  goto while_break___14;
                }

              }

              while_break___14:
              ;

            }
          }


          if (1UL < m)
          {
            goto _L___0;
          }
          else
          {
            if (backslash_escapes)
            {
              if (! printable)
              {
                _L___0:
                ilim = i + m;

                {
                  while (1)
                  {
                    while_continue___17:
                    ;

                    if (backslash_escapes)
                    {
                      if (! printable)
                      {
                        if (elide_outer_quotes)
                        {
                          goto force_outer_quoting_style;
                        }

                        {
                          while (1)
                          {
                            while_continue___18:
                            ;

                            if (len < buffersize)
                            {
                              * (buffer + len) = (char) '\\';
                            }

                            len++;
                            goto while_break___18;
                          }

                          while_break___18:
                          ;

                        }
                        {
                          while (1)
                          {
                            while_continue___19:
                            ;

                            if (len < buffersize)
                            {
                              * (buffer + len) = (char) (48 + (((int) c) >> 6));
                            }

                            len++;
                            goto while_break___19;
                          }

                          while_break___19:
                          ;

                        }
                        {
                          while (1)
                          {
                            while_continue___20:
                            ;

                            if (len < buffersize)
                            {
                              * (buffer + len) = (char) (48 + ((((int) c) >> 3) & 7));
                            }

                            len++;
                            goto while_break___20;
                          }

                          while_break___20:
                          ;

                        }
                        c = (unsigned char) (48 + (((int) c) & 7));
                      }
                      else
                      {
                        goto _L;
                      }

                    }
                    else
                    {
                      _L:
                      if (is_right_quote)
                      {
                        {
                          while (1)
                          {
                            while_continue___21:
                            ;

                            if (len < buffersize)
                            {
                              * (buffer + len) = (char) '\\';
                            }

                            len++;
                            goto while_break___21;
                          }

                          while_break___21:
                          ;

                        }
                        is_right_quote = (_Bool) 0;
                      }


                    }

                    if (ilim <= (i + 1UL))
                    {
                      goto while_break___17;
                    }

                    {
                      while (1)
                      {
                        while_continue___22:
                        ;

                        if (len < buffersize)
                        {
                          * (buffer + len) = (char) c;
                        }

                        len++;
                        goto while_break___22;
                      }

                      while_break___22:
                      ;

                    }
                    i++;
                    c = (unsigned char) (* (arg + i));
                  }

                  while_break___17:
                  ;

                }
                goto store_c;
              }

            }

          }

          switch_break___0:
          ;

        }
        if (backslash_escapes)
        {
          goto _L___3;
        }
        else
        {
          if (elide_outer_quotes)
          {
            _L___3:
            if (quote_these_too)
            {
              if (! ((* (quote_these_too + (((unsigned long) c) / ((sizeof(int)) * 8UL)))) & ((const unsigned int) (1 << (((unsigned long) c) % ((sizeof(int)) * 8UL))))))
              {
                goto _L___2;
              }

            }
            else
            {
              goto _L___2;
            }


          }
          else
          {
            _L___2:
            if (! is_right_quote)
            {
              goto store_c;
            }


          }

        }

        store_escape:
        if (elide_outer_quotes)
        {
          goto force_outer_quoting_style;
        }


        {
          while (1)
          {
            while_continue___23:
            ;

            if (len < buffersize)
            {
              * (buffer + len) = (char) '\\';
            }

            len++;
            goto while_break___23;
          }

          while_break___23:
          ;

        }
        store_c:
        {
          while (1)
          {
            while_continue___24:
            ;

            if (len < buffersize)
            {
              * (buffer + len) = (char) c;
            }

            len++;
            goto while_break___24;
          }

          while_break___24:
          ;

        }

        __Cont:
        i++;

      }

      while_break___3:
      ;

    }
    if (len == 0UL)
    {
      if (((unsigned int) quoting_style) == 2U)
      {
        if (elide_outer_quotes)
        {
          goto force_outer_quoting_style;
        }

      }

    }

    if (quote_string)
    {
      if (! elide_outer_quotes)
      {
        {
          while (1)
          {
            while_continue___25:
            ;

            if (! (* quote_string))
            {
              goto while_break___25;
            }

            {
              while (1)
              {
                while_continue___26:
                ;

                if (len < buffersize)
                {
                  * (buffer + len) = (char) (* quote_string);
                }

                len++;
                goto while_break___26;
              }

              while_break___26:
              ;

            }
            quote_string++;
          }

          while_break___25:
          ;

        }
      }

    }

    if (len < buffersize)
    {
      * (buffer + len) = (char) '\000';
    }

    return len;
    force_outer_quoting_style:
    {
      tmp___7 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize, quoting_style, flags & (- 3), (const unsigned int *) ((void *) 0), left_quote, right_quote);
    }

    return tmp___7;
  }
}

static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = & slotvec0;
static char *quotearg_n_options(int n, const char *arg, size_t argsize, const struct quoting_options *options)
{
  int e;
  int *tmp;
  unsigned int n0;
  struct slotvec *sv;
  size_t n1;
  _Bool preallocated;
  int tmp___0;
  struct slotvec *tmp___1;
  size_t size;
  char *val;
  int flags;
  size_t qsize;
  size_t tmp___2;
  int *tmp___3;
  {
    {
      tmp = __errno_location();
      e = * tmp;
      n0 = (unsigned int) n;
      sv = slotvec;
    }
    if (n < 0)
    {
      {
        abort();
      }
    }

    if (nslots <= n0)
    {
      n1 = (size_t) (n0 + 1U);
      preallocated = (_Bool) (((unsigned long) sv) == ((unsigned long) (& slotvec0)));
      if ((sizeof(ptrdiff_t)) <= (sizeof(size_t)))
      {
        tmp___0 = - 1;
      }
      else
      {
        tmp___0 = - 2;
      }

      if ((((size_t) tmp___0) / (sizeof(* sv))) < n1)
      {
        {
          xalloc_die();
        }
      }

      if (preallocated)
      {
        tmp___1 = (struct slotvec *) ((void *) 0);
      }
      else
      {
        tmp___1 = sv;
      }

      {
        sv = (struct slotvec *) xrealloc((void *) tmp___1, n1 * (sizeof(* sv)));
        slotvec = sv;
      }
      if (preallocated)
      {
        * sv = slotvec0;
      }

      {
        memset((void *) (sv + nslots), 0, (n1 - ((size_t) nslots)) * (sizeof(* sv)));
        nslots = (unsigned int) n1;
      }
    }

    {
      size = (sv + n)->size;
      val = (sv + n)->val;
      flags = (int) (options->flags | 1);
      tmp___2 = quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style) options->style, flags, (const unsigned int *) options->quote_these_too, (const char *) options->left_quote, (const char *) options->right_quote);
      qsize = tmp___2;
    }
    if (size <= qsize)
    {
      size = qsize + 1UL;
      (sv + n)->size = size;
      if (((unsigned long) val) != ((unsigned long) slot0))
      {
        {
          free((void *) val);
        }
      }

      {
        val = xcharalloc(size);
        (sv + n)->val = val;
        quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style) options->style, flags, (const unsigned int *) options->quote_these_too, (const char *) options->left_quote, (const char *) options->right_quote);
      }
    }

    {
      tmp___3 = __errno_location();
      * tmp___3 = e;
    }
    return val;
  }
}

char *quotearg_n_style(int n, enum quoting_style s, const char *arg)
{
  struct quoting_options o;
  struct quoting_options tmp;
  char *tmp___0;
  void *__cil_tmp7;
  void *__cil_tmp8;
  {
    {
      tmp = quoting_options_from_style(s);
      o = tmp;
      tmp___0 = quotearg_n_options(n, arg, (size_t) (- 1), (const struct quoting_options *) (& o));
    }
    return tmp___0;
  }
}

char *quotearg_n_style_mem(int n, enum quoting_style s, const char *arg, size_t argsize)
{
  struct quoting_options o;
  struct quoting_options tmp;
  char *tmp___0;
  void *__cil_tmp8;
  void *__cil_tmp9;
  {
    {
      tmp = quoting_options_from_style(s);
      o = tmp;
      tmp___0 = quotearg_n_options(n, arg, argsize, (const struct quoting_options *) (& o));
    }
    return tmp___0;
  }
}

char *quotearg_char_mem(const char *arg, size_t argsize, char ch)
{
  struct quoting_options options;
  char *tmp;
  void *__cil_tmp6;
  {
    {
      options = default_quoting_options;
      set_char_quoting(& options, ch, 1);
      tmp = quotearg_n_options(0, arg, argsize, (const struct quoting_options *) (& options));
    }
    return tmp;
  }
}

char *quotearg_char(const char *arg, char ch)
{
  char *tmp;
  {
    {
      tmp = quotearg_char_mem(arg, (size_t) (- 1), ch);
    }
    return tmp;
  }
}

char *quotearg_colon(const char *arg)
{
  char *tmp;
  {
    {
      tmp = quotearg_char(arg, (char) ':');
    }
    return tmp;
  }
}

struct quoting_options quote_quoting_options = {(enum quoting_style) 6, 0, {0U}, (const char *) ((void *) 0), (const char *) ((void *) 0)};
const char *quote_n(int n, const char *name)
{
  const char *tmp;
  {
    {
      tmp = (const char *) quotearg_n_options(n, name, (size_t) (- 1), (const struct quoting_options *) (& quote_quoting_options));
    }
    return tmp;
  }
}

const char *quote(const char *name)
{
  const char *tmp;
  {
    {
      tmp = quote_n(0, name);
    }
    return tmp;
  }
}

#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
extern int iswalnum(wint_t __wc);
const char *program_name;
void set_program_name(const char *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern int fputs(const char *__restrict __s, FILE *__restrict __stream);
extern char *strrchr(const char *__s, int __c);
const char *program_name = (const char *) ((void *) 0);
void set_program_name(const char *argv0)
{
  const char *slash;
  const char *base;
  int tmp;
  int tmp___0;
  {
    if (((unsigned long) argv0) == ((unsigned long) ((void *) 0)))
    {
      {
        fputs((const char *) "A NULL argv[0] was passed through an exec system call.\n", (FILE *) stderr);
        abort();
      }
    }

    {
      slash = (const char *) strrchr(argv0, '/');
    }
    if (((unsigned long) slash) != ((unsigned long) ((void *) 0)))
    {
      base = slash + 1;
    }
    else
    {
      base = argv0;
    }

    if ((base - argv0) >= 7L)
    {
      {
        tmp___0 = strncmp(base - 7, "/.libs/", (size_t) 7);
      }
      if (tmp___0 == 0)
      {
        {
          argv0 = base;
          tmp = strncmp(base, "lt-", (size_t) 3);
        }
        if (tmp == 0)
        {
          argv0 = base + 3;
          program_invocation_short_name = (char *) argv0;
        }

      }

    }

    program_name = argv0;
    program_invocation_name = (char *) argv0;
    return;
  }
}

extern long double frexpl(long double __x, int *__exponent);
extern long double ldexpl(long double __x, int __exponent);
extern double frexp(double __x, int *__exponent);
extern double ldexp(double __x, int __exponent);
static const wchar_t wide_null_string[7] = {(const wchar_t) '(', (const wchar_t) 'N', (const wchar_t) 'U', (const wchar_t) 'L', (const wchar_t) 'L', (const wchar_t) ')', (const wchar_t) 0};
int posix2_version(void);
int posix2_version(void)
{
  long v;
  const char *s;
  const char *tmp;
  char *e;
  long i;
  long tmp___0;
  long tmp___1;
  long tmp___2;
  char *__cil_tmp10;
  {
    {
      v = 200809L;
      tmp = (const char *) getenv("_POSIX2_VERSION");
      s = tmp;
    }
    if (s)
    {
      if (* s)
      {
        {
          tmp___0 = strtol((const char *) s, (char **) (& e), 10);
          i = tmp___0;
        }
        if (! (* e))
        {
          v = i;
        }

      }

    }

    if (v < ((- 0x7FFFFFFF) - 1))
    {
      tmp___2 = (- 0x7FFFFFFF) - 1;
    }
    else
    {
      if (v < 2147483647L)
      {
        tmp___1 = v;
      }
      else
      {
        tmp___1 = 2147483647L;
      }

      tmp___2 = tmp___1;
    }

    return (int) tmp___2;
  }
}

extern time_t time(time_t *__timer);
extern struct tm *localtime(const time_t *__timer);
extern char *stpcpy(char *__restrict __dest, const char *__restrict __src);
extern int pipe(int *__pipedes);
extern int pipe2(int *__pipedes, int __flags);
static int have_pipe2_really;
extern long sysconf(int __name);
extern int setenv(const char *__name, const char *__value, int __replace);
extern int unsetenv(const char *__name);
extern int abs(int __x);
static const yytype_uint8 yytranslate[278] = {(const yytype_uint8) 0, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 26, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 27, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 25, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 23, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 24, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 4, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 11, (const yytype_uint8) 12, (const yytype_uint8) 13, (const yytype_uint8) 14, (const yytype_uint8) 15, (const yytype_uint8) 16, (const yytype_uint8) 17, (const yytype_uint8) 18, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 21, (const yytype_uint8) 22};
static const yytype_int8 yypact[114] = {(const yytype_int8) 38, (const yytype_int8) 27, (const yytype_int8) 77, (const yytype_int8) (- 93), (const yytype_int8) 46, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 62, (const yytype_int8) (- 93), (const yytype_int8) 82, (const yytype_int8) (- 3), (const yytype_int8) 66, (const yytype_int8) 3, (const yytype_int8) 74, (const yytype_int8) (- 4), (const yytype_int8) 83, (const yytype_int8) 84, (const yytype_int8) 75, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 71, (const yytype_int8) (- 93), (const yytype_int8) 93, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 78, (const yytype_int8) 72, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 25, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 21, (const yytype_int8) 19, (const yytype_int8) 79, (const yytype_int8) 80, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 81, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 85, (const yytype_int8) 86, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 6), (const yytype_int8) 76, (const yytype_int8) 17, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 87, (const yytype_int8) 69, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 88, (const yytype_int8) 89, (const yytype_int8) (- 1), (const yytype_int8) (- 93), (const yytype_int8) 18, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 69, (const yytype_int8) 91};
static const yytype_uint8 yydefact[114] = {(const yytype_uint8) 5, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 85, (const yytype_uint8) 87, (const yytype_uint8) 84, (const yytype_uint8) 86, (const yytype_uint8) 4, (const yytype_uint8) 82, (const yytype_uint8) 83, (const yytype_uint8) 1, (const yytype_uint8) 56, (const yytype_uint8) 59, (const yytype_uint8) 65, (const yytype_uint8) 68, (const yytype_uint8) 73, (const yytype_uint8) 62, (const yytype_uint8) 81, (const yytype_uint8) 37, (const yytype_uint8) 35, (const yytype_uint8) 28, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 30, (const yytype_uint8) 0, (const yytype_uint8) 88, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 31, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 16, (const yytype_uint8) 8, (const yytype_uint8) 21, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 12, (const yytype_uint8) 11, (const yytype_uint8) 49, (const yytype_uint8) 13, (const yytype_uint8) 52, (const yytype_uint8) 74, (const yytype_uint8) 53, (const yytype_uint8) 14, (const yytype_uint8) 15, (const yytype_uint8) 38, (const yytype_uint8) 29, (const yytype_uint8) 0, (const yytype_uint8) 45, (const yytype_uint8) 54, (const yytype_uint8) 57, (const yytype_uint8) 63, (const yytype_uint8) 66, (const yytype_uint8) 69, (const yytype_uint8) 60, (const yytype_uint8) 39, (const yytype_uint8) 36, (const yytype_uint8) 90, (const yytype_uint8) 32, (const yytype_uint8) 75, (const yytype_uint8) 76, (const yytype_uint8) 78, (const yytype_uint8) 79, (const yytype_uint8) 80, (const yytype_uint8) 77, (const yytype_uint8) 55, (const yytype_uint8) 58, (const yytype_uint8) 64, (const yytype_uint8) 67, (const yytype_uint8) 70, (const yytype_uint8) 61, (const yytype_uint8) 40, (const yytype_uint8) 18, (const yytype_uint8) 47, (const yytype_uint8) 90, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 22, (const yytype_uint8) 89, (const yytype_uint8) 71, (const yytype_uint8) 72, (const yytype_uint8) 33, (const yytype_uint8) 0, (const yytype_uint8) 51, (const yytype_uint8) 44, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 34, (const yytype_uint8) 43, (const yytype_uint8) 48, (const yytype_uint8) 50, (const yytype_uint8) 27, (const yytype_uint8) 25, (const yytype_uint8) 41, (const yytype_uint8) 0, (const yytype_uint8) 17, (const yytype_uint8) 46, (const yytype_uint8) 91, (const yytype_uint8) 19, (const yytype_uint8) 90, (const yytype_uint8) 0, (const yytype_uint8) 23, (const yytype_uint8) 26, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 25, (const yytype_uint8) 42, (const yytype_uint8) 25, (const yytype_uint8) 20, (const yytype_uint8) 24, (const yytype_uint8) 0, (const yytype_uint8) 25};
static const yytype_int8 yypgoto[26] = {(const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 20, (const yytype_int8) (- 68), (const yytype_int8) (- 27), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 60, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 92), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 43};
static const yytype_int8 yydefgoto[26] = {(const yytype_int8) (- 1), (const yytype_int8) 2, (const yytype_int8) 3, (const yytype_int8) 4, (const yytype_int8) 31, (const yytype_int8) 32, (const yytype_int8) 33, (const yytype_int8) 34, (const yytype_int8) 35, (const yytype_int8) 103, (const yytype_int8) 104, (const yytype_int8) 36, (const yytype_int8) 37, (const yytype_int8) 38, (const yytype_int8) 39, (const yytype_int8) 40, (const yytype_int8) 41, (const yytype_int8) 42, (const yytype_int8) 43, (const yytype_int8) 44, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 11, (const yytype_int8) 45, (const yytype_int8) 46, (const yytype_int8) 93};
static const yytype_uint8 yytable[113] = {(const yytype_uint8) 79, (const yytype_uint8) 67, (const yytype_uint8) 68, (const yytype_uint8) 69, (const yytype_uint8) 70, (const yytype_uint8) 71, (const yytype_uint8) 72, (const yytype_uint8) 58, (const yytype_uint8) 73, (const yytype_uint8) 100, (const yytype_uint8) 107, (const yytype_uint8) 74, (const yytype_uint8) 75, (const yytype_uint8) 101, (const yytype_uint8) 110, (const yytype_uint8) 76, (const yytype_uint8) 49, (const yytype_uint8) 50, (const yytype_uint8) 101, (const yytype_uint8) 102, (const yytype_uint8) 113, (const yytype_uint8) 77, (const yytype_uint8) 59, (const yytype_uint8) 78, (const yytype_uint8) 61, (const yytype_uint8) 62, (const yytype_uint8) 63, (const yytype_uint8) 64, (const yytype_uint8) 65, (const yytype_uint8) 66, (const yytype_uint8) 61, (const yytype_uint8) 62, (const yytype_uint8) 63, (const yytype_uint8) 64, (const yytype_uint8) 65, (const yytype_uint8) 66, (const yytype_uint8) 101, (const yytype_uint8) 101, (const yytype_uint8) 92, (const yytype_uint8) 111, (const yytype_uint8) 90, (const yytype_uint8) 91, (const yytype_uint8) 106, (const yytype_uint8) 112, (const yytype_uint8) 88, (const yytype_uint8) 111, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 88, (const yytype_uint8) 13, (const yytype_uint8) 14, (const yytype_uint8) 15, (const yytype_uint8) 16, (const yytype_uint8) 17, (const yytype_uint8) 18, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 21, (const yytype_uint8) 22, (const yytype_uint8) 1, (const yytype_uint8) 23, (const yytype_uint8) 24, (const yytype_uint8) 25, (const yytype_uint8) 26, (const yytype_uint8) 27, (const yytype_uint8) 28, (const yytype_uint8) 29, (const yytype_uint8) 79, (const yytype_uint8) 30, (const yytype_uint8) 51, (const yytype_uint8) 52, (const yytype_uint8) 53, (const yytype_uint8) 54, (const yytype_uint8) 55, (const yytype_uint8) 56, (const yytype_uint8) 12, (const yytype_uint8) 57, (const yytype_uint8) 61, (const yytype_uint8) 62, (const yytype_uint8) 63, (const yytype_uint8) 64, (const yytype_uint8) 65, (const yytype_uint8) 66, (const yytype_uint8) 60, (const yytype_uint8) 48, (const yytype_uint8) 80, (const yytype_uint8) 47, (const yytype_uint8) 6, (const yytype_uint8) 83, (const yytype_uint8) 8, (const yytype_uint8) 81, (const yytype_uint8) 82, (const yytype_uint8) 26, (const yytype_uint8) 84, (const yytype_uint8) 85, (const yytype_uint8) 86, (const yytype_uint8) 87, (const yytype_uint8) 94, (const yytype_uint8) 95, (const yytype_uint8) 96, (const yytype_uint8) 89, (const yytype_uint8) 105, (const yytype_uint8) 97, (const yytype_uint8) 98, (const yytype_uint8) 99, (const yytype_uint8) 0, (const yytype_uint8) 108, (const yytype_uint8) 109, (const yytype_uint8) 101, (const yytype_uint8) 0, (const yytype_uint8) 88};
static const yytype_int8 yycheck[113] = {(const yytype_int8) 27, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 4, (const yytype_int8) 12, (const yytype_int8) 15, (const yytype_int8) 102, (const yytype_int8) 15, (const yytype_int8) 16, (const yytype_int8) 19, (const yytype_int8) 15, (const yytype_int8) 19, (const yytype_int8) 19, (const yytype_int8) 20, (const yytype_int8) 19, (const yytype_int8) 25, (const yytype_int8) 112, (const yytype_int8) 25, (const yytype_int8) 19, (const yytype_int8) 27, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 19, (const yytype_int8) 19, (const yytype_int8) 19, (const yytype_int8) 107, (const yytype_int8) 19, (const yytype_int8) 20, (const yytype_int8) 25, (const yytype_int8) 25, (const yytype_int8) 25, (const yytype_int8) 113, (const yytype_int8) 19, (const yytype_int8) 20, (const yytype_int8) 21, (const yytype_int8) 22, (const yytype_int8) 25, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 11, (const yytype_int8) 12, (const yytype_int8) 13, (const yytype_int8) 14, (const yytype_int8) 23, (const yytype_int8) 16, (const yytype_int8) 17, (const yytype_int8) 18, (const yytype_int8) 19, (const yytype_int8) 20, (const yytype_int8) 21, (const yytype_int8) 22, (const yytype_int8) 96, (const yytype_int8) 24, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 0, (const yytype_int8) 12, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 25, (const yytype_int8) 4, (const yytype_int8) 27, (const yytype_int8) 26, (const yytype_int8) 20, (const yytype_int8) 30, (const yytype_int8) 22, (const yytype_int8) 9, (const yytype_int8) 9, (const yytype_int8) 19, (const yytype_int8) 24, (const yytype_int8) 3, (const yytype_int8) 19, (const yytype_int8) 26, (const yytype_int8) 20, (const yytype_int8) 20, (const yytype_int8) 20, (const yytype_int8) 59, (const yytype_int8) 27, (const yytype_int8) 84, (const yytype_int8) 20, (const yytype_int8) 20, (const yytype_int8) (- 1), (const yytype_int8) 20, (const yytype_int8) 20, (const yytype_int8) 19, (const yytype_int8) (- 1), (const yytype_int8) 25};
static const yytype_uint8 yystos[114] = {(const yytype_uint8) 0, (const yytype_uint8) 23, (const yytype_uint8) 29, (const yytype_uint8) 30, (const yytype_uint8) 31, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 21, (const yytype_uint8) 22, (const yytype_uint8) 48, (const yytype_uint8) 49, (const yytype_uint8) 50, (const yytype_uint8) 0, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 11, (const yytype_uint8) 12, (const yytype_uint8) 13, (const yytype_uint8) 14, (const yytype_uint8) 16, (const yytype_uint8) 17, (const yytype_uint8) 18, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 21, (const yytype_uint8) 22, (const yytype_uint8) 24, (const yytype_uint8) 32, (const yytype_uint8) 33, (const yytype_uint8) 34, (const yytype_uint8) 35, (const yytype_uint8) 36, (const yytype_uint8) 39, (const yytype_uint8) 40, (const yytype_uint8) 41, (const yytype_uint8) 42, (const yytype_uint8) 43, (const yytype_uint8) 44, (const yytype_uint8) 45, (const yytype_uint8) 46, (const yytype_uint8) 47, (const yytype_uint8) 51, (const yytype_uint8) 52, (const yytype_uint8) 26, (const yytype_uint8) 4, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 12, (const yytype_uint8) 4, (const yytype_uint8) 19, (const yytype_uint8) 46, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 12, (const yytype_uint8) 15, (const yytype_uint8) 16, (const yytype_uint8) 19, (const yytype_uint8) 25, (const yytype_uint8) 27, (const yytype_uint8) 38, (const yytype_uint8) 46, (const yytype_uint8) 9, (const yytype_uint8) 9, (const yytype_uint8) 46, (const yytype_uint8) 24, (const yytype_uint8) 3, (const yytype_uint8) 19, (const yytype_uint8) 26, (const yytype_uint8) 25, (const yytype_uint8) 53, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 19, (const yytype_uint8) 53, (const yytype_uint8) 20, (const yytype_uint8) 20, (const yytype_uint8) 20, (const yytype_uint8) 36, (const yytype_uint8) 20, (const yytype_uint8) 20, (const yytype_uint8) 15, (const yytype_uint8) 19, (const yytype_uint8) 25, (const yytype_uint8) 37, (const yytype_uint8) 38, (const yytype_uint8) 27, (const yytype_uint8) 25, (const yytype_uint8) 50, (const yytype_uint8) 20, (const yytype_uint8) 20, (const yytype_uint8) 15, (const yytype_uint8) 37, (const yytype_uint8) 25, (const yytype_uint8) 50};
static const yytype_uint8 yyr1[92] = {(const yytype_uint8) 0, (const yytype_uint8) 28, (const yytype_uint8) 29, (const yytype_uint8) 29, (const yytype_uint8) 30, (const yytype_uint8) 31, (const yytype_uint8) 31, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 33, (const yytype_uint8) 34, (const yytype_uint8) 35, (const yytype_uint8) 35, (const yytype_uint8) 35, (const yytype_uint8) 35, (const yytype_uint8) 36, (const yytype_uint8) 36, (const yytype_uint8) 36, (const yytype_uint8) 37, (const yytype_uint8) 37, (const yytype_uint8) 38, (const yytype_uint8) 39, (const yytype_uint8) 39, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 41, (const yytype_uint8) 41, (const yytype_uint8) 41, (const yytype_uint8) 41, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 43, (const yytype_uint8) 44, (const yytype_uint8) 44, (const yytype_uint8) 44, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 47, (const yytype_uint8) 48, (const yytype_uint8) 48, (const yytype_uint8) 49, (const yytype_uint8) 49, (const yytype_uint8) 50, (const yytype_uint8) 50, (const yytype_uint8) 51, (const yytype_uint8) 52, (const yytype_uint8) 53, (const yytype_uint8) 53};
static const yytype_uint8 yyr2[92] = {(const yytype_uint8) 0, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 0, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 3, (const yytype_uint8) 2, (const yytype_uint8) 4, (const yytype_uint8) 6, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 4, (const yytype_uint8) 6, (const yytype_uint8) 0, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 5, (const yytype_uint8) 3, (const yytype_uint8) 3, (const yytype_uint8) 2, (const yytype_uint8) 4, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 1, (const yytype_uint8) 3, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 0, (const yytype_uint8) 2};
static const table meridian_table[5] = {{"AM", 270, 0}, {"A.M.", 270, 0}, {"PM", 270, 1}, {"P.M.", 270, 1}, {(const char *) ((void *) 0), 0, 0}};
static const table dst_table[1] = {{"DST", 259, 0}};
static const table month_and_day_table[25] = {{"JANUARY", 271, 1}, {"FEBRUARY", 271, 2}, {"MARCH", 271, 3}, {"APRIL", 271, 4}, {"MAY", 271, 5}, {"JUNE", 271, 6}, {"JULY", 271, 7}, {"AUGUST", 271, 8}, {"SEPTEMBER", 271, 9}, {"SEPT", 271, 9}, {"OCTOBER", 271, 10}, {"NOVEMBER", 271, 11}, {"DECEMBER", 271, 12}, {"SUNDAY", 267, 0}, {"MONDAY", 267, 1}, {"TUESDAY", 267, 2}, {"TUES", 267, 2}, {"WEDNESDAY", 267, 3}, {"WEDNES", 267, 3}, {"THURSDAY", 267, 4}, {"THUR", 267, 4}, {"THURS", 267, 4}, {"FRIDAY", 267, 5}, {"SATURDAY", 267, 6}, {(const char *) ((void *) 0), 0, 0}};
static const table time_units_table[11] = {{"YEAR", 260, 1}, {"MONTH", 261, 1}, {"FORTNIGHT", 265, 14}, {"WEEK", 265, 7}, {"DAY", 265, 1}, {"HOUR", 262, 1}, {"MINUTE", 263, 1}, {"MIN", 263, 1}, {"SECOND", 264, 1}, {"SEC", 264, 1}, {(const char *) ((void *) 0), 0, 0}};
static const table relative_time_table[21] = {{"TOMORROW", 266, 1}, {"YESTERDAY", 266, - 1}, {"TODAY", 266, 0}, {"NOW", 266, 0}, {"LAST", 272, - 1}, {"THIS", 272, 0}, {"NEXT", 272, 1}, {"FIRST", 272, 1}, {"THIRD", 272, 3}, {"FOURTH", 272, 4}, {"FIFTH", 272, 5}, {"SIXTH", 272, 6}, {"SEVENTH", 272, 7}, {"EIGHTH", 272, 8}, {"NINTH", 272, 9}, {"TENTH", 272, 10}, {"ELEVENTH", 272, 11}, {"TWELFTH", 272, 12}, {"AGO", 258, - 1}, {"HENCE", 258, 1}, {(const char *) ((void *) 0), 0, 0}};
static const table universal_time_zone_table[4] = {{"GMT", 273, 0}, {"UT", 273, 0}, {"UTC", 273, 0}, {(const char *) ((void *) 0), 0, 0}};
static const table time_zone_table[48] = {{"WET", 273, 0}, {"WEST", 268, 0}, {"BST", 268, 0}, {"ART", 273, - 180}, {"BRT", 273, - 180}, {"BRST", 268, - 180}, {"NST", 273, - 210}, {"NDT", 268, - 210}, {"AST", 273, - 240}, {"ADT", 268, - 240}, {"CLT", 273, - 240}, {"CLST", 268, - 240}, {"EST", 273, - 300}, {"EDT", 268, - 300}, {"CST", 273, - 360}, {"CDT", 268, - 360}, {"MST", 273, - 420}, {"MDT", 268, - 420}, {"PST", 273, - 480}, {"PDT", 268, - 480}, {"AKST", 273, - 540}, {"AKDT", 268, - 540}, {"HST", 273, - 600}, {"HAST", 273, - 600}, {"HADT", 268, - 600}, {"SST", 273, - 720}, {"WAT", 273, 60}, {"CET", 273, 60}, {"CEST", 268, 60}, {"MET", 273, 60}, {"MEZ", 273, 60}, {"MEST", 268, 60}, {"MESZ", 268, 60}, {"EET", 273, 120}, {"EEST", 268, 120}, {"CAT", 273, 120}, {"SAST", 273, 120}, {"EAT", 273, 180}, {"MSK", 273, 180}, {"MSD", 268, 180}, {"IST", 273, 330}, {"SGT", 273, 480}, {"KST", 273, 540}, {"JST", 273, 540}, {"GST", 273, 600}, {"NZST", 273, 720}, {"NZDT", 268, 720}, {(const char *) ((void *) 0), 0, 0}};
static const table military_table[26] = {{"A", 273, - 60}, {"B", 273, - 120}, {"C", 273, - 180}, {"D", 273, - 240}, {"E", 273, - 300}, {"F", 273, - 360}, {"G", 273, - 420}, {"H", 273, - 480}, {"I", 273, - 540}, {"K", 273, - 600}, {"L", 273, - 660}, {"M", 273, - 720}, {"N", 273, 60}, {"O", 273, 120}, {"P", 273, 180}, {"Q", 273, 240}, {"R", 273, 300}, {"S", 273, 360}, {"T", 'T', 0}, {"U", 273, 480}, {"V", 273, 540}, {"W", 273, 600}, {"X", 273, 660}, {"Y", 273, 720}, {"Z", 273, 0}, {(const char *) ((void *) 0), 0, 0}};
extern DIR *opendir(const char *__name);
extern int dirfd(DIR *__dirp);
extern int access(const char *__name, int __type);
static int proc_status = 0;
#pragma GCC diagnostic ignored "-Wtype-limits"
extern int __sched_cpucount(size_t __setsize, const cpu_set_t *__setp);
extern int sched_getaffinity(__pid_t __pid, size_t __cpusetsize, cpu_set_t *__cpuset);
extern int nanosleep(const struct timespec *__requested_time, struct timespec *__remaining);
extern FILE *setmntent(const char *__file, const char *__mode);
extern struct mntent *getmntent(FILE *__stream);
extern int endmntent(FILE *__stream);
extern int mkstemp(char *__template);
extern int getgroups(int __size, __gid_t *__list);
extern int getgrouplist(const char *__user, __gid_t __group, __gid_t *__groups, int *__ngroups);
extern int strcoll(const char *__s1, const char *__s2);
__inline static int strcoll_loop(const char *s1, size_t s1size, const char *s2, size_t s2size)
{
  int diff;
  size_t size1;
  size_t tmp;
  size_t size2;
  size_t tmp___0;
  int *tmp___1;
  int *tmp___2;
  int tmp___3;
  {
    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp___1 = __errno_location();
          * tmp___1 = 0;
          diff = strcoll(s1, s2);
        }
        if (diff)
        {
          tmp___3 = 1;
        }
        else
        {
          {
            tmp___2 = __errno_location();
          }
          if (* tmp___2)
          {
            tmp___3 = 1;
          }
          else
          {
            tmp___3 = 0;
          }

        }

        if (tmp___3)
        {
          goto while_break;
        }

        {
          tmp = strlen(s1);
          size1 = tmp + 1UL;
          tmp___0 = strlen(s2);
          size2 = tmp___0 + 1UL;
          s1 += size1;
          s2 += size2;
          s1size -= size1;
          s2size -= size2;
        }
        if (s1size == 0UL)
        {
          return - (s2size != 0UL);
        }

        if (s2size == 0UL)
        {
          return 1;
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
  int *tmp;
  char n1;
  char n2;
  int tmp___0;
  {
    if (s1len == s2len)
    {
      {
        tmp___0 = memcmp((const void *) s1, (const void *) s2, s1len);
      }
      if (tmp___0 == 0)
      {
        {
          tmp = __errno_location();
          * tmp = 0;
          diff = 0;
        }
      }
      else
      {
        goto _L;
      }

    }
    else
    {
      _L:
      {
        n1 = * (s1 + s1len);
        n2 = * (s2 + s2len);
        * (s1 + s1len) = (char) '\000';
        * (s2 + s2len) = (char) '\000';
        diff = strcoll_loop((const char *) s1, s1len + 1UL, (const char *) s2, s2len + 1UL);
        * (s1 + s1len) = n1;
        * (s2 + s2len) = n2;
      }

    }

    return diff;
  }
}

int memcasecmp(const void *vs1, const void *vs2, size_t n);
int memcasecmp(const void *vs1, const void *vs2, size_t n);
int memcasecmp(const void *vs1, const void *vs2, size_t n)
{
  size_t i;
  const char *s1;
  const char *s2;
  unsigned char u1;
  unsigned char u2;
  int U1;
  int tmp;
  int U2;
  int tmp___0;
  int diff;
  {
    s1 = (const char *) vs1;
    s2 = (const char *) vs2;
    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < n))
        {
          goto while_break;
        }

        {
          u1 = (unsigned char) (* (s1 + i));
          u2 = (unsigned char) (* (s2 + i));
          tmp = toupper((int) u1);
          U1 = tmp;
          tmp___0 = toupper((int) u2);
          U2 = tmp___0;
          diff = U1 - U2;
        }
        if (diff)
        {
          return diff;
        }

        i++;
      }

      while_break:
      ;

    }
    return 0;
  }
}

static const unsigned char fillbuf___2[64] = {(const unsigned char) 128, (const unsigned char) 0};
extern int wcwidth(wchar_t __c);
extern int iswcntrl(wint_t __wc);
extern size_t strnlen(const char *__string, size_t __maxlen);
extern wint_t towlower(wint_t __wc);
extern size_t mbstowcs(wchar_t *__restrict __pwcs, const char *__restrict __s, size_t __n);
extern size_t wcstombs(char *__restrict __s, const wchar_t *__restrict __pwcs, size_t __n);
extern void *mempcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
extern int wcswidth(const wchar_t *__s, size_t __n);
const unsigned int is_basic_table[8] = {(const unsigned int) 6656, (const unsigned int) 4294967279U, (const unsigned int) 4294967294U, (const unsigned int) 2147483646};
static void *mmalloca_results[257];
extern void exit(int __status);
extern int optind;
extern int opterr;
extern int getopt_long(int ___argc, char *const *___argv, const char *__shortopts, const struct option *__longopts, int *__longind);
static const struct option long_options[3] = {{"help", 0, (int *) ((void *) 0), 'h'}, {"version", 0, (int *) ((void *) 0), 'v'}, {(const char *) ((void *) 0), 0, (int *) ((void *) 0), 0}};
extern int pthread_mutex_init(pthread_mutex_t *__mutex, const pthread_mutexattr_t *__mutexattr);
extern int pthread_mutexattr_init(pthread_mutexattr_t *__attr);
extern int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr);
extern int pthread_mutexattr_settype(pthread_mutexattr_t *__attr, int __kind);
#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
static const int fresh_once = (const int) 0;
extern FILE *fdopen(int __fd, const char *__modes);
extern int fscanf(FILE *__restrict __stream, const char *__restrict __format, ...);
extern int ungetc(int __c, FILE *__stream);
static const char *volatile charset_aliases;
static const char *get_charset_aliases(void)
{
  const char *cp;
  const char *dir;
  const char *base;
  char *file_name___3;
  size_t dir_len___0;
  size_t tmp;
  size_t base_len___0;
  size_t tmp___0;
  int add_slash;
  int tmp___1;
  int fd;
  FILE *fp;
  char *res_ptr;
  size_t res_size;
  int c;
  char buf1[51];
  char buf2[51];
  size_t l1;
  size_t l2;
  char *old_res_ptr;
  int tmp___3;
  void *__cil_tmp26;
  void *__cil_tmp27;
  char *__cil_tmp28;
  char *__cil_tmp29;
  char *__cil_tmp30;
  char *__cil_tmp31;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  char *__cil_tmp35;
  {
    cp = (const char *) charset_aliases;
    if (((unsigned long) cp) == ((unsigned long) ((void *) 0)))
    {
      {
        base = "charset.alias";
        dir = (const char *) getenv("CHARSETALIASDIR");
      }
      if (((unsigned long) dir) == ((unsigned long) ((void *) 0)))
      {
        dir = "/usr/local/lib";
      }
      else
      {
        if (((const int) (* (dir + 0))) == 0)
        {
          dir = "/usr/local/lib";
        }

      }

      {
        tmp = strlen(dir);
        dir_len___0 = tmp;
        tmp___0 = strlen(base);
        base_len___0 = tmp___0;
      }
      if (dir_len___0 > 0UL)
      {
        if (! (((const int) (* (dir + (dir_len___0 - 1UL)))) == 47))
        {
          tmp___1 = 1;
        }
        else
        {
          tmp___1 = 0;
        }

      }
      else
      {
        tmp___1 = 0;
      }

      {
        add_slash = tmp___1;
        file_name___3 = (char *) malloc(((dir_len___0 + ((size_t) add_slash)) + base_len___0) + 1UL);
      }
      if (((unsigned long) file_name___3) != ((unsigned long) ((void *) 0)))
      {
        {
          memcpy((void *) file_name___3, (const void *) dir, dir_len___0);
        }
        if (add_slash)
        {
          * (file_name___3 + dir_len___0) = (char) '/';
        }

        {
          memcpy((void *) ((file_name___3 + dir_len___0) + add_slash), (const void *) base, base_len___0 + 1UL);
        }
      }

      if (((unsigned long) file_name___3) == ((unsigned long) ((void *) 0)))
      {
        cp = "";
      }
      else
      {
        {
          fd = open((const char *) file_name___3, 131072);
        }
        if (fd < 0)
        {
          cp = "";
        }
        else
        {
          {
            fp = fdopen(fd, "r");
          }
          if (((unsigned long) fp) == ((unsigned long) ((void *) 0)))
          {
            {
              close(fd);
              cp = "";
            }
          }
          else
          {
            res_ptr = (char *) ((void *) 0);
            res_size = (size_t) 0;
            {
              while (1)
              {
                while_continue:
                ;

                {
                  c = getc_unlocked(fp);
                }
                if (c == (- 1))
                {
                  goto while_break;
                }

                if (c == 10)
                {
                  goto __Cont;
                }
                else
                {
                  if (c == 32)
                  {
                    goto __Cont;
                  }
                  else
                  {
                    if (c == 9)
                    {
                      goto __Cont;
                    }

                  }

                }

                if (c == 35)
                {
                  {
                    while (1)
                    {
                      while_continue___0:
                      ;

                      {
                        c = getc_unlocked(fp);
                      }
                      if (c == (- 1))
                      {
                        goto while_break___0;
                      }
                      else
                      {
                        if (c == 10)
                        {
                          goto while_break___0;
                        }

                      }

                    }

                    while_break___0:
                    ;

                  }
                  if (c == (- 1))
                  {
                    goto while_break;
                  }

                  goto __Cont;
                }

                {
                  ungetc(c, fp);
                  tmp___3 = fscanf((FILE *) fp, (const char *) "%50s %50s", buf1, buf2);
                }
                if (tmp___3 < 2)
                {
                  goto while_break;
                }

                {
                  l1 = strlen((const char *) buf1);
                  l2 = strlen((const char *) buf2);
                  old_res_ptr = res_ptr;
                }
                if (res_size == 0UL)
                {
                  {
                    res_size = ((l1 + 1UL) + l2) + 1UL;
                    res_ptr = (char *) malloc(res_size + 1UL);
                  }
                }
                else
                {
                  {
                    res_size += ((l1 + 1UL) + l2) + 1UL;
                    res_ptr = (char *) realloc((void *) res_ptr, res_size + 1UL);
                  }
                }

                if (((unsigned long) res_ptr) == ((unsigned long) ((void *) 0)))
                {
                  {
                    res_size = (size_t) 0;
                    free((void *) old_res_ptr);
                  }
                  goto while_break;
                }

                {
                  strcpy((char *) (((res_ptr + res_size) - (l2 + 1UL)) - (l1 + 1UL)), (const char *) buf1);
                  strcpy((char *) ((res_ptr + res_size) - (l2 + 1UL)), (const char *) buf2);
                }
                __Cont:
                ;

              }

              while_break:
              ;

            }
            {
              rpl_fclose(fp);
            }
            if (res_size == 0UL)
            {
              cp = "";
            }
            else
            {
              * (res_ptr + res_size) = (char) '\000';
              cp = (const char *) res_ptr;
            }

          }

        }

        {
          free((void *) file_name___3);
        }
      }

      charset_aliases = (const char *) cp;
    }

    return cp;
  }
}

const char *locale_charset(void)
{
  const char *codeset;
  const char *aliases;
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  int tmp___2;
  char *__cil_tmp8;
  char *__cil_tmp9;
  {
    {
      codeset = (const char *) nl_langinfo(14);
    }
    if (((unsigned long) codeset) == ((unsigned long) ((void *) 0)))
    {
      codeset = "";
    }

    {
      aliases = get_charset_aliases();
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((const int) (* aliases)) != 0))
        {
          goto while_break;
        }

        {
          tmp___2 = strcmp(codeset, aliases);
        }
        if (tmp___2 == 0)
        {
          {
            tmp___1 = strlen(aliases);
            codeset = (aliases + tmp___1) + 1;
          }
          goto while_break;
        }
        else
        {
          if (((const int) (* (aliases + 0))) == 42)
          {
            if (((const int) (* (aliases + 1))) == 0)
            {
              {
                tmp___1 = strlen(aliases);
                codeset = (aliases + tmp___1) + 1;
              }
              goto while_break;
            }

          }

        }

        {
          tmp = strlen(aliases);
          aliases += tmp + 1UL;
          tmp___0 = strlen(aliases);
          aliases += tmp___0 + 1UL;
        }
      }

      while_break:
      ;

    }
    if (((const int) (* (codeset + 0))) == 0)
    {
      codeset = "ASCII";
    }

    return codeset;
  }
}

extern int linkat(int __fromfd, const char *__from, int __tofd, const char *__to, int __flags);
static int have_follow_really;
void initbuffer(struct linebuffer *linebuffer);
struct linebuffer *readlinebuffer_delim(struct linebuffer *linebuffer, FILE *stream, char delimiter);
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
  int tmp;
  int tmp___0;
  size_t oldsize;
  char *tmp___1;
  {
    {
      buffer = linebuffer->buffer;
      p = linebuffer->buffer;
      end = buffer + linebuffer->size;
      tmp = feof_unlocked(stream);
    }
    if (tmp)
    {
      return (struct linebuffer *) ((void *) 0);
    }

    {
      while (1)
      {
        while_continue:
        ;

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
            {
              tmp___0 = ferror_unlocked(stream);
            }
            if (tmp___0)
            {
              return (struct linebuffer *) ((void *) 0);
            }

          }

          if (((int) (* (p + (- 1)))) == ((int) delimiter))
          {
            goto while_break;
          }

          c = (int) delimiter;
        }

        if (((unsigned long) p) == ((unsigned long) end))
        {
          {
            oldsize = linebuffer->size;
            buffer = (char *) x2realloc((void *) buffer, & linebuffer->size);
            p = buffer + oldsize;
            linebuffer->buffer = buffer;
            end = buffer + linebuffer->size;
          }
        }

        tmp___1 = p;
        p++;
        * tmp___1 = (char) c;
        if (! (c != ((int) delimiter)))
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    linebuffer->length = (size_t) (p - buffer);
    return linebuffer;
  }
}

extern long double strtold(const char *__restrict __nptr, char **__restrict __endptr);
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
extern struct passwd *getpwuid(__uid_t __uid);
static struct userid *user_alist;
static struct userid *nouser_alist;
static struct userid *group_alist;
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
  const char *tmp;
  int tmp___0;
  int tmp___1;
  char *locale;
  char *tmp___2;
  int tmp___3;
  int tmp___4;
  {
    {
      hard = (_Bool) 1;
      tmp = (const char *) setlocale(category, (const char *) ((void *) 0));
      p = tmp;
    }
    if (p)
    {
      if (1)
      {
        {
          tmp___0 = strcmp(p, "C");
        }
        if (tmp___0 == 0)
        {
          hard = (_Bool) 0;
        }
        else
        {
          {
            tmp___1 = strcmp(p, "POSIX");
          }
          if (tmp___1 == 0)
          {
            hard = (_Bool) 0;
          }

        }

      }
      else
      {
        {
          tmp___2 = strdup(p);
          locale = tmp___2;
        }
        if (locale)
        {
          {
            p = (const char *) setlocale(category, "C");
          }
          if (p)
          {
            {
              tmp___3 = strcmp(p, (const char *) locale);
            }
            if (tmp___3 == 0)
            {
              hard = (_Bool) 0;
            }
            else
            {
              goto _L;
            }

          }
          else
          {
            _L:
            {
              p = (const char *) setlocale(category, "POSIX");
            }

            if (p)
            {
              {
                tmp___4 = strcmp(p, (const char *) locale);
              }
              if (tmp___4 == 0)
              {
                hard = (_Bool) 0;
              }

            }

          }

          {
            setlocale(category, (const char *) locale);
            free((void *) locale);
          }
        }

      }

    }

    return hard;
  }
}

extern void setgrent(void);
extern struct group *getgrent(void);
extern int clock_gettime(clockid_t __clock_id, struct timespec *__tp);
extern int fflush_unlocked(FILE *__stream);
extern int __fsetlocking(FILE *__fp, int __type);
extern int tcgetattr(int __fd, struct termios *__termios_p);
extern int tcsetattr(int __fd, int __optional_actions, const struct termios *__termios_p);
static char *buf;
static size_t bufsize;
extern void qsort(void *__base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void *));
extern int fstatfs(int __fildes, struct statfs *__buf);
extern float strtof(const char *__restrict __nptr, char **__restrict __endptr);
extern int statfs(const char *__file, struct statfs *__buf);
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern __off_t lseek(int __fd, __off_t __offset, int __whence);
int rpl_fseeko(FILE *fp, off_t offset, int whence)
{
  off_t pos;
  int tmp;
  off_t tmp___0;
  int tmp___1;
  {
    if (((unsigned long) fp->_IO_read_end) == ((unsigned long) fp->_IO_read_ptr))
    {
      if (((unsigned long) fp->_IO_write_ptr) == ((unsigned long) fp->_IO_write_base))
      {
        if (((unsigned long) fp->_IO_save_base) == ((unsigned long) ((void *) 0)))
        {
          {
            tmp = fileno(fp);
            tmp___0 = lseek(tmp, offset, whence);
            pos = tmp___0;
          }
          if (pos == (- 1L))
          {
            return - 1;
          }

          fp->_flags &= - 17;
          fp->_offset = pos;
          return 0;
        }

      }

    }

    {
      tmp___1 = fseeko(fp, offset, whence);
    }
    return tmp___1;
  }
}

extern FILE *freopen(const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream);
extern int dup2(int __fd, int __fd2);
static _Bool protect_fd(int fd)
{
  int value;
  int tmp;
  int *tmp___0;
  {
    {
      tmp = open("/dev/null", 0);
      value = tmp;
    }
    if (value != fd)
    {
      if (0 <= value)
      {
        {
          close(value);
          tmp___0 = __errno_location();
          * tmp___0 = 9;
        }
      }

      return (_Bool) 0;
    }

    return (_Bool) 1;
  }
}

FILE *freopen_safer(const char *name, const char *mode, FILE *f)
{
  _Bool protect_in;
  _Bool protect_out;
  _Bool protect_err;
  int saved_errno;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  _Bool tmp___3;
  _Bool tmp___4;
  _Bool tmp___5;
  int *tmp___6;
  int *tmp___7;
  {
    {
      protect_in = (_Bool) 0;
      protect_out = (_Bool) 0;
      protect_err = (_Bool) 0;
      tmp = fileno(f);
    }
    {
      if (tmp == 2)
      {
        goto case_2;
      }

      if (tmp == 1)
      {
        goto case_1;
      }

      if (tmp == 0)
      {
        goto case_0;
      }

      goto switch_default;
      switch_default:
      {
        tmp___0 = dup2(2, 2);
      }

      if (tmp___0 != 2)
      {
        protect_err = (_Bool) 1;
      }

      case_2:
      {
        tmp___1 = dup2(1, 1);
      }

      if (tmp___1 != 1)
      {
        protect_out = (_Bool) 1;
      }

      case_1:
      {
        tmp___2 = dup2(0, 0);
      }

      if (tmp___2 != 0)
      {
        protect_in = (_Bool) 1;
      }

      case_0:
      goto switch_break;

      switch_break:
      ;

    }
    if (protect_in)
    {
      {
        tmp___5 = protect_fd(0);
      }
      if (tmp___5)
      {
        goto _L___0;
      }
      else
      {
        f = (FILE *) ((void *) 0);
      }

    }
    else
    {
      _L___0:
      if (protect_out)
      {
        {
          tmp___4 = protect_fd(1);
        }
        if (tmp___4)
        {
          goto _L;
        }
        else
        {
          f = (FILE *) ((void *) 0);
        }

      }
      else
      {
        _L:
        if (protect_err)
        {
          {
            tmp___3 = protect_fd(2);
          }
          if (tmp___3)
          {
            {
              f = freopen((const char *) name, (const char *) mode, (FILE *) f);
            }
          }
          else
          {
            f = (FILE *) ((void *) 0);
          }

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
      saved_errno = * tmp___6;
    }
    if (protect_err)
    {
      {
        close(2);
      }
    }

    if (protect_out)
    {
      {
        close(1);
      }
    }

    if (protect_in)
    {
      {
        close(0);
      }
    }

    if (! f)
    {
      {
        tmp___7 = __errno_location();
        * tmp___7 = saved_errno;
      }
    }

    return f;
  }
}

extern void __fpurge(FILE *__fp);
extern int fputc(int __c, FILE *__stream);
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
extern int fflush(FILE *__stream);
extern int __freading(FILE *__fp);
__inline static void clear_ungetc_buffer_preserving_position(FILE *fp)
{
  {
    if (fp->_flags & 256)
    {
      {
        rpl_fseeko(fp, (off_t) 0, 1);
      }
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
      {
        tmp = fflush(stream);
      }
      return tmp;
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

extern int fcntl(int __fd, int __cmd, ...);
static int have_dupfd_cloexec = 0;
extern int fclose(FILE *__stream);
int rpl_fclose(FILE *fp)
{
  int saved_errno;
  int fd;
  int result;
  int tmp;
  int *tmp___0;
  int tmp___1;
  int tmp___2;
  __off_t tmp___3;
  int tmp___4;
  int *tmp___5;
  {
    {
      saved_errno = 0;
      result = 0;
      fd = fileno(fp);
    }
    if (fd < 0)
    {
      {
        tmp = fclose(fp);
      }
      return tmp;
    }

    {
      tmp___1 = __freading(fp);
    }
    if (tmp___1 != 0)
    {
      {
        tmp___2 = fileno(fp);
        tmp___3 = lseek(tmp___2, (__off_t) 0, 1);
      }
      if (tmp___3 != (- 1L))
      {
        _L:
        {
          tmp___4 = rpl_fflush(fp);
        }

        if (tmp___4)
        {
          {
            tmp___0 = __errno_location();
            saved_errno = * tmp___0;
          }
        }

      }

    }
    else
    {
      goto _L;
    }

    {
      result = fclose(fp);
    }
    if (saved_errno != 0)
    {
      {
        tmp___5 = __errno_location();
        * tmp___5 = saved_errno;
        result = - 1;
      }
    }

    return result;
  }
}

extern int sigemptyset(sigset_t *__set);
extern int sigaddset(sigset_t *__set, int __signo);
extern int sigaction(int __sig, const struct sigaction *__restrict __act, struct sigaction *__restrict __oact);
static int fatal_signals[7] = {2, 15, 1, 13, 24, 25, 0};
static _Bool fatal_signals_initialized = (_Bool) 0;
static actions_entry_t static_actions[32];
static actions_entry_t *volatile actions = (actions_entry_t *) static_actions;
static volatile int actions_count = (volatile int) 0;
static size_t actions_allocated = (sizeof(static_actions)) / (sizeof(static_actions[0]));
static struct sigaction saved_sigactions[64];
static _Bool cleanup_initialized = (_Bool) 0;
static sigset_t fatal_signal_set;
static _Bool fatal_signal_set_initialized = (_Bool) 0;
extern int posix_fadvise(int __fd, off_t __offset, off_t __len, int __advise);
void fdadvise(int fd, off_t offset, off_t len, fadvice_t advice);
void fadvise(FILE *fp, fadvice_t advice);
void fdadvise(int fd, off_t offset, off_t len, fadvice_t advice)
{
  int __x;
  int tmp;
  {
    {
      tmp = posix_fadvise(fd, offset, len, (int) advice);
      __x = tmp;
    }
    return;
  }
}

void fadvise(FILE *fp, fadvice_t advice)
{
  int tmp;
  {
    if (fp)
    {
      {
        tmp = fileno(fp);
        fdadvise(tmp, (off_t) 0, (off_t) 0, advice);
      }
    }

    return;
  }
}

volatile int exit_failure = (volatile int) 1;
extern size_t strcspn(const char *__s, const char *__reject);
extern int fnmatch(const char *__pattern, const char *__name, int __flags);
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
const char *Version = "8.16";
extern char *optarg;
extern char *textdomain(const char *__domainname);
extern char *bindtextdomain(const char *__domainname, const char *__dirname);
extern int putchar_unlocked(int __c);
extern size_t fwrite_unlocked(const void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
__inline static void emit_ancillary_info(void)
{
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  const char *lc_messages;
  const char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  int tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *__cil_tmp13;
  char *__cil_tmp14;
  char *__cil_tmp15;
  char *__cil_tmp16;
  char *__cil_tmp17;
  {
    {
      tmp = last_component(program_name);
      tmp___0 = gettext("\nReport %s bugs to %s\n");
      printf((const char *) tmp___0, tmp, "bug-coreutils@gnu.org");
      tmp___1 = gettext("%s home page: <%s>\n");
      printf((const char *) tmp___1, "GNU coreutils", "http://www.gnu.org/software/coreutils/");
      tmp___2 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");
      fputs_unlocked((const char *) tmp___2, (FILE *) stdout);
      tmp___3 = (const char *) setlocale(5, (const char *) ((void *) 0));
      lc_messages = tmp___3;
    }
    if (lc_messages)
    {
      {
        tmp___6 = strncmp(lc_messages, "en_", (sizeof("en_")) - 1UL);
      }
      if (tmp___6)
      {
        {
          tmp___4 = last_component(program_name);
          tmp___5 = gettext("Report %s translation bugs to <http://translationproject.org/team/>\n");
          printf((const char *) tmp___5, tmp___4);
        }
      }

    }

    {
      tmp___7 = last_component(program_name);
      tmp___8 = gettext("For complete documentation, run: info coreutils \'%s invocation\'\n");
      printf((const char *) tmp___8, tmp___7);
    }
    return;
  }
}

__inline static void emit_try_help(void)
{
  char *tmp;
  char *__cil_tmp2;
  {
    {
      tmp = gettext("Try \'%s --help\' for more information.\n");
      fprintf((FILE *) stderr, (const char *) tmp, program_name);
    }
    return;
  }
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
void usage(int status);
void usage(int status)
{
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *__cil_tmp12;
  char *__cil_tmp13;
  char *__cil_tmp14;
  char *__cil_tmp15;
  char *__cil_tmp16;
  char *__cil_tmp17;
  char *__cil_tmp18;
  char *__cil_tmp19;
  char *__cil_tmp20;
  char *__cil_tmp21;
  {
    if (status != 0)
    {
      {
        emit_try_help();
      }
    }
    else
    {
      {
        tmp = gettext("Usage: %s [OPTION]... [INPUT [OUTPUT]]\n");
        printf((const char *) tmp, program_name);
        tmp___0 = gettext("Filter adjacent matching lines from INPUT (or standard input),\nwriting to OUTPUT (or standard output).\n\nWith no options, matching lines are merged to the first occurrence.\n\n");
        fputs_unlocked((const char *) tmp___0, (FILE *) stdout);
        tmp___1 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
        fputs_unlocked((const char *) tmp___1, (FILE *) stdout);
        tmp___2 = gettext("  -c, --count           prefix lines by the number of occurrences\n  -d, --repeated        only print duplicate lines\n");
        fputs_unlocked((const char *) tmp___2, (FILE *) stdout);
        tmp___3 = gettext("  -D, --all-repeated[=delimit-method]  print all duplicate lines\n                        delimit-method={none(default),prepend,separate}\n                        Delimiting is done with blank lines\n  -f, --skip-fields=N   avoid comparing the first N fields\n  -i, --ignore-case     ignore differences in case when comparing\n  -s, --skip-chars=N    avoid comparing the first N characters\n  -u, --unique          only print unique lines\n  -z, --zero-terminated  end lines with 0 byte, not newline\n");
        fputs_unlocked((const char *) tmp___3, (FILE *) stdout);
        tmp___4 = gettext("  -w, --check-chars=N   compare no more than N characters in lines\n");
        fputs_unlocked((const char *) tmp___4, (FILE *) stdout);
        tmp___5 = gettext("      --help     display this help and exit\n");
        fputs_unlocked((const char *) tmp___5, (FILE *) stdout);
        tmp___6 = gettext("      --version  output version information and exit\n");
        fputs_unlocked((const char *) tmp___6, (FILE *) stdout);
        tmp___7 = gettext("\nA field is a run of blanks (usually spaces and/or TABs), then non-blank\ncharacters.  Fields are skipped before chars.\n");
        fputs_unlocked((const char *) tmp___7, (FILE *) stdout);
        tmp___8 = gettext("\nNote: \'uniq\' does not detect repeated lines unless they are adjacent.\nYou may want to sort the input first, or use \'sort -u\' without \'uniq\'.\nAlso, comparisons honor the rules specified by \'LC_COLLATE\'.\n");
        fputs_unlocked((const char *) tmp___8, (FILE *) stdout);
        emit_ancillary_info();
      }
    }

    {
      exit(status);
    }
  }
}

static size_t size_opt(const char *opt, const char *msgid)
{
  unsigned long size;
  strtol_error tmp;
  char *tmp___0;
  unsigned long tmp___1;
  char *__cil_tmp7;
  {
    {
      tmp = xstrtoul(opt, (char **) ((void *) 0), 10, & size, "");
    }
    {
      if (((unsigned int) tmp) == 0U)
      {
        goto case_0;
      }

      if (((unsigned int) tmp) == 1U)
      {
        goto case_0;
      }

      goto switch_default;
      case_0:
      case_1:
      goto switch_break;


      switch_default:
      {
        tmp___0 = gettext(msgid);
        error(1, 0, "%s: %s", opt, tmp___0);
      }

      switch_break:
      ;

    }
    if (size < 0xffffffffffffffffUL)
    {
      tmp___1 = size;
    }
    else
    {
      tmp___1 = 0xffffffffffffffffUL;
    }

    return tmp___1;
  }
}

static char *find_field(const struct linebuffer *line)
{
  size_t count;
  const char *lp;
  size_t size;
  size_t i;
  const unsigned short **tmp;
  unsigned char tmp___0;
  const unsigned short **tmp___1;
  unsigned char tmp___2;
  size_t tmp___3;
  {
    lp = (const char *) line->buffer;
    size = (size_t) (line->length - 1UL);
    i = (size_t) 0;
    count = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

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
        }

        {
          while (1)
          {
            while_continue___0:
            ;

            if (i < size)
            {
              {
                tmp = __ctype_b_loc();
                tmp___0 = to_uchar((char) (* (lp + i)));
              }
              if (! (((const int) (* ((* tmp) + ((int) tmp___0)))) & 1))
              {
                goto while_break___0;
              }

            }
            else
            {
              goto while_break___0;
            }

            i++;
          }

          while_break___0:
          ;

        }
        {
          while (1)
          {
            while_continue___1:
            ;

            if (i < size)
            {
              {
                tmp___1 = __ctype_b_loc();
                tmp___2 = to_uchar((char) (* (lp + i)));
              }
              if (((const int) (* ((* tmp___1) + ((int) tmp___2)))) & 1)
              {
                goto while_break___1;
              }

            }
            else
            {
              goto while_break___1;
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
  int tmp___3;
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
          tmp___3 = 1;
        }
        else
        {
          {
            tmp___2 = memcmp((const void *) old, (const void *) new, oldlen);
          }
          if (tmp___2)
          {
            tmp___3 = 1;
          }
          else
          {
            tmp___3 = 0;
          }

        }

        return (_Bool) tmp___3;
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
      else
      {
        tmp = (int) output_later_repeated;
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
  struct linebuffer lb1;
  struct linebuffer lb2;
  struct linebuffer *thisline;
  struct linebuffer *prevline;
  int *tmp;
  int tmp___0;
  FILE *tmp___1;
  int *tmp___2;
  int tmp___3;
  FILE *tmp___4;
  char *prevfield;
  size_t prevlen;
  char *thisfield;
  size_t thislen;
  struct linebuffer *tmp___5;
  struct linebuffer *_tmp;
  _Bool tmp___6;
  int tmp___7;
  char *prevfield___0;
  size_t prevlen___0;
  uintmax_t match_count;
  _Bool first_delimiter;
  struct linebuffer *tmp___8;
  _Bool match;
  char *thisfield___0;
  size_t thislen___0;
  int tmp___9;
  struct linebuffer *tmp___10;
  _Bool tmp___11;
  int tmp___12;
  struct linebuffer *_tmp___0;
  int tmp___14;
  char *tmp___15;
  int tmp___16;
  int tmp___17;
  char *__cil_tmp42;
  char *__cil_tmp43;
  char *__cil_tmp44;
  char *__cil_tmp45;
  {
    {
      tmp___0 = strcmp(infile, "-");
    }
    if (! (tmp___0 == 0))
    {
      {
        tmp___1 = freopen_safer(infile, "r", stdin);
      }
      if (! tmp___1)
      {
        {
          tmp = __errno_location();
          error(1, * tmp, "%s", infile);
        }
      }

    }

    {
      tmp___3 = strcmp(outfile, "-");
    }
    if (! (tmp___3 == 0))
    {
      {
        tmp___4 = freopen_safer(outfile, "w", stdout);
      }
      if (! tmp___4)
      {
        {
          tmp___2 = __errno_location();
          error(1, * tmp___2, "%s", outfile);
        }
      }

    }

    {
      fadvise(stdin, (fadvice_t) 2);
      thisline = & lb1;
      prevline = & lb2;
      initbuffer(thisline);
      initbuffer(prevline);
    }
    if (output_unique)
    {
      if (output_first_repeated)
      {
        if (((unsigned int) countmode) == 1U)
        {
          {
            while (1)
            {
              while_continue:
              ;

              {
                tmp___7 = feof_unlocked(stdin);
              }
              if (tmp___7)
              {
                goto while_break;
              }

              {
                tmp___5 = readlinebuffer_delim(thisline, stdin, delimiter);
              }
              if (((unsigned long) tmp___5) == ((unsigned long) ((struct linebuffer *) 0)))
              {
                goto while_break;
              }

              {
                thisfield = (char *) find_field((const struct linebuffer *) thisline);
                thislen = (thisline->length - 1UL) - ((size_t) (thisfield - thisline->buffer));
              }
              if (prevline->length == 0UL)
              {
                goto _L;
              }
              else
              {
                {
                  tmp___6 = different(thisfield, prevfield, thislen, prevlen);
                }
                if (tmp___6)
                {
                  _L:
                  {
                    fwrite_unlocked((const void *) thisline->buffer, sizeof(char), thisline->length, (FILE *) stdout);
                  }

                  {
                    while (1)
                    {
                      while_continue___0:
                      ;

                      _tmp = prevline;
                      prevline = thisline;
                      thisline = _tmp;
                      goto while_break___0;
                    }

                    while_break___0:
                    ;

                  }
                  prevfield = thisfield;
                  prevlen = thislen;
                }

              }

            }

            while_break:
            ;

          }
        }
        else
        {
          goto _L___2;
        }

      }
      else
      {
        goto _L___2;
      }

    }
    else
    {
      _L___2:
      {
        match_count = (uintmax_t) 0;
        first_delimiter = (_Bool) 1;
        tmp___8 = readlinebuffer_delim(prevline, stdin, delimiter);
      }

      if (((unsigned long) tmp___8) == ((unsigned long) ((struct linebuffer *) 0)))
      {
        goto closefiles;
      }

      {
        prevfield___0 = (char *) find_field((const struct linebuffer *) prevline);
        prevlen___0 = (prevline->length - 1UL) - ((size_t) (prevfield___0 - prevline->buffer));
      }
      {
        while (1)
        {
          while_continue___1:
          ;

          {
            tmp___14 = feof_unlocked(stdin);
          }
          if (tmp___14)
          {
            goto while_break___1;
          }

          {
            tmp___10 = readlinebuffer_delim(thisline, stdin, delimiter);
          }
          if (((unsigned long) tmp___10) == ((unsigned long) ((struct linebuffer *) 0)))
          {
            {
              tmp___9 = ferror_unlocked(stdin);
            }
            if (tmp___9)
            {
              goto closefiles;
            }

            goto while_break___1;
          }

          {
            thisfield___0 = (char *) find_field((const struct linebuffer *) thisline);
            thislen___0 = (thisline->length - 1UL) - ((size_t) (thisfield___0 - thisline->buffer));
            tmp___11 = different(thisfield___0, prevfield___0, thislen___0, prevlen___0);
          }
          if (tmp___11)
          {
            tmp___12 = 0;
          }
          else
          {
            tmp___12 = 1;
          }

          match = (_Bool) tmp___12;
          match_count += (uintmax_t) match;
          if (match_count == 0xffffffffffffffffUL)
          {
            match_count--;
          }

          if (((unsigned int) delimit_groups) != 0U)
          {
            if (! match)
            {
              if (match_count)
              {
                first_delimiter = (_Bool) 0;
              }

            }
            else
            {
              if (match_count == 1UL)
              {
                if (((unsigned int) delimit_groups) == 1U)
                {
                  {
                    putchar_unlocked((int) delimiter);
                  }
                }
                else
                {
                  if (((unsigned int) delimit_groups) == 2U)
                  {
                    if (! first_delimiter)
                    {
                      {
                        putchar_unlocked((int) delimiter);
                      }
                    }

                  }

                }

              }

            }

          }

          if (! match)
          {
            goto _L___0;
          }
          else
          {
            if (output_later_repeated)
            {
              _L___0:
              {
                writeline((const struct linebuffer *) prevline, match, match_count);
              }

              {
                while (1)
                {
                  while_continue___2:
                  ;

                  _tmp___0 = prevline;
                  prevline = thisline;
                  thisline = _tmp___0;
                  goto while_break___2;
                }

                while_break___2:
                ;

              }
              prevfield___0 = thisfield___0;
              prevlen___0 = thislen___0;
              if (! match)
              {
                match_count = (uintmax_t) 0;
              }

            }

          }

        }

        while_break___1:
        ;

      }
      {
        writeline((const struct linebuffer *) prevline, (_Bool) 0, match_count);
      }
    }

    closefiles:
    {
      tmp___16 = ferror_unlocked(stdin);
    }

    if (tmp___16)
    {
      {
        tmp___15 = gettext("error reading %s");
        error(1, 0, (const char *) tmp___15, infile);
      }
    }
    else
    {
      {
        tmp___17 = rpl_fclose(stdin);
      }
      if (tmp___17 != 0)
      {
        {
          tmp___15 = gettext("error reading %s");
          error(1, 0, (const char *) tmp___15, infile);
        }
      }

    }

    {
      free((void *) lb1.buffer);
      free((void *) lb2.buffer);
    }
    return;
  }
}

int main(int argc, char **argv)
{
  int optc;
  _Bool posixly_correct;
  char *tmp;
  enum Skip_field_option_type skip_field_option_type;
  int nfiles;
  const char *file[2];
  char delimiter;
  const char *tmp___0;
  char *tmp___1;
  int tmp___2;
  int tmp___3;
  unsigned long size;
  const char *tmp___4;
  char *tmp___5;
  int tmp___6;
  int tmp___7;
  strtol_error tmp___8;
  ptrdiff_t tmp___9;
  char *tmp___10;
  void *__cil_tmp22;
  char *__cil_tmp23;
  char *__cil_tmp24;
  char *__cil_tmp25;
  char *__cil_tmp26;
  char *__cil_tmp27;
  char *__cil_tmp28;
  char *__cil_tmp29;
  char *__cil_tmp30;
  char *__cil_tmp31;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  char *__cil_tmp35;
  char *__cil_tmp36;
  {
    {
      optc = 0;
      tmp = getenv("POSIXLY_CORRECT");
      posixly_correct = (_Bool) (((unsigned long) tmp) != ((unsigned long) ((void *) 0)));
      skip_field_option_type = (enum Skip_field_option_type) 0;
      nfiles = 0;
      delimiter = (char) '\n';
      file[1] = "-";
      file[0] = file[1];
      set_program_name((const char *) (* (argv + 0)));
      setlocale(6, "");
      bindtextdomain("coreutils", "/usr/local/share/locale");
      textdomain("coreutils");
      hard_LC_COLLATE = hard_locale(3);
      atexit(& close_stdout);
      skip_chars = (size_t) 0;
      skip_fields = (size_t) 0;
      check_chars = 0xffffffffffffffffUL;
      output_first_repeated = (_Bool) 1;
      output_unique = output_first_repeated;
      output_later_repeated = (_Bool) 0;
      countmode = (enum countmode) 1;
      delimit_groups = (enum delimit_method) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (optc == (- 1))
        {
          goto _L___2;
        }
        else
        {
          if (posixly_correct)
          {
            if (nfiles != 0)
            {
              goto _L___2;
            }
            else
            {
              goto _L___3;
            }

          }
          else
          {
            _L___3:
            {
              optc = getopt_long(argc, (char *const *) argv, "-0123456789Dcdf:is:uw:z", longopts, (int *) ((void *) 0));
            }

            if (optc == (- 1))
            {
              _L___2:
              if (argc <= optind)
              {
                goto while_break;
              }


              if (nfiles == 2)
              {
                {
                  tmp___0 = quote((const char *) (* (argv + optind)));
                  tmp___1 = gettext("extra operand %s");
                  error(0, 0, (const char *) tmp___1, tmp___0);
                  usage(1);
                }
              }

              tmp___2 = nfiles;
              nfiles++;
              tmp___3 = optind;
              optind++;
              file[tmp___2] = (const char *) (* (argv + tmp___3));
            }
            else
            {
              {
                if (optc == 1)
                {
                  goto case_1;
                }

                if (optc == 48)
                {
                  goto case_48;
                }

                if (optc == 49)
                {
                  goto case_48;
                }

                if (optc == 50)
                {
                  goto case_48;
                }

                if (optc == 51)
                {
                  goto case_48;
                }

                if (optc == 52)
                {
                  goto case_48;
                }

                if (optc == 53)
                {
                  goto case_48;
                }

                if (optc == 54)
                {
                  goto case_48;
                }

                if (optc == 55)
                {
                  goto case_48;
                }

                if (optc == 56)
                {
                  goto case_48;
                }

                if (optc == 57)
                {
                  goto case_48;
                }

                if (optc == 99)
                {
                  goto case_99;
                }

                if (optc == 100)
                {
                  goto case_100;
                }

                if (optc == 68)
                {
                  goto case_68;
                }

                if (optc == 102)
                {
                  goto case_102;
                }

                if (optc == 105)
                {
                  goto case_105;
                }

                if (optc == 115)
                {
                  goto case_115;
                }

                if (optc == 117)
                {
                  goto case_117;
                }

                if (optc == 119)
                {
                  goto case_119;
                }

                if (optc == 122)
                {
                  goto case_122;
                }

                if (optc == (- 130))
                {
                  goto case_neg_130;
                }

                if (optc == (- 131))
                {
                  goto case_neg_131;
                }

                goto switch_default;
                case_1:
                if (((int) (* (optarg + 0))) == 43)
                {
                  {
                    tmp___7 = posix2_version();
                  }
                  if (tmp___7 < 200112)
                  {
                    {
                      tmp___8 = xstrtoul((const char *) optarg, (char **) ((void *) 0), 10, & size, "");
                    }
                    if (((unsigned int) tmp___8) == 0U)
                    {
                      if (size <= 0xffffffffffffffffUL)
                      {
                        skip_chars = size;
                      }
                      else
                      {
                        goto _L___1;
                      }

                    }
                    else
                    {
                      goto _L___1;
                    }

                  }
                  else
                  {
                    goto _L___1;
                  }

                }
                else
                {
                  _L___1:
                  if (nfiles == 2)
                  {
                    {
                      tmp___4 = quote((const char *) optarg);
                      tmp___5 = gettext("extra operand %s");
                      error(0, 0, (const char *) tmp___5, tmp___4);
                      usage(1);
                    }
                  }
                  else
                  {
                    tmp___6 = nfiles;
                    nfiles++;
                    file[tmp___6] = (const char *) optarg;
                  }


                }


                goto switch_break;
                case_48:
                case_49:
                case_50:
                case_51:
                case_52:
                case_53:
                case_54:
                case_55:
                case_56:
                case_57:
                if (((unsigned int) skip_field_option_type) == 2U)
                {
                  skip_fields = (size_t) 0;
                }











                skip_field_option_type = (enum Skip_field_option_type) 1;
                goto switch_break;
                case_99:
                countmode = (enum countmode) 0;

                goto switch_break;
                case_100:
                output_unique = (_Bool) 0;

                goto switch_break;
                case_68:
                output_unique = (_Bool) 0;

                output_later_repeated = (_Bool) 1;
                if (((unsigned long) optarg) == ((unsigned long) ((void *) 0)))
                {
                  delimit_groups = (enum delimit_method) 0;
                }
                else
                {
                  {
                    tmp___9 = __xargmatch_internal("--all-repeated", (const char *) optarg, delimit_method_string, (const char *) delimit_method_map, sizeof(delimit_method_map[0]), argmatch_die);
                    delimit_groups = (enum delimit_method) delimit_method_map[tmp___9];
                  }
                }

                goto switch_break;
                case_102:
                {
                  skip_field_option_type = (enum Skip_field_option_type) 2;
                  skip_fields = size_opt((const char *) optarg, "invalid number of fields to skip");
                }

                goto switch_break;
                case_105:
                ignore_case = (_Bool) 1;

                goto switch_break;
                case_115:
                {
                  skip_chars = size_opt((const char *) optarg, "invalid number of bytes to skip");
                }

                goto switch_break;
                case_117:
                output_first_repeated = (_Bool) 0;

                goto switch_break;
                case_119:
                {
                  check_chars = size_opt((const char *) optarg, "invalid number of bytes to compare");
                }

                goto switch_break;
                case_122:
                delimiter = (char) '\000';

                goto switch_break;
                case_neg_130:
                {
                  usage(0);
                }

                goto switch_break;
                case_neg_131:
                {
                  version_etc(stdout, "uniq", "GNU coreutils", Version, "Richard M. Stallman", "David MacKenzie", (char *) ((void *) 0));
                  exit(0);
                }

                goto switch_break;
                switch_default:
                {
                  usage(1);
                }

                switch_break:
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
      if (output_later_repeated)
      {
        {
          tmp___10 = gettext("printing all duplicated lines and repeat counts is meaningless");
          error(0, 0, (const char *) tmp___10);
          usage(1);
        }
      }

    }

    {
      check_file(file[0], file[1], delimiter);
      exit(0);
    }
  }
}

