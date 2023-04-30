enum strtol_error
{
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
typedef long __off_t;

typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker
{
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
  char buf[24];
};


typedef long __ssize_t;
typedef __ssize_t ssize_t;
struct quoting_options;




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








};
typedef struct I_ring I_ring;
typedef struct hash_tuning Hash_tuning;
struct hash_table;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
struct hash_entry
{
  size_t n_buckets_used;
  size_t n_entries;
  const Hash_tuning *tuning;
  size_t (*hasher)(const void *, size_t);
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
typedef struct __anonstruct_FTS_18 FTS;
struct _ftsent
{
  unsigned short fts_flags;
  unsigned short fts_instr;
  struct stat fts_statp[1];
  char fts_name[1];
};
typedef struct _ftsent FTSENT;
typedef unsigned long uintmax_t;
struct dev_ino
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








struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct pcre_extra
{
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

void *x2realloc(void *p, size_t *pn);
void *xmemdup(const void *p, size_t s);
char *xstrdup(const char *string);
extern void *malloc(size_t __size);
extern void *calloc(size_t __nmemb, size_t __size);
extern void *realloc(void *__ptr, size_t __size);
extern void free(void *__ptr);
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
extern void *memset(void *__s, int __c, size_t __n);
extern size_t strlen(const char *__s);
void *xmalloc(size_t n);
void *xmalloc(size_t n)
{
  void *tmp;
  {
    {
      tmp = malloc(n);
    }
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
extern int close(int __fd);
extern int fchdir(int __fd);
int set_cloexec_flag(int desc, _Bool value);
int open_safer(const char *file, int flags, ...);
size_t safe_read(int fd, void *buf, size_t count);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
size_t safe_read(int fd, void *buf, size_t count)
{
  ssize_t result;
  ssize_t tmp;
  {
    {
      while (1)
      {
        {
          tmp = read(fd, buf, count);
          result = tmp;
        }
        if (0L <= result)
        {
          return (size_t) result;
        }
        else
          ;

      }

    }
    return 0UL;
  }
}

const char *proper_name(const char *name)
{
}

const char *program_name = (const char *) ((void *) 0);
void set_program_name(const char *argv0)
{
  const char *slash;
  const char *base;

  {
    if (((unsigned long) argv0) == ((unsigned long) ((void *) 0)))
    {
      {
      }
    }

    {
      slash = (const char *) strrchr(argv0, '/');
    }
    if (((unsigned long) slash) != ((unsigned long) ((void *) 0)))
    {
      base = slash + 1;
    }

    if ((base - argv0) >= 7L)
      return;

  }
}

int fd_safer(int fd);
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

void *mmalloca(size_t n);
FTSENT *fts_read(FTS *sp);
extern void *mempcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
int fd_safer(int fd)
{
  {
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
int should_colorize(void)
{
}

void init_colorize(void)
{
  {
    return;
  }
}

void close_stdout(void);
extern void _exit(int __status);
int close_stream(FILE *stream);
static const char *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void)
{
}

extern size_t __fpending(FILE *__fp);
int close_stream(FILE *stream)
{
  _Bool some_pending;
  _Bool fclose_fail;
  int *tmp___3;
  {
    {
      {
        if (some_pending)
        {
          {
          }
          if ((* tmp___3) != 9)
          {
            _L___0:
            ;

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
int set_binary_mode(int fd, int mode___0)
{
  {
    return 0;
  }
}

int match_icase;
int match_words;
int match_lines;
unsigned char eolbyte;
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
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___0;
  char *tmp___1;
  {
    {
      tmp = (struct kwset *) xmalloc(sizeof(* kwset___1));
      kwset___1 = tmp;
      _obstack_begin(& kwset___1->obstack, 0, 0, (void *(*)(long)) (& xmalloc), & free);
      kwset___1->words = (ptrdiff_t) 0;
      __h = & kwset___1->obstack;
      __o = __h;
      __len = (int) (sizeof(* kwset___1->trie));
    }
    if ((__o->chunk_limit - __o->next_free) < ((long) __len))
    {
      {
      }
    }

    __o->next_free += __len;
    __o1 = __h;
    __value = (void *) __o1->object_base;
    {
    }
    __o1->next_free = tmp___0 + (((__o1->next_free - tmp___1) + ((long) __o1->alignment_mask)) & ((long) (~ __o1->alignment_mask)));
    {
    }
    __o1->object_base = __o1->next_free;
    kwset___1->trie = (struct trie *) __value;
    kwset___1->trie->accepting = (size_t) 0;
    kwset___1->trie->links = (struct tree *) ((void *) 0);
    kwset___1->trie->parent = (struct trie *) ((void *) 0);
    kwset___1->trie->next = (struct trie *) ((void *) 0);
    kwset___1->trie->fail = (struct trie *) ((void *) 0);
    kwset___1->trie->depth = 0;
    kwset___1->trie->shift = 0;
    kwset___1->mind = 2147483647;
    kwset___1->maxd = - 1;
    kwset___1->target = (char *) ((void *) 0);
    kwset___1->trans = trans___0;
    return kwset___1;
  }
}

void kwsincr(kwset_t kwset___1, const char *text, size_t len)
{
  struct trie *trie;
  const char *trans___0;
  unsigned char uc;
  unsigned char label___0;
  int tmp;
  struct tree *kwset_link;
  struct tree *links[12];
  enum __anonenum_dirs_58 dirs[12];
  int depth___0;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___2;
  char *tmp___3;
  struct tree *r;
  struct tree *l;
  size_t tmp___8;
  {
    trie = kwset___1->trie;
    trans___0 = kwset___1->trans;
    text += len;
    {
      while (1)
      {
        tmp___8 = len;
        if (! tmp___8)
        {
          goto while_break;
        }

        text--;
        uc = (unsigned char) (* text);
        if (trans___0)
        {
          tmp = (int) uc;
        }

        label___0 = (unsigned char) tmp;
        kwset_link = trie->links;
        links[0] = (struct tree *) (& trie->links);
        dirs[0] = (enum __anonenum_dirs_58) 0;
        depth___0 = 1;
        {
          while (1)
          {
            if (kwset_link)
            {
              if (! (((int) label___0) != ((int) kwset_link->label)))
              {
              }

            }
            else
            {
              goto while_break___0;
            }

            if (((int) label___0) < ((int) kwset_link->label))
            {
            }

          }

        }
        while_break___0:;


        if (! kwset_link)
        {
          __h = & kwset___1->obstack;
          __o = __h;
          __len = (int) (sizeof(* kwset_link));
          {
            {
            }
          }
          __o->next_free += __len;
          __o1 = __h;
          __value = (void *) __o1->object_base;
          {
            tmp___2 = (char *) 0;
          }
          if ((sizeof(long)) < (sizeof(void *)))
          {
            tmp___3 = __o1->object_base;
          }
          else
          {
            tmp___3 = (char *) 0;
          }

          __o1->next_free = tmp___2 + (((__o1->next_free - tmp___3) + ((long) __o1->alignment_mask)) & ((long) (~ __o1->alignment_mask)));
          if ((__o1->next_free - ((char *) __o1->chunk)) > (__o1->chunk_limit - ((char *) __o1->chunk)))
            if (depth___0)
          {
            if (((unsigned int) dirs[depth___0]) == 0U)
            {
              if (((unsigned int) dirs[depth___0]) == 1U)
              {
                if (links[depth___0]->balance)
                {
                  _L:;


                  {
                  }
                  if (((int) links[depth___0]->balance) == 2)
                  {
                  }

                  case_neg_2:;


                  {
                  }
                  if (((unsigned int) dirs[depth___0 + 1]) == 1U)
                    r = links[depth___0];

                  r = links[depth___0];
                  {
                  }
                  {
                  }
                  if (((unsigned int) dirs[depth___0 + 1]) == 0U)
                    l = links[depth___0];

                  {
                  }
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
    while_break:;


    {
      trie->accepting = (size_t) (1L + (2L * kwset___1->words));
    }
    kwset___1->words++;
    if (trie->depth < kwset___1->mind)
    {
      kwset___1->mind = trie->depth;
    }

    if (trie->depth > kwset___1->maxd)
    {
      kwset___1->maxd = trie->depth;
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
    ;

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
  unsigned char deltabuf[256];
  unsigned char *delta;
  unsigned char *tmp;
  int tmp___0;
  struct trie *curr;
  struct trie *last;
  struct trie *fail;
  int tmp___1;
  {
    trans___0 = kwset___1->trans;
    if (trans___0)
    {
      tmp = kwset___1->delta;
    }

    delta = tmp;
    if (kwset___1->mind < 255)
    {
      tmp___0 = kwset___1->mind;
    }

    {
      memset((void *) delta, tmp___0, sizeof(deltabuf));
      last = kwset___1->trie;
      curr = last;
    }
    {
      while (1)
      {
        if (! curr)
        {
          goto while_break;
        }

        {
          enqueue(curr->links, & last);
          curr->shift = kwset___1->mind;
          curr->maxshift = kwset___1->mind;
          treedelta((const struct tree *) curr->links, (unsigned int) curr->depth, delta);
          treefails((const struct tree *) curr->links, (const struct trie *) curr->fail, kwset___1->trie);
          fail = curr->fail;
        }
        {
          while (1)
          {
            if (! fail)
            {
              goto while_break___0;
            }

            {
              tmp___1 = hasevery((const struct tree *) fail->links, (const struct tree *) curr->links);
            }
            if (! tmp___1)
            {
              if ((curr->depth - fail->depth) < fail->shift)
              {
                fail->shift = curr->depth - fail->depth;
              }

            }

            if (curr->accepting)
            {
              if (fail->maxshift > (curr->depth - fail->depth))
              {
                fail->maxshift = curr->depth - fail->depth;
              }

            }

            fail = fail->fail;
          }

          while_break___7:;


        }
        while_break___0:;


        curr = curr->next;
      }

    }
    while_break:
    ;

    curr = kwset___1->trie->next;
    {
      while (1)
      {
        {
        }
      }

      {
        {
          kwset___1->gc2 = tr(trans___0, * (kwset___1->target + (kwset___1->mind - 2)));
        }
      }
    }
    if (trans___0)
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

    return;
  }
}

static _Bool bm_delta2_search(const char **tpp, const char *ep, const char *sp, int len, const char *trans___0, char gc1, char gc2, const unsigned char *d1, kwset_t kwset___1)
{
  const char *tp;
  int d;
  int skip;
  int i;
  char tmp___1;
  char tmp___2;
  unsigned char tmp___4;
  char tmp___5;
  {
    tp = * tpp;
    d = len;
    skip = 0;
    {
      while (1)
      {
        while_continue:;


        {
          i = 2;
          {
            i = (d + skip) + 1;
            {
              while (1)
              {
                if (! (i <= len))
                {
                  goto while_break___1;
                }

                {
                  tmp___1 = tr(trans___0, (char) (* (tp + (- i))));
                  tmp___2 = tr(trans___0, (char) (* (sp + (- i))));
                }
                if (((int) tmp___1) != ((int) tmp___2))
                {
                  goto while_break___1;
                }

              }

            }
            while_break___1:;


            if (i > len)
            {
              * tpp = tp - len;
              return (_Bool) 1;
            }

          }
        }
        d = * (kwset___1->shift + (i - 2));
        tp += d;
        if (((unsigned long) tp) > ((unsigned long) ep))
        {
          goto while_break;
        }

        {
          tmp___5 = tr(trans___0, (char) (* (tp + (- 1))));
        }
        if (((int) tmp___5) != ((int) gc1))
        {
          if (d1)
          {
            {
              tmp___4 = to_uchar((char) (* (tp + (- 1))));
              tp += (const int) (* (d1 + ((int) tmp___4)));
            }
          }

          goto while_break;
        }

        skip = i - 1;
      }

    }
    while_break:;


    * tpp = tp;
    return (_Bool) 0;
  }
}

static const char *memchr_kwset(const char *s, size_t n, kwset_t kwset___1)
{
  const char *tmp;
  size_t ntrans;

  {
    if (kwset___1->gc1help < 0)
    {
      {
        tmp = (const char *) memchr((const void *) s, (int) kwset___1->gc1, n);
      }
      return tmp;
    }

    n -= ntrans;
    {
    }
  }
}

static size_t bmexec_trans(kwset_t kwset___1, const char *text, size_t size)
{
  const unsigned char *d1;
  const char *ep;
  const char *sp;
  const char *tp;
  int d;
  int len;
  const char *trans___0;
  char gc1;
  char gc2;
  unsigned char tmp___2;
  unsigned char tmp___8;
  unsigned char tmp___11;
  unsigned char tmp___12;
  _Bool tmp___13;
  {
    len = kwset___1->mind;
    trans___0 = kwset___1->trans;
    {
    }
    if (len == 1)
    {
      {
        tp = memchr_kwset(text, size, kwset___1);
      }
      if (tp)
      {
        while (1)
        {
          {
            goto while_break;
          }
          if (d != 0)
          {
            {
              tmp___2 = to_uchar((char) (* (tp + (- 1))));
              {
                {
                  tmp___8 = to_uchar((char) (* (tp + (- 1))));
                }
              }
            }
          }

        }

      }

      while_break:;


    }

    {
      ep = text + size;
      tmp___11 = to_uchar((char) (* (tp + (- 1))));
      d = (int) (* (d1 + ((int) tmp___11)));
      {
        if (! (((long) d) <= (ep - tp)))
        {
          goto while_break___0;
        }

        {
          tp += d;
          tmp___12 = to_uchar((char) (* (tp + (- 1))));
          d = (int) (* (d1 + ((int) tmp___12)));
        }
        if (d != 0)
        {
          tmp___13 = bm_delta2_search(& tp, ep, sp, len, trans___0, gc1, gc2, (const unsigned char *) ((void *) 0), kwset___1);
        }

        if (tmp___13)
        {
        }

      }
    }
    while_break___0:;


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
      return ret;
    }

  }
}

struct dfa *dfaalloc(void);
struct dfamust *dfamusts(const struct dfa *d);
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol);
void dfacomp(const char *s, size_t len, struct dfa *d, int searchflag);
char *dfaexec(struct dfa *d, const char *begin, char *end, int allow_nl, size_t *count, int *backref);
struct dfa *dfasuperset(const struct dfa *d);
_Bool dfaisfast(const struct dfa *d);
static _Bool wordchar___0(wint_t wc)
{
  int tmp___0;
  {
    {
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
static void kwsmusts(void)
{
  const struct dfamust *dm;
  const struct dfamust *tmp;
  size_t tmp___2;
  {
    {
      tmp = (const struct dfamust *) dfamusts((const struct dfa *) dfa);
      dm = tmp;
    }
    if (dm)
    {
      {
        {
          {
            tmp___2 = strlen((const char *) dm->must);
            kwsincr(kwset___0, (const char *) dm->must, tmp___2);
          }
          dm = (const struct dfamust *) dm->next;
        }
        while_break___2:
        ;

      }
      {
        kwsprep(kwset___0);
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
  size_t total;
  char *motif;
  const char *p;
  size_t len;
  const char *sep;
  const char *tmp;
  const char *err;
  const char *tmp___0;
  int bk;
  char *n;
  char *tmp___1;
  const char *tmp___2;
  const char *tmp___3;
  const char *tmp___4;
  const char *tmp___5;
  const char *tmp___6;
  const char *tmp___7;
  size_t tmp___8;
  {
    total = size;
    if (match_icase)
    {
      syntax_bits___0 |= (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1;
    }

    {
      re_set_syntax(syntax_bits___0);
      dfasyntax(syntax_bits___0, match_icase, eolbyte);
      p = pattern;
    }
    {
      while (1)
      {
        {
          tmp = (const char *) memchr((const void *) p, '\n', total);
          sep = tmp;
        }
        if (sep)
        {
        }
        else
        {
          len = total;
          total = (size_t) 0;
        }

        {
          patterns = (struct patterns *) xnrealloc((void *) patterns, pcount + 1UL, sizeof(* patterns));
          * (patterns + pcount) = patterns0;
          tmp___0 = re_compile_pattern(p, len, & (patterns + pcount)->regexbuf);
          err = tmp___0;
        }
        if (err)
        {
          {
          }
        }

        pcount++;
        p = sep;
        if (! p)
        {
          goto while_break;
        }

      }

    }
    while_break:
    ;

    if (match_words)
    {
      goto _L;
    }
    else
    {
      if (match_lines)
      {
        _L:
        ;

        {
          bk = ! (syntax_bits___0 & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
          tmp___1 = (char *) xmalloc((((sizeof(word_beg_bk)) - 1UL) + size) + (sizeof(word_end_bk)));
          n = tmp___1;
        }
        if (match_lines)
        {
          if (bk)
          {
            tmp___2 = line_beg_bk;
          }

          tmp___4 = tmp___2;
        }
        else
        {
          if (bk)
          {
            tmp___3 = word_beg_bk;
          }

          tmp___4 = tmp___3;
        }

        {
          strcpy((char *) n, (const char *) tmp___4);
          total = strlen((const char *) n);
          memcpy((void *) ((void *) (n + total)), (const void *) ((const void *) pattern), size);
          total += size;
        }
        if (match_lines)
        {
          if (bk)
          {
            tmp___5 = line_end_bk;
          }

          tmp___7 = tmp___5;
        }
        else
        {
          if (bk)
          {
            tmp___6 = word_end_bk;
          }

          tmp___7 = tmp___6;
        }

        {
          strcpy((char *) (n + total), (const char *) tmp___7);
          tmp___8 = strlen((const char *) (n + total));
          total += tmp___8;
          motif = n;
          pattern = (const char *) motif;
          size = total;
        }
      }
      else
      {
        motif = (char *) ((void *) 0);
      }

    }

    {
      dfa = dfaalloc();
      dfacomp(pattern, size, dfa, 1);
      kwsmusts();
    }
    return;
  }
}

size_t EGexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
  const char *buflim___0;
  const char *beg;
  const char *end;
  const char *ptr;
  const char *match;
  const char *best_match;
  const char *mb_start;
  char eol;
  int backref;
  regoff_t start;
  size_t len;
  size_t best_len;
  struct kwsmatch kwsm;
  size_t i;
  struct dfa *superset;
  struct dfa *tmp;
  _Bool dfafast;
  _Bool tmp___0;
  const char *next_beg;
  const char *dfa_beg;
  size_t count;
  _Bool exact_kwset_match;
  const char *prev_beg;
  size_t offset;
  size_t tmp___1;
  long tmp___4;
  const char *tmp___5;
  long tmp___6;
  size_t tmp___8;
  int tmp___9;
  regoff_t shorter_len;
  wint_t tmp___11;
  _Bool tmp___12;
  _Bool tmp___14;
  size_t off;
  {
    {
      eol = (char) eolbyte;
      tmp = dfasuperset((const struct dfa *) dfa);
      superset = tmp;
      tmp___0 = dfaisfast((const struct dfa *) dfa);
      dfafast = tmp___0;
      mb_start = buf;
      buflim___0 = buf + size;
      end = buf;
      beg = end;
    }
    {
      while (1)
      {
        if (! (((unsigned long) end) < ((unsigned long) buflim___0)))
        {
          goto while_break;
        }

        end = buflim___0;
        if (! start_ptr)
        {
          dfa_beg = beg;
          count = (size_t) 0;
          if (kwset___0)
          {
            {
              tmp___1 = kwsexec(kwset___0, beg - ((int) begline), (size_t) ((buflim___0 - beg) + ((long) begline)), & kwsm);
            }
            if (offset == 0xffffffffffffffffUL)
              dfa_beg = beg;

            exact_kwset_match = (_Bool) (kwsm.index < kwset_exact_matches);
            if (exact_kwset_match)
            {
              if (! dfafast)
              {
                if (16L > (match - beg))
                {
                  {
                    tmp___6 = match - beg;
                  }
                  if (tmp___6 < ((buflim___0 - prev_beg) >> 2))
                  {
                    if (16L > (match - beg))
                    {
                      tmp___4 = match - beg;
                    }

                    tmp___5 = prev_beg + (4L * tmp___4);
                  }

                  end = tmp___5;
                }

              }

            }

            {
              end = (const char *) memchr((const void *) end, (int) eol, (size_t) (buflim___0 - end));
            }
            if (end)
              if (exact_kwset_match)
            {
              {
                tmp___8 = __ctype_get_mb_cur_max();
              }
              if (tmp___8 == 1UL)
              {
                {
                  tmp___9 = using_utf8();
                }
              }

              {
              }
            }


          }

          if (superset)
          {
            if (! exact_kwset_match)
            {
              {
                while (1)
                {
                  {
                    next_beg = (const char *) dfaexec(superset, dfa_beg, (char *) end, 1, & count, (int *) ((void *) 0));
                  }
                  if (next_beg)
                  {
                    if (((unsigned long) next_beg) != ((unsigned long) end))
                    {
                      if (! (count != 0UL))
                      {
                        goto while_break___0;
                      }

                    }

                  }

                  {
                  }
                }

              }
              while_break___0:;


              if (((unsigned long) next_beg) == ((unsigned long) ((void *) 0)))
              {
                if (((unsigned long) next_beg) == ((unsigned long) end))
                {
                }

              }

              {
                end = (const char *) memchr((const void *) next_beg, (int) eol, (size_t) (buflim___0 - next_beg));
              }
            }

          }

          {
            next_beg = (const char *) dfaexec(dfa, dfa_beg, (char *) end, 0, & count, & backref);
          }
          if (((unsigned long) next_beg) == ((unsigned long) ((void *) 0)))
          {
            goto __Cont;
          }
          else
          {
            if (((unsigned long) next_beg) == ((unsigned long) end))
            {
              goto __Cont;
            }

          }

          if (count != 0UL)
          {
            {
              beg = (const char *) memrchr((const void *) buf, (int) eol, (size_t) (next_beg - buf));
              beg++;
            }
          }

          {
            end = (const char *) memchr((const void *) next_beg, (int) eol, (size_t) (buflim___0 - next_beg));
          }
          if (end)
          {
            end++;
          }

          if (! backref)
          {
            goto success;
          }

          ptr = beg;
        }
        else
        {
          ptr = start_ptr;
        }

        if (((long) ((((1 << (((sizeof(regoff_t)) * 8UL) - 2UL)) - 1) * 2) + 1)) < ((end - beg) - 1L))
        {
          {
          }
        }

        best_match = end;
        i = (size_t) 0;
        {
          while (1)
          {
            if (! (i < pcount))
            {
              goto while_break___1;
            }

            {
              (patterns + i)->regexbuf.not_eol = 0U;
              start = re_search(& (patterns + i)->regexbuf, beg, (__re_idx_t) ((end - beg) - 1L), (__re_idx_t) (ptr - beg), (regoff_t) ((end - ptr) - 1L), & (patterns + i)->regs);
            }
            if (start < (- 1))
            {
              {
              }
            }
            else
            {
              if (0 <= start)
              {
                len = (size_t) ((* ((patterns + i)->regs.end + 0)) - start);
                match = beg + start;
                {
                }
                if (start_ptr)
                {
                  if (! match_words)
                  {
                    goto assess_pattern_match;
                  }

                }

                if (! match_lines)
                {
                  if (! match_words)
                  {
                    match = ptr;
                    len = (size_t) (end - ptr);
                  }

                  if (match_lines)
                  {
                    if (len == ((size_t) ((end - ptr) - 1L)))
                    {
                    }

                  }

                }

                if (match_words)
                {
                  {
                    while (1)
                    {
                      {
                      }
                      {
                        shorter_len = 0;
                        tmp___11 = mb_prev_wc(beg, match, end - 1);
                        tmp___12 = wordchar___0(tmp___11);
                      }
                      if (! tmp___12)
                      {
                        {
                        }
                        if (! tmp___14)
                        {
                          goto assess_pattern_match;
                        }

                      }

                      {
                        {
                        }
                      }
                    }

                  }
                }

                assess_pattern_match:
                ;

                if (! start_ptr)
                {
                  goto success;
                }

                if (((unsigned long) match) < ((unsigned long) best_match))
                {
                  best_match = match;
                  best_len = len;
                }
                else
                {
                  if (((unsigned long) match) == ((unsigned long) best_match))
                  {
                  }

                }

              }

            }

            __Cont___0:;


            i++;
          }

        }
        while_break___1:;


        if (((unsigned long) best_match) < ((unsigned long) end))
        {
          beg = best_match;
          goto success_in_len;
        }

        __Cont:;


        beg = end;
      }

    }
    while_break:;


    return (size_t) (- 1);
    success:
    ;

    len = (size_t) (end - beg);
    success_in_len:;


    off = (size_t) (beg - buf);
    * match_size = len;
    return off;
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
  unsigned char uc;
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
          uc = (unsigned char) i;
          s.__count = 0;
          tmp___0 = mbrtowc((wchar_t *) (& wc), (const char *) ((const char *) (& c)), (size_t) 1, (mbstate_t *) (& s));
        }
        if (tmp___0 <= 1UL)
        {
          d->mbrtowc_cache[uc] = (wint_t) wc;
        }

        i++;
      }

    }
    while_break:;


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
        if (! (i < d->cindex))
        {
          goto while_break;
        }

        i++;
      }

    }
    while_break:
    ;

    {
      d->charclasses = (charclass *) maybe_realloc((void *) d->charclasses, d->cindex, & d->calloc, sizeof(* d->charclasses));
      d->cindex++;
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
  unsigned int i;
  {
    syntax_bits_set = (reg_syntax_t) 1;
    syntax_bits = bits;
    case_fold = (_Bool) (fold != 0);
    eolbyte___0 = eol;
    i = 0U;
    {
      while (1)
      {
        if (! (i < 256U))
        {
          goto while_break;
        }

        {
          sbit[i] = char_context((unsigned char) i);
        }
        if (sbit[i] == 2)
          goto switch_break;

        switch_break:;


        i++;
      }

    }
    while_break:;


  }
}

static _Bool setbit_wc(wint_t wc, charclass_word *c)
{
  int b;
  int tmp;
  {
    {
      tmp = wctob(wc);
      b = tmp;
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
  int n;
  wint_t uc;
  wint_t tmp;
  wint_t lc;
  wint_t tmp___0;
  int tmp___1;
  int tmp___2;
  wint_t tmp___3;
  wint_t li;
  int tmp___4;
  wint_t tmp___5;
  {
    {
      n = 0;
      tmp = towupper((wint_t) c);
      uc = tmp;
      tmp___0 = towlower(uc);
      lc = tmp___0;
    }
    if (uc != ((wint_t) c))
    {
      tmp___1 = n;
    }

    if (lc != uc)
    {
      if (lc != ((wint_t) c))
      {
        {
          tmp___3 = towupper(lc);
        }
        if (tmp___3 == uc)
        {
          tmp___2 = n;
          n++;
        }

      }

      {
        {
          if (li != uc)
          {
            if (li != ((wint_t) c))
            {
              {
                tmp___5 = towupper(li);
              }
              if (tmp___5 == uc)
              {
                tmp___4 = n;
              }

            }

          }

        }
        i++;
      }
    }

    return n;
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
          goto while_break;
        }
        i++;
      }

    }
    while_break:;


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
  size_t ch_classes_al;
  size_t equivs_al;
  size_t coll_elems_al;
  size_t tmp;
  char *tmp___1;
  wint_t _wc;
  size_t nbytes;
  size_t tmp___2;
  unsigned char tmp___3;
  char *tmp___5;
  wint_t _wc___0;
  size_t nbytes___0;
  size_t tmp___6;
  unsigned char tmp___7;
  char *tmp___9;
  wint_t _wc___1;
  size_t nbytes___1;
  size_t tmp___10;
  unsigned char tmp___11;
  char str[33];
  size_t len;
  char *tmp___13;
  wint_t _wc___2;
  size_t nbytes___2;
  size_t tmp___14;
  unsigned char tmp___15;
  size_t tmp___16;
  char *tmp___18;
  wint_t _wc___3;
  size_t nbytes___3;
  size_t tmp___19;
  unsigned char tmp___20;
  const char *class;
  const char *tmp___23;
  int tmp___25;
  const struct dfa_ctype *pred;
  const struct dfa_ctype *tmp___26;
  wctype_t wt;
  wctype_t tmp___28;
  size_t tmp___29;
  int tmp___30;
  char *tmp___32;
  wint_t _wc___4;
  size_t nbytes___4;
  size_t tmp___33;
  unsigned char tmp___34;
  size_t nbytes___5;
  char *tmp___40;
  wint_t _wc___6;
  size_t nbytes___6;
  size_t tmp___41;
  unsigned char tmp___42;
  char *tmp___44;
  wint_t _wc___7;
  size_t nbytes___7;
  size_t tmp___45;
  unsigned char tmp___46;
  size_t nbytes___8;
  size_t tmp___52;
  int tmp___56;
  _Bool tmp___60;
  char *tmp___62;
  wint_t _wc___9;
  size_t nbytes___9;
  size_t tmp___63;
  unsigned char tmp___64;
  int tmp___65;
  wchar_t folded[22];
  int i;
  int n;
  int tmp___67;
  _Bool tmp___69;
  size_t tmp___72;
  _Bool tmp___73;
  {
    known_bracket_exp = (_Bool) 1;
    wc1 = (wint_t) 0;
    coll_elems_al = (size_t) 0;
    equivs_al = coll_elems_al;
    ch_classes_al = equivs_al;
    ranges_al = ch_classes_al;
    chars_al = ranges_al;
    if (dfa___0->multibyte)
    {
      {
        dfa___0->mbcsets = (struct mb_char_classes *) maybe_realloc((void *) dfa___0->mbcsets, dfa___0->nmbcsets, & dfa___0->mbcsets_alloc, sizeof(* dfa___0->mbcsets));
        tmp = dfa___0->nmbcsets;
        dfa___0->nmbcsets++;
        work_mbc = dfa___0->mbcsets + tmp;
        memset((void *) work_mbc, 0, sizeof(* work_mbc));
      }
    }

    {
      memset((void *) ccl, 0, sizeof(ccl));
      {
        if (! lexleft)
        {
          {
          }
          if (((unsigned long) tmp___1) != ((unsigned long) ((char *) 0)))
          {
          }

        }
        else
        {
          {
            tmp___2 = mbs_to_wchar(& _wc, lexptr, lexleft, dfa___0);
            nbytes = tmp___2;
            cur_mb_len = (int) nbytes;
            wc = _wc;
          }
          if (nbytes == 1UL)
          {
            {
              tmp___3 = to_uchar___0((char) (* lexptr));
              c = (int) tmp___3;
            }
          }

          lexptr += nbytes;
          lexleft -= nbytes;
        }

        goto while_break;
      }
    }
    while_break:;


    if (c == 94)
    {
      {
        while (1)
        {
          if (! lexleft)
          {
            {
            }
            if (((unsigned long) tmp___5) != ((unsigned long) ((char *) 0)))
            {
            }

          }
          else
          {
            {
              tmp___6 = mbs_to_wchar(& _wc___0, lexptr, lexleft, dfa___0);
              nbytes___0 = tmp___6;
              cur_mb_len = (int) nbytes___0;
              wc = _wc___0;
            }
            if (nbytes___0 == 1UL)
            {
              {
                tmp___7 = to_uchar___0((char) (* lexptr));
                c = (int) tmp___7;
              }
            }

            lexptr += nbytes___0;
            lexleft -= nbytes___0;
          }

          goto while_break___0;
        }

      }
      while_break___0:;


      {
        invert = (_Bool) 1;
        known_bracket_exp = using_simple_locale();
      }
    }
    else
    {
      invert = (_Bool) 0;
    }

    colon_warning_state = c == 58;
    {
      while (1)
      {
        c1 = 256;
        colon_warning_state &= - 3;
        if (c == 91)
        {
          {
            while (1)
            {
              if (! lexleft)
              {
                {
                }
                if (((unsigned long) tmp___9) != ((unsigned long) ((char *) 0)))
                {
                }

              }
              else
              {
                {
                  tmp___10 = mbs_to_wchar(& _wc___1, lexptr, lexleft, dfa___0);
                  nbytes___1 = tmp___10;
                  cur_mb_len = (int) nbytes___1;
                  wc1 = _wc___1;
                }
                if (nbytes___1 == 1UL)
                {
                  {
                    tmp___11 = to_uchar___0((char) (* lexptr));
                    c1 = (int) tmp___11;
                  }
                }

                lexptr += nbytes___1;
                lexleft -= nbytes___1;
              }

              goto while_break___2;
            }

          }
          while_break___2:;


          if (c1 == 58)
          {
            if (syntax_bits & ((1UL << 1) << 1))
            {
              goto _L___0;
            }

          }
          else
          {
            if (c1 == 46)
            {
              if (c1 == 61)
              {
                _L___0:;


                len = (size_t) 0;
                {
                  while (1)
                  {
                    {
                      while (1)
                      {
                        if (! lexleft)
                        {
                          {
                          }
                          if (((unsigned long) tmp___13) != ((unsigned long) ((char *) 0)))
                          {
                          }

                        }
                        else
                        {
                          {
                            tmp___14 = mbs_to_wchar(& _wc___2, lexptr, lexleft, dfa___0);
                            nbytes___2 = tmp___14;
                            cur_mb_len = (int) nbytes___2;
                            wc = _wc___2;
                          }
                          if (nbytes___2 == 1UL)
                          {
                            {
                              tmp___15 = to_uchar___0((char) (* lexptr));
                              c = (int) tmp___15;
                            }
                          }

                          lexptr += nbytes___2;
                          lexleft -= nbytes___2;
                        }

                        goto while_break___4;
                      }

                    }
                    while_break___4:;


                    if (c == c1)
                    {
                      if (((const int) (* lexptr)) == 93)
                      {
                        goto while_break___3;
                      }

                    }
                    else
                    {
                      _L:;


                      {
                      }
                    }

                    if (len < 32UL)
                    {
                      tmp___16 = len;
                      len++;
                      str[tmp___16] = (char) c;
                    }

                  }

                }
                while_break___3:
                ;

                str[len] = (char) '\000';
                {
                  while (1)
                  {
                    if (! lexleft)
                    {
                      {
                      }
                      if (((unsigned long) tmp___18) != ((unsigned long) ((char *) 0)))
                      {
                      }

                    }
                    else
                    {
                      {
                        tmp___19 = mbs_to_wchar(& _wc___3, lexptr, lexleft, dfa___0);
                        nbytes___3 = tmp___19;
                        cur_mb_len = (int) nbytes___3;
                        wc = _wc___3;
                      }
                      if (nbytes___3 == 1UL)
                      {
                        {
                          tmp___20 = to_uchar___0((char) (* lexptr));
                          c = (int) tmp___20;
                        }
                      }

                      lexptr += nbytes___3;
                      lexleft -= nbytes___3;
                    }

                    goto while_break___5;
                  }

                }
                while_break___5:;


                if (c1 == 58)
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
                  }
                  else
                  {
                    tmp___23 = (const char *) str;
                  }

                  {
                    class = tmp___23;
                    tmp___26 = (const struct dfa_ctype *) find_pred(class);
                    pred = tmp___26;
                  }
                  if (! pred)
                  {
                    {
                    }
                  }

                  if (dfa___0->multibyte)
                  {
                    if (! pred->single_byte_only)
                    {
                      {
                        tmp___28 = wctype(class);
                        wt = tmp___28;
                        work_mbc->ch_classes = (wctype_t *) maybe_realloc((void *) work_mbc->ch_classes, work_mbc->nch_classes, & ch_classes_al, sizeof(* work_mbc->ch_classes));
                        tmp___29 = work_mbc->nch_classes;
                        work_mbc->nch_classes++;
                        * (work_mbc->ch_classes + tmp___29) = wt;
                      }
                    }

                  }

                  c2 = 0;
                  {
                    while (1)
                    {
                      if (! (c2 < 256))
                      {
                        goto while_break___6;
                      }

                      {
                        tmp___30 = (* pred->func)(c2);
                      }
                      if (tmp___30)
                      {
                        {
                          setbit((unsigned int) c2, ccl);
                        }
                      }

                      c2++;
                    }

                  }
                  while_break___6:
                  ;

                  {
                    if (! lexleft)
                    {
                      {
                      }
                      if (((unsigned long) tmp___32) != ((unsigned long) ((char *) 0)))
                      {
                      }

                    }
                    else
                    {
                      {
                        tmp___33 = mbs_to_wchar(& _wc___4, lexptr, lexleft, dfa___0);
                        nbytes___4 = tmp___33;
                        cur_mb_len = (int) nbytes___4;
                        wc1 = _wc___4;
                      }
                      if (nbytes___4 == 1UL)
                      {
                        {
                          tmp___34 = to_uchar___0((char) (* lexptr));
                          c1 = (int) tmp___34;
                        }
                      }

                      lexptr += nbytes___4;
                      lexleft -= nbytes___4;
                    }

                    goto while_break___7;
                  }
                }

                while_break___7:;


                goto __Cont;
              }

            }

          }

        }

        if (c == 92)
        {
          if (syntax_bits & 1UL)
          {
            {
              while (1)
              {
                {
                  {
                  }
                  if (nbytes___5 == 1UL)
                  {
                  }

                }
              }

            }
          }

        }

        if (c1 == 256)
        {
          {
            while (1)
            {
              while_continue___9:;


              if (! lexleft)
              {
                {
                }
                if (((unsigned long) tmp___40) != ((unsigned long) ((char *) 0)))
                {
                }

              }
              else
              {
                {
                  tmp___41 = mbs_to_wchar(& _wc___6, lexptr, lexleft, dfa___0);
                  nbytes___6 = tmp___41;
                  cur_mb_len = (int) nbytes___6;
                  wc1 = _wc___6;
                }
                if (nbytes___6 == 1UL)
                {
                  {
                    tmp___42 = to_uchar___0((char) (* lexptr));
                    c1 = (int) tmp___42;
                  }
                }

                lexptr += nbytes___6;
                lexleft -= nbytes___6;
              }

              goto while_break___9;
            }

          }
          while_break___9:;


        }

        if (c1 == 45)
        {
          {
            while (1)
            {
              while_continue___10:;


              if (! lexleft)
              {
                {
                }
                if (((unsigned long) tmp___44) != ((unsigned long) ((char *) 0)))
                {
                }

              }
              else
              {
                {
                  tmp___45 = mbs_to_wchar(& _wc___7, lexptr, lexleft, dfa___0);
                  nbytes___7 = tmp___45;
                  cur_mb_len = (int) nbytes___7;
                  wc2 = _wc___7;
                }
                if (nbytes___7 == 1UL)
                {
                  {
                    tmp___46 = to_uchar___0((char) (* lexptr));
                    c2 = (int) tmp___46;
                  }
                }

                lexptr += nbytes___7;
                lexleft -= nbytes___7;
              }

              goto while_break___10;
            }

          }
          while_break___10:;


          if (c2 == 91)
          {
            if (((const int) (* lexptr)) == 46)
            {
            }

          }

          if (c2 != 93)
          {
            if (c2 == 92)
            {
              if (syntax_bits & 1UL)
              {
                {
                  while (1)
                  {
                    while_continue___11:;


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

            }

            if (dfa___0->multibyte)
            {
              if (wc != 4294967295U)
              {
                if (wc2 != 4294967295U)
                {
                  {
                    work_mbc->ranges = (struct __anonstruct_ranges_39 *) maybe_realloc((void *) work_mbc->ranges, work_mbc->nranges + 2UL, & ranges_al, sizeof(* work_mbc->ranges));
                  }
                  if (case_fold)
                  {
                    (work_mbc->ranges + work_mbc->nranges)->beg = (wchar_t) wc;
                  }

                  tmp___52 = work_mbc->nranges;
                  work_mbc->nranges++;
                  if (case_fold)
                  {
                    (work_mbc->ranges + tmp___52)->end = (wchar_t) wc2;
                  }

                  if (case_fold)
                  {
                    {
                      {
                      }
                      if (tmp___56)
                      {
                      }

                    }
                  }

                }

              }

            }
            else
            {
              {
              }
              if (tmp___60)
              {
                {
                  while (1)
                  {
                    {
                      {
                      }
                    }
                  }

                }
              }

              {
                if (! lexleft)
                {
                  {
                  }
                  if (((unsigned long) tmp___62) != ((unsigned long) ((char *) 0)))
                  {
                  }

                }
                else
                {
                  {
                    tmp___63 = mbs_to_wchar(& _wc___9, lexptr, lexleft, dfa___0);
                    nbytes___9 = tmp___63;
                    cur_mb_len = (int) nbytes___9;
                    wc1 = _wc___9;
                  }
                  if (nbytes___9 == 1UL)
                  {
                    {
                      tmp___64 = to_uchar___0((char) (* lexptr));
                      c1 = (int) tmp___64;
                    }
                  }

                  lexptr += nbytes___9;
                  lexleft -= nbytes___9;
                }

                goto while_break___14;
              }
            }

            while_break___14:;


            goto __Cont;
          }

        }

        if (c == 58)
        {
          tmp___65 = 4;
        }

        colon_warning_state |= tmp___65;
        if (! dfa___0->multibyte)
        {
          if (case_fold)
          {
          }

        }

        if (wc == 4294967295U)
        {
        }
        else
        {
          if (case_fold)
          {
            {
            }
          }
          else
          {
            tmp___67 = 1;
          }

          n = tmp___67;
          folded[0] = (wchar_t) wc;
          i = 0;
          {
            while (1)
            {
              if (! (i < n))
              {
                goto while_break___15;
              }

              {
                tmp___69 = setbit_wc((wint_t) folded[i], ccl);
              }
              if (! tmp___69)
              {
                {
                }
              }

              i++;
            }

          }
          while_break___15:;


        }

        __Cont:;


        wc = wc1;
        c = c1;
        if (! (c != 93))
        {
          goto while_break___1;
        }

      }

    }
    while_break___1:;


    {
      {
      }
    }
    if (! known_bracket_exp)
    {
      return (token) 257;
    }

    if (dfa___0->multibyte)
    {
      {
        work_mbc->invert = invert;
        tmp___73 = equal((charclass_word *) ccl, (charclass_word *) zeroclass);
      }
      if (tmp___73)
      {
        work_mbc->cset = (ptrdiff_t) (- 1);
      }
      else
      {
        {
          tmp___72 = charclass_index((charclass_word *) ccl);
          work_mbc->cset = (ptrdiff_t) tmp___72;
        }
      }

      return (token) 273;
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
  size_t tmp;
  unsigned char tmp___0;
  int tmp___3;
  int tmp___4;
  int tmp___7;
  const char *p;
  const char *lim;
  const char *tmp___9;
  {
    backslash = (_Bool) 0;
    i = 0;
    {
      while (1)
      {
        {
        }
        {
          while (1)
          {
            if (! lexleft)
            {
              lasttok = (token) (- 1);
              return lasttok;
            }
            else
            {
              {
                tmp = mbs_to_wchar(& _wc, lexptr, lexleft, dfa___0);
                nbytes = tmp;
                cur_mb_len = (int) nbytes;
                wctok = _wc;
              }
              if (nbytes == 1UL)
              {
                {
                  tmp___0 = to_uchar___0((char) (* lexptr));
                  c = (int) tmp___0;
                }
              }

              lexptr += nbytes;
              lexleft -= nbytes;
            }

            goto while_break___0;
          }

        }
        while_break___0:;


        if (c == 92)
        {
          goto case_92;
        }

        if (c == 94)
        {
          goto case_94;
        }

        if (c == 36)
        {
          goto case_36;
        }

        if (c == 49)
        {
          goto case_49;
        }

        if (c == 51)
        {
          goto case_49;
        }

        if (c == 52)
        {
          goto case_49;
        }

        if (c == 54)
        {
          goto case_39;
        }

        if (c == 60)
        {
          goto case_63;
        }

        if (c == 42)
        {
          goto case_42;
        }

        if (c == 43)
        {
          goto case_43;
        }

        if (c == 123)
        {
        }

        if (c == 124)
        {
          goto case_124;
        }

        if (c == 10)
        {
          goto case_40;
        }

        if (c == 41)
        {
          goto case_41;
        }

        if (c == 115)
          if (c == 83)
        {
          goto case_115;
        }


        {
        }
        if (c == 91)
        {
          goto case_91;
        }

        goto normal_char;
        case_92:;


        {
          {
          }
        }
        case_94:;


        {
          if (lasttok == (- 1L))
          {
            lasttok = (token) 258;
            return lasttok;
          }
          else
          {
            {
              if (lasttok == 269L)
              {
              }

            }
          }

        }
        case_36:;


        {
        }
        {
          if (lexleft == 0UL)
          {
            lasttok = (token) 259;
            return lasttok;
          }
          else
          {
            if (syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            {
              if (lexleft > 0UL)
              {
              }

            }
            else
            {
              if (lexleft > 1UL)
              {
                if (((const int) (* (lexptr + 0))) == 92)
                {
                  if (((const int) (* (lexptr + 1))) == 41)
                  {
                    tmp___3 = 1;
                  }

                }

              }

              tmp___4 = tmp___3;
            }

            if (tmp___4)
            {
              lasttok = (token) 259;
              return lasttok;
            }
            else
            {
              if (syntax_bits & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
              {
                if (lexleft > 1UL)
                {
                }

              }

              if (tmp___7)
              {
              }
              else
              {
                if (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                {
                }

              }

            }

          }

        }
        case_49:;


        {
          if (! (syntax_bits & ((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
          }

        }
        goto normal_char;
        {
        }
        case_39:;


        if (backslash)
        {
          if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
          }

        }

        {
        }
        case_63:;


        {
        }
        if (((int) backslash) != ((syntax_bits & (1UL << 1)) != 0UL))
        {
          if (laststart)
          {
          }

        }

        lasttok = (token) 264;
        return lasttok;
        case_42:;


        {
        }
        if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1)))
        {
          if (laststart)
          {
          }

        }

        lasttok = (token) 265;
        case_43:;


        {
        }
        if (((int) backslash) != ((syntax_bits & (1UL << 1)) != 0UL))
        {
          if (laststart)
          {
          }

        }

        lasttok = (token) 266;
        return lasttok;
        {
        }
        {
          while (1)
          {
            {
              if (32768 < (((minrep * 10) + ((int) (* p))) - 48))
              {
              }

            }
          }

        }
        {
          {
            if (minrep < 0)
            {
            }

            {
              while (1)
              {
                {
                }
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
          if (((unsigned long) p) != ((unsigned long) lim))
          {
            if (((const int) (* tmp___9)) == 92)
            {
              if (((unsigned long) p) != ((unsigned long) lim))
              {
              }

            }

            {
            }
            {
            }
          }

        }
        if (32767 < maxrep)
        {
        }

        case_124:;


        {
        }
        laststart = (_Bool) 1;
        lasttok = (token) 269;
        return lasttok;
        {
          {
            if (! (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            {
            }

          }
        }
        case_40:;


        if (((int) backslash) != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
        }

        parens++;
        laststart = (_Bool) 1;
        lasttok = (token) 270;
        return lasttok;
        case_41:;


        if (((int) backslash) != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
          if (syntax_bits & (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
          {
          }

        }

        parens--;
        laststart = (_Bool) 0;
        lasttok = (token) 271;
        if (dfa___0->multibyte)
        {
          laststart = (_Bool) 0;
          lasttok = (token) 272;
          return lasttok;
        }

        {
        }
        {
        }
        {
        }
        case_115:;


        if (! backslash)
        {
          goto normal_char;
        }
        else
        {
          if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
          {
          }

        }

        if (! dfa___0->multibyte)
        {
          {
          }
          {
            while (1)
            {
              {
              }
            }

            {
            }
            {
            }
          }
        }

        {
          if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
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
        case_91:;


        {
        }
        {
          laststart = (_Bool) 0;
          lasttok = parse_bracket_exp();
        }
        return lasttok;
        normal_char:;


        laststart = (_Bool) 0;
        if (dfa___0->multibyte)
        {
          lasttok = (token) 274;
          return lasttok;
        }

        if (case_fold)
        {
        }

        switch_break:;


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
          ;

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
                  _L:;


                  {
                    addtok_mb((token) 273, (int) (((dfa___0->nmbcsets - 1UL) << 2) + 3UL));
                  }
                  if (need_or)
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
  mbstate_t s;
  size_t tmp;
  int tmp___0;
  {
    {
      s.__count = 0;
      tmp = wcrtomb((char *) ((char *) buf), (wchar_t) wc, (mbstate_t *) (& s));
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
  unsigned int n;
  unsigned int i;
  charclass c;
  size_t tmp;
  {
    n = (unsigned int) ((sizeof(utf8_classes)) / (sizeof(utf8_classes[0])));
    {
      i = 0U;
      {
        while (1)
        {
          if (! (i < n))
          {
            goto while_break;
          }

          {
            copyset(utf8_classes[i], c);
          }
          if (i == 1U)
          {
            if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)))
              dfa___0->utf8_anychar_classes[i] = (token) (275UL + tmp);

            i++;
          }

        }

      }
      while_break:
      ;

    }
    i = 1U;
    {
      while (1)
      {
        if (! (i < n))
        {
          goto while_break___0;
        }

        {
          addtok(dfa___0->utf8_anychar_classes[i]);
          i++;
        }
      }

    }
    while_break___0:;


    {
      while (1)
      {
        i--;
        if (! (i > 1U))
        {
          goto while_break___1;
        }

        {
          addtok((token) 269);
        }
      }

    }
    while_break___1:
    ;

  }
}

static void atom(void)
{
  wchar_t folded[21];
  int i;
  int n;
  int tmp;
  int tmp___1;
  {
    if (tok == 274L)
    {
      if (wctok == 4294967295U)
      {
        {
        }
      }
      else
      {
        {
          addtok_wc(wctok);
        }
        if (case_fold)
        {
          {
            tmp = case_folded_counterparts((wchar_t) wctok, folded);
            n = tmp;
            i = 0;
            {



              if (! (i < n))
              {
                goto while_break;
              }

              {
                addtok_wc((wint_t) folded[i]);
                addtok((token) 269);
                i++;
              }
            }
          }
          while_break:;


        }

      }

      {
        tok = lex();
      }
    }
    else
    {
      if (tok == 272L)
      {
        {
          tmp___1 = using_utf8();
        }
        if (tmp___1)
        {
          {
            add_utf8_anychar();
            tok = lex();
          }
        }

      }
      else
      {
        _L___0:;


        if (tok >= 0L)
        {
          if (tok < 256L)
          {
            {
            }
          }
          else
          {
            goto _L;
          }

        }
        else
        {
          _L:;


          if (tok >= 275L)
          {
            {
            }
          }
          else
          {
            if (tok == 257L)
            {
              {
                addtok(tok);
                tok = lex();
              }
            }
            else
            {
              if (tok == 258L)
              {
                {
                  addtok(tok);
                  tok = lex();
                }
              }
              else
              {
                if (tok == 259L)
                {
                  {
                    addtok(tok);
                    tok = lex();
                  }
                }
                else
                {
                  if (tok == 260L)
                  {
                    {
                    }
                  }
                  else
                  {
                    if (tok == 272L)
                    {
                      {
                      }
                    }
                    else
                    {
                      if (tok == 273L)
                      {
                        {
                          addtok(tok);
                          tok = lex();
                        }
                      }
                      else
                      {
                        if (tok == 261L)
                        {
                          if (tok == 262L)
                          {
                            if (tok == 263L)
                            {
                              if (tok == 270L)
                              {
                                {
                                  tok = lex();
                                  regexp();
                                }
                                if (tok != 271L)
                                {
                                  {
                                  }
                                }

                                {
                                  tok = lex();
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

static void closure(void)
{
  int i;
  {
    {
      atom();
      {
        {
          if (! (tok == 265L))
          {
            if (! (tok == 266L))
            {
              if (! (tok == 267L))
              {
                goto while_break;
              }

            }

          }

        }
        if (tok == 267L)
        {
          {
            if (maxrep)
            {
              {
                {
                  if (! (i < maxrep))
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
          _L:;


          {
            {
              addtok(tok);
              tok = lex();
            }
          }
        }

      }
    }
    while_break:;


  }
}

static void branch(void)
{
  {
    {
      closure();
    }
    {
      while (1)
      {
        if (tok != 271L)
        {
          if (tok != 269L)
          {
            if (! (tok >= 0L))
            {
              goto while_break;
            }

          }
          else
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        {
          closure();
          addtok((token) 268);
        }
      }

    }
    while_break:;


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
    lasttok = (token) (- 1);
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
      addtok((token) 268);
    }
  }
}

static void copy(const position_set *src, position_set *dst)
{
  {
    if (dst->alloc < ((size_t) src->nelem))
    {
      {
        free((void *) dst->elems);
        dst->alloc = (size_t) src->nelem;
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
  size_t mid;
  {
    count = s->nelem;
    lo = (size_t) 0;
    hi = count;
    {
      while (1)
      {



        if (! (lo < hi))
        {
          goto while_break;
        }

        mid = (lo + hi) >> 1;
        {
          lo = mid + 1UL;
        }
      }

    }
    while_break:;



    {
      if (p.index == (s->elems + lo)->index)
      {
        (s->elems + lo)->constraint |= p.constraint;
      }

    }

    * (s->elems + lo) = p;
    s->nelem++;

  }
}

static void merge(const position_set *s1, const position_set *s2, position_set *m)
{
  size_t i;
  size_t j;
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  size_t tmp___2;
  size_t tmp___3;
  size_t tmp___6;
  size_t tmp___7;
  size_t tmp___8;
  size_t tmp___9;
  {
    i = (size_t) 0;
    j = (size_t) 0;
    {
      {
      }
    }
    m->nelem = (size_t) 0;
    {
      while (1)
      {
        if (i < ((size_t) s1->nelem))
        {
          if (! (j < ((size_t) s2->nelem)))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        if ((s1->elems + i)->index > (s2->elems + j)->index)
        {
          tmp = m->nelem;
          m->nelem++;

          i++;
        }
        else
        {
          if ((s1->elems + i)->index < (s2->elems + j)->index)
          {
            tmp___1 = m->nelem;
            m->nelem++;
            tmp___2 = j;
            j++;
            * (m->elems + tmp___1) = * (s2->elems + tmp___2);
          }
          else
          {
            tmp___3 = i;
          }

        }

      }

    }
    while_break:
    ;

    {
      while (1)
      {
        if (! (i < ((size_t) s1->nelem)))
        {
          goto while_break___0;
        }

        tmp___6 = m->nelem;
        m->nelem++;
        tmp___7 = i;
        i++;
        * (m->elems + tmp___6) = * (s1->elems + tmp___7);
      }

    }
    while_break___0:;


    {
      while (1)
      {
        if (! (j < ((size_t) s2->nelem)))
        {
          goto while_break___1;
        }

        tmp___8 = m->nelem;
        m->nelem++;
        tmp___9 = j;
        j++;
        * (m->elems + tmp___8) = * (s2->elems + tmp___9);
      }

    }
    while_break___1:;


  }
}

static void delete(position p, position_set *s)
{
  size_t i;
  {
    i = (size_t) 0;
    ;
    {
      s->nelem--;
      {
        while (1)
        {
          {
            goto while_break___0;
          }
        }

      }
      while_break___0:
      ;

    }
    return;
  }
}

static state_num state_index(struct dfa *d, const position_set *s, int context)
{
  size_t hash;
  int constraint;
  state_num i;
  state_num j;
  {
    hash = (size_t) 0;
    i = (state_num) 0;
    {
      while (1)
      {
        {
          goto while_break;
        }
        hash ^= (s->elems + i)->index + ((size_t) (s->elems + i)->constraint);
      }

    }
    while_break:;


    {
      while (1)
      {
        if (! (i < d->sindex))
        {
          goto while_break___0;
          {
          }
        }

        i++;
      }

    }
    while_break___0:;


    {
      d->states = (dfa_state *) maybe_realloc((void *) d->states, (size_t) d->sindex, & d->salloc, sizeof(* d->states));
      alloc_position_set(& (d->states + i)->elems, (size_t) s->nelem);
      copy(s, & (d->states + i)->elems);
      (d->states + i)->context = (unsigned char) context;
      (d->states + i)->constraint = (unsigned short) 0;
      j = (state_num) 0;
    }
    {
      while (1)
      {
        if (! (((const size_t) j) < s->nelem))
        {
          goto while_break___2;
        }

        if ((* (d->tokens + (s->elems + j)->index)) < 0L)
        {
          constraint = (int) (s->elems + j)->constraint;
          {
            (d->states + i)->constraint = (unsigned short) (((int) (d->states + i)->constraint) | constraint);
          }
          if (! (d->states + i)->first_end)
          {
            (d->states + i)->first_end = * (d->tokens + (s->elems + j)->index);
          }

        }
        else
        {
          if ((* (d->tokens + (s->elems + j)->index)) == 257L)
          {
            (d->states + i)->constraint = (unsigned short) 1911;
            (d->states + i)->has_backref = (_Bool) 1;
          }

        }

        j++;
      }

    }
    while_break___2:;


    d->sindex++;
    return i;
  }
}

static void epsclosure(position_set *s, const struct dfa *d, char *visited)
{
  size_t i;
  size_t j;
  position p;
  position old;
  _Bool initialized;
  {
    {
      while (1)
      {
        if (! (i < s->nelem))
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
                    old = * (s->elems + i);
                    delete(* (s->elems + i), s);
                  }
                  p.constraint &= 1092U;
                  j = (size_t) 0;
                  {
                    while (1)
                    {
                      if (! (j < (d->follows + old.index)->nelem))
                      {
                        goto while_break___0;
                      }

                      {
                        p.index = ((d->follows + old.index)->elems + j)->index;
                        insert(p, s);
                        j++;
                      }
                    }

                  }
                  while_break___0:
                  ;

                  i = (size_t) (- 1);
                }

              }

            }

          }

        }

        i++;
      }

    }
    while_break:
    ;

  }
}

static int charclass_context(charclass_word *c)
{
  {
    {
      {
        {
          goto while_break;
        }
      }
    }
    while_break:
    ;

  }
}

static int state_separate_contexts(const position_set *s)
{
  int separate_contexts;
  size_t j;
  {
    separate_contexts = 0;
    j = (size_t) 0;
    {
      while (1)
      {
        if (! (j < ((size_t) s->nelem)))
        {
          goto while_break;
        }

        if ((((s->elems + j)->constraint >> 2) & 273U) != ((s->elems + j)->constraint & 273U))
        {
          separate_contexts |= 4;
        }

        if ((((s->elems + j)->constraint >> 1) & 273U) != ((s->elems + j)->constraint & 273U))
        {
        }

        j++;
      }

    }
    while_break:;


    return (int) separate_contexts;
  }
}

void dfaanalyze(struct dfa *d, int searchflag)
{
  position *posalloc;
  position *tmp;
  position *firstpos;
  position *lastpos;
  struct __anonstruct_stkalloc_43 *stkalloc;
  struct __anonstruct_stkalloc_43 *tmp___0;
  struct __anonstruct_stkalloc_43 *stk;
  position_set tmp___1;
  position_set merged;
  int separate_contexts;
  size_t i;
  size_t j;
  position *pos;
  char *visited;
  size_t tmp___4;
  size_t tmp___5;
  size_t tmp___6;
  unsigned int tmp___7;
  int tmp___8;
  {
    {
      tmp = (position *) xnmalloc(d->nleaves, 2UL * (sizeof(* posalloc)));
      posalloc = tmp;
      lastpos = firstpos + d->nleaves;
      tmp___0 = (struct __anonstruct_stkalloc_43 *) xnmalloc(d->depth, sizeof(* stkalloc));
      stkalloc = tmp___0;
      stk = stkalloc;
      d->searchflag = (_Bool) (searchflag != 0);
      alloc_position_set(& merged, d->nleaves);
      d->follows = (position_set *) xcalloc(d->tindex, sizeof(* d->follows));
      i = (size_t) 0;
    }
    {
      while (1)
      {
        if (! (i < d->tindex))
        {
          goto while_break;
        }

        if ((* (d->tokens + i)) == 266L)
        {
          goto case_264;
        }

        if ((* (d->tokens + i)) == 268L)
        {
          goto case_268;
        }

        if ((* (d->tokens + i)) == 269L)
        {
          goto case_269;
        }

        goto switch_default;
        case_264:;


        {
          (stk + (- 1))->nullable = (_Bool) 1;
        }
        goto switch_break;
        case_268:;


        tmp___1.nelem = (stk + (- 1))->nfirstpos;
        tmp___1.elems = firstpos;
        pos = lastpos + (stk + (- 1))->nlastpos;
        j = (size_t) 0;
        {
          while (1)
          {
            if (! (j < (stk + (- 2))->nlastpos))
            {
              goto while_break___1;
            }

            {
              merge((const position_set *) (& tmp___1), (const position_set *) (d->follows + (pos + j)->index), & merged);
              copy((const position_set *) (& merged), d->follows + (pos + j)->index);
              j++;
            }
          }

        }
        while_break___1:;


        if ((stk + (- 2))->nullable)
        {
          (stk + (- 2))->nfirstpos += (stk + (- 1))->nfirstpos;
        }
        else
        {
          firstpos += (stk + (- 1))->nfirstpos;
        }

        if ((stk + (- 1))->nullable)
        {
          (stk + (- 2))->nlastpos += (stk + (- 1))->nlastpos;
        }
        else
        {
          {
            while (1)
            {
              tmp___4 = j;
              {
                goto while_break___2;
              }
              * (pos + j) = * (lastpos + j);
            }

          }
          while_break___2:;


          (stk + (- 2))->nlastpos = (stk + (- 1))->nlastpos;
        }

        (stk + (- 2))->nullable = (_Bool) (((int) (stk + (- 2))->nullable) & ((int) (stk + (- 1))->nullable));
        stk--;
        goto switch_break;
        case_269:;


        (stk + (- 2))->nfirstpos += (stk + (- 1))->nfirstpos;
        (stk + (- 2))->nlastpos += (stk + (- 1))->nlastpos;
        stk--;
        goto switch_break;
        switch_default:;


        {
          stk->nullable = (_Bool) ((* (d->tokens + i)) == 257L);
          tmp___5 = (size_t) 1;
          stk->nlastpos = tmp___5;
          stk->nfirstpos = tmp___5;
          stk++;
          firstpos--;
          lastpos--;
          tmp___6 = i;
          lastpos->index = tmp___6;
          firstpos->index = tmp___6;
          tmp___7 = 1911U;
          firstpos->constraint = tmp___7;
        }
        goto switch_break;
        switch_break:;


        i++;
      }

    }
    while_break:;


    {
      while (1)
      {
        {
          goto while_break___3;
          {
            {
              if ((* (d->tokens + i)) == 273L)
              {
                if ((* (d->tokens + i)) >= 275L)
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

    }
    while_break___3:;


    merged.nelem = (size_t) 0;
    i = (size_t) 0;
    {
      while (1)
      {
        if (! (i < (stk + (- 1))->nfirstpos))
        {
          goto while_break___4;
        }

        {
          insert(* (firstpos + i), & merged);
          i++;
        }
      }

    }
    while_break___4:;


    {
      epsclosure(& merged, (const struct dfa *) d, visited);
    }
    if (separate_contexts & 4)
    {
    }

    {
      state_index(d, (const position_set *) (& merged), tmp___8);
    }
    return;
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
  int separate_contexts;
  state_num state;
  state_num state_newline;
  state_num state_letter;
  _Bool next_isnt_1st_byte;
  size_t i;
  size_t j;
  size_t k;
  int c;
  const unsigned short **tmp___7;
  {
    {
      ngrps = (size_t) 0;
    }
    {
      while (1)
      {
        if (! (i < (d->states + s)->elems.nelem))
        {
          goto while_break;
        }

        pos = * ((d->states + s)->elems.elems + i);
        if ((* (d->tokens + pos.index)) >= 0L)
        {
          if ((* (d->tokens + pos.index)) < 256L)
          {
            {
              setbit((unsigned int) (* (d->tokens + pos.index)), matches);
            }
          }
          else
          {
            goto _L___0;
          }

        }
        else
        {
          _L___0:;


          if ((* (d->tokens + pos.index)) >= 275L)
          {
            {
              copyset((charclass_word *) (* (d->charclasses + ((* (d->tokens + pos.index)) - 275L))), matches);
            }
          }
          else
          {
            {
              if ((* (d->tokens + pos.index)) == 272L)
              {
                {
                }
                {
                }
              }

            }
            goto __Cont;
          }

        }

        if (pos.constraint != 1911U)
        {
          if (! (((pos.constraint >> 8) & 15U) & ((unsigned int) (d->states + s)->context)))
          {
            j = (size_t) 0;
            {
              while (1)
              {
                {
                  goto while_break___0;
                }
              }

            }
            while_break___0:;


            {
              while (1)
              {
                {
                  goto while_break___1;
                }
              }

            }
            while_break___1:;


            {
              while (1)
              {
                if (! (j < 8UL))
                {
                  goto while_break___2;
                }

                matches[j] &= letters[j] | newline[j];
                j++;
              }

            }
            while_break___2:;


            {
            }
          }




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
        }

        {
          {
            copyset((charclass_word *) matches, labels[ngrps]);
            zeroset(matches);
            grps[ngrps].elems = (size_t *) xnmalloc(d->nleaves, sizeof(* grps[ngrps].elems));
            grps[ngrps].nelem = (size_t) 1;
            * (grps[ngrps].elems + 0) = pos.index;
            ngrps++;
          }
        }
        __Cont:
        ;

        i++;
      }

    }
    while_break:;


    {
      alloc_position_set(& follows, d->nleaves);
      alloc_position_set(& tmp, d->nleaves);
    }
    if (d->searchflag)
    {
      {
        copy((const position_set *) (& (d->states + 0)->elems), & follows);
        separate_contexts = (int) state_separate_contexts((const position_set *) (& follows));
        state = state_index(d, (const position_set *) (& follows), separate_contexts ^ 7);
      }
      if (separate_contexts & 4)
      {
        while (1)
        {
          if (! (i < 256UL))
          {
            goto while_break___7;
          }

          {
            if (i == 95UL)
            {
              * (trans___0 + i) = state_letter;
            }
            else
            {
              * (trans___0 + i) = state;
            }

          }
          i++;
        }

      }

      while_break___7:;


    }
    else
    {
      {
        while (1)
        {
          {
          }
        }

      }
    }

    i = (size_t) 0;
    {
      while (1)
      {
        if (! (i < ngrps))
        {
          goto while_break___9;
        }

        follows.nelem = (size_t) 0;
        j = (size_t) 0;
        {
          while (1)
          {
            if (! (j < grps[i].nelem))
            {
              goto while_break___10;
            }

            k = (size_t) 0;
            {
              while (1)
              {
                if (! (k < (d->follows + (* (grps[i].elems + j)))->nelem))
                {
                  goto while_break___11;
                }

                {
                  insert(* ((d->follows + (* (grps[i].elems + j)))->elems + k), & follows);
                  k++;
                }
              }

            }
            while_break___11:;


            j++;
          }

        }
        while_break___10:;


        {
          if (! d->multibyte)
          {
            {
              merge((const position_set *) (& (d->states + 0)->elems), (const position_set *) (& follows), & tmp);
              copy((const position_set *) (& tmp), & follows);
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
            state = state_index(d, (const position_set *) (& follows), separate_contexts ^ 7);
          }
        }
        {
          state_letter = state;
        }
        j = (size_t) 0;
        {
          while (1)
          {
            if (! (j < 8UL))
            {
              goto while_break___13;
            }

            k = (size_t) 0;
            {
              while (1)
              {
                if (! (k < 32UL))
                {
                  goto while_break___14;
                }

                if ((labels[i][j] >> k) & 1U)
                {
                  c = (int) ((j * 32UL) + k);
                  if (c == ((int) eolbyte___0))
                  {
                    * (trans___0 + c) = state_newline;
                  }
                  else
                  {
                    {
                      tmp___7 = __ctype_b_loc();
                    }
                    if (((const int) (* ((* tmp___7) + c))) & 8)
                    {
                      * (trans___0 + c) = state_letter;
                    }
                    else
                    {
                      if (c == 95)
                      {
                        * (trans___0 + c) = state_letter;
                      }
                      else
                      {
                        if (c < 256)
                        {
                          * (trans___0 + c) = state;
                        }

                      }

                    }

                  }

                }

                k++;
              }

            }
            while_break___14:;


            j++;
          }

        }
        while_break___13:;


        i++;
      }

    }
    while_break___9:;


    i = (size_t) 0;
    {
      while (1)
      {
        {
          goto while_break___15;
        }
      }

    }
    while_break___15:;


  }
}

static void realloc_trans_if_necessary(struct dfa *d, state_num new_state)
{
  state_num oldalloc;
  state_num **realtrans;
  state_num **tmp;
  size_t newalloc;
  size_t newalloc1;
  {
    oldalloc = d->tralloc;
    {
      if (d->trans)
      {
        tmp = d->trans - 1;
      }
      else
      {
        tmp = (state_num **) ((void *) 0);
      }

      {
        realtrans = tmp;
        newalloc1 = (size_t) (new_state + 1L);
        realtrans = (state_num **) x2nrealloc((void *) realtrans, & newalloc1, sizeof(* realtrans));
        d->trans = realtrans + 1;
        newalloc = newalloc1 - 1UL;
        d->tralloc = (state_num) newalloc;
        d->fails = (state_num **) xnrealloc((void *) d->fails, newalloc, sizeof(* d->fails));
        d->success = (int *) xnrealloc((void *) d->success, newalloc, sizeof(* d->success));
      }
      {
      }
    }
    return;
  }
}

static void build_state(state_num s, struct dfa *d)
{
  state_num *trans___0;
  state_num i;
  {
    if (d->trcount >= 1024)
    {
      {
      }
    }

    {
      * (d->success + s) |= 4;
    }
    if (((((int) (d->states + s)->constraint) >> 4) & 15) & ((int) (d->states + s)->context))
    {
      * (d->success + s) |= 2;
    }

    if ((((int) (d->states + s)->constraint) & 15) & ((int) (d->states + s)->context))
    {
      * (d->success + s) |= 1;
    }

    {
      trans___0 = (state_num *) xmalloc(256UL * (sizeof(* trans___0)));
      dfastate(s, d, trans___0);
      {
        {
        }
        i++;
      }
    }
    {
      * (trans___0 + ((int) eolbyte___0)) = (state_num) (- 1);
    }
    if ((d->states + s)->constraint)
    {
      * (d->fails + s) = trans___0;
    }
    else
    {
      * (d->trans + s) = trans___0;
    }

    return;
  }
}

static void build_state_zero(struct dfa *d)
{
  int initial_tab_size;
  {
    {
      realloc_trans_if_necessary(d, (state_num) initial_tab_size);
    }
    return;
  }
}

char *dfaexec(struct dfa *d, const char *begin, char *end, int allow_nl, size_t *count, int *backref)
{
  state_num s;
  state_num s1;
  const unsigned char *p;
  const unsigned char *mbp;
  state_num **trans___0;
  state_num *t;
  unsigned char eol;
  unsigned char saved_end;
  size_t nlcount;
  state_num tmp___2;
  const unsigned char *tmp___3;
  const unsigned char *tmp___4;
  {
    eol = eolbyte___0;
    nlcount = (size_t) 0;
    if (! d->tralloc)
    {
      {
        build_state_zero(d);
      }
    }

    s1 = (state_num) 0;
    s = s1;
    mbp = (const unsigned char *) begin;
    p = mbp;
    trans___0 = d->trans;
    {
      {
      }
      if (! d->mb_match_lens)
      {
      }

    }
    {
      while (1)
      {
        if (d->multibyte)
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
                    {
                    }
                  }

                }
                {
                }
              }
              {
              }
              {
              }
            }

          }
        }
        else
        {
          {
            while (1)
            {
              t = * (trans___0 + s);
              if (! (((unsigned long) t) != ((unsigned long) ((void *) 0))))
              {
                goto while_break___2;
              }

              if (((unsigned long) t) == ((unsigned long) ((void *) 0)))
              {
                tmp___2 = s;
              }

              tmp___3 = p;
              p++;
              s = * (t + ((const int) (* tmp___3)));
            }

          }
          while_break___2:;


        }

        if (((unsigned long) ((char *) p)) > ((unsigned long) end))
        {
          p = (const unsigned char *) ((void *) 0);
          goto done;
        }

        if (s >= 0L)
        {
          if (* (d->fails + s))
          {
            if ((* (d->success + s)) & sbit[* p])
            {
              if (backref)
              {
                * backref = (int) (d->states + s)->has_backref;
              }

              goto done;
            }

            {
              tmp___4 = p;
            }
            goto __Cont;
          }

        }

        if (((const int) (* (p + (- 1)))) == ((const int) eol))
        {
          if (((unsigned long) ((char *) p)) != ((unsigned long) begin))
          {
            nlcount++;
          }

        }

        if (s >= 0L)
        {
          if (! (* (d->trans + s)))
          {
            {
              build_state(s, d);
            }
          }

          trans___0 = d->trans;
          goto __Cont;
          {
          }
        }

        s = (state_num) 0;
        __Cont:
        ;

      }

    }
    done:
    ;

    {
      * count += nlcount;
    }
    * end = (char) saved_end;
    return (char *) p;
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
  size_t i;
  struct mb_char_classes *p;
  {
    {
      free((void *) d->multibyte_prop);
      {
        {
          p = d->mbcsets + i;
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
  _Bool have_backref;
  {
    {
      have_backref = (_Bool) 0;
    }
    while_break:
    ;

    {
      if (d->superset)
      {
        {
          dfafree(d->superset);
        }
      }

    }
    {
      free_mbdata(d);
      d->multibyte = (_Bool) 0;
    }
    return;
  }
}

static void dfassbuild(struct dfa *d)
{
  struct dfa *sup;
  {
    {
      sup->follows = (position_set *) ((void *) 0);
    }
  }
}

void dfacomp(const char *s, size_t len, struct dfa *d, int searchflag)
{
  {
    {
      dfainit(d);
      dfambcache(d);
      dfaparse(s, len, d);
      dfaoptimize(d);
      dfaanalyze(d, searchflag);
    }
  }
}

void dfafree(struct dfa *d)
{




}

static char *icatalloc(char *old, const char *new)
{
  char *result;
  {
    {
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
    ;

  }
}

static char **enlist(char **cpp, char *new, size_t len)
{
}

static char **comsubs(char *left, const char *right)
{
  {
    {
      {
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
    ;

  }
}

static char **inboth(char **left, char **right)
{
  char **both;
  char **tmp;
  {
    {
      tmp = (char **) xzalloc(sizeof(* both));
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
  {
    {
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


  _Bool begline___0;

  struct dfamust *dm;
  token t;




  {
    mp = (must *) ((void *) 0);
    {
      while (1)
      {
        {








          {
          }

        }
        if (275L <= t)

















          dm->begline = begline___0;

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
      }

    }

  }
}

static char *out;
static mb_len_map_t *len_map;
void build_mbclen_cache(void)
{
  int i;
  char c;
  unsigned char uc;
  mbstate_t mbs;
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
          mbs.__count = 0;
          mbclen_cache[uc] = mbrlen((const char *) ((const char *) (& c)), (size_t) 1, (mbstate_t *) (& mbs));
          i++;
        }
      }

    }
    while_break:
    ;

  }
}

ptrdiff_t mb_goback(const char **mb_start, const char *cur, const char *end)
{

  {
  }
}

wint_t mb_prev_wc(const char *buf, const char *cur, const char *end)
{
  {
  }
}

wint_t mb_next_wc(const char *cur, const char *end)
{
  {
  }
}

extern __off_t lseek(int __fd, __off_t __offset, int __whence);
extern int isatty(int __fd);
extern char *optarg;
extern int optind;
extern char *textdomain(const char *__domainname);
extern char *bindtextdomain(const char *__domainname, const char *__dirname);
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
static const char *sgr_start = "\033[%sm\033[K";
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
static const char *const directories_args[4] = {(const char *) "read", (const char *) "recurse", (const char *) "skip", (const char *) ((const char *) ((void *) 0))};
static const enum directories_type directories_types[3] = {(const enum directories_type) 2, (const enum directories_type) 3, (const enum directories_type) 4};
static enum directories_type directories = (enum directories_type) 2;
static int fts_options = 793;
static enum __anonenum_devices_71 devices = (enum __anonenum_devices_71) 0;
static int grepfile(int dirdesc, const char *name, int follow, int command_line);
static int grepdesc(int desc, int command_line);
static void dos_binary(void);
static void dos_unix_byte_offsets(void);
static int usable_st_size(const struct stat *st)
{
  int tmp;
  {
    if ((st->st_mode & 61440U) == 32768U)
    {
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
  off_t cur;
  {
    if (! eolbyte)
    {
      {
        {
        }
        if (cur < 0L)
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
  int tmp___3;
  {
    {
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
  size_t tmp;
  {
    if (! pagesize)
    {
      {
        pagesize = (size_t) getpagesize();
      }
      {
        tmp = (size_t) 32768;
      }
      {
        bufalloc = (tmp + pagesize) + 1UL;
        buffer = (char *) xmalloc(bufalloc);
      }
    }

    {
      buflim = (buffer + 1) + (pagesize - (((size_t) (buffer + 1)) % pagesize));
    }
    bufdesc = fd;
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
  char *readbuf;
  size_t readsize;
  size_t newsize;
  {
    if (pagesize <= ((size_t) ((buffer + bufalloc) - buflim)))
    {
      readbuf = buflim;
      bufbeg = buflim - save;
    }
    else
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
      {
      }
    }

    {
      readsize = (size_t) ((buffer + bufalloc) - readbuf);
      fillsize = (ssize_t) safe_read(bufdesc, (void *) readbuf, readsize);
    }
    if (fillsize < 0L)
    {
    }

    {
      buflim = readbuf + fillsize;
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
static int undossify_input(char *buf, size_t buflen)
{
  {
    return (int) buflen;
    {
      {
        {
          {
            {
              if (! dos_report_unix_offset)
              {
                dos_stripped_crs++;
                {
                  while (1)
                  {
                  }

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

static uintmax_t add_count(uintmax_t a, uintmax_t b)
{
  uintmax_t sum;
  {
    sum = a + b;
  }
}

static void nlscan(const char *lim)
{
  size_t newlines;
  const char *beg;
  {
    newlines = (size_t) 0;
    beg = lastnl;
    {
      while (1)
      {
        if (! (((unsigned long) beg) < ((unsigned long) lim)))
        {
          goto while_break;
        }

        {
          beg = (const char *) memchr((const void *) beg, (int) eolbyte, (size_t) (lim - beg));
        }
        if (! beg)
        {
        }

        newlines++;
        beg++;
      }

    }
    while_break:
    ;

    {
      totalnl = add_count(totalnl, newlines);
    }
    return;
  }
}

static void print_sep(char sep)
{
  {
    {
      pr_sgr_start_if(sep_color);
      fputc_unlocked((int) sep, stdout);
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
        p--;
        * p = (char) (48UL + (pos % 10UL));
        pos /= 10UL;
        if (! (pos != 0UL))
        {
          goto while_break;
        }

      }

    }
    while_break:
    ;

    {
    }
    {
      pr_sgr_start_if(color);
      fwrite_unlocked((const void *) ((const void *) p), (size_t) 1, (size_t) ((buf + (sizeof(buf))) - p), (FILE *) stdout);
    }
    return;
  }
}

static void print_line_head(const char *beg, const char *lim, int sep)
{
  int pending_sep;
  {
    {
      {
      }
      if (filename_mask)
      {
      }

    }
    if (out_line)
    {
      if (((unsigned long) lastnl) < ((unsigned long) lim))
      {
        {
          nlscan(beg);
          totalnl = add_count(totalnl, (uintmax_t) 1);
          lastnl = lim;
        }
      }

      if (pending_sep)
      {
        {
        }
      }

      {
        print_offset(totalnl, 4, line_num_color);

      }
      {
        {
        }
      }
      {
        print_sep((char) sep);
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
  const char *b;
  {
    cur = beg;
    {
      while (1)
      {
        {
          {
            match_offset = (* execute)(beg, (size_t) (lim - beg), & match_size, beg + (cur - beg));
          }
          if (! (match_offset != 0xffffffffffffffffUL))
          {
            goto while_break;
          }

        }
        b = beg + match_offset;
        {
        }
        {
          if (only_matching)
          {
            {
            }
            fwrite_unlocked((const void *) ((const void *) b), sizeof(char), match_size, (FILE *) stdout);
          }

          if (only_matching)
          {
            {
              fputs_unlocked((const char *) "\n", (FILE *) stdout);
            }
          }

        }
        cur = b + match_size;
      }

      while_break___0:;


    }
    while_break:;


  }
}

static const char *print_line_tail(const char *beg, const char *lim, const char *line_color)
{
}

static void prline(const char *beg, const char *lim, int sep)
{
  int matching;
  const char *line_color;
  const char *match_color;
  int tmp___2;
  {
    if (! only_matching)
    {
      {
        print_line_head(beg, lim, sep);
      }
    }

    matching = (sep == 58) ^ ((int) out_invert);
    if (color_option)
    {
      {
      }
    }
    else
    {
      {
        goto _L___0;
      }
      {
        {
          if (* match_color)
          {
            _L___0:
            ;

            {
              if (only_matching)
              {
                {
                  beg = print_line_middle(beg, lim, line_color, match_color);
                }
              }
              else
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

    if (! only_matching)
    {
      if (((unsigned long) lim) > ((unsigned long) beg))
      {
        {
          fwrite_unlocked((const void *) ((const void *) beg), (size_t) 1, (size_t) (lim - beg), (FILE *) stdout);
        }
      }

    }

    {
      tmp___2 = ferror_unlocked(stdout);
    }
  }
}

static void prpending(const char *lim)
{
  {
    if (! lastout)
    {
    }

    {
      while (1)
      {
        {
          goto while_break;
          {
          }
        }
      }

    }
    while_break:
    ;

  }
}

static _Bool used;
static void prtext(const char *beg, const char *lim)
{
  char eol;
  const char *p;
  intmax_t n;
  const char *nl___0;
  const char *tmp___1;
  {
    eol = (char) eolbyte;
    {
      if (pending > 0L)
      {
        {
        }
      }

    }
    p = beg;
    if (! out_quiet)
    {
      {
        while (1)
        {
          while_continue___2:;


          if (((unsigned long) p) < ((unsigned long) lim))
          {
            if (! (n < outleft))
            {
            }

          }
          else
          {
            goto while_break___2;
          }

          {
            tmp___1 = (const char *) memchr((const void *) p, (int) eol, (size_t) (lim - p));
            nl___0 = tmp___1;
            nl___0++;
          }
          if (! out_quiet)
          {
            {
              prline(p, nl___0, ':');
            }
          }

          p = nl___0;
        }

      }
      while_break___2:;


    }
    else
    {
      if (! out_quiet)
      {
        {
          prline(beg, lim, ':');
        }
      }

      n = (intmax_t) 1;
    }

  }
}

static size_t do_execute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
  size_t tmp;
  size_t tmp___0;
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
  }
}

static intmax_t grepbuf(const char *beg, const char *lim)
{
  intmax_t outleft0;
  const char *p;
  const char *endp;
  size_t match_size;
  size_t match_offset;
  size_t tmp;
  const char *b;
  const char *prbeg;
  const char *tmp___0;
  const char *prend;
  const char *tmp___1;
  {
    outleft0 = outleft;
    p = beg;
    {
      while (1)
      {
        if (! (((unsigned long) p) < ((unsigned long) lim)))
        {
          goto while_break;
        }

        {
          tmp = do_execute(p, (size_t) (lim - p), & match_size, (const char *) ((void *) 0));
          match_offset = tmp;
        }
        if (match_offset == 0xffffffffffffffffUL)
        {
          if (! out_invert)
          {
            goto while_break;
          }

          match_offset = (size_t) (lim - p);
        }

        b = p + match_offset;
        endp = b + match_size;
        {
          if (((unsigned long) b) == ((unsigned long) lim))
          {
          }

        }
        if (! out_invert)
        {
          goto _L___0;
        }
        else
        {
          if (((unsigned long) p) < ((unsigned long) b))
          {
            _L___0:;


            if (out_invert)
            {
              tmp___0 = p;
            }
            else
            {
              tmp___0 = b;
            }

            prbeg = tmp___0;
            if (out_invert)
            {
              tmp___1 = b;
            }
            else
            {
              tmp___1 = endp;
            }

            {
              prend = tmp___1;
              prtext(prbeg, prend);
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
    while_break:;


  }
}

static intmax_t grep(int fd, const struct stat *st)
{
  intmax_t nlines;
  intmax_t i;
  int not_text;
  size_t residue;
  size_t save;
  char *beg;
  char *lim;
  char eol;
  int tmp;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  intmax_t tmp___4;
  int tmp___6;
  {
    {
      eol = (char) eolbyte;
      tmp = reset(fd, st);
    }
    if (! tmp)
    {
    }

    {
      save = (size_t) 0;
      tmp___1 = fillbuf(save, st);
    }
    {
      {



        {
          tmp___2 = file_is_binary((const char *) bufbeg, (size_t) (buflim - bufbeg), fd, st);
        }
        {
          tmp___3 = 0;
        }
      }
      {
        lastnl = (const char *) bufbeg;
        beg = bufbeg + save;
        {
          lim = (char *) memrchr((const void *) (beg - 1), (int) eol, (size_t) ((buflim - beg) + 1L));
          lim++;
          {
            {
              tmp___4 = grepbuf((const char *) beg, (const char *) lim);
            }
            if (nlines)
            {
              if (done_on_match)
              {
              }

            }

          }
        }
        {
          while (1)
          {
            if (i < out_before)
            {
              if (((unsigned long) beg) > ((unsigned long) bufbeg))
              {
              }

            }
            else
            {
              goto while_break___0;
            }

            {
            }
          }

        }
        while_break___0:;


        save = (size_t) ((lim + residue) - beg);
        {
          {
            nlscan((const char *) beg);
          }
        }
        {
          tmp___6 = fillbuf(save, st);
        }
        if (! tmp___6)
        {
          {
          }
        }

      }
    }
    out_quiet -= not_text;
  }
}

static int grepfile(int dirdesc, const char *name, int follow, int command_line)
{
  int desc;
  int tmp;
  int tmp___0;
  int *tmp___2;
  int tmp___4;
  {
    if (follow)
    {
      tmp = 0;
    }

    {
      tmp___0 = openat_safer(dirdesc, name, tmp);
      desc = tmp___0;
    }
    if (desc < 0)
    {
      {
        {
        }
        if ((* tmp___2) != 40)
        {
        }

      }
    }

    {
      tmp___4 = grepdesc(desc, command_line);
    }
    return tmp___4;
  }
}

static int grepdesc(int desc, int command_line)
{
  intmax_t count;
  int status;
  struct stat st;
  int tmp___0;
  int tmp___1;
  int tmp___13;
  int tmp___18;
  {
    {
      status = 1;
      tmp___0 = fstat(desc, & st);
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
      tmp___13 = isatty(desc);
    }
    if (! tmp___13)
    {
      {
        set_binary_mode(desc, 0);
      }
    }

    {
      count = grep(desc, (const struct stat *) (& st));
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
    }
    {
      {
        tmp___18 = close(desc);
      }
      if (tmp___18 != 0)
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
  int tmp___1;
  {
    {
      {
        filename = arg;
        tmp___1 = grepfile(- 100, arg, 1, 1);
      }
      return tmp___1;
    }
  }
}

void usage(int status);
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
  const struct matcher *p;
  int tmp___0;
  int tmp___1;
  {
    if (matcher)
    {
      {
      }
      if (! (tmp___0 == 0))
      {
      }

    }

    p = matchers;
    {
      while (1)
      {
        {
        }
        {
          tmp___1 = strcmp(m, (const char *) p->name);
        }
        if (tmp___1 == 0)
        {
          matcher = (const char *) p->name;
          compile = (void (*)(const char *, size_t)) p->compile;
          return;
        }

        p++;
      }

    }
    {
    }
  }
}

static size_t prepend_args(const char *options, char *buf, char **argv)
{

  int argc;
  {
    if (options)
    {
      if (* options)
      {








      }

    }

  }
}

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
        if (48 <= opt)
        {
          if (! (opt <= 57))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        {
        }
      }

    }
    while_break:;


  }
}

int main(int argc, char **argv)
{
  char *keys;
  size_t keycc;
  int opt;
  int prev_optind;
  intmax_t default_context;
  char *tmp;
  int tmp___15;
  int tmp___30;
  char *tmp___34;
  int tmp___37;
  int tmp___42;
  int tmp___43;
  {
    {
      eolbyte = (unsigned char) '\n';
      setlocale(6, "");
      bindtextdomain("grep", "/usr/local/share/locale");
      textdomain("grep");
      atexit(& clean_up_stdout);
      tmp = getenv("GREP_OPTIONS");
      compile = (void (*)(const char *, size_t)) matchers[0].compile;
      execute = (size_t (*)(const char *, size_t, size_t *, const char *)) matchers[0].execute;
      {
        {
          prev_optind = optind;
          opt = get_nondigit_option(argc, (char *const *) argv, & default_context);
        }
        {
        }
        {
        }
        {
        }
        {
        }
        if (opt == 105)
        {
          goto case_105;
        }

        {
        }
        if (opt == 110)
        {
          goto case_110;
        }

        if (opt == 111)
        {
          goto case_111;
        }

        {
        }
        if (opt == 118)
        {
          goto case_118;
        }

        if (opt == 120)
        {
          goto case_120;
        }

        {
          setmatcher("egrep");
        }
        goto switch_break;
        {
        }
        {
        }
        {
        }
        case_105:;


        match_icase = 1;
        goto switch_break;
        case_110:;


        out_line = 1;
        goto switch_break;
        case_111:;


        only_matching = 1;
        goto switch_break;
        case_118:;


        out_invert = (_Bool) 1;
        goto switch_break;
        case_120:;


        eolbyte = (unsigned char) '\000';
        {
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
        {
        }
        {
        }
        switch_break:;


      }
    }
    {
      {
      }
      if (tmp___30)
      {
      }

    }
    if (exit_on_match)
    {
      {
        tmp___34 = gettext("others, see <http://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS>");
      }
    }

    {
      if (optind < argc)
      {
        {
          keycc = strlen((const char *) (* (argv + optind)));
          tmp___37 = optind;
          optind++;
          keys = (char *) xmemdup((const void *) (* (argv + tmp___37)), keycc + 1UL);
          {
            {
            }
          }
        }
      }

    }
    {
      {
        build_mbclen_cache();
      }
    }
    {
      (* compile)((const char *) keys, keycc);
      {
        while (1)
        {
          {
            tmp___42 = grep_command_line_arg((const char *) (* (argv + optind)));
            optind++;
          }
          if (! (optind < argc))
          {
            goto while_break___2;
          }

        }

      }
      while_break___2:;


      {
      }
    }
    {
      exit(tmp___43);
    }
  }
}

