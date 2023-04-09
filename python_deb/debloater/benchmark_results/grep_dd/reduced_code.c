enum strtol_error
{



  LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
  LONGINT_INVALID = 4
};
typedef enum strtol_error strtol_error;
struct option
{




};
typedef long intmax_t;
typedef long ptrdiff_t;
typedef unsigned long size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef long __off_t;
typedef long __off64_t;
struct _IO_FILE;
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























  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[((15UL * (sizeof(int))) - (4UL * (sizeof(void *)))) - (sizeof(size_t))];
};
typedef int wchar_t;
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
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct mbchar
{
  const char *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
typedef struct mbchar mbchar_t;
struct mbiter_multi
{
  const char *limit;
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbiter_multi mbi_iterator_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
enum quoting_style
{







  clocale_quoting_style = 7,
  custom_quoting_style = 8
};
struct quoting_options;
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
struct mbuiter_multi
{
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbuiter_multi mbui_iterator_t;
struct __dirstream;
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef unsigned int __mode_t;
typedef __mode_t mode_t;
typedef unsigned long uintptr_t;
typedef unsigned long longword;
struct preliminary_header
{
  void *next;
  int magic;
};
struct __anonstruct_magic_22
{
  char room[(((((sizeof(struct preliminary_header)) + 16UL) - 1UL) / 16UL) * 16UL) - (sizeof(int))];
  int word;
};
union header
{
  void *next;
  struct __anonstruct_magic_22 magic;
};
typedef int nl_item;
struct I_ring
{
  int ir_data[4];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;
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
struct hash_table;
typedef struct hash_table Hash_table;
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
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __nlink_t;
struct __anonstruct___fsid_t_1
{
  int __val[2];
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
typedef long __syscall_slong_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __nlink_t nlink_t;
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
struct dirent
{
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
};
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
struct _ftsent;
struct _ftsent;
struct _ftsent;
struct cycle_check_state;
struct cycle_check_state;
struct cycle_check_state;
union __anonunion_fts_cycle_19
{
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_18
{







  size_t fts_pathlen;
  size_t fts_nitems;
  int (*fts_compar)(const struct _ftsent **, const struct _ftsent **);
  int fts_options;
  struct hash_table *fts_leaf_optimization_works_ht;
  union __anonunion_fts_cycle_19 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_18 FTS;
struct _ftsent
{















  unsigned short fts_info;
  unsigned short fts_flags;
  unsigned short fts_instr;
  struct stat fts_statp[1];
  char fts_name[1];
};
typedef struct _ftsent FTSENT;
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
typedef unsigned long __re_long_size_t;
typedef unsigned long reg_syntax_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_pattern_buffer
{
  struct re_dfa_t *buffer;
  __re_long_size_t allocated;
  __re_long_size_t used;
  reg_syntax_t syntax;
  char *fastmap;
  unsigned char *translate;
  size_t re_nsub;
  unsigned int can_be_null : 1;
  unsigned int regs_allocated : 2;
  unsigned int fastmap_accurate : 1;
  unsigned int no_sub : 1;
  unsigned int not_bol : 1;
  unsigned int not_eol : 1;
  unsigned int newline_anchor : 1;
};
typedef struct re_pattern_buffer regex_t;
typedef int regoff_t;
struct __anonstruct_regmatch_t_29
{
  regoff_t rm_so;
  regoff_t rm_eo;
};
typedef struct __anonstruct_regmatch_t_29 regmatch_t;
struct exclude;
struct exclude;
struct exclude;
union __anonunion_v_33
{
  const char *pattern;
  regex_t re;
};
struct patopts
{
  int options;
  union __anonunion_v_33 v;
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
union __anonunion_v_34
{
  Hash_table *table;
  struct exclude_pattern pat;
};
struct exclude_segment
{
  struct exclude_segment *next;
  enum exclude_type type;
  int options;
  union __anonunion_v_34 v;
};
struct pattern_buffer
{
  struct pattern_buffer *next;
  char *base;
};
struct exclude
{
  struct exclude_segment *head;
  struct pattern_buffer *patbuf;
};
struct real_pcre;
struct real_pcre;
struct real_pcre;
typedef struct real_pcre pcre;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct pcre_extra
{







  void *executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct kwsmatch
{
  size_t index;
  size_t offset[1];
  size_t size[1];
};
struct kwset;
struct kwset;
struct kwset;
typedef struct kwset *kwset_t;
typedef signed char mb_len_map_t;
struct obstack;
struct obstack;
struct obstack;
struct _obstack_chunk
{
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};
union __anonunion_temp_56
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
  union __anonunion_temp_56 temp;
  int alignment_mask;
  struct _obstack_chunk *(*chunkfun)(void *, long);
  void (*freefun)(void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned int use_extra_arg : 1;
  unsigned int maybe_empty_object : 1;
  unsigned int alloc_failed : 1;
};
struct trie;
struct trie;
struct trie;
struct tree
{
  struct tree *llink;
  struct tree *rlink;
  struct trie *trie;
  unsigned char label;
  char balance;
};
struct trie
{
  size_t accepting;
  struct tree *links;
  struct trie *parent;
  struct trie *next;
  struct trie *fail;
  int depth;
  int shift;
  int maxshift;
};
struct kwset
{
  struct obstack obstack;
  ptrdiff_t words;
  struct trie *trie;
  int mind;
  int maxd;
  unsigned char delta[256];
  struct trie *next[256];
  char *target;
  int *shift;
  const char *trans;
  char gc1;
  char gc2;
  int gc1help;
};
enum __anonenum_dirs_58
{
  L = 0,
  R = 1
};
typedef int __re_idx_t;
typedef unsigned int __re_size_t;
struct re_registers
{
  __re_size_t num_regs;
  regoff_t *start;
  regoff_t *end;
};
struct dfamust
{
  _Bool exact;
  _Bool begline;
  _Bool endline;
  char *must;
  struct dfamust *next;
};
struct dfa;
struct dfa;
struct dfa;
struct patterns
{
  struct re_pattern_buffer regexbuf;
  struct re_registers regs;
};
enum __anonenum_mode_60
{
  DW_NONE = 0,
  DW_POSIX = 1,
  DW_GNU = 2
};
typedef unsigned long wctype_t;
typedef unsigned int charclass_word;
typedef charclass_word charclass[8];
typedef ptrdiff_t token;
struct __anonstruct_position_35
{
  size_t index;
  unsigned int constraint;
};
typedef struct __anonstruct_position_35 position;
struct __anonstruct_position_set_36
{
  position *elems;
  size_t nelem;
  size_t alloc;
};
typedef struct __anonstruct_position_set_36 position_set;
struct __anonstruct_leaf_set_37
{
  size_t *elems;
  size_t nelem;
};
typedef struct __anonstruct_leaf_set_37 leaf_set;
struct __anonstruct_dfa_state_38
{
  size_t hash;
  position_set elems;
  unsigned char context;
  _Bool has_backref;
  _Bool has_mbcset;
  unsigned short constraint;
  token first_end;
  position_set mbps;
};
typedef struct __anonstruct_dfa_state_38 dfa_state;
typedef ptrdiff_t state_num;
struct __anonstruct_ranges_39
{
  wchar_t beg;
  wchar_t end;
};
struct mb_char_classes
{
  ptrdiff_t cset;
  _Bool invert;
  wchar_t *chars;
  size_t nchars;
  wctype_t *ch_classes;
  size_t nch_classes;
  struct __anonstruct_ranges_39 *ranges;
  size_t nranges;
  char **equivs;
  size_t nequivs;
  char **coll_elems;
  size_t ncoll_elems;
};
struct dfa
{
  charclass *charclasses;
  size_t cindex;
  size_t calloc;
  token *tokens;
  size_t tindex;
  size_t talloc;
  size_t depth;
  size_t nleaves;
  size_t nregexps;
  _Bool fast;
  _Bool multibyte;
  token utf8_anychar_classes[5];
  mbstate_t mbs;
  int *multibyte_prop;
  wint_t mbrtowc_cache[256];
  struct mb_char_classes *mbcsets;
  size_t nmbcsets;
  size_t mbcsets_alloc;
  struct dfa *superset;
  dfa_state *states;
  state_num sindex;
  size_t salloc;
  position_set *follows;
  _Bool searchflag;
  state_num tralloc;
  int trcount;
  state_num **trans;
  state_num **fails;
  int *success;
  state_num *newlines;
  struct dfamust *musts;
  position_set mb_follows;
  int *mb_match_lens;
};
typedef int predicate(int);
struct dfa_ctype
{
  const char *name;
  predicate *func;
  _Bool single_byte_only;
};
struct __anonstruct_stkalloc_43
{
  _Bool nullable;
  size_t nfirstpos;
  size_t nlastpos;
};
enum __anonenum_status_transit_state_44
{
  TRANSIT_STATE_IN_PROGRESS = 0,
  TRANSIT_STATE_DONE = 1,
  TRANSIT_STATE_END_BUFFER = 2
};
typedef enum __anonenum_status_transit_state_44 status_transit_state;
struct must;
struct must;
struct must;
typedef struct must must;
struct must
{
  char **in;
  char *left;
  char *right;
  char *is;
  _Bool begline;
  _Bool endline;
  must *prev;
};
typedef __off_t off_t;
struct color_cap
{
  const char *name;
  const char **var;
  void (*fct)(void);
};
enum directories_type
{
  READ_DIRECTORIES = 2,
  RECURSE_DIRECTORIES = 3,
  SKIP_DIRECTORIES = 4
};
enum __anonenum_devices_71
{
  READ_COMMAND_LINE_DEVICES = 0,
  READ_DEVICES = 1,
  SKIP_DEVICES = 2
};
enum __anonenum_binary_files_72
{
  BINARY_BINARY_FILES = 0,
  TEXT_BINARY_FILES = 1,
  WITHOUT_MATCH_BINARY_FILES = 2
};
enum __anonenum_File_type_73
{
  UNKNOWN = 0,
  DOS_BINARY = 1,
  DOS_TEXT = 2,
  UNIX_TEXT = 3
};
typedef enum __anonenum_File_type_73 File_type;
struct dos_map
{
  off_t pos;
  off_t add;
};
struct matcher
{
  const char name[16];
  void (*compile)(const char *, size_t);
  size_t (*execute)(const char *, size_t, size_t *, const char *);
};
extern const unsigned short **__ctype_b_loc(void);








strtol_error xstrtoimax(const char *s, char **ptr, int strtol_base, intmax_t *val, const char *valid_suffixes);
static strtol_error bkm_scale___1(intmax_t *x, int scale_factor)
{
}

static strtol_error bkm_scale_by_power___1(intmax_t *x, int base, int power)
{
}

strtol_error xstrtoimax(const char *s, char **ptr, int strtol_base, intmax_t *val, const char *valid_suffixes)
{
}

void xalloc_die(void);
void *xmalloc(size_t n);
void *xrealloc(void *p, size_t n);
void *xnmalloc(size_t n, size_t s);
void *xnmalloc(size_t n, size_t s);
void *xnmalloc(size_t n, size_t s)
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
      }
    }

    {
      tmp___0 = xmalloc(n * s);
    }
    return tmp___0;
  }
}

void *xnrealloc(void *p, size_t n, size_t s);
void *xnrealloc(void *p, size_t n, size_t s);
void *xnrealloc(void *p, size_t n, size_t s)
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
      }
    }

    {
      tmp___0 = xrealloc(p, n * s);
    }
    return tmp___0;
  }
}

void *x2nrealloc(void *p, size_t *pn, size_t s)
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
        {
        }
      }

      n += (n / 2UL) + 1UL;
    }

    {
      * pn = n;
      tmp = xrealloc(p, n * s);
    }
    return tmp;
  }
}

char *xcharalloc(size_t n);
char *xcharalloc(size_t n);
char *xcharalloc(size_t n)
{
}









extern void free(void *__ptr);
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
extern void *memset(void *__s, int __c, size_t __n);
extern size_t strlen(const char *__s);
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
      }

    }

    {
      p = realloc(p, n);
    }
    if (! p)
    {
      if (n)
      {
      }

    }

    return p;
  }
}

void *x2realloc(void *p, size_t *pn)
{
}

void *xzalloc(size_t s);
void *xzalloc(size_t s)
{
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memset(tmp, 0, s);
    }
    return tmp___0;
  }
}

void *xcalloc(size_t n, size_t s);
void *xcalloc(size_t n, size_t s)
{
  void *p;
  {
    {
      p = calloc(n, s);
    }
    if (! p)
    {
      {
      }
    }

    return p;
  }
}

void *xmemdup(const void *p, size_t s);
void *xmemdup(const void *p, size_t s)
{
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memcpy((void *) tmp, (const void *) p, s);
    }
    return tmp___0;
  }
}

char *xstrdup(const char *string);
char *xstrdup(const char *string)
{
  size_t tmp;
  char *tmp___0;
  {
    {
      tmp = strlen(string);
      tmp___0 = (char *) xmemdup((const void *) string, tmp + 1UL);
    }
    return tmp___0;
  }
}

void xalloc_die(void);
void xalloc_die(void)
{
}

extern int strcmp(const char *__s1, const char *__s2);
extern struct _IO_FILE *stdout;
extern int fprintf(FILE *__restrict __stream, const char *__restrict __format, ...);
extern int printf(const char *__restrict __format, ...);
extern int fputs_unlocked(const char *__restrict __s, FILE *__restrict __stream);
const char version_etc_copyright[47];
void version_etc_arn(FILE *stream, const char *command_name, const char *package, const char *version, const char *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, const char *command_name, const char *package, const char *version, va_list authors);
void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...);
void version_etc_arn(FILE *stream, const char *command_name, const char *package, const char *version, const char *const *authors, size_t n_authors)
{
}

void version_etc_va(FILE *stream, const char *command_name, const char *package, const char *version, va_list authors)
{
}

void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...);
void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...)
{
}









void mb_copy(mbchar_t *new_mbc, const mbchar_t *old_mbc)
{
}

const unsigned int is_basic_table[8];
_Bool is_basic(char c)
{
}

void mbiter_multi_next(struct mbiter_multi *iter)
{
}

char *trim2(const char *s, int how)
{
}

size_t strnlen1(const char *string, size_t maxlen);
extern void *memchr(const void *__s, int __c, size_t __n);
size_t strnlen1(const char *string, size_t maxlen);
size_t strnlen1(const char *string, size_t maxlen)
{
}

int c_strcasecmp(const char *s1, const char *s2);
extern int close(int __fd);
extern int fchdir(int __fd);
int set_cloexec_flag(int desc, _Bool value);
int open_safer(const char *file, int flags, ...);
size_t safe_read(int fd, void *buf, size_t count);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
size_t safe_read(int fd, void *buf, size_t count)
{


  int *tmp___0;

  {
    {
      while (1)
      {












        {
          {
          }




          {
            {
            }
            if ((* tmp___0) == 22)
            {
            }

          }

        }




      }




    }
    return 0UL;
  }
}

















static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i)
{
}

static struct quoting_options quoting_options_from_style(enum quoting_style style)
{
}

static const char *gettext_quote(const char *msgid, enum quoting_style s)
{
}

static size_t quotearg_buffer_restyled(char *buffer___0, size_t buffersize, const char *arg, size_t argsize, enum quoting_style quoting_style, int flags, const unsigned int *quote_these_too, const char *left_quote, const char *right_quote)
{
}

static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = & slotvec0;
static char *quotearg_n_options(int n, const char *arg, size_t argsize, const struct quoting_options *options)
{
}

char *quotearg_n_style(int n, enum quoting_style s, const char *arg)
{
}

char *quotearg_char_mem(const char *arg, size_t argsize, char ch)
{
}

char *quotearg_char(const char *arg, char ch)
{
}

char *quotearg_colon(const char *arg)
{
}

struct quoting_options quote_quoting_options = {(enum quoting_style) 6, 0, {0U}, (const char *) ((void *) 0), (const char *) ((void *) 0)};
const char *quote_n_mem(int n, const char *arg, size_t argsize)
{
}

const char *quote_n(int n, const char *arg)
{
}

const char *quote(const char *arg)
{
}

const char *proper_name(const char *name);
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...);
char *mbsstr(const char *haystack, const char *needle);
extern int iswalnum(wint_t __wc);
void mbuiter_multi_next(struct mbuiter_multi *iter)
{
}

static _Bool mbsstr_trimmed_wordbounded(const char *string, const char *sub)
{
}

const char *proper_name(const char *name)
{
}

const char *program_name;
void set_program_name(const char *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern struct _IO_FILE *stderr;
extern int fputs(const char *__restrict __s, FILE *__restrict __stream);
extern int strncmp(const char *__s1, const char *__s2, size_t __n);
extern char *strrchr(const char *__s, int __c);
const char *program_name = (const char *) ((void *) 0);
void set_program_name(const char *argv0)
{




  {















    {
      {







        {
        }

      }

    }




  }
}

int fd_safer(int fd);
extern DIR *fdopendir(int __fd);
extern int closedir(DIR *__dirp);
extern int dirfd(DIR *__dirp);
int dup_safer(int fd);
int openat_safer(int fd, const char *file, int flags, ...);
extern int openat(int __fd, const char *__file, int __oflag, ...);
int openat_safer(int fd, const char *file, int flags, ...)
{
  mode_t mode___0;

  int tmp;
  int tmp___0;
  {


    {
      {
      }
    }

    {
      tmp = openat(fd, file, flags, mode___0);
      tmp___0 = fd_safer(tmp);
    }
    return tmp___0;
  }
}

extern int open(const char *__file, int __oflag, ...);
int open_safer(const char *file, int flags, ...)
{
}

void *memchr2(const void *s, int c1_in, int c2_in, size_t n);
void *memchr2(const void *s, int c1_in, int c2_in, size_t n);
void *memchr2(const void *s, int c1_in, int c2_in, size_t n)
{
}

extern size_t strnlen(const char *__string, size_t __maxlen);
size_t mbslen(const char *string);
void *mmalloca(size_t n);
void freea(void *p);
static _Bool knuth_morris_pratt(const unsigned char *haystack, const unsigned char *needle, size_t needle_len, const unsigned char **resultp)
{
}

static _Bool knuth_morris_pratt_multibyte(const char *haystack, const char *needle, const char **resultp)
{
}

char *mbsstr(const char *haystack, const char *needle);
char *mbsstr(const char *haystack, const char *needle)
{
}

size_t mbslen(const char *string);
size_t mbslen(const char *string)
{
}

int mbscasecmp(const char *s1, const char *s2);
extern int tolower(int __c);
extern wint_t towlower(wint_t __wc);
int mbscasecmp(const char *s1, const char *s2);
int mbscasecmp(const char *s1, const char *s2)
{
}

const unsigned int is_basic_table[8] = {(const unsigned int) 6656, (const unsigned int) 4294967279U, (const unsigned int) 4294967294U, (const unsigned int) 2147483646};
static void *mmalloca_results[257];
void *mmalloca(size_t n)
{
}

void freea(void *p)
{
}

























extern int ungetc(int __c, FILE *__stream);
extern char *strcpy(char *__restrict __dest, const char *__restrict __src);
extern char *getenv(const char *__name);
extern char *nl_langinfo(nl_item __item);
static const char *volatile charset_aliases;
static const char *get_charset_aliases(void)
{
}

const char *locale_charset(void)
{
}

void i_ring_init(I_ring *ir, int default_val);
int i_ring_push(I_ring *ir, int val);
int i_ring_pop(I_ring *ir);
_Bool i_ring_empty(const I_ring *ir);
void i_ring_init(I_ring *ir, int default_val)
{
}

_Bool i_ring_empty(const I_ring *ir);
_Bool i_ring_empty(const I_ring *ir)
{
}

int i_ring_push(I_ring *ir, int val)
{
}

int i_ring_pop(I_ring *ir)
{
}









size_t rotr_sz(size_t x, int n)
{
}

static const struct hash_tuning default_tuning = {0.0f, 1.0f, 0.8f, 1.414f, (_Bool) 0};
static struct hash_entry *safe_hasher(const Hash_table *table, const void *key)
{
}

void *hash_lookup(const Hash_table *table, const void *entry)
{
}

size_t hash_string(const char *string, size_t n_buckets);
size_t hash_string(const char *string, size_t n_buckets)
{
}

static _Bool is_prime(size_t candidate);
static _Bool is_prime(size_t candidate);
static _Bool is_prime(size_t candidate)
{
}

static size_t next_prime(size_t candidate);
static size_t next_prime(size_t candidate);
static size_t next_prime(size_t candidate)
{
}

static size_t raw_hasher(const void *data, size_t n)
{
}

static _Bool raw_comparator(const void *a, const void *b)
{
}

static _Bool check_tuning(Hash_table *table)
{
}

static size_t compute_bucket_size(size_t candidate, const Hash_tuning *tuning)
{
}

Hash_table *hash_initialize(size_t candidate, const Hash_tuning *tuning, size_t (*hasher)(const void *, size_t), _Bool (*comparator)(const void *, const void *), void (*data_freer)(void *))
{
}

void hash_free(Hash_table *table)
{
}

static struct hash_entry *allocate_entry(Hash_table *table)
{
}

static void free_entry(Hash_table *table, struct hash_entry *entry)
{
}

static void *hash_find_entry(Hash_table *table, const void *entry, struct hash_entry **bucket_head, _Bool delete___0)
{
}

static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe)
{
}

_Bool hash_rehash(Hash_table *table, size_t candidate)
{
}

int hash_insert_if_absent(Hash_table *table, const void *entry, const void **matched_ent)
{
}

void *hash_insert(Hash_table *table, const void *entry)
{
}

void *hash_delete(Hash_table *table, const void *entry)
{
}

















static _Bool fts_palloc(FTS *sp, size_t more);
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems);
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow);
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, const char *dir);
void cycle_check_init(struct cycle_check_state *state);
_Bool cycle_check(struct cycle_check_state *state, const struct stat *sb);
static _Bool AD_compare(const void *x, const void *y)
{
}

static size_t AD_hash(const void *x, size_t table_size)
{
}

static _Bool setup_dir(FTS *fts)
{
}

static _Bool enter_dir(FTS *fts, FTSENT *ent)
{
}

static void leave_dir(FTS *fts, FTSENT *ent)
{
}

static void free_dir(FTS *sp)
{
}

static void fd_ring_clear(I_ring *fd_ring)
{
}

static void fts_set_stat_required(FTSENT *p, _Bool required)
{
}

static DIR *opendirat(int fd, const char *dir, int extra_flags, int *pdir_fd)
{
}

static void cwd_advance_fd(FTS *sp, int fd, _Bool chdir_down_one)
{
}

static int restore_initial_cwd(FTS *sp)
{
}

static int diropen(const FTS *sp, const char *dir)
{
}

FTS *fts_open(char *const *argv, int options, int (*compar)(const FTSENT **, const FTSENT **));
FTS *fts_open(char *const *argv, int options, int (*compar)(const FTSENT **, const FTSENT **))
{
}

static void fts_load(FTS *sp, FTSENT *p)
{
}

int fts_close(FTS *sp);
int fts_close(FTS *sp)
{
}

extern int fstatfs(int __fildes, struct statfs *__buf);
static _Bool dirent_inode_sort_may_be_useful(int dir_fd)
{
}

static _Bool leaf_optimization_applies(int dir_fd)
{
}

static size_t LCO_hash(const void *x, size_t table_size)
{
}

static _Bool LCO_compare(const void *x, const void *y)
{
}

static _Bool link_count_optimize_ok(const FTSENT *p)
{
}

FTSENT *fts_read(FTS *sp);
FTSENT *fts_read(FTS *sp)
{
}

int fts_set(FTS *sp, FTSENT *p, int instr);
int fts_set(FTS *sp, FTSENT *p, int instr)
{
}

static int fts_compare_ino(const struct _ftsent **a, const struct _ftsent **b)
{
}

static void set_stat_type(struct stat *st, unsigned int dtype)
{
}

static FTSENT *fts_build(FTS *sp, int type)
{
}

static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow)
{
}

static int fts_compar(const void *a, const void *b)
{
}

static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems)
{
}

static FTSENT *fts_alloc(FTS *sp, const char *name, size_t namelen)
{
}

static void fts_lfree(FTSENT *head)
{
}

static _Bool fts_palloc(FTS *sp, size_t more)
{
}

static void fts_padjust(FTS *sp, FTSENT *head)
{
}

static size_t fts_maxarglen(char *const *argv)
{
}

static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, const char *dir)
{
}

extern void *mempcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
int fd_safer(int fd)
{





  {
    if (0 <= fd)
    {
      if (fd <= 2)
      {
        {
        }
      }

    }

    return fd;
  }
}

extern int fcntl(int __fd, int __cmd, ...);
int rpl_fcntl(int fd, int action, ...);
static int have_dupfd_cloexec = 0;
int rpl_fcntl(int fd, int action, ...)
{
}

volatile int exit_failure = (volatile int) 1;
extern struct _IO_FILE *stdin;








int add_exclude_fp(void (*add_func)(struct exclude *, const char *, int, void *), struct exclude *ex, FILE *fp, int options, char line_end, void *data);
_Bool excluded_file_name(const struct exclude *ex, const char *f);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf);
_Bool exclude_fnmatch(const char *pattern, const char *f, int options);
extern int fnmatch(const char *__pattern, const char *__name, int __flags);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf)
{
}

_Bool fnmatch_pattern_has_wildcards(const char *str, int options);
_Bool fnmatch_pattern_has_wildcards(const char *str, int options)
{
}

static void unescape_pattern(char *str)
{
}

struct exclude *new_exclude(void)
{
}

static size_t string_hasher(const void *data, size_t n_buckets)
{
}

static size_t string_hasher_ci(const void *data, size_t n_buckets)
{
}

static _Bool string_compare(const void *data1, const void *data2)
{
}

static _Bool string_compare_ci(const void *data1, const void *data2)
{
}

static void string_free(void *data)
{
}

static void new_exclude_segment(struct exclude *ex, enum exclude_type type, int options)
{
}

static int fnmatch_no_wildcards(const char *pattern, const char *f, int options)
{
}

_Bool exclude_fnmatch(const char *pattern, const char *f, int options)
{
}

_Bool exclude_patopts(const struct patopts *opts, const char *f)
{
}

static _Bool file_pattern_matches(const struct exclude_segment *seg, const char *f)
{
}

static _Bool file_name_matches(const struct exclude_segment *seg, const char *f, char *buffer___0)
{
}

_Bool excluded_file_name(const struct exclude *ex, const char *f)
{
}

void add_exclude(struct exclude *ex, const char *pattern, int options)
{
}

int add_exclude_fp(void (*add_func)(struct exclude *, const char *, int, void *), struct exclude *ex, FILE *fp, int options, char line_end, void *data)
{
}

static void call_addfn(struct exclude *ex, const char *pattern, int options, void *data)
{
}

int add_exclude_file(void (*add_func)(struct exclude *, const char *, int), struct exclude *ex, const char *file_name___1, int options, char line_end)
{
}

int dup_safer(int fd)
{
}

static _Bool is_zero_or_power_of_two(uintmax_t i)
{
}

void cycle_check_init(struct cycle_check_state *state)
{
}

_Bool cycle_check(struct cycle_check_state *state, const struct stat *sb)
{
}

int should_colorize(void);
void init_colorize(void);
void print_start_colorize(const char *sgr_start___0, const char *sgr_seq);
void print_end_colorize(const char *sgr_end___0);
int should_colorize(void)
{
}

void init_colorize(void)
{
  {
    return;
  }
}

void print_start_colorize(const char *sgr_start___0, const char *sgr_seq)
{
}

void print_end_colorize(const char *sgr_end___0)
{
}

void close_stdout(void);
extern void _exit(int __status);
int close_stream(FILE *stream);
static const char *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void)
{









  {
    {


























    }







  }
}

extern size_t __fpending(FILE *__fp);
int close_stream(FILE *stream)
{




  _Bool fclose_fail;


  int *tmp___3;
  {
    {






    }




    {
      if (fclose_fail)
      {




        {
          {
          }
          if ((* tmp___3) != 9)
          {




            {
            }

          }

        }

      }

    }

    return 0;
  }
}

int set_cloexec_flag(int desc, _Bool value)
{
}

extern void *memrchr(const void *__s, int __c, size_t __n);
int c_tolower(int c);
int c_strcasecmp(const char *s1, const char *s2);
int c_strcasecmp(const char *s1, const char *s2)
{
}

_Bool c_isspace(int c);
_Bool c_isspace(int c);
_Bool c_isspace(int c)
{
}

int c_tolower(int c);
int c_tolower(int c)
{
}

int set_binary_mode(int fd, int mode___0)
{
  {
    return 0;
  }
}

ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize);
void (*argmatch_die)(void);
void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem);
void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize);
ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void));
extern int putc_unlocked(int __c, FILE *__stream);
void usage(int status);
static void __argmatch_die(void)
{
}

void (*argmatch_die)(void) = & __argmatch_die;
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize);
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize)
{
}

void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem)
{
}

void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize)
{
}

ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void))
{
}

















#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
int match_icase;
int match_words;
int match_lines;
unsigned char eolbyte;








extern pcre_jit_stack *pcre_jit_stack_alloc(int, int);
extern void pcre_assign_jit_stack(pcre_extra *, pcre_jit_stack *(*)(void *), void *);
static pcre *cre;
static pcre_extra *extra;
static pcre_jit_stack *jit_stack;
void Pcompile(const char *pattern, size_t size)
{
}

size_t Pexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
}

void kwsincr(kwset_t kwset___1, const char *text, size_t len);
void kwsprep(kwset_t kwset___1);
size_t kwsexec(kwset_t kwset___1, const char *text, size_t size, struct kwsmatch *kwsmatch);
void kwsinit(kwset_t *kwset___1);
char *mbtoupper(const char *beg, size_t *n, mb_len_map_t **len_map_p);
ptrdiff_t mb_goback(const char **mb_start, const char *cur, const char *end);
wint_t mb_prev_wc(const char *buf, const char *cur, const char *end);
wint_t mb_next_wc(const char *cur, const char *end);
void Fcompile(const char *pattern, size_t size);
size_t Fexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr);
static _Bool wordchar(wint_t wc)
{
}

static kwset_t kwset;
void Fcompile(const char *pattern, size_t size)
{
}

static void mb_case_map_apply(const mb_len_map_t *map, size_t *off, size_t *len)
{
}

size_t Fexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
}

kwset_t kwsalloc(const char *trans___0);
static unsigned char to_uchar(char ch)
{
  {
    return (unsigned char) ch;
  }
}

extern void _obstack_newchunk(struct obstack *, int);
extern int _obstack_begin(struct obstack *, int, int, void *(*)(long), void (*)(void *));
static char tr(const char *trans___0, char c)
{

  int tmp___0;
  {






    {
      tmp___0 = (int) c;
    }

    return (char) tmp___0;
  }
}

kwset_t kwsalloc(const char *trans___0)
{
  struct kwset *kwset___1;
  struct kwset *tmp;



  struct obstack *__o1;
  void *__value;
  char *tmp___0;
  char *tmp___1;
  {
    {
      tmp = (struct kwset *) xmalloc(sizeof(* kwset___1));
      kwset___1 = tmp;
      _obstack_begin(& kwset___1->obstack, 0, 0, (void *(*)(long)) (& xmalloc), & free);




    }









    if (((unsigned long) __o1->next_free) == ((unsigned long) __value))








    {
      tmp___0 = (char *) 0;
    }

    if ((sizeof(long)) < (sizeof(void *)))
    {
      tmp___1 = __o1->object_base;
    }
    else
    {
      tmp___1 = (char *) 0;
    }







    kwset___1->trie = (struct trie *) __value;

    kwset___1->trie->links = (struct tree *) ((void *) 0);


    kwset___1->trie->fail = (struct trie *) ((void *) 0);






    return kwset___1;
  }
}

void kwsincr(kwset_t kwset___1, const char *text, size_t len)
{
  struct trie *trie;




  struct tree *kwset_link;
  struct tree *links[12];

  int depth___0;


























  {



    {
      while (1)
      {

























































        {



































































































































          {




            {




              {
                if (links[depth___0]->balance)
                {


























































































                  {
                  }

                }

              }

            }

          }

        }

        trie = kwset_link->trie;
      }






















    }

    return;
  }
}

static void enqueue(struct tree *tree, struct trie **last)
{
  struct trie *tmp;
  {
    if (! tree)
    {
      return;
    }

    {


      tmp = tree->trie;
      (* last)->next = tmp;
      * last = tmp;
    }
    return;
  }
}

static void treefails(const struct tree *tree, const struct trie *fail, struct trie *recourse)
{
  struct tree *kwset_link;
  {
    if (! tree)
    {









      {




        {
          goto while_break;
        }

        kwset_link = (struct tree *) fail->links;












































      }




    }
    while_break:



  }
}

static void treedelta(const struct tree *tree, unsigned int depth___0, unsigned char *delta)
{
  {
    if (! tree)
    {
      return;





    }
    if (depth___0 < ((unsigned int) (* (delta + ((const int) tree->label)))))
    {
      * (delta + ((const int) tree->label)) = (unsigned char) depth___0;
    }

    return;
  }
}

static int hasevery(const struct tree *a, const struct tree *b)
{


  {
    if (! b)
    {



















      {



        if (a)
        {


















        }

      }




    }




  }
}

static void treenext(const struct tree *tree, struct trie **next)
{
  {
    if (! tree)
    {







    }
    return;
  }
}

void kwsprep(kwset_t kwset___1)
{
  const char *trans___0;
  int i;
  unsigned char deltabuf[256];
  unsigned char *delta;
  unsigned char *tmp;
  int tmp___0;
  struct trie *curr;
  struct trie *last;
  struct trie *fail;































  {











    {










      {




        {













          {




            {






















            }

            fail = fail->fail;
          }




        }



      }




    }



    {
      while (1)
      {



















      }




    }
    while_break___1:






    {






































































































      {














































































        {
        }


















        {




          {
          }

          {
          }
        }




      }



    }

    return;
  }
}

static _Bool bm_delta2_search(const char **tpp, const char *ep, const char *sp, int len, const char *trans___0, char gc1, char gc2, const unsigned char *d1, kwset_t kwset___1)
{


  int skip;
  int i;




  char tmp___3;


  {



    {
      while (1)
      {



        {


        }
        if (((int) tmp___3) == ((int) gc2))
        {
          {
            while (1)
            {





              {










              }

            }









































            {


            }

          }

        }




        {

















        }

        skip = i - 1;
      }




    }




  }
}

static const char *memchr_kwset(const char *s, size_t n, kwset_t kwset___1)
{
  const char *tmp;








  {
    if (kwset___1->gc1help < 0)
    {
      {
        tmp = (const char *) memchr((const void *) s, (int) kwset___1->gc1, n);
      }
      return tmp;








      {










        {
        }

      }




    }





    {
    }

  }
}

static size_t bmexec_trans(kwset_t kwset___1, const char *text, size_t size)
{


























  {











    {
      {
























        {




          {


























            {
              {



































              }

            }

          }












        }




      }












      {

























        {
        }

      }




    }




  }
}

static size_t bmexec(kwset_t kwset___1, const char *text, size_t size)
{

  size_t tmp___0;
  size_t tmp___1;
  {






    {
      {
        tmp___0 = bmexec_trans(kwset___1, text, size);
        tmp___1 = tmp___0;
      }
    }

    return (size_t) tmp___1;
  }
}

static size_t cwexec(kwset_t kwset___1, const char *text, size_t len, struct kwsmatch *kwsmatch)
{
}

size_t kwsexec(kwset_t kwset___1, const char *text, size_t size, struct kwsmatch *kwsmatch)
{
  size_t ret;
  size_t tmp;

  {
    if (kwset___1->words == 1L)
    {
      {
        tmp = bmexec(kwset___1, text, size);
        ret = tmp;
      }
      if (ret != 0xffffffffffffffffUL)
      {



      }

      return ret;
    }

  }
}

extern reg_syntax_t re_set_syntax(reg_syntax_t __syntax);
extern const char *re_compile_pattern(const char *__pattern, size_t __length, struct re_pattern_buffer *__buffer);
extern regoff_t re_search(struct re_pattern_buffer *__buffer, const char *__string, __re_idx_t __length, __re_idx_t __start, regoff_t __range, struct re_registers *__regs);
extern regoff_t re_match(struct re_pattern_buffer *__buffer, const char *__string, __re_idx_t __length, __re_idx_t __start, struct re_registers *__regs);
struct dfa *dfaalloc(void);
struct dfamust *dfamusts(const struct dfa *d);
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol);
void dfacomp(const char *s, size_t len, struct dfa *d, int searchflag);
char *dfaexec(struct dfa *d, const char *begin, char *end, int allow_nl, size_t *count, int *backref);
struct dfa *dfasuperset(const struct dfa *d);
_Bool dfaisfast(const struct dfa *d);
void dfawarn(const char *mesg);
void dfaerror(const char *mesg);
void GEAcompile(const char *pattern, size_t size, reg_syntax_t syntax_bits___0);
size_t EGexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr);
static _Bool wordchar___0(wint_t wc)
{
  int tmp;
  int tmp___0;
  {
    if (wc == 95U)
    {
    }
    else
    {
      {
        tmp = iswalnum(wc);
      }
      if (tmp)
      {
      }
      else
      {
        tmp___0 = 0;
      }

    }

    return (_Bool) tmp___0;
  }
}

static kwset_t kwset___0;
static struct dfa *dfa;
static struct patterns patterns0;
static struct patterns *patterns;
static size_t pcount;
static size_t kwset_exact_matches;
static _Bool begline;
void dfaerror(const char *mesg);
void dfaerror(const char *mesg)
{
}

static enum __anonenum_mode_60 mode;
void dfawarn(const char *mesg)
{
}

static void kwsmusts(void)
{
  const struct dfamust *dm;
  const struct dfamust *tmp;
  size_t old_len;
  size_t tmp___0;
  size_t new_len;
  char *must___0;
  char *tmp___1;
  char *mp;
  size_t tmp___2;
  {
    {
      tmp = (const struct dfamust *) dfamusts((const struct dfa *) dfa);

    }
    if (dm)
    {
      {




        {









          {






            old_len = tmp___0;


            must___0 = tmp___1;





          }
          if (dm->endline)
          {
            * (mp + old_len) = (char) eolbyte;
          }

          {
            kwsincr(kwset___0, (const char *) must___0, new_len);

          }



        }








      }

      {
        while (1)
        {













          {
            tmp___2 = strlen((const char *) dm->must);

          }
          __Cont___0:
          dm = (const struct dfamust *) dm->next;

        }








      }

    }

    return;
  }
}

static const char line_beg_no_bk[3] = {(const char) '^', (const char) '(', (const char) '\000'};
static const char line_end_no_bk[3] = {(const char) ')', (const char) '$', (const char) '\000'};
static const char word_beg_no_bk[19] = {(const char) '(', (const char) '^', (const char) '|', (const char) '[', (const char) '^', (const char) '[', (const char) ':', (const char) 'a', (const char) 'l', (const char) 'n', (const char) 'u', (const char) 'm', (const char) ':', (const char) ']', (const char) '_', (const char) ']', (const char) ')', (const char) '(', (const char) '\000'};
static const char word_end_no_bk[19] = {(const char) ')', (const char) '(', (const char) '[', (const char) '^', (const char) '[', (const char) ':', (const char) 'a', (const char) 'l', (const char) 'n', (const char) 'u', (const char) 'm', (const char) ':', (const char) ']', (const char) '_', (const char) ']', (const char) '|', (const char) '$', (const char) ')', (const char) '\000'};
static const char line_beg_bk[4] = {(const char) '^', (const char) '\\', (const char) '(', (const char) '\000'};
static const char line_end_bk[4] = {(const char) '\\', (const char) ')', (const char) '$', (const char) '\000'};
static const char word_beg_bk[23] = {(const char) '\\', (const char) '(', (const char) '^', (const char) '\\', (const char) '|', (const char) '[', (const char) '^', (const char) '[', (const char) ':', (const char) 'a', (const char) 'l', (const char) 'n', (const char) 'u', (const char) 'm', (const char) ':', (const char) ']', (const char) '_', (const char) ']', (const char) '\\', (const char) ')', (const char) '\\', (const char) '(', (const char) '\000'};
static const char word_end_bk[23] = {(const char) '\\', (const char) ')', (const char) '\\', (const char) '(', (const char) '[', (const char) '^', (const char) '[', (const char) ':', (const char) 'a', (const char) 'l', (const char) 'n', (const char) 'u', (const char) 'm', (const char) ':', (const char) ']', (const char) '_', (const char) ']', (const char) '\\', (const char) '|', (const char) '$', (const char) '\\', (const char) ')', (const char) '\000'};
void GEAcompile(const char *pattern, size_t size, reg_syntax_t syntax_bits___0)
{









  char *n;
  char *tmp___1;







  {


    {










      {



        {


        }




        {









        }













      }















      {
        _L:
        {


          n = tmp___1;
        }

        if (match_lines)
        {

















































        }
      }





    }

    {




    }
    return;
  }
}

size_t EGexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{


  const char *end;
  const char *ptr;





  regoff_t start;
  size_t len;












  size_t offset;
















  {
    {












      {









        if (! start_ptr)
        {




          {
            {


            }
            if (offset == 0xffffffffffffffffUL)
            {















            }








            {





              {













                {









                  {












































































                    {





                    }

                  }

                  {
                  }
                }




              }







              {












              }

            }

          }









          {


























          }



















          {




            {







            }






            {
              if (0 <= start)
              {







                {










                  {







                  }








                  {
                    if (len == ((size_t) ((end - ptr) - 1L)))
                    {
                    }

                  }
















































































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
}

void dfafree(struct dfa *d);
void dfainit(struct dfa *d);
void dfaparse(const char *s, size_t len, struct dfa *d);
void dfaanalyze(struct dfa *d, int searchflag);
void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0);
extern int isalnum(int);
extern int isalpha(int);
extern int iscntrl(int);
extern int isdigit(int);
extern int islower(int);
extern int isgraph(int);
extern int isprint(int);
extern int ispunct(int);
extern int isspace(int);
extern int isupper(int);
extern int isxdigit(int);
extern int toupper(int __c);
extern int isblank(int);








extern wint_t towupper(wint_t __wc);
static unsigned char to_uchar___0(char ch)
{
  {
    return (unsigned char) ch;
  }
}

static void dfamust(struct dfa *d);
static void regexp(void);
static void dfambcache(struct dfa *d)
{
  int i;
  char c;

  mbstate_t s;
  wchar_t wc;
  size_t tmp___0;

  {
    i = - 128;
    {
      while (1)
      {



        if (! (i <= 127))
        {
          goto while_break;
        }

        {
          c = (char) i;



          tmp___0 = mbrtowc((wchar_t *) (& wc), (const char *) ((const char *) (& c)), (size_t) 1, (mbstate_t *) (& s));
        }









        i++;
      }




    }
    while_break:



  }
}

static size_t mbs_to_wchar(wint_t *pwc, const char *s, size_t n, struct dfa *d)
{
  unsigned char uc;
  wint_t wc;

  size_t nbytes;

  {
    uc = (unsigned char) (* (s + 0));
    wc = d->mbrtowc_cache[uc];

    {
      {
      }
      if (0UL < nbytes)
      {
      }

      {
      }
    }

    * pwc = wc;
    return (size_t) 1;
  }
}

static _Bool tstbit(unsigned int b, charclass_word *const c)
{
  {
    return (_Bool) (((* (c + (b / 32U))) >> (b % 32U)) & 1U);
  }
}

static void setbit(unsigned int b, charclass_word *c)
{
  {
    * (c + (b / 32U)) |= 1U << (b % 32U);

  }
}

static void clrbit(unsigned int b, charclass_word *c)
{
  {
    * (c + (b / 32U)) &= ~ (1U << (b % 32U));

  }
}

static void copyset(charclass_word *const src, charclass_word *dst)
{
  {
    {
      memcpy((void *) ((void *) dst), (const void *) ((const void *) src), sizeof(charclass));
    }
    return;
  }
}

static void zeroset(charclass_word *s)
{
  {
    {
      memset((void *) s, 0, sizeof(charclass));
    }
    return;
  }
}

static void notset(charclass_word *s)
{
  int i;
  {
    i = 0;
    {
      while (1)
      {










      }




    }
    while_break:



  }
}

static _Bool equal(charclass_word *const s1, charclass_word *const s2)
{
  int tmp;
  {
    {
      tmp = memcmp((const void *) s1, (const void *) s2, sizeof(charclass));
    }
    return (_Bool) (tmp == 0);
  }
}

static void *maybe_realloc(void *ptr, size_t nitems, size_t *nalloc, size_t itemsize)
{
  void *tmp;
  {
    if (nitems < (* nalloc))
    {
      return ptr;
    }

    {
      * nalloc = nitems;
      tmp = x2nrealloc(ptr, nalloc, itemsize);
    }
    return tmp;
  }
}

static size_t dfa_charclass_index(struct dfa *d, charclass_word *const s)
{
  size_t i;

  {
    i = (size_t) 0;
    {
      while (1)
      {




        {
          goto while_break;








        }

        i++;
      }




    }
    while_break:
    {
      d->charclasses = (charclass *) maybe_realloc((void *) d->charclasses, d->cindex, & d->calloc, sizeof(* d->charclasses));

      copyset(s, * (d->charclasses + i));
    }

    return i;
  }
}

static struct dfa *dfa___0;
static size_t charclass_index(charclass_word *const s)
{
  size_t tmp;
  {
    {
      tmp = dfa_charclass_index(dfa___0, s);
    }
    return tmp;
  }
}

static reg_syntax_t syntax_bits;
static reg_syntax_t syntax_bits_set;
static _Bool case_fold;
static unsigned char eolbyte___0;
static int sbit[256];
static charclass letters;
static charclass newline;
static int char_context(unsigned char c)
{
  const unsigned short **tmp;
  {
    if (((int) c) == ((int) eolbyte___0))
    {
      return 4;
    }

    {
      tmp = __ctype_b_loc();
    }
    if (((const int) (* ((* tmp) + ((int) c)))) & 8)
    {
      return 2;
    }
    else
    {
      if (((int) c) == 95)
      {
        return 2;
      }

    }

    return 1;
  }
}

static int wchar_context(wint_t wc)
{
}

void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol)
{

  {





    {
      while (1)
      {




        {
          goto while_break;

























        }





      }




    }
    while_break:



  }
}

static _Bool setbit_wc(wint_t wc, charclass_word *c)
{
  int b;

  {
    {


    }
    if (b == (- 1))
    {
    }

    {
      setbit((unsigned int) b, c);
    }
    return (_Bool) 1;
  }
}

static void setbit_case_fold_c(int b, charclass_word *c)
{
}

static int utf8 = - 1;
int using_utf8(void)
{



  int tmp___0;

  {
    if (utf8 < 0)
    {
      {











      }

      utf8 = tmp___0;
    }

    return utf8;
  }
}

static _Bool using_simple_locale(void);
static int unibyte_c = - 1;
static _Bool using_simple_locale(void)
{





  {
    if (dfa___0->multibyte)
    {
      return (_Bool) 0;
    }
    else
    {
      if (unibyte_c < 0)
      {
      }

    }

  }
}

static const char *lexptr;
static size_t lexleft;
static token lasttok;
static _Bool laststart;
static size_t parens;
static int minrep;
static int maxrep;
static int cur_mb_len = 1;
static wint_t wctok;
static const short lonesome_lower[19] = {(const short) 181, (const short) 305, (const short) 383, (const short) 453, (const short) 456, (const short) 459, (const short) 498, (const short) 837, (const short) 962, (const short) 976, (const short) 977, (const short) 981, (const short) 982, (const short) 1008, (const short) 1009, (const short) 1010, (const short) 1013, (const short) 7835, (const short) 8126};
static int case_folded_counterparts(wchar_t c, wchar_t *folded)
{
  int i;

  wint_t uc;






  wint_t li;

  wint_t tmp___5;
  {
    {





    }
    if (uc != ((wint_t) c))
    {








      {
        {





























          {
            if (li != ((wint_t) c))
            {
              {
                tmp___5 = towupper(li);
              }
              if (tmp___5 == uc)
              {



              }

            }

          }

        }

        i++;
      }




    }




  }
}

static const struct dfa_ctype prednames[13] = {{"alpha", & isalpha, (_Bool) 0}, {"upper", & isupper, (_Bool) 0}, {"lower", & islower, (_Bool) 0}, {"digit", & isdigit, (_Bool) 1}, {"xdigit", & isxdigit, (_Bool) 0}, {"space", & isspace, (_Bool) 0}, {"punct", & ispunct, (_Bool) 0}, {"alnum", & isalnum, (_Bool) 0}, {"print", & isprint, (_Bool) 0}, {"graph", & isgraph, (_Bool) 0}, {"cntrl", & iscntrl, (_Bool) 0}, {"blank", & isblank, (_Bool) 0}, {(const char *) ((void *) 0), (predicate *) ((void *) 0), (_Bool) 0}};
static const struct dfa_ctype *find_pred(const char *str)
{
  unsigned int i;

  {
    i = 0U;
    {
      while (1)
      {




        {
        }





        {
          goto while_break;
        }

        i++;
      }




    }
    while_break:
    ;

    return (const struct dfa_ctype *) (& prednames[i]);
  }
}

static charclass zeroclass;
static token parse_bracket_exp(void)
{
  _Bool invert;
  int c;
  int c1;
  int c2;
  charclass ccl;
  _Bool known_bracket_exp;
  int colon_warning_state;
  wint_t wc;
  wint_t wc2;
  wint_t wc1;
  struct mb_char_classes *work_mbc;
  size_t chars_al;
  size_t ranges_al;























  size_t len;
















  int tmp___25;
  const struct dfa_ctype *pred;





  int tmp___30;

  char *tmp___32;
  wint_t _wc___4;
  size_t nbytes___4;





  size_t nbytes___5;

















  size_t nbytes___8;



  size_t tmp___52;


  int tmp___55;
  int tmp___56;






















































  {








    {
      {





      }
    }

    {




      {














































        {

































        }




      }
      while_break___0:
      {


      }










      {






        {
          {
            while (1)
            {

































            }




          }
          while_break___2:
          ;

          if (c1 == 58)
          {





          }
          else
          {







            {
              if (c1 == 61)
              {
                _L___0:



                {
                  while (1)
                  {



                    {
                      while (1)
                      {

































                      }




                    }
                    while_break___4:
                    ;

                    if (c == c1)
                    {





                    }
                    else
                    {


                      {
                      }


                    }

                    if (len < 32UL)
                    {



                    }

                  }










                  {

































                  }




                }
                while_break___5:



                {
                  if (case_fold)
                  {
                    {
                    }




                    {
                      {
                      }
                      if (tmp___25 == 0)
                      {
                      }

                    }





















                    {
                      {






                      }
                    }






                    {



















                    }




                  }








                  {

































                  }




                }
                while_break___7:



              }

            }

          }
















































































































































          {
            if (c2 == 92)
            {
              if (syntax_bits & 1UL)
              {
                {
                  while (1)
                  {







                    {
                      {
                      }
                      if (nbytes___8 == 1UL)
                      {
                      }

                    }

                  }




                }



              }






              {
                if (wc2 != 4294967295U)
                {
                  {
                    work_mbc->ranges = (struct __anonstruct_ranges_39 *) maybe_realloc((void *) work_mbc->ranges, work_mbc->nranges + 2UL, & ranges_al, sizeof(* work_mbc->ranges));
                  }






















































                  {




                    {
                    }

                    {
                    }
                  }




                }











































































              }




            }
            while_break___14:



          }

        }











        {
          if (case_fold)
          {
          }

        }





        {




















































        }

      }






































    }

    if (invert)
    {
    }

    {
    }
  }
}

static token lex(void)
{
  int c;
  int c2;
  _Bool backslash;

  int i;
  wint_t _wc;
  size_t nbytes;




  int tmp___3;
  int tmp___4;


  int tmp___7;
  const char *p;




















  {


    {
      while (1)
      {




        {
        }

        {
          while (1)
          {





























          }




        }
        while_break___0:















































































































































































































        {
          if (lexleft == 0UL)
          {


          }
          else
          {































            {




              {
                if (lexleft > 1UL)
                {
                }

              }





              {
                if (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                {
                }

              }

            }

          }







          {
          }

        }







        {






          {
          }

        }




























        {















          {
          }

        }






























        {
          if (laststart)
          {
          }

        }















        {
        }

        {
          while (1)
          {



































            {
            }

            {
              while (1)
              {











                {
                  if (32768 < (((maxrep * 10) + ((int) (* p))) - 48))
                  {
                  }

                }

              }




            }



          }

        }





        {















          {





























































































































            {










              {
              }

            }




          }













          {




            {
            }

            {
            }
          }




        }











        {










          {













            {
              if (c2 == 95)
              {
              }

            }

          }




        }




        {
        }


















        {


        }








      }




    }






  }
}

static token tok;
static size_t depth;
static void addtok_mb(token t, int mbprop)
{
  size_t tmp;
  {
    if (dfa___0->talloc == dfa___0->tindex)
    {
      {
        dfa___0->tokens = (token *) x2nrealloc((void *) dfa___0->tokens, & dfa___0->talloc, sizeof(* dfa___0->tokens));
      }
      if (dfa___0->multibyte)
      {
        {
          dfa___0->multibyte_prop = (int *) xnrealloc((void *) dfa___0->multibyte_prop, dfa___0->talloc, sizeof(* dfa___0->multibyte_prop));
        }
      }






    }

    tmp = dfa___0->tindex;
    dfa___0->tindex++;
    * (dfa___0->tokens + tmp) = t;














































    dfa___0->nleaves++;


    depth++;






    {
      dfa___0->depth = depth;
    }

    return;
  }
}

static void addtok_wc(wint_t wc);
static void addtok(token t)
{
  _Bool need_or;
  struct mb_char_classes *work_mbc;
  size_t i;
  {
    if (dfa___0->multibyte)
    {
      if (t == 273L)
      {
        need_or = (_Bool) 0;
        work_mbc = dfa___0->mbcsets + (dfa___0->nmbcsets - 1UL);

        {
          i = (size_t) 0;
          {
            while (1)
            {




              {
                goto while_break;
              }

              {
              }
              if (need_or)
              {
              }

            }




          }
          while_break:


        }





        {




          {
            if (work_mbc->nranges != 0UL)
            {
              goto _L;
            }
            else
            {




              {
                if (work_mbc->ncoll_elems != 0UL)
                {
                  _L:
                  ;





                  {
                    {
                    }
                  }

                }
                else
                {
                  if (work_mbc->cset != (- 1L))
                  {
                    {
                      addtok(275L + work_mbc->cset);
                    }
                    if (need_or)
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
      else
      {
        {
          addtok_mb(t, 3);
        }
      }

    }

    return;
  }
}

static void addtok_wc(wint_t wc)
{
  unsigned char buf[16];




  int tmp___0;



  {
    {








    }










    {
      addtok_mb((token) buf[0], tmp___0);




      {









        {







        }
      }




    }




  }
}

static void add_utf8_anychar(void);
static const charclass utf8_classes[5] = {{(charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, (charclass_word) 0, (charclass_word) 0}, {((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0}, {(charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, 4294967292U & (((1U << 31) << 1) - 1U), (charclass_word) 0}, {(charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 65535}, {(charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 16711680}};
static void add_utf8_anychar(void)
{

  unsigned int i;
  charclass c;


  {


    {
      i = 0U;
      {
        while (1)
        {




          {
            goto while_break;








            {
              {
                clrbit((unsigned int) eolbyte___0, c);
              }
            }













          }
        }




      }
      while_break:































      {





        {







        }
      }




    }




  }
}

static void atom(void)
{





  int tmp___1;


  {
    if (tok == 274L)
    {






      {
        {
          addtok_wc(wctok);
        }
        if (case_fold)
        {
          {






            {




              {







              }
            }




          }



        }

      }








      {
        {
          tmp___1 = using_utf8();
        }













        {






















          {








            {








              {








                {






                  {






                    {








                      {






                        {






                          {






                            {
                              if (tok == 270L)
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

              }

            }

          }

        }


      }

    }

    return;
  }
}

static size_t nsubtoks(size_t tindex)
{
}

static void copytoks(size_t tindex, size_t ntokens)
{
}

static void closure(void)
{




  {
    {
      atom();



      {




        {
          if (! (tok == 265L))
          {
            if (! (tok == 266L))
            {





            }

          }

        }

        if (tok == 267L)
        {




          {
            if (maxrep)
            {










              {
              }

              {






















                {




                  {
                  }

                  {
                  }
                }




              }



              {
              }
            }

          }

        }
        else
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

static void branch(void)
{
  {
    {
      closure();



      {



        if (tok != 271L)
        {
          if (tok != 269L)
          {









          }





        }

        {
          closure();

        }
      }




    }
    while_break:



  }
}

static void regexp(void)
{
  {
    {
      branch();



      {




        {







        }
      }




    }




  }
}

void dfaparse(const char *s, size_t len, struct dfa *d)
{




  {
    dfa___0 = d;
    lexptr = s;
    lexleft = len;












    {
      {
      }
    }

    {
      tok = lex();

      regexp();
    }
    if (tok != (- 1L))
    {
      {
      }
    }

    {
      addtok((token) (0xffffffffffffffffUL - d->nregexps));

    }








  }
}

static void copy(const position_set *src, position_set *dst)
{
  {
    if (dst->alloc < ((size_t) src->nelem))
    {
      {


        dst->elems = (position *) x2nrealloc((void *) 0, & dst->alloc, sizeof(* dst->elems));
      }
    }

    {
      memcpy((void *) ((void *) dst->elems), (const void *) ((const void *) src->elems), (size_t) (src->nelem * ((const size_t) (sizeof(* dst->elems)))));
      dst->nelem = (size_t) src->nelem;
    }
    return;
  }
}

static void alloc_position_set(position_set *s, size_t size)
{
  {
    {
      s->elems = (position *) xnmalloc(size, sizeof(* s->elems));


    }
    return;
  }
}

static void insert(position p, position_set *s)
{
  size_t count;
  size_t lo;
  size_t hi;
  size_t i;
  size_t mid;
  {





































































  }
}

static void merge(const position_set *s1, const position_set *s2, position_set *m)
{













  {









    {
      while (1)
      {

















        {

















          {








          }

        }

      }










      {













      }










      {













      }




    }




  }
}

static void delete(position p, position_set *s)
{
  size_t i;
  {
    i = (size_t) 0;
    {
      while (1)
      {













      }































      ;

    }

    return;
  }
}

static state_num state_index(struct dfa *d, const position_set *s, int context)
{




  {


    {
      while (1)
      {










      }










      {
































































































































      }




    }




  }
}

static void epsclosure(position_set *s, const struct dfa *d, char *visited)
{
  size_t i;



  _Bool initialized;
  {


    {
      while (1)
      {




        {
          goto while_break;
        }

        if ((* (d->tokens + (s->elems + i)->index)) >= 256L)
        {
          if ((* (d->tokens + (s->elems + i)->index)) != 257L)
          {
            if ((* (d->tokens + (s->elems + i)->index)) != 272L)
            {
              if ((* (d->tokens + (s->elems + i)->index)) != 273L)
              {
                if ((* (d->tokens + (s->elems + i)->index)) < 275L)
                {
                  if (! initialized)
                  {
                    {


                    }
                  }

                  {



                  }






























































                  {
                    while (1)
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




    }
    while_break:



  }
}

static int charclass_context(charclass_word *c)
{



  {
    {











      {



















      }




    }




  }
}

static int state_separate_contexts(const position_set *s)
{


  {


    {
      while (1)
      {




        {
          goto while_break;
        }











      }




    }
    while_break:



  }
}

void dfaanalyze(struct dfa *d, int searchflag)
{










  size_t i;










  {
    {
















      {






























































































































        {


          {
            while (1)
            {











            }




          }













































































          {






            {
              if ((* (d->tokens + i)) == 273L)
              {









                {
                  {



                  }
                }

              }

            }

          }

        }

        i++;
      }











      {




        {






        }
      }




    }























  }
}

void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0)
{
  leaf_set grps[256];
  charclass labels[256];
  size_t ngrps;
  position pos;
  charclass matches;





  position_set follows;
  position_set tmp;
  int possible_contexts;
  int separate_contexts;
  state_num state;
  state_num state_newline;
  state_num state_letter;
  _Bool next_isnt_1st_byte;
  size_t i;
  size_t j;
  size_t k;
  _Bool tmp___0;






  const unsigned short **tmp___6;
  int c;
  const unsigned short **tmp___7;








  {
    {







      {









        if ((* (d->tokens + pos.index)) >= 0L)
        {
          if ((* (d->tokens + pos.index)) < 256L)





















          {























































            ;


























            ;


























            ;






            {



              if (j < 8UL)
              {









              }





            }











          }






          {









            {
              if ((* (d->tokens + pos.index)) < 256L)
              {
                {





                }

              }

            }



            {
              while (1)
              {












              }


















              {

















              }


























            }

            __Cont___1:


          }




        }
        while_break___4:

















      }




    }
    while_break:
    {


    }

    if (d->searchflag)
    {
      {



      }
      if (separate_contexts & 4)





















      {
        while (1)
        {




          {





















          }

          i++;
        }




      }



    }
    else























    {
      while (1)
      {



















































































        {
          if (! d->multibyte)
          {
            {


            }
          }
          else
          {
            if (! next_isnt_1st_byte)
            {
            }

          }

        }

        {

































          {









            {
              while (1)
              {









                {
                  c = (int) ((j * 32UL) + k);
                  if (c == ((int) eolbyte___0))




                  {
                    {
                      tmp___7 = __ctype_b_loc();
                    }
                    if (((const int) (* ((* tmp___7) + c))) & 8)




                    {
                      if (c == 95)




                      {





                      }

                    }

                  }

                }

                k++;
              }




            }
            while_break___14:


          }




        }
        while_break___13:


      }










      {




        {






        }
      }




    }
    while_break___15:
    {


    }

    return;
  }
}

static void realloc_trans_if_necessary(struct dfa *d, state_num new_state)
{





  {


    {










































      ;

    }

    return;
  }
}

static void build_state(state_num s, struct dfa *d)
{




  {
    if (d->trcount >= 1024)
    {
      {
        while (1)
        {




          {
          }

          {
          }
        }




      }




    }














    {











      {














      }




    }

















  }
}

static void build_state_zero(struct dfa *d)
{
  int initial_tab_size;
  {
    {
      initial_tab_size = 1;






      realloc_trans_if_necessary(d, (state_num) initial_tab_size);

    }
    return;
  }
}

static status_transit_state transit_state_singlebyte(struct dfa *d, state_num s, const unsigned char *p, state_num *next_state)
{
}

static int match_anychar(struct dfa *d, state_num s, position pos, wint_t wc, size_t mbclen)
{
}

static int match_mb_charset(struct dfa *d, state_num s, position pos, const char *p, wint_t wc, size_t match_len)
{
}

static int *check_matching_with_multibyte_ops(struct dfa *d, state_num s, const char *p, wint_t wc, size_t mbclen)
{
}

static status_transit_state transit_state_consume_1char(struct dfa *d, state_num s, const unsigned char **pp, wint_t wc, size_t mbclen, int *match_lens)
{
}

static state_num transit_state(struct dfa *d, state_num s, const unsigned char **pp, const unsigned char *end)
{
}

char *dfaexec(struct dfa *d, const char *begin, char *end, int allow_nl, size_t *count, int *backref)
{
  state_num s;
  state_num s1;
  const unsigned char *p;













  {



    {
      {
        build_state_zero(d);
      }
    }









    {
      {
      }








      {



        if (d->multibyte)
        {
          {
            while (1)
            {



























































































































































            }
          }








          {
          }

        }

        s = (state_num) 0;
        __Cont:
        ;

      }









    }




  }
}

struct dfa *dfasuperset(const struct dfa *d);
struct dfa *dfasuperset(const struct dfa *d)
{
  {
    return (struct dfa *) d->superset;
  }
}

_Bool dfaisfast(const struct dfa *d);
_Bool dfaisfast(const struct dfa *d)
{
  {
    return (_Bool) d->fast;
  }
}

static void free_mbdata(struct dfa *d)
{



  {
    {





      {




        {












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
}

void dfainit(struct dfa *d)
{
  size_t tmp;
  {
    {


      d->multibyte = (_Bool) (tmp > 1UL);

    }
    return;
  }
}

static void dfaoptimize(struct dfa *d)
{



  {
    {


    }





    {
      while (1)
      {




        {
          goto while_break;
        }


































      }




    }
    while_break:




















  }
}

static void dfassbuild(struct dfa *d)
{
  size_t i;
  size_t j;
  charclass ccl;
  _Bool have_achar;
  _Bool have_nchar;








  {
    {



























      {
























































































        {



















        }





      }




    }
    while_break:


    if (have_nchar)
    {
      if (have_achar)




      {





      }

    }
    else
    {
      {


      }
    }

    return;
  }
}

void dfacomp(const char *s, size_t len, struct dfa *d, int searchflag)
{
  {
    {
      dfainit(d);
      dfambcache(d);
      dfaparse(s, len, d);
      dfamust(d);

      dfaoptimize(d);
      dfaanalyze(d, searchflag);
    }
    if (d->superset)
    {
      {


      }
    }

    return;
  }
}

void dfafree(struct dfa *d)
{



  {
    {


    }



















































































































  }
}

static char *icatalloc(char *old, const char *new)
{
  char *result;
  size_t oldsize;
  size_t newsize;
  size_t tmp;
  {
    {
      tmp = strlen(new);
      newsize = tmp;
    }
    if (newsize == 0UL)
    {
      return old;
    }

    {
      oldsize = strlen((const char *) old);
      result = (char *) xrealloc((void *) old, (oldsize + newsize) + 1UL);

    }
    return result;
  }
}

static char *istrstr(const char *lookin, const char *lookfor)
{
  const char *cp;


  {
    {





      {




        {









        }

        cp++;
      }




    }



    return (char *) ((char *) ((void *) 0));
  }
}

static void freelist(char **cpp)
{

  {
    {
      while (1)
      {




        {
          goto while_break;






        }
      }




    }
    while_break:



  }
}

static char **enlist(char **cpp, char *new, size_t len)
{
  size_t i;


  char *tmp___0;
  char *tmp___1;
  {
    {







      {




        {





        }
        if (((unsigned long) tmp___0) != ((unsigned long) ((void *) 0)))
        {
          {
            free((void *) new);
          }
          return cpp;
        }

        i++;
      }




    }



    {
      while (1)
      {




        {





        }
        if (((unsigned long) tmp___1) == ((unsigned long) ((void *) 0)))
        {















        }

      }




    }








  }
}

static char **comsubs(char *left, const char *right)
{







  {
    {






      {




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

static char **addlists(char **old, char **new)
{

  {
    {
      while (1)
      {




        {
          goto while_break;






        }
      }




    }
    while_break:



  }
}

static char **inboth(char **left, char **right)
{






  {
    {






      {




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

static must *allocmust(must *mp)
{
  must *new_mp;
  must *tmp;
  {
    {
      tmp = (must *) xmalloc(sizeof(* new_mp));
      new_mp = tmp;
      new_mp->in = (char **) xzalloc(sizeof(* new_mp->in));
      new_mp->left = (char *) xzalloc((size_t) 2);
      new_mp->right = (char *) xzalloc((size_t) 2);
      new_mp->is = (char *) xzalloc((size_t) 2);


      new_mp->prev = mp;
    }
    return new_mp;
  }
}

static void resetmust(must *mp)
{
  char tmp;

  {
    {






      * (mp->left + 0) = tmp;


    }
    return;
  }
}

static void freemust(must *mp)
{
  {
    {






    }
    return;
  }
}

static void dfamust(struct dfa *d)
{
  must *mp;
  const char *result;
  size_t ri;
  size_t i;




  token t;
  char **new;
  must *rmp;
  must *lmp;
  size_t j;
  size_t ln;
  size_t rn;
  size_t n;
  int tmp;
  size_t tmp___0;
  size_t tmp___1;
  int tmp___2;
  must *rmp___0;
  must *lmp___0;









  _Bool tmp___7;









  {






    {
      while (1)
      {














































































































































        {
          while (1)
          {



            if (((int) (* (lmp->left + i))) != 0)
            {









            }

            i++;
          }




















          {













          }










          {



























































          }








        }

        if (tmp___2 == 0)























































        {
          if (lmp___0->begline)
          {
            _L:
            if (((int) (* (rmp___0->is + 0))) != 0)
            {
              {


              }
            }
            else
            {
              if (rmp___0->endline)
              {
                {


                }
              }
              else
              {



              }

            }


          }
          else
          {



          }

        }















        {


          {
            while (1)
            {




              {
              }










            }















            {





              {





              }
              if (tmp___7)
              {












              }

            }











          }

        }



































      }

























      {




        {







        }
      }




    }




  }
}

struct dfa *dfaalloc(void)
{
  struct dfa *tmp;
  {
    {
      tmp = (struct dfa *) xmalloc(sizeof(struct dfa));
    }
    return tmp;
  }
}

struct dfamust *dfamusts(const struct dfa *d)
{
  {
    return (struct dfamust *) ((struct dfamust *) d->musts);
  }
}

extern size_t mbrlen(const char *__restrict __s, size_t __n, mbstate_t *__restrict __ps);
void build_mbclen_cache(void);
static size_t mbclen_cache[256];
static char trans[256];
void kwsinit(kwset_t *kwset___1)
{

  size_t tmp;
  {
    if (match_icase)
    {
      {
      }
      if (tmp == 1UL)
      {
        {
          while (1)
          {




            {
            }

            {
            }
          }




        }



        {
        }
      }

    }
    else
    {
      {
        * kwset___1 = kwsalloc((const char *) ((void *) 0));
      }
    }








  }
}

static char *out;
static mb_len_map_t *len_map;
static size_t outalloc;
char *mbtoupper(const char *beg, size_t *n, mb_len_map_t **len_map_p)
{
}

void build_mbclen_cache(void)
{
  int i;




  {
    i = - 128;
    {
      while (1)
      {




        {
          goto while_break;









        }
      }




    }
    while_break:



  }
}

ptrdiff_t mb_goback(const char **mb_start, const char *cur, const char *end)
{



  size_t mbclen;



  {
    {






      {




        {






        }







        {
          if (! (mbclen < 0xfffffffffffffffeUL))
          {
            {
            }
          }

        }



      }




    }









  }
}

wint_t mb_prev_wc(const char *buf, const char *cur, const char *end)
{



  {












  }
}

wint_t mb_next_wc(const char *cur, const char *end)
{
  wchar_t wc;
  mbstate_t mbs;
  unsigned int tmp___0;
  size_t tmp___1;

  {
    mbs.__count = 0;


    {
      {
        tmp___1 = mbrtowc((wchar_t *) (& wc), (const char *) cur, (size_t) (end - cur), (mbstate_t *) (& mbs));
      }
      if (tmp___1 < 0xfffffffffffffffeUL)
      {
        tmp___0 = (unsigned int) wc;
      }

    }

    return tmp___0;
  }
}





extern __off_t lseek(int __fd, __off_t __offset, int __whence);
extern int isatty(int __fd);
extern char *optarg;
extern int optind;






extern int getopt_long(int ___argc, char *const *___argv, const char *__shortopts, const struct option *__longopts, int *__longind);
static struct stat out_stat;
static int show_help;
static int show_version;
static int suppress_errors;
static int color_option;
static int only_matching;
static int align_tabs;
static const char *group_separator = "--";
static const char *selected_match_color = "01;31";
static const char *context_match_color = "01;31";
static const char *filename_color = "35";
static const char *line_num_color = "32";
static const char *byte_num_color = "32";
static const char *sep_color = "36";
static const char *selected_line_color = "";
static const char *context_line_color = "";


static void pr_sgr_start(const char *s)
{
}

static void pr_sgr_end(const char *s)
{
}

static void pr_sgr_start_if(const char *s)
{
  {
    if (color_option)
    {
      {
      }
    }

    return;
  }
}

static void pr_sgr_end_if(const char *s)
{
  {
    if (color_option)
    {
      {
      }
    }

    return;
  }
}

static void color_cap_mt_fct(void)
{
}

static void color_cap_rv_fct(void)
{
}

static void color_cap_ne_fct(void)
{
}

static const struct color_cap color_dict[12] = {{"mt", & selected_match_color, & color_cap_mt_fct}, {"ms", & selected_match_color, (void (*)(void)) ((void *) 0)}, {"mc", & context_match_color, (void (*)(void)) ((void *) 0)}, {"fn", & filename_color, (void (*)(void)) ((void *) 0)}, {"ln", & line_num_color, (void (*)(void)) ((void *) 0)}, {"bn", & byte_num_color, (void (*)(void)) ((void *) 0)}, {"se", & sep_color, (void (*)(void)) ((void *) 0)}, {"sl", & selected_line_color, (void (*)(void)) ((void *) 0)}, {"cx", & context_line_color, (void (*)(void)) ((void *) 0)}, {"rv", (const char **) ((void *) 0), & color_cap_rv_fct}, {"ne", (const char **) ((void *) 0), & color_cap_ne_fct}, {(const char *) ((void *) 0), (const char **) ((void *) 0), (void (*)(void)) ((void *) 0)}};
static struct exclude *excluded_patterns;
static struct exclude *excluded_directory_patterns;
static const char short_options[58] = {(const char) '0', (const char) '1', (const char) '2', (const char) '3', (const char) '4', (const char) '5', (const char) '6', (const char) '7', (const char) '8', (const char) '9', (const char) 'A', (const char) ':', (const char) 'B', (const char) ':', (const char) 'C', (const char) ':', (const char) 'D', (const char) ':', (const char) 'E', (const char) 'F', (const char) 'G', (const char) 'H', (const char) 'I', (const char) 'P', (const char) 'T', (const char) 'U', (const char) 'V', (const char) 'X', (const char) ':', (const char) 'a', (const char) 'b', (const char) 'c', (const char) 'd', (const char) ':', (const char) 'e', (const char) ':', (const char) 'f', (const char) ':', (const char) 'h', (const char) 'i', (const char) 'L', (const char) 'l', (const char) 'm', (const char) ':', (const char) 'n', (const char) 'o', (const char) 'q', (const char) 'R', (const char) 'r', (const char) 's', (const char) 'u', (const char) 'v', (const char) 'w', (const char) 'x', (const char) 'y', (const char) 'Z', (const char) 'z', (const char) '\000'};
static const struct option long_options[50] = {{"basic-regexp", 0, (int *) ((void *) 0), 'G'}, {"extended-regexp", 0, (int *) ((void *) 0), 'E'}, {"fixed-regexp", 0, (int *) ((void *) 0), 'F'}, {"fixed-strings", 0, (int *) ((void *) 0), 'F'}, {"perl-regexp", 0, (int *) ((void *) 0), 'P'}, {"after-context", 1, (int *) ((void *) 0), 'A'}, {"before-context", 1, (int *) ((void *) 0), 'B'}, {"binary-files", 1, (int *) ((void *) 0), 128}, {"byte-offset", 0, (int *) ((void *) 0), 'b'}, {"context", 1, (int *) ((void *) 0), 'C'}, {"color", 2, (int *) ((void *) 0), 129}, {"colour", 2, (int *) ((void *) 0), 129}, {"count", 0, (int *) ((void *) 0), 'c'}, {"devices", 1, (int *) ((void *) 0), 'D'}, {"directories", 1, (int *) ((void *) 0), 'd'}, {"exclude", 1, (int *) ((void *) 0), 131}, {"exclude-from", 1, (int *) ((void *) 0), 132}, {"exclude-dir", 1, (int *) ((void *) 0), 135}, {"file", 1, (int *) ((void *) 0), 'f'}, {"files-with-matches", 0, (int *) ((void *) 0), 'l'}, {"files-without-match", 0, (int *) ((void *) 0), 'L'}, {"group-separator", 1, (int *) ((void *) 0), 136}, {"help", 0, & show_help, 1}, {"include", 1, (int *) ((void *) 0), 130}, {"ignore-case", 0, (int *) ((void *) 0), 'i'}, {"initial-tab", 0, (int *) ((void *) 0), 'T'}, {"label", 1, (int *) ((void *) 0), 134}, {"line-buffered", 0, (int *) ((void *) 0), 133}, {"line-number", 0, (int *) ((void *) 0), 'n'}, {"line-regexp", 0, (int *) ((void *) 0), 'x'}, {"max-count", 1, (int *) ((void *) 0), 'm'}, {"no-filename", 0, (int *) ((void *) 0), 'h'}, {"no-group-separator", 0, (int *) ((void *) 0), 136}, {"no-messages", 0, (int *) ((void *) 0), 's'}, {"null", 0, (int *) ((void *) 0), 'Z'}, {"null-data", 0, (int *) ((void *) 0), 'z'}, {"only-matching", 0, (int *) ((void *) 0), 'o'}, {"quiet", 0, (int *) ((void *) 0), 'q'}, {"recursive", 0, (int *) ((void *) 0), 'r'}, {"dereference-recursive", 0, (int *) ((void *) 0), 'R'}, {"regexp", 1, (int *) ((void *) 0), 'e'}, {"invert-match", 0, (int *) ((void *) 0), 'v'}, {"silent", 0, (int *) ((void *) 0), 'q'}, {"text", 0, (int *) ((void *) 0), 'a'}, {"binary", 0, (int *) ((void *) 0), 'U'}, {"unix-byte-offsets", 0, (int *) ((void *) 0), 'u'}, {"version", 0, (int *) ((void *) 0), 'V'}, {"with-filename", 0, (int *) ((void *) 0), 'H'}, {"word-regexp", 0, (int *) ((void *) 0), 'w'}, {(const char *) 0, 0, (int *) 0, 0}};
static const char *matcher;
static const char *filename;
static size_t filename_prefix_len;
static int errseen;
static int write_error_seen;


static enum directories_type directories = (enum directories_type) 2;
static int fts_options = 793;
static enum __anonenum_devices_71 devices = (enum __anonenum_devices_71) 0;
static int grepfile(int dirdesc, const char *name, int follow, int command_line);
static int grepdesc(int desc, int command_line);


static int undossify_input(char *buf, size_t buflen);
static int is_device_mode(mode_t m)
{
}

static int usable_st_size(const struct stat *st)
{
  int tmp;
  {
    if ((st->st_mode & 61440U) == 32768U)
    {
      tmp = 1;
    }
    else
    {
      if (st->st_mode - st->st_mode)
      {
        tmp = 1;
      }

    }

    return tmp;
  }
}

static void (*compile)(const char *, size_t);
static size_t (*execute)(const char *, size_t, size_t *, const char *);
static void suppressible_error(const char *mesg, int errnum)
{
}

static void clean_up_stdout(void)
{
  {
    if (! write_error_seen)
    {
      {
        close_stdout();
      }
    }

    return;
  }
}

static int file_is_binary(const char *buf, size_t bufsize, int fd, const struct stat *st)
{



  off_t hole_start;




  {
    if (! eolbyte)
    {
      {
      }
    }





    {
    }





    {


      {
        {
        }









      }
      if (0L <= hole_start)
      {
        {
        }





        {
        }

      }

    }

    return 0;
  }
}

static void context_length_arg(const char *str, intmax_t *out___0)
{
}

static int skipped_file(const char *name, int command_line, int is_dir)
{



  int tmp___2;
  int tmp___3;
  {
    if (is_dir)
    {




      {




        {




          {
          }

        }











        {
        }





      }

      tmp___3 = tmp___2;
    }

    return tmp___3;
  }
}

static char *buffer;
static size_t bufalloc;
static int bufdesc;
static char *bufbeg;
static char *buflim;
static size_t pagesize;
static off_t bufoffset;
static off_t after_last_match;
static int reset(int fd, const struct stat *st)
{




  {
    if (! pagesize)
    {
      {
        pagesize = (size_t) getpagesize();
      }
































    }





    {
      if (fd != 0)




      {
        {
        }
        if (bufoffset < 0L)
        {
        }

      }

    }

    return 1;
  }
}

static int fillbuf(size_t save, const struct stat *st)
{
  ssize_t fillsize;
  int cc;




  size_t newsize;






  {








    {
      {
        while (1)
        {











          {
            if ((((newsize * 2UL) + pagesize) + 1UL) < (newsize * 2UL))
            {
            }

          }

        }




      }





























    }
    if (fillsize < 0L)
    {
    }

    {



    }
    return cc;
  }
}

static enum __anonenum_binary_files_72 binary_files;
static int filename_mask;
static int out_quiet;
static _Bool out_invert;
static int out_file;
static int out_line;
static int out_byte;
static intmax_t out_before;
static intmax_t out_after;
static int count_matches;
static int list_files;
static int no_filenames;
static intmax_t max_count;
static int line_buffered;
static char *label = (char *) ((void *) 0);
static uintmax_t totalcc;
static const char *lastnl;
static const char *lastout;
static uintmax_t totalnl;
static intmax_t outleft;
static intmax_t pending;
static int done_on_match;
static int exit_on_match;
static int dos_report_unix_offset = 0;
static File_type dos_file_type = (File_type) 0;
static File_type dos_use_file_type = (File_type) 0;
static off_t dos_stripped_crs = (off_t) 0;
static struct dos_map *dos_pos_map;
static int dos_pos_map_size = 0;
static int dos_pos_map_used = 0;
static int inp_map_idx = 0;
static int out_map_idx = 1;
static void dos_binary(void)
{
}

static void dos_unix_byte_offsets(void)
{
}

static int undossify_input(char *buf, size_t buflen)
{







  {



    {

















      {
        while (1)
        {




















          {


            {
              if (! dos_report_unix_offset)
              {

















































                {















                }





              }

            }

          }

        }




      }




    }

    return (int) buflen;
  }
}

static off_t dossified_pos(off_t byteno)
{
}

static uintmax_t add_count(uintmax_t a, uintmax_t b)
{



  {








  }
}

static void nlscan(const char *lim)
{


  {



































  }
}

static void print_filename(void)
{
}

static void print_sep(char sep)
{
  {
    {



    }
    return;
  }
}

static void print_offset(uintmax_t pos, int min_width, const char *color)
{
  char buf[(sizeof(pos)) * 8UL];
  char *p;

  {
    p = buf + (sizeof(buf));
    {
      while (1)
      {












      }




    }
    while_break:































  }
}

static void print_line_head(const char *beg, const char *lim, int sep)
{



  {


    {
      {
      }
      if (filename_mask)
      {
      }















      {
        {
        }
      }

      {


      }







      {
      }

      {
      }





      {
        {
        }
      }




    }

    return;
  }
}

static const char *print_line_middle(const char *beg, const char *lim, const char *line_color, const char *match_color)
{
  size_t match_size;
  size_t match_offset;
  const char *cur;
  const char *mid;
  const char *b;
  int tmp;
  {


    {
      while (1)
      {




        {
          {





          }

        }



        {
        }









        {
































          {
            {
              fputs_unlocked((const char *) "\n", (FILE *) stdout);
            }
          }

        }

        cur = b + match_size;
      }















      {
      }

    }

    return cur;
  }
}

static const char *print_line_tail(const char *beg, const char *lim, const char *line_color)
{
}

static void prline(const char *beg, const char *lim, int sep)
{


  const char *match_color;




  {






































    {


      {




        {
          if (* match_color)
          {




            {







              {
                if (* match_color)
                {
                }

              }






              {
              }

            }

          }

        }

      }

















    }














  }
}

static void prpending(const char *lim)
{



  size_t tmp___0;
  {
    if (! lastout)
    {
    }

    {
      while (1)
      {















        {
        }




        {
          {
          }
          if ((tmp___0 == 0xffffffffffffffffUL) == (! out_invert))
          {
          }

        }

      }




    }
    while_break:



  }
}

static _Bool used;
static void prtext(const char *beg, const char *lim)
{

  const char *p;






  const char *nl___0;

  {


    {






















      {
        while (1)
        {









          {
            {
              while (1)
              {




                {
                }

              }




            }



          }

        }




























        {








          {
          }
        }




      }








      {
        while (1)
        {





















          {
            {
              prline(p, nl___0, ':');
            }
          }



        }




      }
























    }




  }
}

static size_t do_execute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{


  size_t tmp;




  {




    {
      if (((unsigned long) execute) == ((unsigned long) (& Pexecute)))
      {









        {
          if (! match_icase)
          {
          }

        }

      }
      else
      {
        {
          tmp = (* execute)(buf, size, match_size, start_ptr);
        }
        return tmp;
      }

    }

    {
      while (1)
      {
























        ;

      }




    }



  }
}

static intmax_t grepbuf(const char *beg, const char *lim)
{

  const char *p;
  const char *endp;








  {


    {
      while (1)
      {




        {



































          {

















            {






            }




            {
              if (done_on_match)
              {




                {
                }

              }

            }

          }

        }

        p = endp;
      }




    }




  }
}

static intmax_t grep(int fd, const struct stat *st)
{
  intmax_t nlines;
  intmax_t i;
  int not_text;
  size_t residue;
  size_t save;
  char oldc;
  char *beg;
  char *lim;
  char eol;
  int tmp;

  int tmp___1;









  {
    {


    }
    if (! tmp)
    {
    }

    {










    }
    if (! tmp___1)






    {





    }
    else
    {




      {
        _L:
        ;












      }
















      {











        {




























































          {











            {





              {




                {
                }

              }




            }



          }




        }
















        {
          {
            nlscan((const char *) beg);
          }
        }





        {
          {
          }
        }

      }




    }




    {





      {
      }

    }














  }
}

static int grepdirent(FTS *fts, FTSENT *ent, int command_line)
{
}

static int grepfile(int dirdesc, const char *name, int follow, int command_line)
{




  int *tmp___2;


  {










    {




      {
        {
        }
        if ((* tmp___2) != 40)
        {
        }

      }

    }





  }
}

static int grepdesc(int desc, int command_line)
{
  intmax_t count;
  int status;
  struct stat st;

  int tmp___0;
  int tmp___1;

























  {
    {


    }







    {
      if (command_line)
      {
        {
          tmp___1 = skipped_file(filename, 1, (st.st_mode & 61440U) == 16384U);
        }
        if (tmp___1)
        {
        }

      }






      {
        if ((st.st_mode & 61440U) == 16384U)
        {













          {
          }

          {
            while (1)
            {






              {
              }

              {
              }
            }




          }












          {
          }

























          {
            if (! command_line)
            {






              {
              }

            }

          }

        }


      }






      {
        if (1L < max_count)
        {
          if ((out_stat.st_mode & 61440U) == 32768U)
          {
            if (out_stat.st_ino)
            {
              if (st.st_ino == out_stat.st_ino)
              {
                if (st.st_dev == out_stat.st_dev)
                {
                }

              }

            }

          }

        }

      }

    }





    {
      {
        set_binary_mode(desc, 0);
      }
    }








    {
      if (count_matches)
      {
        if (out_file)
        {
        }

        {
        }
      }









      {





        {
        }

      }










      {
        {
        }
      }

    }


    return status;
  }
}

static int grep_command_line_arg(const char *arg)
{



  int tmp___2;

  {
    {
      tmp___2 = strcmp(arg, "-");
    }


















  }
}


void usage(int status)
{
}

static void Gcompile(const char *pattern, size_t size)
{
  {
    {
      GEAcompile(pattern, size, (((((1UL << 1) | ((1UL << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
}

static void Ecompile(const char *pattern, size_t size)
{
  {
    {
      GEAcompile(pattern, size, (((((((((((1UL << 1) << 1) | (((1UL << 1) << 1) << 1)) | ((((1UL << 1) << 1) << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
}

static void Acompile(const char *pattern, size_t size)
{
}

static void GAcompile(const char *pattern, size_t size)
{
}

static void PAcompile(const char *pattern, size_t size)
{
}

static const struct matcher matchers[8] = {{{(const char) 'g', (const char) 'r', (const char) 'e', (const char) 'p', (const char) '\000'}, & Gcompile, & EGexecute}, {{(const char) 'e', (const char) 'g', (const char) 'r', (const char) 'e', (const char) 'p', (const char) '\000'}, & Ecompile, & EGexecute}, {{(const char) 'f', (const char) 'g', (const char) 'r', (const char) 'e', (const char) 'p', (const char) '\000'}, & Fcompile, & Fexecute}, {{(const char) 'a', (const char) 'w', (const char) 'k', (const char) '\000'}, & Acompile, & EGexecute}, {{(const char) 'g', (const char) 'a', (const char) 'w', (const char) 'k', (const char) '\000'}, & GAcompile, & EGexecute}, {{(const char) 'p', (const char) 'o', (const char) 's', (const char) 'i', (const char) 'x', (const char) 'a', (const char) 'w', (const char) 'k', (const char) '\000'}, & PAcompile, & EGexecute}, {{(const char) 'p', (const char) 'e', (const char) 'r', (const char) 'l', (const char) '\000'}, & Pcompile, & Pexecute}, {{(const char) '\000'}, (void (*)(const char *, size_t)) ((void *) 0), (size_t (*)(const char *, size_t, size_t *, const char *)) ((void *) 0)}};
static void setmatcher(const char *m)
{


  int tmp___0;




  {
    if (matcher)
    {
      {
      }
      if (! (tmp___0 == 0))
      {
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

static size_t prepend_args(const char *options, char *buf, char **argv)
{
}

static int prepend_default_options(const char *options, int *pargc, char ***pargv)
{



  size_t prepended;

  int argc;








  {
    if (options)
    {
      if (* options)
      {
        {
        }
        if (((size_t) (2147483647 - argc)) < prepended)
        {
        }

        {
        }
        {
          while (1)
          {








            {
            }

          }




        }



      }

    }

    return 0;
  }
}


static int prev_digit_optind = - 1;
static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context)
{




  int opt;



  {



    {
      while (1)
      {



        {
          opt = getopt_long(argc, (char *const *) ((char **) argv), short_options, long_options, (int *) ((void *) 0));
        }









        {
          goto while_break;
        }













        {
        }

      }




    }
    while_break:









  }
}

static void parse_grep_colors(void)
{
}

static _Bool contains_encoding_error(const char *pat, size_t patlen)
{
}

static void fgrep_to_grep_pattern(size_t len, const char *keys, size_t *new_len, char **new_keys)
{
}

int main(int argc, char **argv)
{
  char *keys;
  size_t keycc;




  int opt;
  int status;





















  int tmp___15;


























  size_t tmp___38;

























  {
    {


























      {



        {











































































































































































































































          {
          }






        }

        goto switch_break;


















































































        {
        }

        {
          while (1)
          {




            {
            }

          }




        }



        {
        }
        {
          while (1)
          {










            {
            }

          }




        }















































































































        {
          {
          }




          {
            {
            }
            if (tmp___15 == 0)
            {
            }

          }

        }




























































        ;

        {
        }
        switch_break:
        ;

      }















































































































































































































      ;





      {
      }

    }





    {





    }
  }
}

