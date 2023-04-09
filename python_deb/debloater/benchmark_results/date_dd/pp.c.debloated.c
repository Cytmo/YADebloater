typedef unsigned long size_t;
typedef long ptrdiff_t;
typedef unsigned long __ino_t;
typedef long __off_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef long __off64_t;
typedef long __ssize_t;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker
{
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
typedef __ssize_t ssize_t;
enum quoting_style
{
  clocale_quoting_style = 7,
  custom_quoting_style = 8
};
struct allocator;
struct allocator;
struct allocator;
struct allocator
{
  void *(*allocate)(size_t);
  void *(*reallocate)(void *, size_t);
  void (*free)(void *);
  void (*die)(size_t);
};
struct option
{
  const char *name;
  int has_arg;
  int *flag;
  int val;
};
typedef long intmax_t;
typedef long __time_t;
typedef long __syscall_slong_t;
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef unsigned int __gid_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
struct stat
{
};
typedef int wchar_t;
typedef int nl_item;
typedef unsigned int wint_t;
typedef long __suseconds_t;
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
typedef __time_t time_t;
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
typedef int __clockid_t;
typedef __clockid_t clockid_t;
struct timezone
{
  int tz_minuteswest;
  int tz_dsttime;
};
typedef unsigned long reg_syntax_t;
typedef __off_t off_t;
typedef struct timezone *__restrict __timezone_ptr_t;
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
enum Time_spec
{
  TIME_SPEC_DATE = 0,
  TIME_SPEC_SECONDS = 1,
  TIME_SPEC_NS = 2,
  TIME_SPEC_HOURS = 3,
  TIME_SPEC_MINUTES = 4
};
int c_strcasecmp(const char *s1, const char *s2);
int c_tolower(int c);
int c_strcasecmp(const char *s1, const char *s2);
int c_strcasecmp(const char *s1, const char *s2)
{
  register const unsigned char *p1;
  register const unsigned char *p2;
  unsigned char c1;
  unsigned char c2;
  {
    p1 = (const unsigned char *) s1;
    p2 = (const unsigned char *) s2;
    if (((unsigned long) p1) == ((unsigned long) p2))
    {
     
    }

    while (1)
    {
      c1 = (unsigned char) c_tolower((int) (* p1));
      c2 = (unsigned char) c_tolower((int) (* p2));
      if (((int) c1) == 0)
      {
        goto while_break;
      }

      p1++;
      p2++;
      if (! (((int) c1) == ((int) c2)))
      {
       
      }

    }

    while_break:
    ;

    return ((int) c1) - ((int) c2);
  }
}

_Bool c_isalpha(int c);
_Bool c_isspace(int c);
int c_toupper(int c);
_Bool c_isalpha(int c);
_Bool c_isalpha(int c)
{
  int tmp;
  {
    if ((c & (- 33)) >= 65)
    {
      if ((c & (- 33)) <= 90)
      {
        tmp = 1;
      }

    }
    else
    {
      tmp = 0;
    }

    return (_Bool) tmp;
  }
}

_Bool c_isspace(int c);
_Bool c_isspace(int c)
{
  int tmp;
  {
    if (c == 32)
    {
      tmp = 1;
    }
    else
    {
      if (c == 9)
      {
       
      }
      else
      {
        if (c == 10)
        {
         
        }
        else
        {
          if (c == 11)
          {
           
          }
          else
          {
            if (c == 12)
            {
             
            }
            else
            {
              if (c == 13)
              {
               
              }
              else
              {
                tmp = 0;
              }

            }

          }

        }

      }

    }

    return (_Bool) tmp;
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

    }
    else
    {
      tmp = c;
    }

    return tmp;
  }
}

int c_toupper(int c);
int c_toupper(int c)
{
  int tmp;
  {
    if (c >= 97)
    {
      if (c <= 122)
      {
        tmp = (c - 97) + 65;
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
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
void xalloc_die(void);
void *xmalloc(size_t n);
void *xrealloc(void *p, size_t n);
__inline void *xnmalloc(size_t n, size_t s);
__inline void *xnmalloc(size_t n, size_t s);
__inline void *xnmalloc(size_t n, size_t s)
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
      xalloc_die();
    }

    tmp___0 = xmalloc(n * s);
    return tmp___0;
  }
}

char *xcharalloc(size_t n)
{
 
}

extern size_t strlen(const char *__s);
char *last_component(const char *name);
char *last_component(const char *name)
{
 
}

extern void *malloc(size_t __size);
extern void free(void *__ptr);
const char *simple_backup_suffix;
void (*argmatch_die)(void);
ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern int *__errno_location(void);
const char *simple_backup_suffix = "~";
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize);
void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem);
void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize);
extern struct _IO_FILE *stderr;
const char *quote(const char *arg);
void usage(int status);
static void __argmatch_die(void)
{
 
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
    matchind = (ptrdiff_t) (- 1);
    ambiguous = (_Bool) 0;
    arglen = strlen(arg);
    i = (size_t) 0;
    while (1)
    {
      if (! (* (arglist + i)))
      {
       
      }

      tmp___1 = strncmp((const char *) (* (arglist + i)), arg, arglen);
      if (! tmp___1)
      {
        tmp___0 = strlen((const char *) (* (arglist + i)));
        if (tmp___0 == arglen)
        {
          return (ptrdiff_t) i;
        }
        else
        {
          if (matchind == (- 1L))
          {
           
          }
          else
          {
            if (((unsigned long) vallist) == ((unsigned long) ((void *) 0)))
            {
             
            }
            else
            {
              if (tmp)
              {
               
              }

            }

          }

        }

      }

      i++;
    }

    while_break:
    ;

    if (ambiguous)
    {
     
    }

  }
}

void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem)
{
 
}

void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize)
{
 
}

ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void))
{
  ptrdiff_t res;
  ptrdiff_t tmp;
  {
    tmp = argmatch(arg, arglist, vallist, valsize);
    res = tmp;
    if (res >= 0L)
    {
      return res;
    }

  }
}

#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern struct _IO_FILE *stdout;
extern void *memset(void *__s, int __c, size_t __n);
void *xmalloc(size_t n);
void *xmalloc(size_t n)
{
 
}

void *xrealloc(void *p, size_t n);
void *xrealloc(void *p, size_t n)
{
 
}

void *xmemdup(const void *p, size_t s);
void *xmemdup(const void *p, size_t s)
{
 
}

void xalloc_die(void)
{
 
}

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

const char version_etc_copyright[47] = {(const char) 'C', (const char) 'o', (const char) 'p', (const char) 'y', (const char) 'r', (const char) 'i', (const char) 'g', (const char) 'h', (const char) 't', (const char) ' ', (const char) '%', (const char) 's', (const char) ' ', (const char) '%', (const char) 'd', (const char) ' ', (const char) 'F', (const char) 'r', (const char) 'e', (const char) 'e', (const char) ' ', (const char) 'S', (const char) 'o', (const char) 'f', (const char) 't', (const char) 'w', (const char) 'a', (const char) 'r', (const char) 'e', (const char) ' ', (const char) 'F', (const char) 'o', (const char) 'u', (const char) 'n', (const char) 'd', (const char) 'a', (const char) 't', (const char) 'i', (const char) 'o', (const char) 'n', (const char) ',', (const char) ' ', (const char) 'I', (const char) 'n', (const char) 'c', (const char) '.', (const char) '\000'};
extern char *nl_langinfo(nl_item __item);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
struct timespec get_stat_mtime(const struct stat *st)
{
 
}

#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
const char *locale_charset(void);
__inline static int iso_week_days(int yday, int wday)
{
  int big_enough_multiple_of_7;
  {
    big_enough_multiple_of_7 = 378;
    return ((yday - ((((yday - wday) + 4) + big_enough_multiple_of_7) % 7)) + 4) - 1;
  }
}

#pragma GCC diagnostic pop
extern int settimeofday(const struct timeval *__tv, const struct timezone *__tz);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int settime(const struct timespec *ts)
{
 
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
const char *const quoting_style_args[9] = {"literal", "shell", "shell-always", "c", "c-maybe", "escape", "locale", "clocale", (const char *) 0};
const enum quoting_style quoting_style_vals[8] = {(const enum quoting_style) 0, (const enum quoting_style) 1, (const enum quoting_style) 2, (const enum quoting_style) 3, (const enum quoting_style) 4, (const enum quoting_style) 5, (const enum quoting_style) 6, (const enum quoting_style) 7};
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i)
{
 
}

static struct quoting_options quoting_options_from_style(enum quoting_style style)
{
 
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
  {
    tmp = (const char *) gettext(msgid);
    translation = tmp;
    if (((unsigned long) translation) != ((unsigned long) msgid))
    {
     
    }

    locale_code = locale_charset();
    tmp___1 = c_strcasecmp(locale_code, "UTF-8");
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

    if (tmp___3 == 0)
    {
     
    }

    if (((unsigned int) s) == 7U)
    {
     
    }

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
  {
    len = (size_t) 0;
    quote_string = (const char *) 0;
    quote_string_len = (size_t) 0;
    backslash_escapes = (_Bool) 0;
    tmp = __ctype_get_mb_cur_max();
    unibyte_locale = (_Bool) (tmp == 1UL);
    elide_outer_quotes = (_Bool) ((flags & 2) != 0);
    if (((unsigned int) quoting_style) == 4U)
    {
     
    }

    if (((unsigned int) quoting_style) == 3U)
    {
     
    }

    if (((unsigned int) quoting_style) == 5U)
    {
     
    }

    if (((unsigned int) quoting_style) == 6U)
    {
      goto case_6;
    }

    if (((unsigned int) quoting_style) == 7U)
    {
     
    }

    if (((unsigned int) quoting_style) == 8U)
    {
     
    }

    if (((unsigned int) quoting_style) == 1U)
    {
     
    }

    if (((unsigned int) quoting_style) == 2U)
    {
     
    }

    if (((unsigned int) quoting_style) == 0U)
    {
     
    }

    case_4:
    ;

    quoting_style = (enum quoting_style) 3;
    case_3:
    ;

    if (! elide_outer_quotes)
    {
      while (1)
      {
        if (len < buffersize)
        {
         
        }

      }

      while_break:
      ;

    }

    case_5:
    ;

    backslash_escapes = (_Bool) 1;
    case_6:
    if (((unsigned int) quoting_style) != 8U)
    {
      left_quote = gettext_quote("`", quoting_style);
      right_quote = gettext_quote("\'", quoting_style);
    }


    if (! elide_outer_quotes)
    {
      quote_string = left_quote;
      while (1)
      {
        if (! (* quote_string))
        {
          goto while_break___0;
        }

        while (1)
        {
          if (len < buffersize)
          {
            * (buffer + len) = (char) (* quote_string);
          }

          len++;
          goto while_break___1;
        }

        while_break___1:
        quote_string++;

      }

      while_break___0:
      ;

    }

    backslash_escapes = (_Bool) 1;
    quote_string = right_quote;
    quote_string_len = strlen(quote_string);
    goto switch_break;
    case_1:
    ;

    quoting_style = (enum quoting_style) 2;
    case_2:
    ;

    if (! elide_outer_quotes)
    {
      while (1)
      {
        if (len < buffersize)
        {
         
        }

      }

      while_break___2:
      ;

    }

    case_0:
    ;

    elide_outer_quotes = (_Bool) 0;
    switch_default:
    ;

    abort();
    switch_break:
    i = (size_t) 0;

    while (1)
    {
      if (argsize == 0xffffffffffffffffUL)
      {
        tmp___6 = ((const int) (* (arg + i))) == 0;
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
            tmp___0 = memcmp((const void *) (arg + i), (const void *) quote_string, quote_string_len);
            if (tmp___0 == 0)
            {
              if (elide_outer_quotes)
              {
               
              }

            }

          }

        }

      }

      c = (unsigned char) (* (arg + i));
      if (((int) c) == 0)
      {
       
      }

      if (((int) c) == 63)
      {
       
      }

      if (((int) c) == 7)
      {
       
      }

      if (((int) c) == 8)
      {
       
      }

      if (((int) c) == 12)
      {
       
      }

      if (((int) c) == 10)
      {
       
      }

      if (((int) c) == 13)
      {
       
      }

      if (((int) c) == 9)
      {
       
      }

      if (((int) c) == 11)
      {
       
      }

      if (((int) c) == 92)
      {
       
      }

      if (((int) c) == 123)
      {
       
      }

      if (((int) c) == 125)
      {
       
      }

      if (((int) c) == 35)
      {
       
      }

      if (((int) c) == 126)
      {
       
      }

      if (((int) c) == 32)
      {
       
      }

      if (((int) c) == 33)
      {
       
      }

      if (((int) c) == 34)
      {
       
      }

      if (((int) c) == 36)
      {
       
      }

      if (((int) c) == 38)
      {
       
      }

      if (((int) c) == 40)
      {
       
      }

      if (((int) c) == 41)
      {
       
      }

      if (((int) c) == 42)
      {
       
      }

      if (((int) c) == 59)
      {
       
      }

      if (((int) c) == 60)
      {
       
      }

      if (((int) c) == 61)
      {
       
      }

      if (((int) c) == 62)
      {
       
      }

      if (((int) c) == 91)
      {
       
      }

      if (((int) c) == 94)
      {
       
      }

      if (((int) c) == 96)
      {
       
      }

      if (((int) c) == 124)
      {
       
      }

      if (((int) c) == 39)
      {
       
      }

      if (((int) c) == 37)
      {
       
      }

      if (((int) c) == 43)
      {
       
      }

      if (((int) c) == 44)
      {
       
      }

      if (((int) c) == 45)
      {
       
      }

      if (((int) c) == 46)
      {
       
      }

      if (((int) c) == 47)
      {
       
      }

      if (((int) c) == 48)
      {
        goto case_37;
      }

      if (((int) c) == 49)
      {
       
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
       
      }

      if (((int) c) == 55)
      {
        goto case_37;
      }

      if (((int) c) == 56)
      {
       
      }

      if (((int) c) == 57)
      {
        goto case_37;
      }

      if (((int) c) == 58)
      {
       
      }

      if (((int) c) == 65)
      {
       
      }

      if (((int) c) == 66)
      {
       
      }

      if (((int) c) == 67)
      {
       
      }

      if (((int) c) == 68)
      {
       
      }

      if (((int) c) == 69)
      {
       
      }

      if (((int) c) == 70)
      {
       
      }

      if (((int) c) == 71)
      {
       
      }

      if (((int) c) == 72)
      {
       
      }

      if (((int) c) == 73)
      {
       
      }

      if (((int) c) == 74)
      {
       
      }

      if (((int) c) == 75)
      {
       
      }

      if (((int) c) == 76)
      {
       
      }

      if (((int) c) == 77)
      {
       
      }

      if (((int) c) == 78)
      {
       
      }

      if (((int) c) == 79)
      {
       
      }

      if (((int) c) == 80)
      {
       
      }

      if (((int) c) == 81)
      {
       
      }

      if (((int) c) == 82)
      {
       
      }

      if (((int) c) == 83)
      {
       
      }

      if (((int) c) == 84)
      {
       
      }

      if (((int) c) == 85)
      {
       
      }

      if (((int) c) == 86)
      {
       
      }

      if (((int) c) == 87)
      {
       
      }

      if (((int) c) == 88)
      {
       
      }

      if (((int) c) == 89)
      {
       
      }

      if (((int) c) == 90)
      {
       
      }

      if (((int) c) == 93)
      {
       
      }

      if (((int) c) == 95)
      {
       
      }

      if (((int) c) == 97)
      {
       
      }

      if (((int) c) == 98)
      {
       
      }

      if (((int) c) == 99)
      {
       
      }

      if (((int) c) == 100)
      {
       
      }

      if (((int) c) == 101)
      {
       
      }

      if (((int) c) == 102)
      {
       
      }

      if (((int) c) == 103)
      {
       
      }

      if (((int) c) == 104)
      {
       
      }

      if (((int) c) == 105)
      {
       
      }

      if (((int) c) == 106)
      {
       
      }

      if (((int) c) == 107)
      {
       
      }

      if (((int) c) == 108)
      {
       
      }

      if (((int) c) == 109)
      {
       
      }

      if (((int) c) == 110)
      {
       
      }

      if (((int) c) == 111)
      {
       
      }

      if (((int) c) == 112)
      {
       
      }

      if (((int) c) == 113)
      {
       
      }

      if (((int) c) == 114)
      {
       
      }

      if (((int) c) == 115)
      {
       
      }

      if (((int) c) == 116)
      {
       
      }

      if (((int) c) == 117)
      {
       
      }

      if (((int) c) == 118)
      {
       
      }

      if (((int) c) == 119)
      {
       
      }

      if (((int) c) == 120)
      {
       
      }

      if (((int) c) == 121)
      {
       
      }

      if (((int) c) == 122)
      {
       
      }

      case_0___0:
      ;

      if (backslash_escapes)
      {
        if (elide_outer_quotes)
        {
         
        }

        while (1)
        {
          if (len < buffersize)
          {
           
          }

        }

        while_break___4:
        ;

        if ((i + 1UL) < argsize)
        {
          if (48 <= ((int) (* (arg + (i + 1UL)))))
          {
            if (((const int) (* (arg + (i + 1UL)))) <= 57)
            {
              while (1)
              {
                if (len < buffersize)
                {
                 
                }

              }

              while_break___5:
              ;

              while (1)
              {
                if (len < buffersize)
                {
                 
                }

              }

              while_break___6:
              ;

            }

          }

        }

      }
      else
      {
        if (flags & 1)
        {
         
        }

      }

      case_63:
      ;

      if (((unsigned int) quoting_style) == 2U)
      {
       
      }

      if (((unsigned int) quoting_style) == 3U)
      {
       
      }

      case_2___0:
      ;

      if (elide_outer_quotes)
      {
       
      }

      case_3___0:
      ;

      if (flags & 4)
      {
        if ((i + 2UL) < argsize)
        {
          if (((const int) (* (arg + (i + 1UL)))) == 63)
          {
            if (((const int) (* (arg + (i + 2UL)))) == 33)
            {
             
            }

            if (((const int) (* (arg + (i + 2UL)))) == 39)
            {
             
            }

            if (((const int) (* (arg + (i + 2UL)))) == 40)
            {
             
            }

            if (((const int) (* (arg + (i + 2UL)))) == 41)
            {
             
            }

            if (((const int) (* (arg + (i + 2UL)))) == 45)
            {
             
            }

            if (((const int) (* (arg + (i + 2UL)))) == 47)
            {
             
            }

            if (((const int) (* (arg + (i + 2UL)))) == 60)
            {
             
            }

            if (((const int) (* (arg + (i + 2UL)))) == 61)
            {
             
            }

            if (((const int) (* (arg + (i + 2UL)))) == 62)
            {
             
            }

            case_33:
            ;

            if (elide_outer_quotes)
            {
             
            }

            while (1)
            {
              if (len < buffersize)
              {
               
              }

            }

            while_break___7:
            ;

            while (1)
            {
              if (len < buffersize)
              {
               
              }

            }

            while_break___8:
            ;

            while (1)
            {
              if (len < buffersize)
              {
               
              }

            }

            while_break___9:
            ;

            while (1)
            {
              if (len < buffersize)
              {
               
              }

            }

            while_break___10:
            ;

            switch_default___0:
            ;

            goto switch_break___2;
            switch_break___2:
            ;

          }

        }

      }

      switch_default___1:
      ;

      goto switch_break___1;
      switch_break___1:
      ;

      case_7___0:
      ;

      esc = (unsigned char) 'a';
      case_8___0:
      ;

      esc = (unsigned char) 'b';
      case_12:
      ;

      esc = (unsigned char) 'f';
      case_10:
      ;

      esc = (unsigned char) 'n';
      case_13:
      ;

      esc = (unsigned char) 'r';
      case_9:
      ;

      esc = (unsigned char) 't';
      case_11:
      ;

      esc = (unsigned char) 'v';
      case_92:
      ;

      esc = c;
      if (backslash_escapes)
      {
       
      }

      c_and_shell_escape:
      ;

      if (((unsigned int) quoting_style) == 2U)
      {
       
      }

      c_escape:
      ;

      if (backslash_escapes)
      {
       
      }

      case_123:
      ;

      if (argsize == 0xffffffffffffffffUL)
      {
       
      }

      if (! tmp___1)
      {
       
      }

      case_35:
      ;

      if (i != 0UL)
      {
       
      }

      case_32:
      ;

      if (((unsigned int) quoting_style) == 2U)
      {
       
      }

      case_39___0:
      ;

      if (((unsigned int) quoting_style) == 2U)
      {
        if (elide_outer_quotes)
        {
         
        }

        while (1)
        {
          if (len < buffersize)
          {
           
          }

        }

        while_break___11:
        ;

        while (1)
        {
          if (len < buffersize)
          {
           
          }

        }

        while_break___12:
        ;

        while (1)
        {
          if (len < buffersize)
          {
           
          }

        }

        while_break___13:
        ;

      }

      case_37:
      goto switch_break___0;

      switch_default___2:
      ;

      if (unibyte_locale)
      {
       
      }
      else
      {
        if (argsize == 0xffffffffffffffffUL)
        {
         
        }

        while (1)
        {
          if (bytes == 0UL)
          {
           
          }
          else
          {
            if (bytes == 0xffffffffffffffffUL)
            {
             
            }
            else
            {
              if (bytes == 0xfffffffffffffffeUL)
              {
                while (1)
                {
                  if ((i + m) < argsize)
                  {
                   
                  }

                }

                while_break___15:
                ;

              }
              else
              {
                if (elide_outer_quotes)
                {
                  if (((unsigned int) quoting_style) == 2U)
                  {
                    while (1)
                    {
                      if (! (j < bytes))
                      {
                       
                      }

                      if (((const int) (* (arg + ((i + m) + j)))) == 91)
                      {
                       
                      }

                      if (((const int) (* (arg + ((i + m) + j)))) == 92)
                      {
                       
                      }

                      if (((const int) (* (arg + ((i + m) + j)))) == 94)
                      {
                       
                      }

                      if (((const int) (* (arg + ((i + m) + j)))) == 96)
                      {
                       
                      }

                      if (((const int) (* (arg + ((i + m) + j)))) == 124)
                      {
                       
                      }

                      case_91___0:
                      ;

                      goto force_outer_quoting_style;
                      switch_default___3:
                      ;

                      goto switch_break___3;
                      switch_break___3:
                      ;

                      j++;
                    }

                    while_break___16:
                    ;

                  }

                }

                if (! tmp___4)
                {
                 
                }

              }

            }

          }

          if (tmp___5)
          {
           
          }

        }

        while_break___14:
        ;

      }

      if (1UL < m)
      {
       
      }
      else
      {
        if (backslash_escapes)
        {
          if (! printable)
          {
            _L___0:
            ;

            ilim = i + m;
            while (1)
            {
              if (backslash_escapes)
              {
                if (! printable)
                {
                  if (elide_outer_quotes)
                  {
                   
                  }

                  while (1)
                  {
                    if (len < buffersize)
                    {
                     
                    }

                  }

                  while_break___18:
                  ;

                  while (1)
                  {
                    if (len < buffersize)
                    {
                     
                    }

                  }

                  while_break___19:
                  ;

                  while (1)
                  {
                    if (len < buffersize)
                    {
                     
                    }

                  }

                  while_break___20:
                  ;

                  c = (unsigned char) (48 + (((int) c) & 7));
                }

              }
              else
              {
                _L:
                ;

                if (is_right_quote)
                {
                  while (1)
                  {
                    if (len < buffersize)
                    {
                     
                    }

                  }

                  while_break___21:
                  ;

                  is_right_quote = (_Bool) 0;
                }

              }

              if (ilim <= (i + 1UL))
              {
               
              }

              while (1)
              {
                if (len < buffersize)
                {
                 
                }

              }

              while_break___22:
              ;

              i++;
            }

            while_break___17:
            ;

          }

        }

      }

      switch_break___0:
      ;

      if (backslash_escapes)
      {
        goto _L___3;
      }
      else
      {
        if (elide_outer_quotes)
        {
          _L___3:
          ;

          if (quote_these_too)
          {
            if (! ((* (quote_these_too + (((unsigned long) c) / ((sizeof(int)) * 8UL)))) & ((const unsigned int) (1 << (((unsigned long) c) % ((sizeof(int)) * 8UL))))))
            {
              goto _L___2;
            }

          }

        }
        else
        {
          _L___2:
          ;

          if (! is_right_quote)
          {
            goto store_c;
          }

        }

      }

      store_escape:
      ;

      if (elide_outer_quotes)
      {
       
      }

      while (1)
      {
        if (len < buffersize)
        {
         
        }

      }

      while_break___23:
      ;

      store_c:
      while (1)
      {
        if (len < buffersize)
        {
          * (buffer + len) = (char) c;
        }

        len++;
        goto while_break___24;
      }


      while_break___24:
      ;

      __Cont:
      i++;

    }

    while_break___3:
    ;

    if (len == 0UL)
    {
      if (((unsigned int) quoting_style) == 2U)
      {
       
      }

    }

    if (quote_string)
    {
      if (! elide_outer_quotes)
      {
        while (1)
        {
          if (! (* quote_string))
          {
            goto while_break___25;
          }

          while (1)
          {
            if (len < buffersize)
            {
              * (buffer + len) = (char) (* quote_string);
            }

            len++;
            goto while_break___26;
          }

          while_break___26:
          quote_string++;

        }

        while_break___25:
        ;

      }

    }

    if (len < buffersize)
    {
      * (buffer + len) = (char) '\000';
    }

    return len;
    force_outer_quoting_style:
    ;

    tmp___7 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize, quoting_style, flags & (- 3), (const unsigned int *) ((void *) 0), left_quote, right_quote);
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
    tmp = __errno_location();
    e = * tmp;
    n0 = (unsigned int) n;
    sv = slotvec;
    if (n < 0)
    {
     
    }

    if (nslots <= n0)
    {
      if ((sizeof(ptrdiff_t)) <= (sizeof(size_t)))
      {
       
      }
      else
      {
        tmp___0 = - 2;
      }

      if ((((size_t) tmp___0) / (sizeof(* sv))) < n1)
      {
       
      }

      if (preallocated)
      {
       
      }

      if (preallocated)
      {
       
      }

    }

    size = (sv + n)->size;
    val = (sv + n)->val;
    flags = (int) (options->flags | 1);
    tmp___2 = quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style) options->style, flags, (const unsigned int *) options->quote_these_too, (const char *) options->left_quote, (const char *) options->right_quote);
    qsize = tmp___2;
    if (size <= qsize)
    {
      if (((unsigned long) val) != ((unsigned long) slot0))
      {
       
      }

    }

    tmp___3 = __errno_location();
    * tmp___3 = e;
    return val;
  }
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
  const char *tmp;
  {
    tmp = (const char *) quotearg_n_options(n, arg, argsize, (const struct quoting_options *) (& quote_quoting_options));
    return tmp;
  }
}

const char *quote_n(int n, const char *arg)
{
  const char *tmp;
  {
    tmp = quote_n_mem(n, arg, (size_t) (- 1));
    return tmp;
  }
}

const char *quote(const char *arg)
{
  const char *tmp;
  {
    tmp = quote_n(0, arg);
    return tmp;
  }
}

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
     
    }

    slash = (const char *) strrchr(argv0, '/');
    if (((unsigned long) slash) != ((unsigned long) ((void *) 0)))
    {
      base = slash + 1;
    }

    if ((base - argv0) >= 7L)
    {
      tmp___0 = strncmp(base - 7, "/.libs/", (size_t) 7);
      if (tmp___0 == 0)
      {
        if (tmp == 0)
        {
         
        }

      }

    }

    program_name = argv0;
    program_invocation_name = (char *) argv0;
    return;
  }
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern time_t time(time_t *__timer);
extern struct tm *localtime(const time_t *__timer);
_Bool posixtime(time_t *p, const char *s, unsigned int syntax_bits);
extern char *stpcpy(char *__restrict __dest, const char *__restrict __src);
static int year(struct tm *tm, const int *digit_pair, size_t n, unsigned int syntax_bits)
{
 
}

static int posix_time_parse(struct tm *tm, const char *s, unsigned int syntax_bits)
{
 
}

_Bool posixtime(time_t *p, const char *s, unsigned int syntax_bits)
{
 
}

#pragma GCC diagnostic pop
extern int setenv(const char *__name, const char *__value, int __replace);
extern int unsetenv(const char *__name);
extern int abs(int __x);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
static unsigned char to_uchar___0(char ch)
{
  return (unsigned char) ch;
}

static int yylex(union YYSTYPE *lvalp, parser_control *pc);
static int yyerror(const parser_control *pc, const char *s);
static long time_zone_hhmm(parser_control *pc, textint s, long mm);
static void digits_to_date_time(parser_control *pc, textint text_int)
{
  if (pc->dates_seen)
  {
    if (! pc->year.digits)
    {
     
    }

  }
  else
  {
    _L___1:
    if (4UL < text_int.digits)
    {
      pc->dates_seen++;
      pc->day = text_int.value % 100L;
      pc->month = (text_int.value / 100L) % 100L;
      pc->year.value = text_int.value / 10000L;
      pc->year.digits = text_int.digits - 4UL;
    }
    else
    {
      if (text_int.digits <= 2UL)
      {
       
      }

    }


  }

  return;
}

static void apply_relative_time(parser_control *pc, relative_time rel, int factor)
{
  pc->rel.ns += ((long) factor) * rel.ns;
  pc->rel.seconds += ((long_time_t) factor) * rel.seconds;
  pc->rel.minutes += ((long) factor) * rel.minutes;
  pc->rel.hour += ((long) factor) * rel.hour;
  pc->rel.day += ((long) factor) * rel.day;
  pc->rel.month += ((long) factor) * rel.month;
  pc->rel.year += ((long) factor) * rel.year;
  pc->rels_seen = (_Bool) 1;
  return;
}

static void set_hhmmss(parser_control *pc, long hour, long minutes, time_t sec, long nsec)
{
  pc->hour = hour;
  pc->minutes = minutes;
  pc->seconds.tv_sec = sec;
  pc->seconds.tv_nsec = nsec;
  return;
}

static const yytype_uint8 yytranslate[278] = {(const yytype_uint8) 0, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 26, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 27, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 25, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 23, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 24, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 4, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 11, (const yytype_uint8) 12, (const yytype_uint8) 13, (const yytype_uint8) 14, (const yytype_uint8) 15, (const yytype_uint8) 16, (const yytype_uint8) 17, (const yytype_uint8) 18, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 21, (const yytype_uint8) 22};
static const yytype_uint8 yyr1[92] = {(const yytype_uint8) 0, (const yytype_uint8) 28, (const yytype_uint8) 29, (const yytype_uint8) 29, (const yytype_uint8) 30, (const yytype_uint8) 31, (const yytype_uint8) 31, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 32, (const yytype_uint8) 33, (const yytype_uint8) 34, (const yytype_uint8) 35, (const yytype_uint8) 35, (const yytype_uint8) 35, (const yytype_uint8) 35, (const yytype_uint8) 36, (const yytype_uint8) 36, (const yytype_uint8) 36, (const yytype_uint8) 37, (const yytype_uint8) 37, (const yytype_uint8) 38, (const yytype_uint8) 39, (const yytype_uint8) 39, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 40, (const yytype_uint8) 41, (const yytype_uint8) 41, (const yytype_uint8) 41, (const yytype_uint8) 41, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 42, (const yytype_uint8) 43, (const yytype_uint8) 44, (const yytype_uint8) 44, (const yytype_uint8) 44, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 45, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 46, (const yytype_uint8) 47, (const yytype_uint8) 48, (const yytype_uint8) 48, (const yytype_uint8) 49, (const yytype_uint8) 49, (const yytype_uint8) 50, (const yytype_uint8) 50, (const yytype_uint8) 51, (const yytype_uint8) 52, (const yytype_uint8) 53, (const yytype_uint8) 53};
static const yytype_uint8 yyr2[92] = {(const yytype_uint8) 0, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 0, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 3, (const yytype_uint8) 2, (const yytype_uint8) 4, (const yytype_uint8) 6, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 4, (const yytype_uint8) 6, (const yytype_uint8) 0, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 5, (const yytype_uint8) 3, (const yytype_uint8) 3, (const yytype_uint8) 2, (const yytype_uint8) 4, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 1, (const yytype_uint8) 3, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 2, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 1, (const yytype_uint8) 2, (const yytype_uint8) 0, (const yytype_uint8) 2};
static const yytype_uint8 yydefact[114] = {(const yytype_uint8) 5, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 2, (const yytype_uint8) 3, (const yytype_uint8) 85, (const yytype_uint8) 87, (const yytype_uint8) 84, (const yytype_uint8) 86, (const yytype_uint8) 4, (const yytype_uint8) 82, (const yytype_uint8) 83, (const yytype_uint8) 1, (const yytype_uint8) 56, (const yytype_uint8) 59, (const yytype_uint8) 65, (const yytype_uint8) 68, (const yytype_uint8) 73, (const yytype_uint8) 62, (const yytype_uint8) 81, (const yytype_uint8) 37, (const yytype_uint8) 35, (const yytype_uint8) 28, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 30, (const yytype_uint8) 0, (const yytype_uint8) 88, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 31, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 16, (const yytype_uint8) 8, (const yytype_uint8) 21, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 12, (const yytype_uint8) 11, (const yytype_uint8) 49, (const yytype_uint8) 13, (const yytype_uint8) 52, (const yytype_uint8) 74, (const yytype_uint8) 53, (const yytype_uint8) 14, (const yytype_uint8) 15, (const yytype_uint8) 38, (const yytype_uint8) 29, (const yytype_uint8) 0, (const yytype_uint8) 45, (const yytype_uint8) 54, (const yytype_uint8) 57, (const yytype_uint8) 63, (const yytype_uint8) 66, (const yytype_uint8) 69, (const yytype_uint8) 60, (const yytype_uint8) 39, (const yytype_uint8) 36, (const yytype_uint8) 90, (const yytype_uint8) 32, (const yytype_uint8) 75, (const yytype_uint8) 76, (const yytype_uint8) 78, (const yytype_uint8) 79, (const yytype_uint8) 80, (const yytype_uint8) 77, (const yytype_uint8) 55, (const yytype_uint8) 58, (const yytype_uint8) 64, (const yytype_uint8) 67, (const yytype_uint8) 70, (const yytype_uint8) 61, (const yytype_uint8) 40, (const yytype_uint8) 18, (const yytype_uint8) 47, (const yytype_uint8) 90, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 22, (const yytype_uint8) 89, (const yytype_uint8) 71, (const yytype_uint8) 72, (const yytype_uint8) 33, (const yytype_uint8) 0, (const yytype_uint8) 51, (const yytype_uint8) 44, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 34, (const yytype_uint8) 43, (const yytype_uint8) 48, (const yytype_uint8) 50, (const yytype_uint8) 27, (const yytype_uint8) 25, (const yytype_uint8) 41, (const yytype_uint8) 0, (const yytype_uint8) 17, (const yytype_uint8) 46, (const yytype_uint8) 91, (const yytype_uint8) 19, (const yytype_uint8) 90, (const yytype_uint8) 0, (const yytype_uint8) 23, (const yytype_uint8) 26, (const yytype_uint8) 0, (const yytype_uint8) 0, (const yytype_uint8) 25, (const yytype_uint8) 42, (const yytype_uint8) 25, (const yytype_uint8) 20, (const yytype_uint8) 24, (const yytype_uint8) 0, (const yytype_uint8) 25};
static const yytype_int8 yydefgoto[26] = {(const yytype_int8) (- 1), (const yytype_int8) 2, (const yytype_int8) 3, (const yytype_int8) 4, (const yytype_int8) 31, (const yytype_int8) 32, (const yytype_int8) 33, (const yytype_int8) 34, (const yytype_int8) 35, (const yytype_int8) 103, (const yytype_int8) 104, (const yytype_int8) 36, (const yytype_int8) 37, (const yytype_int8) 38, (const yytype_int8) 39, (const yytype_int8) 40, (const yytype_int8) 41, (const yytype_int8) 42, (const yytype_int8) 43, (const yytype_int8) 44, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 11, (const yytype_int8) 45, (const yytype_int8) 46, (const yytype_int8) 93};
static const yytype_int8 yypact[114] = {(const yytype_int8) 38, (const yytype_int8) 27, (const yytype_int8) 77, (const yytype_int8) (- 93), (const yytype_int8) 46, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 62, (const yytype_int8) (- 93), (const yytype_int8) 82, (const yytype_int8) (- 3), (const yytype_int8) 66, (const yytype_int8) 3, (const yytype_int8) 74, (const yytype_int8) (- 4), (const yytype_int8) 83, (const yytype_int8) 84, (const yytype_int8) 75, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 71, (const yytype_int8) (- 93), (const yytype_int8) 93, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 78, (const yytype_int8) 72, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 25, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 21, (const yytype_int8) 19, (const yytype_int8) 79, (const yytype_int8) 80, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 81, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 85, (const yytype_int8) 86, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 6), (const yytype_int8) 76, (const yytype_int8) 17, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 87, (const yytype_int8) 69, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 88, (const yytype_int8) 89, (const yytype_int8) (- 1), (const yytype_int8) (- 93), (const yytype_int8) 18, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 69, (const yytype_int8) 91};
static const yytype_int8 yypgoto[26] = {(const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 20, (const yytype_int8) (- 68), (const yytype_int8) (- 27), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 60, (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) (- 92), (const yytype_int8) (- 93), (const yytype_int8) (- 93), (const yytype_int8) 43};
static const yytype_uint8 yytable[113] = {(const yytype_uint8) 79, (const yytype_uint8) 67, (const yytype_uint8) 68, (const yytype_uint8) 69, (const yytype_uint8) 70, (const yytype_uint8) 71, (const yytype_uint8) 72, (const yytype_uint8) 58, (const yytype_uint8) 73, (const yytype_uint8) 100, (const yytype_uint8) 107, (const yytype_uint8) 74, (const yytype_uint8) 75, (const yytype_uint8) 101, (const yytype_uint8) 110, (const yytype_uint8) 76, (const yytype_uint8) 49, (const yytype_uint8) 50, (const yytype_uint8) 101, (const yytype_uint8) 102, (const yytype_uint8) 113, (const yytype_uint8) 77, (const yytype_uint8) 59, (const yytype_uint8) 78, (const yytype_uint8) 61, (const yytype_uint8) 62, (const yytype_uint8) 63, (const yytype_uint8) 64, (const yytype_uint8) 65, (const yytype_uint8) 66, (const yytype_uint8) 61, (const yytype_uint8) 62, (const yytype_uint8) 63, (const yytype_uint8) 64, (const yytype_uint8) 65, (const yytype_uint8) 66, (const yytype_uint8) 101, (const yytype_uint8) 101, (const yytype_uint8) 92, (const yytype_uint8) 111, (const yytype_uint8) 90, (const yytype_uint8) 91, (const yytype_uint8) 106, (const yytype_uint8) 112, (const yytype_uint8) 88, (const yytype_uint8) 111, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 88, (const yytype_uint8) 13, (const yytype_uint8) 14, (const yytype_uint8) 15, (const yytype_uint8) 16, (const yytype_uint8) 17, (const yytype_uint8) 18, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 21, (const yytype_uint8) 22, (const yytype_uint8) 1, (const yytype_uint8) 23, (const yytype_uint8) 24, (const yytype_uint8) 25, (const yytype_uint8) 26, (const yytype_uint8) 27, (const yytype_uint8) 28, (const yytype_uint8) 29, (const yytype_uint8) 79, (const yytype_uint8) 30, (const yytype_uint8) 51, (const yytype_uint8) 52, (const yytype_uint8) 53, (const yytype_uint8) 54, (const yytype_uint8) 55, (const yytype_uint8) 56, (const yytype_uint8) 12, (const yytype_uint8) 57, (const yytype_uint8) 61, (const yytype_uint8) 62, (const yytype_uint8) 63, (const yytype_uint8) 64, (const yytype_uint8) 65, (const yytype_uint8) 66, (const yytype_uint8) 60, (const yytype_uint8) 48, (const yytype_uint8) 80, (const yytype_uint8) 47, (const yytype_uint8) 6, (const yytype_uint8) 83, (const yytype_uint8) 8, (const yytype_uint8) 81, (const yytype_uint8) 82, (const yytype_uint8) 26, (const yytype_uint8) 84, (const yytype_uint8) 85, (const yytype_uint8) 86, (const yytype_uint8) 87, (const yytype_uint8) 94, (const yytype_uint8) 95, (const yytype_uint8) 96, (const yytype_uint8) 89, (const yytype_uint8) 105, (const yytype_uint8) 97, (const yytype_uint8) 98, (const yytype_uint8) 99, (const yytype_uint8) 0, (const yytype_uint8) 108, (const yytype_uint8) 109, (const yytype_uint8) 101, (const yytype_uint8) 0, (const yytype_uint8) 88};
static const yytype_int8 yycheck[113] = {(const yytype_int8) 27, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 4, (const yytype_int8) 12, (const yytype_int8) 15, (const yytype_int8) 102, (const yytype_int8) 15, (const yytype_int8) 16, (const yytype_int8) 19, (const yytype_int8) 15, (const yytype_int8) 19, (const yytype_int8) 19, (const yytype_int8) 20, (const yytype_int8) 19, (const yytype_int8) 25, (const yytype_int8) 112, (const yytype_int8) 25, (const yytype_int8) 19, (const yytype_int8) 27, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 19, (const yytype_int8) 19, (const yytype_int8) 19, (const yytype_int8) 107, (const yytype_int8) 19, (const yytype_int8) 20, (const yytype_int8) 25, (const yytype_int8) 25, (const yytype_int8) 25, (const yytype_int8) 113, (const yytype_int8) 19, (const yytype_int8) 20, (const yytype_int8) 21, (const yytype_int8) 22, (const yytype_int8) 25, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 11, (const yytype_int8) 12, (const yytype_int8) 13, (const yytype_int8) 14, (const yytype_int8) 23, (const yytype_int8) 16, (const yytype_int8) 17, (const yytype_int8) 18, (const yytype_int8) 19, (const yytype_int8) 20, (const yytype_int8) 21, (const yytype_int8) 22, (const yytype_int8) 96, (const yytype_int8) 24, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 0, (const yytype_int8) 12, (const yytype_int8) 5, (const yytype_int8) 6, (const yytype_int8) 7, (const yytype_int8) 8, (const yytype_int8) 9, (const yytype_int8) 10, (const yytype_int8) 25, (const yytype_int8) 4, (const yytype_int8) 27, (const yytype_int8) 26, (const yytype_int8) 20, (const yytype_int8) 30, (const yytype_int8) 22, (const yytype_int8) 9, (const yytype_int8) 9, (const yytype_int8) 19, (const yytype_int8) 24, (const yytype_int8) 3, (const yytype_int8) 19, (const yytype_int8) 26, (const yytype_int8) 20, (const yytype_int8) 20, (const yytype_int8) 20, (const yytype_int8) 59, (const yytype_int8) 27, (const yytype_int8) 84, (const yytype_int8) 20, (const yytype_int8) 20, (const yytype_int8) (- 1), (const yytype_int8) 20, (const yytype_int8) 20, (const yytype_int8) 19, (const yytype_int8) (- 1), (const yytype_int8) 25};
static const yytype_uint8 yystos[114] = {(const yytype_uint8) 0, (const yytype_uint8) 23, (const yytype_uint8) 29, (const yytype_uint8) 30, (const yytype_uint8) 31, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 21, (const yytype_uint8) 22, (const yytype_uint8) 48, (const yytype_uint8) 49, (const yytype_uint8) 50, (const yytype_uint8) 0, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 11, (const yytype_uint8) 12, (const yytype_uint8) 13, (const yytype_uint8) 14, (const yytype_uint8) 16, (const yytype_uint8) 17, (const yytype_uint8) 18, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 21, (const yytype_uint8) 22, (const yytype_uint8) 24, (const yytype_uint8) 32, (const yytype_uint8) 33, (const yytype_uint8) 34, (const yytype_uint8) 35, (const yytype_uint8) 36, (const yytype_uint8) 39, (const yytype_uint8) 40, (const yytype_uint8) 41, (const yytype_uint8) 42, (const yytype_uint8) 43, (const yytype_uint8) 44, (const yytype_uint8) 45, (const yytype_uint8) 46, (const yytype_uint8) 47, (const yytype_uint8) 51, (const yytype_uint8) 52, (const yytype_uint8) 26, (const yytype_uint8) 4, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 12, (const yytype_uint8) 4, (const yytype_uint8) 19, (const yytype_uint8) 46, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 5, (const yytype_uint8) 6, (const yytype_uint8) 7, (const yytype_uint8) 8, (const yytype_uint8) 9, (const yytype_uint8) 10, (const yytype_uint8) 12, (const yytype_uint8) 15, (const yytype_uint8) 16, (const yytype_uint8) 19, (const yytype_uint8) 25, (const yytype_uint8) 27, (const yytype_uint8) 38, (const yytype_uint8) 46, (const yytype_uint8) 9, (const yytype_uint8) 9, (const yytype_uint8) 46, (const yytype_uint8) 24, (const yytype_uint8) 3, (const yytype_uint8) 19, (const yytype_uint8) 26, (const yytype_uint8) 25, (const yytype_uint8) 53, (const yytype_uint8) 19, (const yytype_uint8) 20, (const yytype_uint8) 19, (const yytype_uint8) 53, (const yytype_uint8) 20, (const yytype_uint8) 20, (const yytype_uint8) 20, (const yytype_uint8) 36, (const yytype_uint8) 20, (const yytype_uint8) 20, (const yytype_uint8) 15, (const yytype_uint8) 19, (const yytype_uint8) 25, (const yytype_uint8) 37, (const yytype_uint8) 38, (const yytype_uint8) 27, (const yytype_uint8) 25, (const yytype_uint8) 50, (const yytype_uint8) 20, (const yytype_uint8) 20, (const yytype_uint8) 15, (const yytype_uint8) 37, (const yytype_uint8) 25, (const yytype_uint8) 50};
static void yydestruct(const char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_control *pc)
{
  if (! yymsg)
  {
   
  }

  goto switch_default;
  switch_default:
  goto switch_break;

  switch_break:
  ;

  return;
}

int yyparse(parser_control *pc);
int yyparse(parser_control *pc)
{
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
  int yystate;
  int yyerrstatus;
  yytype_int16 yyssa[20];
  yytype_int16 *yyss;
  yytype_int16 *yyssp;
  YYSTYPE yyvsa[20];
  YYSTYPE *yyvs;
  YYSTYPE *yyvsp;
  unsigned long yystacksize;
  int yyn;
  int yyresult;
  int yytoken;
  YYSTYPE yyval;
  int yylen;
  unsigned long yysize;
  yytype_int16 *yyss1;
  union yyalloc *yyptr;
  union yyalloc *tmp;
  unsigned long yynewbytes;
  unsigned long yynewbytes___0;
  long tmp___0;
  relative_time __constr_expr_13;
  relative_time __constr_expr_14;
  relative_time __constr_expr_15;
  relative_time __constr_expr_16;
  relative_time __constr_expr_17;
  relative_time __constr_expr_18;
  relative_time __constr_expr_19;
  relative_time __constr_expr_20;
  relative_time __constr_expr_21;
  relative_time __constr_expr_22;
  relative_time __constr_expr_23;
  relative_time __constr_expr_24;
  relative_time __constr_expr_25;
  relative_time __constr_expr_26;
  relative_time __constr_expr_27;
  relative_time __constr_expr_28;
  relative_time __constr_expr_29;
  relative_time __constr_expr_30;
  relative_time __constr_expr_31;
  relative_time __constr_expr_32;
  relative_time __constr_expr_33;
  relative_time __constr_expr_34;
  relative_time __constr_expr_35;
  relative_time __constr_expr_36;
  relative_time __constr_expr_37;
  relative_time __constr_expr_38;
  relative_time __constr_expr_39;
  {
    yylen = 0;
    yytoken = 0;
    yyss = yyssa;
    yyvs = yyvsa;
    yystacksize = 20UL;
    yystate = 0;
    yyerrstatus = 0;
    yynerrs = 0;
    yychar = - 2;
    yyssp = yyss;
    yyvsp = yyvs;
    goto yysetstate;
    yynewstate:
    yyssp++;

    yysetstate:
    * yyssp = (yytype_int16) yystate;

    if (((unsigned long) ((yyss + yystacksize) - 1)) <= ((unsigned long) yyssp))
    {
      if (20UL <= yystacksize)
      {
       
      }

      if (20UL < yystacksize)
      {
       
      }

      if (! yyptr)
      {
       
      }

      while (1)
      {
      }

      while_break:
      ;

      while (1)
      {
      }

      while_break___0:
      ;

      if (((unsigned long) yyss1) != ((unsigned long) yyssa))
      {
       
      }

      if (((unsigned long) ((yyss + yystacksize) - 1)) <= ((unsigned long) yyssp))
      {
       
      }

    }

    if (yystate == 12)
    {
      goto yyacceptlab;
    }

    goto yybackup;
    yybackup:
    yyn = (int) yypact[yystate];

    if (yyn == (- 93))
    {
      goto yydefault;
    }

    if (yychar == (- 2))
    {
      yychar = yylex(& yylval, pc);
    }

    if (yychar <= 0)
    {
      yytoken = 0;
      yychar = yytoken;
    }
    else
    {
      if (((unsigned int) yychar) <= 277U)
      {
        yytoken = (int) yytranslate[yychar];
      }

    }

    yyn += yytoken;
    if (yyn < 0)
    {
      goto yydefault;
    }
    else
    {
      if (112 < yyn)
      {
       
      }
      else
      {
        if (((const int) yycheck[yyn]) != ((const int) yytoken))
        {
          goto yydefault;
        }

      }

    }

    yyn = (int) yytable[yyn];
    if (yyn <= 0)
    {
      if (yyn == 0)
      {
       
      }
      else
      {
        if (yyn == (- 1))
        {
         
        }

      }

    }

    if (yyerrstatus)
    {
     
    }

    yychar = - 2;
    yystate = yyn;
    yyvsp++;
    * yyvsp = yylval;
    goto yynewstate;
    yydefault:
    yyn = (int) yydefact[yystate];

    if (yyn == 0)
    {
     
    }

    goto yyreduce;
    yyreduce:
    yylen = (int) yyr2[yyn];

    yyval = * (yyvsp + (1 - yylen));
    if (yyn == 4)
    {
      goto case_4;
    }

    if (yyn == 7)
    {
     
    }

    if (yyn == 8)
    {
      goto case_8;
    }

    if (yyn == 9)
    {
     
    }

    if (yyn == 10)
    {
      goto case_10;
    }

    if (yyn == 11)
    {
      goto case_11;
    }

    if (yyn == 12)
    {
      goto case_12;
    }

    if (yyn == 18)
    {
     
    }

    if (yyn == 19)
    {
     
    }

    if (yyn == 20)
    {
     
    }

    if (yyn == 22)
    {
     
    }

    if (yyn == 23)
    {
      goto case_23;
    }

    if (yyn == 24)
    {
      goto case_24;
    }

    if (yyn == 27)
    {
      goto case_27;
    }

    if (yyn == 28)
    {
     
    }

    if (yyn == 29)
    {
     
    }

    if (yyn == 30)
    {
      goto case_30;
    }

    if (yyn == 31)
    {
     
    }

    if (yyn == 32)
    {
      goto case_32;
    }

    if (yyn == 33)
    {
     
    }

    if (yyn == 34)
    {
     
    }

    if (yyn == 35)
    {
     
    }

    if (yyn == 36)
    {
     
    }

    if (yyn == 37)
    {
     
    }

    if (yyn == 38)
    {
     
    }

    if (yyn == 39)
    {
      goto case_39;
    }

    if (yyn == 40)
    {
     
    }

    if (yyn == 41)
    {
     
    }

    if (yyn == 42)
    {
      goto case_42;
    }

    if (yyn == 43)
    {
     
    }

    if (yyn == 44)
    {
     
    }

    if (yyn == 45)
    {
     
    }

    if (yyn == 46)
    {
     
    }

    if (yyn == 47)
    {
     
    }

    if (yyn == 48)
    {
     
    }

    if (yyn == 50)
    {
      goto case_50;
    }

    if (yyn == 51)
    {
      goto case_51;
    }

    if (yyn == 52)
    {
      goto case_52;
    }

    if (yyn == 53)
    {
      goto case_53;
    }

    if (yyn == 54)
    {
     
    }

    if (yyn == 55)
    {
      goto case_55;
    }

    if (yyn == 56)
    {
     
    }

    if (yyn == 57)
    {
     
    }

    if (yyn == 58)
    {
      goto case_58;
    }

    if (yyn == 59)
    {
     
    }

    if (yyn == 60)
    {
     
    }

    if (yyn == 61)
    {
     
    }

    if (yyn == 62)
    {
     
    }

    if (yyn == 63)
    {
     
    }

    if (yyn == 64)
    {
     
    }

    if (yyn == 65)
    {
     
    }

    if (yyn == 66)
    {
     
    }

    if (yyn == 67)
    {
     
    }

    if (yyn == 68)
    {
     
    }

    if (yyn == 69)
    {
     
    }

    if (yyn == 70)
    {
      goto case_70;
    }

    if (yyn == 71)
    {
      goto case_71;
    }

    if (yyn == 72)
    {
     
    }

    if (yyn == 73)
    {
     
    }

    if (yyn == 75)
    {
     
    }

    if (yyn == 76)
    {
     
    }

    if (yyn == 77)
    {
      goto case_77;
    }

    if (yyn == 78)
    {
     
    }

    if (yyn == 79)
    {
     
    }

    if (yyn == 80)
    {
      goto case_80;
    }

    if (yyn == 81)
    {
      goto case_81;
    }

    if (yyn == 85)
    {
      goto case_85;
    }

    if (yyn == 87)
    {
      goto case_87;
    }

    if (yyn == 88)
    {
      goto case_88;
    }

    if (yyn == 89)
    {
     
    }

    if (yyn == 90)
    {
      goto case_90;
    }

    if (yyn == 91)
    {
     
    }

    goto switch_default;
    case_4:
    pc->seconds = (yyvsp + 0)->timespec;

    pc->timespec_seen = (_Bool) 1;
    goto switch_break;
    case_7:
    ;

    pc->times_seen++;
    case_8:
    pc->times_seen++;

    goto switch_break;
    case_9:
    ;

    pc->local_zones_seen++;
    case_10:
    pc->zones_seen++;

    goto switch_break;
    case_11:
    pc->dates_seen++;

    goto switch_break;
    case_12:
    pc->days_seen++;

    goto switch_break;
    case_18:
    ;

    set_hhmmss(pc, (yyvsp + (- 1))->textintval.value, 0L, (time_t) 0, 0L);
    case_19:
    ;

    set_hhmmss(pc, (yyvsp + (- 3))->textintval.value, (yyvsp + (- 1))->textintval.value, (time_t) 0, 0L);
    case_20:
    ;

    set_hhmmss(pc, (yyvsp + (- 5))->textintval.value, (yyvsp + (- 3))->textintval.value, (yyvsp + (- 1))->timespec.tv_sec, (yyvsp + (- 1))->timespec.tv_nsec);
    case_22:
    ;

    set_hhmmss(pc, (yyvsp + (- 1))->textintval.value, 0L, (time_t) 0, 0L);
    case_23:
    set_hhmmss(pc, (yyvsp + (- 3))->textintval.value, (yyvsp + (- 1))->textintval.value, (time_t) 0, 0L);

    pc->meridian = 2;
    goto switch_break;
    case_24:
    set_hhmmss(pc, (yyvsp + (- 5))->textintval.value, (yyvsp + (- 3))->textintval.value, (yyvsp + (- 1))->timespec.tv_sec, (yyvsp + (- 1))->timespec.tv_nsec);

    pc->meridian = 2;
    goto switch_break;
    case_27:
    pc->zones_seen++;

    pc->time_zone = time_zone_hhmm(pc, (yyvsp + (- 1))->textintval, (yyvsp + 0)->intval);
    goto switch_break;
    case_28:
    ;

    pc->local_isdst = (int) (yyvsp + 0)->intval;
    case_29:
    ;

    pc->local_isdst = 1;
    case_30:
    pc->time_zone = (yyvsp + 0)->intval;

    goto switch_break;
    case_31:
    ;

    pc->time_zone = 420L;
    case_32:
    pc->time_zone = (yyvsp + (- 1))->intval;

    apply_relative_time(pc, (yyvsp + 0)->rel, 1);
    goto switch_break;
    case_33:
    ;

    pc->time_zone = 420L;
    case_34:
    ;

    tmp___0 = time_zone_hhmm(pc, (yyvsp + (- 1))->textintval, (yyvsp + 0)->intval);
    case_35:
    ;

    pc->time_zone = (yyvsp + 0)->intval + 60L;
    case_36:
    ;

    pc->time_zone = (yyvsp + (- 1))->intval + 60L;
    case_37:
    ;

    pc->day_ordinal = 0L;
    case_38:
    ;

    pc->day_ordinal = 0L;
    case_39:
    pc->day_ordinal = (yyvsp + (- 1))->intval;

    pc->day_number = (int) (yyvsp + 0)->intval;
    goto switch_break;
    case_40:
    ;

    pc->day_ordinal = (yyvsp + (- 1))->textintval.value;
    case_41:
    ;

    pc->month = (yyvsp + (- 2))->textintval.value;
    case_42:
    if (4UL <= (yyvsp + (- 4))->textintval.digits)
    {
     
    }
    else
    {
      pc->month = (yyvsp + (- 4))->textintval.value;
      pc->day = (yyvsp + (- 2))->textintval.value;
      pc->year = (yyvsp + 0)->textintval;
    }


    goto switch_break;
    case_43:
    ;

    pc->day = (yyvsp + (- 2))->textintval.value;
    case_44:
    ;

    pc->month = (yyvsp + (- 2))->intval;
    case_45:
    ;

    pc->month = (yyvsp + (- 1))->intval;
    case_46:
    ;

    pc->month = (yyvsp + (- 3))->intval;
    case_47:
    ;

    pc->day = (yyvsp + (- 1))->textintval.value;
    case_48:
    ;

    pc->day = (yyvsp + (- 2))->textintval.value;
    case_50:
    pc->year = (yyvsp + (- 2))->textintval;

    pc->month = - (yyvsp + (- 1))->textintval.value;
    pc->day = - (yyvsp + 0)->textintval.value;
    goto switch_break;
    case_51:
    apply_relative_time(pc, (yyvsp + (- 1))->rel, (int) (yyvsp + 0)->intval);

    goto switch_break;
    case_52:
    apply_relative_time(pc, (yyvsp + 0)->rel, 1);

    goto switch_break;
    case_53:
    apply_relative_time(pc, (yyvsp + 0)->rel, 1);

    goto switch_break;
    case_54:
    ;

    __constr_expr_13.year = 0L;
    case_55:
    __constr_expr_14.year = 0L;

    __constr_expr_14.month = 0L;
    __constr_expr_14.day = 0L;
    __constr_expr_14.hour = 0L;
    __constr_expr_14.minutes = 0L;
    __constr_expr_14.seconds = (long_time_t) 0;
    __constr_expr_14.ns = 0L;
    yyval.rel = __constr_expr_14;
    yyval.rel.year = (yyvsp + (- 1))->textintval.value;
    goto switch_break;
    case_56:
    ;

    __constr_expr_15.year = 0L;
    case_57:
    ;

    __constr_expr_16.year = 0L;
    case_58:
    __constr_expr_17.year = 0L;

    __constr_expr_17.month = 0L;
    __constr_expr_17.day = 0L;
    __constr_expr_17.hour = 0L;
    __constr_expr_17.minutes = 0L;
    __constr_expr_17.seconds = (long_time_t) 0;
    __constr_expr_17.ns = 0L;
    yyval.rel = __constr_expr_17;
    yyval.rel.month = (yyvsp + (- 1))->textintval.value;
    goto switch_break;
    case_59:
    ;

    __constr_expr_18.year = 0L;
    case_60:
    ;

    __constr_expr_19.year = 0L;
    case_61:
    ;

    __constr_expr_20.year = 0L;
    case_62:
    ;

    __constr_expr_21.year = 0L;
    case_63:
    ;

    __constr_expr_22.year = 0L;
    case_64:
    ;

    __constr_expr_23.year = 0L;
    case_65:
    ;

    __constr_expr_24.year = 0L;
    case_66:
    ;

    __constr_expr_25.year = 0L;
    case_67:
    ;

    __constr_expr_26.year = 0L;
    case_68:
    ;

    __constr_expr_27.year = 0L;
    case_69:
    ;

    __constr_expr_28.year = 0L;
    case_70:
    __constr_expr_29.year = 0L;

    __constr_expr_29.month = 0L;
    __constr_expr_29.day = 0L;
    __constr_expr_29.hour = 0L;
    __constr_expr_29.minutes = 0L;
    __constr_expr_29.seconds = (long_time_t) 0;
    __constr_expr_29.ns = 0L;
    yyval.rel = __constr_expr_29;
    yyval.rel.seconds = (yyvsp + (- 1))->textintval.value;
    goto switch_break;
    case_71:
    __constr_expr_30.year = 0L;

    __constr_expr_30.month = 0L;
    __constr_expr_30.day = 0L;
    __constr_expr_30.hour = 0L;
    __constr_expr_30.minutes = 0L;
    __constr_expr_30.seconds = (long_time_t) 0;
    __constr_expr_30.ns = 0L;
    yyval.rel = __constr_expr_30;
    yyval.rel.seconds = (yyvsp + (- 1))->timespec.tv_sec;
    yyval.rel.ns = (yyvsp + (- 1))->timespec.tv_nsec;
    goto switch_break;
    case_72:
    ;

    __constr_expr_31.year = 0L;
    case_73:
    ;

    __constr_expr_32.year = 0L;
    case_75:
    ;

    __constr_expr_33.year = 0L;
    case_76:
    ;

    __constr_expr_34.year = 0L;
    case_77:
    __constr_expr_35.year = 0L;

    __constr_expr_35.month = 0L;
    __constr_expr_35.day = 0L;
    __constr_expr_35.hour = 0L;
    __constr_expr_35.minutes = 0L;
    __constr_expr_35.seconds = (long_time_t) 0;
    __constr_expr_35.ns = 0L;
    yyval.rel = __constr_expr_35;
    yyval.rel.day = (yyvsp + (- 1))->textintval.value * (yyvsp + 0)->intval;
    goto switch_break;
    case_78:
    ;

    __constr_expr_36.year = 0L;
    case_79:
    ;

    __constr_expr_37.year = 0L;
    case_80:
    __constr_expr_38.year = 0L;

    __constr_expr_38.month = 0L;
    __constr_expr_38.day = 0L;
    __constr_expr_38.hour = 0L;
    __constr_expr_38.minutes = 0L;
    __constr_expr_38.seconds = (long_time_t) 0;
    __constr_expr_38.ns = 0L;
    yyval.rel = __constr_expr_38;
    yyval.rel.seconds = (yyvsp + (- 1))->textintval.value;
    goto switch_break;
    case_81:
    __constr_expr_39.year = 0L;

    __constr_expr_39.month = 0L;
    __constr_expr_39.day = 0L;
    __constr_expr_39.hour = 0L;
    __constr_expr_39.minutes = 0L;
    __constr_expr_39.seconds = (long_time_t) 0;
    __constr_expr_39.ns = 0L;
    yyval.rel = __constr_expr_39;
    yyval.rel.day = (yyvsp + 0)->intval;
    goto switch_break;
    case_85:
    yyval.timespec.tv_sec = (yyvsp + 0)->textintval.value;

    yyval.timespec.tv_nsec = (__syscall_slong_t) 0;
    goto switch_break;
    case_87:
    yyval.timespec.tv_sec = (yyvsp + 0)->textintval.value;

    yyval.timespec.tv_nsec = (__syscall_slong_t) 0;
    goto switch_break;
    case_88:
    digits_to_date_time(pc, (yyvsp + 0)->textintval);

    goto switch_break;
    case_89:
    ;

    digits_to_date_time(pc, (yyvsp + (- 1))->textintval);
    case_90:
    yyval.intval = - 1L;

    goto switch_break;
    case_91:
    ;

    yyval.intval = (yyvsp + 0)->textintval.value;
    switch_default:
    goto switch_break;

    switch_break:
    yyvsp -= yylen;

    yyssp -= yylen;
    yylen = 0;
    yyvsp++;
    * yyvsp = yyval;
    yyn = (int) yyr1[yyn];
    yystate = (int) (((const int) yypgoto[yyn - 28]) + ((const int) (* yyssp)));
    if (0 <= yystate)
    {
      if (yystate <= 112)
      {
        if (((const int) yycheck[yystate]) == ((const int) (* yyssp)))
        {
          yystate = (int) yytable[yystate];
        }
        else
        {
          yystate = (int) yydefgoto[yyn - 28];
        }

      }
      else
      {
        yystate = (int) yydefgoto[yyn - 28];
      }

    }
    else
    {
      yystate = (int) yydefgoto[yyn - 28];
    }

    goto yynewstate;
    yyerrlab:
    ;

    if (! yyerrstatus)
    {
     
    }

    if (yyerrstatus == 3)
    {
     
    }

    yyvsp -= yylen;
    yyssp -= yylen;
    yylen = 0;
    yystate = (int) (* yyssp);
    goto yyerrlab1;
    yyerrlab1:
    ;

    yyerrstatus = 3;
    while (1)
    {
      if (yyn != (- 93))
      {
       
      }

      if (((unsigned long) yyssp) == ((unsigned long) yyss))
      {
       
      }

    }

    while_break___1:
    ;

    yyvsp++;
    yyacceptlab:
    yyresult = 0;

    goto yyreturn;
    yyabortlab:
    ;

    yyresult = 1;
    yyexhaustedlab:
    ;

    yyerror((const parser_control *) pc, "memory exhausted");
    yyreturn:
    if (yychar != (- 2))
    {
     
    }


    yyvsp -= yylen;
    yyssp -= yylen;
    while (1)
    {
      if (! (((unsigned long) yyssp) != ((unsigned long) yyss)))
      {
        goto while_break___2;
      }

      yydestruct("Cleanup: popping", (int) yystos[* yyssp], yyvsp, pc);
      yyvsp--;
      yyssp--;
    }

    while_break___2:
    ;

    if (((unsigned long) yyss) != ((unsigned long) yyssa))
    {
     
    }

    return yyresult;
  }
}

static const table meridian_table[5] = {{"AM", 270, 0}, {"A.M.", 270, 0}, {"PM", 270, 1}, {"P.M.", 270, 1}, {(const char *) ((void *) 0), 0, 0}};
static const table dst_table[1] = {{"DST", 259, 0}};
static const table month_and_day_table[25] = {{"JANUARY", 271, 1}, {"FEBRUARY", 271, 2}, {"MARCH", 271, 3}, {"APRIL", 271, 4}, {"MAY", 271, 5}, {"JUNE", 271, 6}, {"JULY", 271, 7}, {"AUGUST", 271, 8}, {"SEPTEMBER", 271, 9}, {"SEPT", 271, 9}, {"OCTOBER", 271, 10}, {"NOVEMBER", 271, 11}, {"DECEMBER", 271, 12}, {"SUNDAY", 267, 0}, {"MONDAY", 267, 1}, {"TUESDAY", 267, 2}, {"TUES", 267, 2}, {"WEDNESDAY", 267, 3}, {"WEDNES", 267, 3}, {"THURSDAY", 267, 4}, {"THUR", 267, 4}, {"THURS", 267, 4}, {"FRIDAY", 267, 5}, {"SATURDAY", 267, 6}, {(const char *) ((void *) 0), 0, 0}};
static const table time_units_table[11] = {{"YEAR", 260, 1}, {"MONTH", 261, 1}, {"FORTNIGHT", 265, 14}, {"WEEK", 265, 7}, {"DAY", 265, 1}, {"HOUR", 262, 1}, {"MINUTE", 263, 1}, {"MIN", 263, 1}, {"SECOND", 264, 1}, {"SEC", 264, 1}, {(const char *) ((void *) 0), 0, 0}};
static const table relative_time_table[21] = {{"TOMORROW", 266, 1}, {"YESTERDAY", 266, - 1}, {"TODAY", 266, 0}, {"NOW", 266, 0}, {"LAST", 272, - 1}, {"THIS", 272, 0}, {"NEXT", 272, 1}, {"FIRST", 272, 1}, {"THIRD", 272, 3}, {"FOURTH", 272, 4}, {"FIFTH", 272, 5}, {"SIXTH", 272, 6}, {"SEVENTH", 272, 7}, {"EIGHTH", 272, 8}, {"NINTH", 272, 9}, {"TENTH", 272, 10}, {"ELEVENTH", 272, 11}, {"TWELFTH", 272, 12}, {"AGO", 258, - 1}, {"HENCE", 258, 1}, {(const char *) ((void *) 0), 0, 0}};
static const table universal_time_zone_table[4] = {{"GMT", 273, 0}, {"UT", 273, 0}, {"UTC", 273, 0}, {(const char *) ((void *) 0), 0, 0}};
static const table time_zone_table[48] = {{"WET", 273, 0}, {"WEST", 268, 0}, {"BST", 268, 0}, {"ART", 273, - 180}, {"BRT", 273, - 180}, {"BRST", 268, - 180}, {"NST", 273, - 210}, {"NDT", 268, - 210}, {"AST", 273, - 240}, {"ADT", 268, - 240}, {"CLT", 273, - 240}, {"CLST", 268, - 240}, {"EST", 273, - 300}, {"EDT", 268, - 300}, {"CST", 273, - 360}, {"CDT", 268, - 360}, {"MST", 273, - 420}, {"MDT", 268, - 420}, {"PST", 273, - 480}, {"PDT", 268, - 480}, {"AKST", 273, - 540}, {"AKDT", 268, - 540}, {"HST", 273, - 600}, {"HAST", 273, - 600}, {"HADT", 268, - 600}, {"SST", 273, - 720}, {"WAT", 273, 60}, {"CET", 273, 60}, {"CEST", 268, 60}, {"MET", 273, 60}, {"MEZ", 273, 60}, {"MEST", 268, 60}, {"MESZ", 268, 60}, {"EET", 273, 120}, {"EEST", 268, 120}, {"CAT", 273, 120}, {"SAST", 273, 120}, {"EAT", 273, 180}, {"MSK", 273, 180}, {"MSD", 268, 180}, {"IST", 273, 330}, {"SGT", 273, 480}, {"KST", 273, 540}, {"JST", 273, 540}, {"GST", 273, 600}, {"NZST", 273, 720}, {"NZDT", 268, 720}, {(const char *) ((void *) 0), 0, 0}};
static const table military_table[26] = {{"A", 273, - 60}, {"B", 273, - 120}, {"C", 273, - 180}, {"D", 273, - 240}, {"E", 273, - 300}, {"F", 273, - 360}, {"G", 273, - 420}, {"H", 273, - 480}, {"I", 273, - 540}, {"K", 273, - 600}, {"L", 273, - 660}, {"M", 273, - 720}, {"N", 273, 60}, {"O", 273, 120}, {"P", 273, 180}, {"Q", 273, 240}, {"R", 273, 300}, {"S", 273, 360}, {"T", 'T', 0}, {"U", 273, 480}, {"V", 273, 540}, {"W", 273, 600}, {"X", 273, 660}, {"Y", 273, 720}, {"Z", 273, 0}, {(const char *) ((void *) 0), 0, 0}};
static long time_zone_hhmm(parser_control *pc, textint s, long mm)
{
  long n_minutes;
  long tmp;
  int tmp___0;
  {
    if (s.digits <= 2UL)
    {
      if (mm < 0L)
      {
        s.value *= 100L;
      }

    }

    if (mm < 0L)
    {
      n_minutes = ((s.value / 100L) * 60L) + (s.value % 100L);
    }
    else
    {
      if (s.negative)
      {
       
      }

    }

    tmp___0 = abs((int) n_minutes);
    if (1440 < tmp___0)
    {
     
    }

    return n_minutes;
  }
}

static int to_hour(long hours, int meridian)
{
  long tmp;
  int tmp___0;
  long tmp___1;
  int tmp___2;
  long tmp___3;
  {
    if (meridian == 0)
    {
     
    }

    if (meridian == 1)
    {
     
    }

    goto switch_default;
    switch_default:
    if (0L <= hours)
    {
      if (hours < 24L)
      {
        tmp = hours;
      }

    }


    return (int) tmp;
    case_0:
    ;

    if (0L < hours)
    {
     
    }
    else
    {
      _L:
      ;

      if (hours == 12L)
      {
       
      }

    }

    case_1:
    ;

    if (0L < hours)
    {
     
    }
    else
    {
      _L___0:
      ;

      if (hours == 12L)
      {
       
      }

    }

    return 0;
  }
}

static long to_year(textint textyear)
{
  long year___1;
  int tmp;
  {
    year___1 = textyear.value;
    if (year___1 < 0L)
    {
     
    }
    else
    {
      if (textyear.digits == 2UL)
      {
        if (year___1 < 69L)
        {
          tmp = 2000;
        }

        year___1 += (long) tmp;
      }

    }

    return year___1;
  }
}

static const table *lookup_zone(const parser_control *pc, const char *name)
{
  const table *tp;
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    tp = universal_time_zone_table;
    while (1)
    {
      if (! tp->name)
      {
        goto while_break;
      }

      tmp = strcmp(name, (const char *) tp->name);
      if (tmp == 0)
      {
        return tp;
      }

      tp++;
    }

    while_break:
    tp = (const table *) pc->local_time_zone_table;

    while (1)
    {
      if (! tp->name)
      {
        goto while_break___0;
      }

      tmp___0 = strcmp(name, (const char *) tp->name);
      if (tmp___0 == 0)
      {
       
      }

      tp++;
    }

    while_break___0:
    tp = time_zone_table;

    while (1)
    {
      if (! tp->name)
      {
        goto while_break___1;
      }

      tmp___1 = strcmp(name, (const char *) tp->name);
      if (tmp___1 == 0)
      {
       
      }

      tp++;
    }

    while_break___1:
    ;

    return (const table *) ((void *) 0);
  }
}

static const table *lookup_word(const parser_control *pc, char *word___0)
{
  char *p;
  char *q;
  size_t wordlen;
  const table *tp;
  _Bool period_found;
  _Bool abbrev;
  unsigned char ch;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  char tmp___8;
  {
    p = word___0;
    while (1)
    {
      if (! (* p))
      {
        goto while_break;
      }

      ch = (unsigned char) (* p);
      * p = (char) c_toupper((int) ch);
      p++;
    }

    while_break:
    tp = meridian_table;

    while (1)
    {
      if (! tp->name)
      {
        goto while_break___0;
      }

      tmp = strcmp((const char *) word___0, (const char *) tp->name);
      if (tmp == 0)
      {
       
      }

      tp++;
    }

    while_break___0:
    wordlen = strlen((const char *) word___0);

    if (wordlen == 3UL)
    {
      tmp___0 = 1;
    }
    else
    {
      if (wordlen == 4UL)
      {
        if (((int) (* (word___0 + 3))) == 46)
        {
         
        }
        else
        {
          tmp___0 = 0;
        }

      }
      else
      {
        tmp___0 = 0;
      }

    }

    abbrev = (_Bool) tmp___0;
    tp = month_and_day_table;
    while (1)
    {
      if (! tp->name)
      {
        goto while_break___1;
      }

      if (abbrev)
      {
        tmp___1 = strncmp((const char *) word___0, (const char *) tp->name, (size_t) 3);
        tmp___3 = tmp___1;
      }
      else
      {
        tmp___2 = strcmp((const char *) word___0, (const char *) tp->name);
        tmp___3 = tmp___2;
      }

      if (tmp___3 == 0)
      {
        return tp;
      }

      tp++;
    }

    while_break___1:
    tp = (const table *) lookup_zone(pc, (const char *) word___0);

    if (tp)
    {
      return tp;
    }

    tmp___4 = strcmp((const char *) word___0, (const char *) dst_table[0].name);
    if (tmp___4 == 0)
    {
     
    }

    tp = time_units_table;
    while (1)
    {
      if (! tp->name)
      {
        goto while_break___2;
      }

      tmp___5 = strcmp((const char *) word___0, (const char *) tp->name);
      if (tmp___5 == 0)
      {
        return tp;
      }

      tp++;
    }

    while_break___2:
    ;

    if (((int) (* (word___0 + (wordlen - 1UL)))) == 83)
    {
      * (word___0 + (wordlen - 1UL)) = (char) '\000';
      tp = time_units_table;
      while (1)
      {
        if (! tp->name)
        {
         
        }

        tmp___6 = strcmp((const char *) word___0, (const char *) tp->name);
        if (tmp___6 == 0)
        {
          return tp;
        }

        tp++;
      }

      while_break___3:
      ;

      * (word___0 + (wordlen - 1UL)) = (char) 'S';
    }

    tp = relative_time_table;
    while (1)
    {
      if (! tp->name)
      {
       
      }

      tmp___7 = strcmp((const char *) word___0, (const char *) tp->name);
      if (tmp___7 == 0)
      {
        return tp;
      }

      tp++;
    }

    while_break___4:
    ;

    if (wordlen == 1UL)
    {
      while (1)
      {
        if (! tp->name)
        {
         
        }

        if (((int) (* (word___0 + 0))) == ((int) (* (tp->name + 0))))
        {
         
        }

      }

      while_break___5:
      ;

    }

    while (1)
    {
      if (! tmp___8)
      {
       
      }

      if (((int) (* q)) == 46)
      {
       
      }

    }

    while_break___6:
    ;

    if (period_found)
    {
     
    }

  }
}

static int yylex(union YYSTYPE *lvalp, parser_control *pc)
{
  unsigned char c;
  size_t count;
  _Bool tmp;
  const char *p;
  int sign;
  unsigned long value;
  _Bool tmp___0;
  unsigned long value1;
  time_t s;
  int ns;
  int digits;
  unsigned long value1___0;
  const char *tmp___1;
  const char *tmp___2;
  int tmp___3;
  int tmp___4;
  char buff[20];
  char *p___0;
  const table *tp;
  char *tmp___5;
  _Bool tmp___6;
  _Bool tmp___7;
  const char *tmp___8;
  int tmp___9;
  const char *tmp___10;
  {
    {
      while (1)
      {
        c = (unsigned char) (* pc->input);
        tmp = c_isspace((int) c);
        if (! tmp)
        {
          goto while_break___0;
        }

        pc->input++;
      }

      while_break___0:
      ;

      if ((((unsigned int) c) - 48U) <= 9U)
      {
        goto _L___2;
      }
      else
      {
        if (((int) c) == 45)
        {
          goto _L___2;
        }
        else
        {
          if (((int) c) == 43)
          {
            _L___2:
            if (((int) c) == 45)
            {
              goto _L;
            }
            else
            {
              if (((int) c) == 43)
              {
                _L:
                if (((int) c) == 45)
                {
                  sign = - 1;
                }
                else
                {
                  sign = 1;
                }


                while (1)
                {
                  while_continue___1:
                  pc->input++;

                  c = (unsigned char) (* pc->input);
                  tmp___0 = c_isspace((int) c);
                  if (! tmp___0)
                  {
                    goto while_break___1;
                  }

                }

                while_break___1:
                ;

                if (! ((((unsigned int) c) - 48U) <= 9U))
                {
                 
                }

              }
              else
              {
                sign = 0;
              }

            }


            p = pc->input;
            value = 0UL;
            while (1)
            {
              value1 = value + ((unsigned long) (((int) c) - 48));
              if (value1 < value)
              {
               
              }

              value = value1;
              p++;
              c = (unsigned char) (* p);
              if (! ((((unsigned int) c) - 48U) <= 9U))
              {
                goto while_break___2;
              }

              if (1844674407370955161UL < value)
              {
               
              }

              value *= 10UL;
            }

            while_break___2:
            ;

            if (((int) c) == 46)
            {
              goto _L___1;
            }
            else
            {
              if (((int) c) == 44)
              {
                _L___1:
                ;

                if ((((unsigned int) (* (p + 1))) - 48U) <= 9U)
                {
                  if (sign < 0)
                  {
                    if (0L < s)
                    {
                     
                    }

                  }
                  else
                  {
                    s = (time_t) value;
                    if (s < 0L)
                    {
                     
                    }

                    value1___0 = (unsigned long) s;
                  }

                  if (value != value1___0)
                  {
                   
                  }

                  p++;
                  tmp___1 = p;
                  p++;
                  ns = (int) (((const int) (* tmp___1)) - 48);
                  digits = 2;
                  while (1)
                  {
                    if (! (digits <= 9))
                    {
                      goto while_break___3;
                    }

                    ns *= 10;
                    if ((((unsigned int) (* p)) - 48U) <= 9U)
                    {
                      tmp___2 = p;
                      p++;
                      ns += (int) (((const int) (* tmp___2)) - 48);
                    }

                    digits++;
                  }

                  while_break___3:
                  ;

                  if (sign < 0)
                  {
                    while (1)
                    {
                      if (! ((((unsigned int) (* p)) - 48U) <= 9U))
                      {
                       
                      }

                      if (((const int) (* p)) != 48)
                      {
                       
                      }

                    }

                    while_break___4:
                    ;

                  }

                  while (1)
                  {
                    if (! ((((unsigned int) (* p)) - 48U) <= 9U))
                    {
                      goto while_break___5;
                    }

                  }

                  while_break___5:
                  ;

                  if (sign < 0)
                  {
                    if (ns)
                    {
                     
                    }

                  }

                  lvalp->timespec.tv_sec = s;
                  lvalp->timespec.tv_nsec = (__syscall_slong_t) ns;
                  pc->input = p;
                  if (sign)
                  {
                    tmp___3 = 276;
                  }
                  else
                  {
                    tmp___3 = 277;
                  }

                  return tmp___3;
                }

              }
              else
              {
                _L___0:
                lvalp->textintval.negative = (_Bool) (sign < 0);

                if (sign < 0)
                {
                  lvalp->textintval.value = (long) (- value);
                  if (0L < lvalp->textintval.value)
                  {
                   
                  }

                }
                else
                {
                  lvalp->textintval.value = (long) value;
                  if (lvalp->textintval.value < 0L)
                  {
                   
                  }

                }

                lvalp->textintval.digits = (size_t) (p - pc->input);
                pc->input = p;
                if (sign)
                {
                  tmp___4 = 274;
                }
                else
                {
                  tmp___4 = 275;
                }

                return tmp___4;
              }

            }

          }

        }

      }

      tmp___7 = c_isalpha((int) c);
      if (tmp___7)
      {
        p___0 = buff;
        while (1)
        {
          if (((unsigned long) (p___0 - buff)) < ((sizeof(buff)) - 1UL))
          {
            tmp___5 = p___0;
            p___0++;
            * tmp___5 = (char) c;
          }

          pc->input++;
          c = (unsigned char) (* pc->input);
          tmp___6 = c_isalpha((int) c);
          if (! tmp___6)
          {
            if (! (((int) c) == 46))
            {
              goto while_break___6;
            }

          }

        }

        while_break___6:
        * p___0 = (char) '\000';

        tp = lookup_word((const parser_control *) pc, buff);
        if (! tp)
        {
         
        }

        lvalp->intval = (long) tp->value;
        return (int) tp->type;
      }

      if (((int) c) != 40)
      {
        tmp___8 = pc->input;
        pc->input++;
        tmp___9 = (int) to_uchar___0((char) (* tmp___8));
        return tmp___9;
      }

      while (1)
      {
        if (((int) c) == 0)
        {
         
        }

        if (((int) c) == 40)
        {
         
        }
        else
        {
          if (((int) c) == 41)
          {
           
          }

        }

        if (! (count != 0UL))
        {
         
        }

      }

      while_break___7:
      ;

      __Cont:
      ;

    }
    return 0;
  }
}

static int yyerror(const parser_control *pc, const char *s)
{
 
}

static _Bool mktime_ok(const struct tm *tm0, const struct tm *tm1, time_t t)
{
  if (t == (- 1L))
  {
    if (! tm1)
    {
     
    }

  }

  return (_Bool) (! ((((((tm0->tm_sec ^ tm1->tm_sec) | (tm0->tm_min ^ tm1->tm_min)) | (tm0->tm_hour ^ tm1->tm_hour)) | (tm0->tm_mday ^ tm1->tm_mday)) | (tm0->tm_mon ^ tm1->tm_mon)) | (tm0->tm_year ^ tm1->tm_year)));
}

static char *get_tz(char *tzbuf)
{
  char *tz;
  char *tmp;
  size_t tzsize;
  size_t tmp___0;
  void *tmp___1;
  void *tmp___2;
  {
    tmp = getenv("TZ");
    tz = tmp;
    if (tz)
    {
      if (tzsize <= 100UL)
      {
       
      }

    }

    return tz;
  }
}

_Bool parse_datetime(struct timespec *result, const char *p, const struct timespec *now)
{
  time_t Start;
  long Start_ns;
  const struct tm *tmp;
  struct tm tm;
  struct tm tm0;
  parser_control pc;
  struct timespec gettime_buffer;
  unsigned char c;
  _Bool tz_was_altered;
  char *tz0;
  char tz0buf[100];
  _Bool ok;
  _Bool tmp___0;
  const char *tzbase;
  size_t tzsize;
  const char *s;
  char *z;
  char *tz1;
  char tz1buf[100];
  _Bool large_tz;
  _Bool setenv_ok;
  void *tmp___1;
  char *tmp___2;
  int tmp___3;
  int tmp___4;
  relative_time __constr_expr_40;
  int quarter;
  time_t probe;
  const struct tm *probe_tm;
  const struct tm *tmp___5;
  int tmp___6;
  int tmp___7;
  long tmp___8;
  long time_zone;
  long abs_time_zone;
  long tmp___9;
  long abs_time_zone_hour;
  int abs_time_zone_min;
  char tz1buf___0[(sizeof("XXX+0:00")) + (((sizeof(pc.time_zone)) * 8UL) / 3UL)];
  int tmp___10;
  _Bool tmp___11;
  _Bool tmp___12;
  int tmp___13;
  int year___1;
  int month;
  int day;
  long delta;
  time_t t1;
  long sum_ns;
  long normalized_ns;
  time_t t0;
  long d1;
  time_t t1___0;
  long d2;
  time_t t2;
  long_time_t d3;
  long_time_t t3;
  long d4;
  long_time_t t4;
  time_t t5;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  {
    tz_was_altered = (_Bool) 0;
    tz0 = (char *) ((void *) 0);
    ok = (_Bool) 1;
    if (! now)
    {
      gettime(& gettime_buffer);
      now = (const struct timespec *) (& gettime_buffer);
    }

    Start = (time_t) now->tv_sec;
    Start_ns = (long) now->tv_nsec;
    tmp = (const struct tm *) localtime(& now->tv_sec);
    if (! tmp)
    {
     
    }

    while (1)
    {
      c = (unsigned char) (* p);
      tmp___0 = c_isspace((int) c);
      if (! tmp___0)
      {
        goto while_break;
      }

    }

    while_break:
    tmp___4 = strncmp(p, "TZ=\"", (size_t) 4);

    if (tmp___4 == 0)
    {
      tzbase = p + 4;
      tzsize = (size_t) 1;
      s = tzbase;
      while (1)
      {
        if (! (* s))
        {
          goto while_break___0;
        }

        if (((const int) (* s)) == 92)
        {
          if (! (((const int) (* s)) == 92))
          {
           
          }

        }
        else
        {
          if (((const int) (* s)) == 34)
          {
            large_tz = (_Bool) (100UL < tzsize);
            free((void *) tz0);
            tz0 = get_tz(tz0buf);
            if (large_tz)
            {
             
            }
            else
            {
              tz1 = tz1buf;
            }

            z = tz1;
            s = tzbase;
            while (1)
            {
              if (! (((const int) (* s)) != 34))
              {
                goto while_break___1;
              }

              tmp___2 = z;
              z++;
              s += ((const int) (* s)) == 92;
              * tmp___2 = (char) (* s);
              s++;
            }

            while_break___1:
            * z = (char) '\000';

            tmp___3 = setenv("TZ", (const char *) tz1, 1);
            setenv_ok = (_Bool) (tmp___3 == 0);
            if (large_tz)
            {
             
            }

            if (! setenv_ok)
            {
             
            }

            tz_was_altered = (_Bool) 1;
            p = s + 1;
          }

        }

        s++;
        tzsize++;
      }

      while_break___0:
      ;

    }

    if (((const int) (* p)) == 0)
    {
     
    }

    pc.input = p;
    pc.year.value = (long) tmp->tm_year;
    pc.year.value += 1900L;
    pc.year.digits = (size_t) 0;
    pc.month = (long) (tmp->tm_mon + 1);
    pc.day = (long) tmp->tm_mday;
    pc.hour = (long) tmp->tm_hour;
    pc.minutes = (long) tmp->tm_min;
    pc.seconds.tv_sec = (__time_t) tmp->tm_sec;
    pc.seconds.tv_nsec = Start_ns;
    tm.tm_isdst = (int) tmp->tm_isdst;
    pc.meridian = 2;
    __constr_expr_40.year = 0L;
    __constr_expr_40.month = 0L;
    __constr_expr_40.day = 0L;
    __constr_expr_40.hour = 0L;
    __constr_expr_40.minutes = 0L;
    __constr_expr_40.seconds = (long_time_t) 0;
    __constr_expr_40.ns = 0L;
    pc.rel = __constr_expr_40;
    pc.timespec_seen = (_Bool) 0;
    pc.rels_seen = (_Bool) 0;
    pc.dates_seen = (size_t) 0;
    pc.days_seen = (size_t) 0;
    pc.times_seen = (size_t) 0;
    pc.local_zones_seen = (size_t) 0;
    pc.dsts_seen = (size_t) 0;
    pc.zones_seen = (size_t) 0;
    pc.local_time_zone_table[0].name = (const char *) tmp->tm_zone;
    pc.local_time_zone_table[0].type = 269;
    pc.local_time_zone_table[0].value = (int) tmp->tm_isdst;
    pc.local_time_zone_table[1].name = (const char *) ((void *) 0);
    quarter = 1;
    while (1)
    {
      if (! (quarter <= 3))
      {
        goto while_break___2;
      }

      probe = Start + ((time_t) (quarter * 7776000));
      tmp___5 = (const struct tm *) localtime((const time_t *) (& probe));
      probe_tm = tmp___5;
      if (probe_tm)
      {
        if (probe_tm->tm_zone)
        {
          if (probe_tm->tm_isdst != ((const int) pc.local_time_zone_table[0].value))
          {
            pc.local_time_zone_table[1].name = (const char *) probe_tm->tm_zone;
            pc.local_time_zone_table[1].type = 269;
            pc.local_time_zone_table[1].value = (int) probe_tm->tm_isdst;
            pc.local_time_zone_table[2].name = (const char *) ((void *) 0);
            goto while_break___2;
          }

        }

      }

      quarter++;
    }

    while_break___2:
    ;

    if (pc.local_time_zone_table[0].name)
    {
      if (pc.local_time_zone_table[1].name)
      {
        tmp___6 = strcmp(pc.local_time_zone_table[0].name, pc.local_time_zone_table[1].name);
        if (! tmp___6)
        {
         
        }

      }

    }

    tmp___7 = yyparse(& pc);
    if (tmp___7 != 0)
    {
     
    }

    if (pc.timespec_seen)
    {
      * result = pc.seconds;
    }
    else
    {
      if (1UL < ((((pc.times_seen | pc.dates_seen) | pc.days_seen) | pc.dsts_seen) | (pc.local_zones_seen + pc.zones_seen)))
      {
       
      }

      tmp___8 = to_year(pc.year);
      tm.tm_year = (int) (tmp___8 - 1900L);
      tm.tm_mon = (int) (pc.month - 1L);
      tm.tm_mday = (int) pc.day;
      if (pc.times_seen)
      {
        goto _L;
      }
      else
      {
        if (pc.rels_seen)
        {
          if (! pc.dates_seen)
          {
            if (! pc.days_seen)
            {
              _L:
              ;

              tm.tm_hour = to_hour(pc.hour, pc.meridian);
              if (tm.tm_hour < 0)
              {
               
              }

              tm.tm_min = (int) pc.minutes;
              tm.tm_sec = (int) pc.seconds.tv_sec;
            }

          }
          else
          {
            tm.tm_sec = 0;
            tm.tm_min = tm.tm_sec;
            tm.tm_hour = tm.tm_min;
            pc.seconds.tv_nsec = (__syscall_slong_t) 0;
          }

        }
        else
        {
          tm.tm_sec = 0;
          tm.tm_min = tm.tm_sec;
          tm.tm_hour = tm.tm_min;
          pc.seconds.tv_nsec = (__syscall_slong_t) 0;
        }

      }

      if ((pc.dates_seen | pc.days_seen) | pc.times_seen)
      {
        tm.tm_isdst = - 1;
      }

      if (pc.local_zones_seen)
      {
       
      }

      tm0 = tm;
      Start = mktime(& tm);
      tmp___12 = mktime_ok((const struct tm *) (& tm0), (const struct tm *) (& tm), Start);
      if (! tmp___12)
      {
        if (! pc.zones_seen)
        {
          goto fail;
        }
        else
        {
          if (time_zone < 0L)
          {
           
          }

          if (! tz_was_altered)
          {
           
          }

          if (tmp___10 != 0)
          {
           
          }

          if (! tmp___11)
          {
           
          }

        }

      }

      if (pc.days_seen)
      {
        if (! pc.dates_seen)
        {
          if (0L < pc.day_ordinal)
          {
            if (tm.tm_wday != pc.day_number)
            {
              tmp___13 = 1;
            }

          }

          tm.tm_mday = (int) (((long) tm.tm_mday) + (((long) (((pc.day_number - tm.tm_wday) + 7) % 7)) + (7L * (pc.day_ordinal - ((long) tmp___13)))));
          tm.tm_isdst = - 1;
          Start = mktime(& tm);
          if (Start == (- 1L))
          {
           
          }

        }

      }

      if ((pc.rel.year | pc.rel.month) | pc.rel.day)
      {
        year___1 = (int) (((long) tm.tm_year) + pc.rel.year);
        month = (int) (((long) tm.tm_mon) + pc.rel.month);
        day = (int) (((long) tm.tm_mday) + pc.rel.day);
        if ((((year___1 < tm.tm_year) ^ (pc.rel.year < 0L)) | ((month < tm.tm_mon) ^ (pc.rel.month < 0L))) | ((day < tm.tm_mday) ^ (pc.rel.day < 0L)))
        {
         
        }

        tm.tm_year = year___1;
        tm.tm_mon = month;
        tm.tm_mday = day;
        tm.tm_hour = tm0.tm_hour;
        tm.tm_min = tm0.tm_min;
        tm.tm_sec = tm0.tm_sec;
        tm.tm_isdst = tm0.tm_isdst;
        Start = mktime(& tm);
        if (Start == (- 1L))
        {
         
        }

      }

      if (pc.zones_seen)
      {
        delta = pc.time_zone * 60L;
        delta -= tm.tm_gmtoff;
        t1 = Start - delta;
        if ((Start < t1) != (delta < 0L))
        {
         
        }

        Start = t1;
      }

      sum_ns = pc.seconds.tv_nsec + pc.rel.ns;
      normalized_ns = ((sum_ns % 1000000000L) + 1000000000L) % 1000000000L;
      t0 = Start;
      d1 = 3600L * pc.rel.hour;
      t1___0 = t0 + d1;
      d2 = 60L * pc.rel.minutes;
      t2 = t1___0 + d2;
      d3 = pc.rel.seconds;
      t3 = t2 + d3;
      d4 = (sum_ns - normalized_ns) / 1000000000L;
      t4 = t3 + d4;
      t5 = t4;
      if ((((((((d1 / 3600L) ^ pc.rel.hour) | ((d2 / 60L) ^ pc.rel.minutes)) | ((long) ((t1___0 < t0) ^ (d1 < 0L)))) | ((long) ((t2 < t1___0) ^ (d2 < 0L)))) | ((long) ((t3 < t2) ^ (d3 < 0L)))) | ((long) ((t4 < t3) ^ (d4 < 0L)))) | ((long) (t5 != t4)))
      {
       
      }

      result->tv_sec = t5;
      result->tv_nsec = normalized_ns;
    }

    goto done;
    fail:
    ok = (_Bool) 0;

    done:
    if (tz_was_altered)
    {
      if (tz0)
      {
       
      }
      else
      {
        tmp___15 = unsetenv("TZ");
        tmp___16 = tmp___15;
      }

      ok = (_Bool) (((int) ok) & (tmp___16 == 0));
    }


    if (((unsigned long) tz0) != ((unsigned long) tz0buf))
    {
      free((void *) tz0);
    }

    return ok;
  }
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern void exit(int __status);
extern int optind;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
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
  {
    cp = (const char *) charset_aliases;
    if (((unsigned long) cp) == ((unsigned long) ((void *) 0)))
    {
      base = "charset.alias";
      dir = (const char *) getenv("CHARSETALIASDIR");
      if (((unsigned long) dir) == ((unsigned long) ((void *) 0)))
      {
        dir = "/usr/local/lib";
      }
      else
      {
        if (((const int) (* (dir + 0))) == 0)
        {
         
        }

      }

      tmp = strlen(dir);
      dir_len___0 = tmp;
      tmp___0 = strlen(base);
      base_len___0 = tmp___0;
      if (dir_len___0 > 0UL)
      {
        if (! (((const int) (* (dir + (dir_len___0 - 1UL)))) == 47))
        {
          tmp___1 = 1;
        }

      }

      add_slash = tmp___1;
      file_name___3 = (char *) malloc(((dir_len___0 + ((size_t) add_slash)) + base_len___0) + 1UL);
      if (((unsigned long) file_name___3) != ((unsigned long) ((void *) 0)))
      {
        memcpy((void *) file_name___3, (const void *) dir, dir_len___0);
        if (add_slash)
        {
          * (file_name___3 + dir_len___0) = (char) '/';
        }

        memcpy((void *) ((file_name___3 + dir_len___0) + add_slash), (const void *) base, base_len___0 + 1UL);
      }

      if (((unsigned long) file_name___3) == ((unsigned long) ((void *) 0)))
      {
       
      }
      else
      {
        fd = open((const char *) file_name___3, 131072);
        if (fd < 0)
        {
          cp = "";
        }
        else
        {
          if (((unsigned long) fp) == ((unsigned long) ((void *) 0)))
          {
           
          }
          else
          {
            while (1)
            {
              if (c == (- 1))
              {
               
              }

              if (c == 10)
              {
               
              }
              else
              {
                if (c == 32)
                {
                 
                }
                else
                {
                  if (c == 9)
                  {
                   
                  }

                }

              }

              if (c == 35)
              {
                while (1)
                {
                  if (c == (- 1))
                  {
                   
                  }
                  else
                  {
                    if (c == 10)
                    {
                     
                    }

                  }

                }

                while_break___0:
                ;

                if (c == (- 1))
                {
                 
                }

              }

              if (tmp___3 < 2)
              {
               
              }

              if (res_size == 0UL)
              {
               
              }

              if (((unsigned long) res_ptr) == ((unsigned long) ((void *) 0)))
              {
               
              }

              __Cont:
              ;

            }

            while_break:
            ;

            rpl_fclose(fp);
            if (res_size == 0UL)
            {
             
            }

          }

        }

        free((void *) file_name___3);
      }

      charset_aliases = cp;
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
  {
    codeset = (const char *) nl_langinfo(14);
    if (((unsigned long) codeset) == ((unsigned long) ((void *) 0)))
    {
     
    }

    aliases = get_charset_aliases();
    while (1)
    {
      if (! (((const int) (* aliases)) != 0))
      {
        goto while_break;
      }

      if (tmp___2 == 0)
      {
       
      }
      else
      {
        if (((const int) (* (aliases + 0))) == 42)
        {
         
        }

      }

    }

    while_break:
    ;

    if (((const int) (* (codeset + 0))) == 0)
    {
     
    }

    return codeset;
  }
}

#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
char *imaxtostr(intmax_t i, char *buf___1);
char *imaxtostr(intmax_t i, char *buf___1)
{
 
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
void gettime(struct timespec *ts)
{
  int tmp;
  struct timeval tv;
  {
    tmp = clock_gettime(0, ts);
    if (tmp == 0)
    {
      return;
    }

  }
}

#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int rpl_fseeko(FILE *fp, off_t offset, int whence)
{
 
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int fputc(int __c, FILE *__stream);
size_t fprintftime(FILE *s, const char *format, const struct tm *tp, int ut, int ns);
static void fwrite_lowcase(FILE *fp, const char *src, size_t len)
{
 
}

static void fwrite_uppcase(FILE *fp, const char *src, size_t len)
{
  int tmp;
  size_t tmp___0;
  {
    while (1)
    {
      tmp___0 = len;
      len--;
      if (! (tmp___0 > 0UL))
      {
        goto while_break;
      }

      tmp = toupper((int) ((unsigned char) (* src)));
      fputc(tmp, fp);
      src++;
    }

    while_break:
    ;

    return;
  }
}

static size_t strftime_case____0(_Bool upcase, FILE *s, const char *format, const struct tm *tp, int ut, int ns)
{
  size_t maxsize;
  int hour12;
  const char *zone;
  size_t i;
  FILE *p;
  const char *f;
  int pad;
  int modifier;
  int digits;
  int number_value;
  unsigned int u_number_value;
  _Bool negative_number;
  _Bool always_output_a_sign;
  int tz_colon_mask;
  const char *subfmt;
  char sign_char;
  char *bufp;
  char buf___1[3UL + ((((((sizeof(time_t)) * 8UL) - 1UL) * 146UL) / 485UL) + 2UL)];
  int width;
  _Bool to_lowcase;
  _Bool to_uppcase;
  size_t colons;
  _Bool change_case;
  int format_char;
  size_t _n;
  size_t _w;
  int tmp;
  size_t _incr;
  size_t tmp___0;
  size_t _delta;
  size_t _i;
  size_t _i___0;
  const char *tmp___1;
  size_t _n___0;
  size_t _w___0;
  int tmp___2;
  size_t _incr___0;
  size_t tmp___3;
  size_t _delta___0;
  size_t _i___1;
  size_t _i___2;
  size_t len;
  size_t tmp___4;
  size_t _n___1;
  size_t _w___1;
  int tmp___5;
  size_t _incr___1;
  size_t tmp___6;
  size_t _delta___1;
  size_t _i___3;
  size_t _i___4;
  char ufmt[5];
  char *u;
  char ubuf[1024];
  size_t len___0;
  char *tmp___7;
  char *tmp___8;
  char *tmp___9;
  char *tmp___10;
  size_t _n___2;
  size_t _w___2;
  int tmp___11;
  size_t _incr___2;
  size_t tmp___12;
  size_t _delta___2;
  size_t _i___5;
  size_t _i___6;
  int century;
  int tmp___13;
  int tmp___14;
  size_t _n___3;
  size_t _w___3;
  int tmp___15;
  size_t _incr___3;
  size_t tmp___16;
  size_t _delta___3;
  size_t _i___7;
  size_t _i___8;
  int padding;
  size_t _i___9;
  size_t _n___4;
  size_t _w___4;
  int tmp___17;
  size_t _incr___4;
  size_t tmp___18;
  size_t _delta___4;
  size_t _i___10;
  size_t _i___11;
  size_t _n___5;
  size_t _w___5;
  int tmp___19;
  size_t _incr___5;
  size_t tmp___20;
  size_t _delta___5;
  size_t _i___12;
  size_t _i___13;
  size_t _i___14;
  size_t _n___6;
  size_t _w___6;
  int tmp___21;
  size_t _incr___6;
  size_t tmp___22;
  size_t _delta___6;
  size_t _i___15;
  size_t _i___16;
  size_t _n___7;
  size_t _w___7;
  int tmp___23;
  size_t _incr___7;
  size_t tmp___24;
  size_t _delta___7;
  size_t _i___17;
  size_t _i___18;
  int j;
  size_t _n___8;
  size_t _w___8;
  int tmp___25;
  size_t _incr___8;
  size_t tmp___26;
  size_t _delta___8;
  size_t _i___19;
  size_t _i___20;
  struct tm ltm;
  time_t t;
  int d;
  int tmp___27;
  size_t _n___9;
  size_t _w___9;
  int tmp___28;
  size_t _incr___9;
  size_t tmp___29;
  size_t _delta___9;
  size_t _i___21;
  size_t _i___22;
  int year___1;
  int tmp___30;
  int year_adjust;
  int days;
  int tmp___31;
  int tmp___32;
  int d___0;
  int tmp___33;
  int tmp___34;
  int yy;
  int tmp___35;
  int yy___0;
  size_t _n___10;
  size_t tmp___36;
  size_t _w___10;
  int tmp___37;
  size_t _incr___10;
  size_t tmp___38;
  size_t _delta___10;
  size_t _i___23;
  size_t _i___24;
  int diff;
  int hour_diff;
  int min_diff;
  int sec_diff;
  int flen;
  size_t _n___11;
  size_t _w___11;
  int tmp___39;
  size_t _incr___11;
  size_t tmp___40;
  size_t _delta___11;
  size_t _i___25;
  size_t _i___26;
  {
    maxsize = (size_t) (- 1);
    hour12 = (int) tp->tm_hour;
    i = (size_t) 0;
    p = s;
    zone = (const char *) ((void *) 0);
    zone = (const char *) tp->tm_zone;
    if (hour12 > 12)
    {
      hour12 -= 12;
    }
    else
    {
      if (hour12 == 0)
      {
        hour12 = 12;
      }

    }

    f = format;
    while (1)
    {
      if (! (((const int) (* f)) != 0))
      {
        goto while_break;
      }

      pad = 0;
      digits = 0;
      width = - 1;
      to_lowcase = (_Bool) 0;
      to_uppcase = upcase;
      change_case = (_Bool) 0;
      if (((const int) (* f)) != 37)
      {
        while (1)
        {
          _n = (size_t) 1;
          if (width < 0)
          {
            tmp = 0;
          }

          _w = (size_t) tmp;
          if (_n < _w)
          {
           
          }
          else
          {
            tmp___0 = _n;
          }

          _incr = tmp___0;
          if (_incr >= (maxsize - i))
          {
           
          }

          if (p)
          {
            if (digits == 0)
            {
              if (_n < _w)
              {
                if (pad == 48)
                {
                  while (1)
                  {
                    while (1)
                    {
                      if (! (_i < _delta))
                      {
                       
                      }

                    }

                    while_break___2:
                    ;

                  }

                  while_break___1:
                  ;

                }
                else
                {
                  while (1)
                  {
                    while (1)
                    {
                      if (! (_i___0 < _delta))
                      {
                       
                      }

                    }

                    while_break___4:
                    ;

                  }

                  while_break___3:
                  ;

                }

              }

            }

            fputc((int) (* f), p);
          }

          i += _incr;
          goto while_break___0;
        }

        while_break___0:
        ;

        goto __Cont;
      }

      while (1)
      {
        while_continue___5:
        f++;

        if (((const int) (* f)) == 95)
        {
         
        }

        if (((const int) (* f)) == 45)
        {
         
        }

        if (((const int) (* f)) == 48)
        {
          goto case_95;
        }

        if (((const int) (* f)) == 94)
        {
          goto case_94;
        }

        if (((const int) (* f)) == 35)
        {
         
        }

        goto switch_default;
        case_95:
        pad = (int) (* f);

        goto while_continue___5;
        case_94:
        to_uppcase = (_Bool) 1;

        goto while_continue___5;
        case_35:
        ;

        change_case = (_Bool) 1;
        switch_default:
        goto switch_break;

        switch_break:
        ;

        goto while_break___5;
      }

      while_break___5:
      ;

      if ((((unsigned int) (* f)) - 48U) <= 9U)
      {
        width = 0;
        while (1)
        {
          if (width > 214748364)
          {
           
          }
          else
          {
            if (width == 214748364)
            {
              if ((((const int) (* f)) - 48) > 7)
              {
               
              }

            }
            else
            {
              width *= 10;
              width += (int) (((const int) (* f)) - 48);
            }

          }

          f++;
          if (! ((((unsigned int) (* f)) - 48U) <= 9U))
          {
            goto while_break___6;
          }

        }

        while_break___6:
        ;

      }

      if (((const int) (* f)) == 69)
      {
       
      }

      if (((const int) (* f)) == 79)
      {
       
      }

      goto switch_default___0;
      case_69:
      ;

      tmp___1 = f;
      switch_default___0:
      modifier = 0;

      goto switch_break___0;
      switch_break___0:
      format_char = (int) (* f);

      if (format_char == 37)
      {
       
      }

      if (format_char == 97)
      {
        goto case_97;
      }

      if (format_char == 65)
      {
       
      }

      if (format_char == 98)
      {
        goto case_98;
      }

      if (format_char == 104)
      {
       
      }

      if (format_char == 66)
      {
       
      }

      if (format_char == 99)
      {
        goto case_99;
      }

      if (format_char == 67)
      {
       
      }

      if (format_char == 120)
      {
       
      }

      if (format_char == 68)
      {
       
      }

      if (format_char == 100)
      {
        goto case_100;
      }

      if (format_char == 101)
      {
        goto case_101;
      }

      if (format_char == 70)
      {
       
      }

      if (format_char == 72)
      {
        goto case_72;
      }

      if (format_char == 73)
      {
       
      }

      if (format_char == 107)
      {
       
      }

      if (format_char == 108)
      {
       
      }

      if (format_char == 106)
      {
       
      }

      if (format_char == 77)
      {
        goto case_77;
      }

      if (format_char == 109)
      {
        goto case_109;
      }

      if (format_char == 78)
      {
        goto case_78;
      }

      if (format_char == 110)
      {
       
      }

      if (format_char == 80)
      {
       
      }

      if (format_char == 112)
      {
       
      }

      if (format_char == 82)
      {
       
      }

      if (format_char == 114)
      {
       
      }

      if (format_char == 83)
      {
        goto case_83;
      }

      if (format_char == 115)
      {
        goto case_115;
      }

      if (format_char == 88)
      {
       
      }

      if (format_char == 84)
      {
        goto case_84;
      }

      if (format_char == 116)
      {
       
      }

      if (format_char == 117)
      {
       
      }

      if (format_char == 85)
      {
        goto case_85;
      }

      if (format_char == 86)
      {
        goto case_86;
      }

      if (format_char == 103)
      {
       
      }

      if (format_char == 71)
      {
       
      }

      if (format_char == 87)
      {
        goto case_87;
      }

      if (format_char == 119)
      {
       
      }

      if (format_char == 89)
      {
        goto case_89;
      }

      if (format_char == 121)
      {
       
      }

      if (format_char == 90)
      {
        goto case_90;
      }

      if (format_char == 58)
      {
        goto case_58;
      }

      if (format_char == 122)
      {
        goto case_122;
      }

      if (format_char == 0)
      {
       
      }

      case_37:
      ;

      if (modifier != 0)
      {
       
      }

      while (1)
      {
        if (width < 0)
        {
         
        }

        if (_n___0 < _w___0)
        {
         
        }

        if (_incr___0 >= (maxsize - i))
        {
         
        }

        if (p)
        {
          if (digits == 0)
          {
            if (_n___0 < _w___0)
            {
              if (pad == 48)
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___1 < _delta___0))
                    {
                     
                    }

                  }

                  while_break___9:
                  ;

                }

                while_break___8:
                ;

              }
              else
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___2 < _delta___0))
                    {
                     
                    }

                  }

                  while_break___11:
                  ;

                }

                while_break___10:
                ;

              }

            }

          }

        }

      }

      while_break___7:
      ;

      case_97:
      if (modifier != 0)
      {
       
      }


      if (change_case)
      {
       
      }

      goto underlying_strftime;
      case_65:
      ;

      if (modifier != 0)
      {
       
      }

      if (change_case)
      {
       
      }

      case_98:
      if (change_case)
      {
       
      }


      if (modifier != 0)
      {
       
      }

      goto underlying_strftime;
      case_66:
      ;

      if (modifier != 0)
      {
       
      }

      if (change_case)
      {
       
      }

      case_99:
      if (modifier == 79)
      {
       
      }


      goto underlying_strftime;
      subformat:
      tmp___4 = strftime_case____0(to_uppcase, (FILE *) ((void *) 0), subfmt, tp, ut, ns);

      len = tmp___4;
      while (1)
      {
        _n___1 = len;
        if (width < 0)
        {
          tmp___5 = 0;
        }

        _w___1 = (size_t) tmp___5;
        if (_n___1 < _w___1)
        {
         
        }
        else
        {
          tmp___6 = _n___1;
        }

        _incr___1 = tmp___6;
        if (_incr___1 >= (maxsize - i))
        {
         
        }

        if (p)
        {
          if (digits == 0)
          {
            if (_n___1 < _w___1)
            {
              if (pad == 48)
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___3 < _delta___1))
                    {
                     
                    }

                  }

                  while_break___14:
                  ;

                }

                while_break___13:
                ;

              }
              else
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___4 < _delta___1))
                    {
                     
                    }

                  }

                  while_break___16:
                  ;

                }

                while_break___15:
                ;

              }

            }

          }

          strftime_case____0(to_uppcase, p, subfmt, tp, ut, ns);
        }

        i += _incr___1;
        goto while_break___12;
      }

      while_break___12:
      ;

      goto switch_break___1;
      underlying_strftime:
      u = ufmt;

      tmp___7 = u;
      u++;
      * tmp___7 = (char) ' ';
      tmp___8 = u;
      u++;
      * tmp___8 = (char) '%';
      if (modifier != 0)
      {
       
      }

      tmp___10 = u;
      u++;
      * tmp___10 = (char) format_char;
      * u = (char) '\000';
      len___0 = strftime(ubuf, sizeof(ubuf), (const char *) ufmt, tp);
      if (len___0 != 0UL)
      {
        while (1)
        {
          _n___2 = len___0 - 1UL;
          if (width < 0)
          {
            tmp___11 = 0;
          }

          _w___2 = (size_t) tmp___11;
          if (_n___2 < _w___2)
          {
           
          }
          else
          {
            tmp___12 = _n___2;
          }

          _incr___2 = tmp___12;
          if (_incr___2 >= (maxsize - i))
          {
           
          }

          if (p)
          {
            if (digits == 0)
            {
              if (_n___2 < _w___2)
              {
                if (pad == 48)
                {
                  while (1)
                  {
                    while (1)
                    {
                      if (! (_i___5 < _delta___2))
                      {
                       
                      }

                    }

                    while_break___19:
                    ;

                  }

                  while_break___18:
                  ;

                }
                else
                {
                  while (1)
                  {
                    while (1)
                    {
                      if (! (_i___6 < _delta___2))
                      {
                       
                      }

                    }

                    while_break___21:
                    ;

                  }

                  while_break___20:
                  ;

                }

              }

            }

            while (1)
            {
              if (to_lowcase)
              {
               
              }
              else
              {
                if (to_uppcase)
                {
                  fwrite_uppcase(p, (const char *) (ubuf + 1), _n___2);
                }
                else
                {
                  fwrite((const void *) (ubuf + 1), _n___2, (size_t) 1, p);
                }

              }

              goto while_break___22;
            }

            while_break___22:
            ;

          }

          i += _incr___2;
          goto while_break___17;
        }

        while_break___17:
        ;

      }

      goto switch_break___1;
      case_67:
      ;

      if (modifier == 79)
      {
       
      }

      if (modifier == 69)
      {
       
      }

      if ((tp->tm_year % 100) < 0)
      {
       
      }

      case_120:
      ;

      if (modifier == 79)
      {
       
      }

      case_68:
      ;

      if (modifier != 0)
      {
       
      }

      case_100:
      if (modifier == 69)
      {
       
      }


      digits = 2;
      number_value = (int) tp->tm_mday;
      goto do_number;
      case_101:
      if (modifier == 69)
      {
       
      }


      digits = 2;
      number_value = (int) tp->tm_mday;
      goto do_number_spacepad;
      do_tz_offset:
      always_output_a_sign = (_Bool) 1;

      goto do_number_body;
      do_number_spacepad:
      if (pad != 48)
      {
        if (pad != 45)
        {
          pad = '_';
        }

      }


      do_number:
      ;

      negative_number = (_Bool) (number_value < 0);
      u_number_value = (unsigned int) number_value;
      do_signed_number:
      always_output_a_sign = (_Bool) 0;

      tz_colon_mask = 0;
      do_number_body:
      if (modifier == 79)
      {
        if (! negative_number)
        {
         
        }

      }


      bufp = buf___1 + ((sizeof(buf___1)) / (sizeof(buf___1[0])));
      if (negative_number)
      {
       
      }

      while (1)
      {
        if (tz_colon_mask & 1)
        {
          bufp--;
          * bufp = (char) ':';
        }

        tz_colon_mask >>= 1;
        bufp--;
        * bufp = (char) ((u_number_value % 10U) + 48U);
        u_number_value /= 10U;
        if (! (u_number_value != 0U))
        {
          if (! (tz_colon_mask != 0))
          {
            goto while_break___23;
          }

        }

      }

      while_break___23:
      ;

      do_number_sign_and_padding:
      if (digits < width)
      {
        digits = width;
      }


      if (negative_number)
      {
        sign_char = (char) '-';
      }
      else
      {
        if (always_output_a_sign)
        {
          tmp___14 = '+';
        }
        else
        {
          tmp___14 = 0;
        }

        sign_char = (char) tmp___14;
      }

      if (pad == 45)
      {
        if (sign_char)
        {
          while (1)
          {
            if (width < 0)
            {
             
            }

            if (_n___3 < _w___3)
            {
             
            }

            if (_incr___3 >= (maxsize - i))
            {
             
            }

            if (p)
            {
              if (digits == 0)
              {
                if (_n___3 < _w___3)
                {
                  if (pad == 48)
                  {
                    while (1)
                    {
                      while (1)
                      {
                        if (! (_i___7 < _delta___3))
                        {
                         
                        }

                      }

                      while_break___26:
                      ;

                    }

                    while_break___25:
                    ;

                  }
                  else
                  {
                    while (1)
                    {
                      while (1)
                      {
                        if (! (_i___8 < _delta___3))
                        {
                         
                        }

                      }

                      while_break___28:
                      ;

                    }

                    while_break___27:
                    ;

                  }

                }

              }

            }

          }

          while_break___24:
          ;

        }

      }
      else
      {
        padding = (int) ((((long) digits) - ((buf___1 + ((sizeof(buf___1)) / (sizeof(buf___1[0])))) - bufp)) - ((long) (! (! sign_char))));
        if (padding > 0)
        {
          if (pad == 95)
          {
            if (((size_t) padding) >= (maxsize - i))
            {
             
            }

            if (p)
            {
              while (1)
              {
                _i___9 = (size_t) 0;
                while (1)
                {
                  if (! (_i___9 < ((size_t) padding)))
                  {
                    goto while_break___30;
                  }

                  fputc(' ', p);
                  _i___9++;
                }

                while_break___30:
                ;

                goto while_break___29;
              }

              while_break___29:
              ;

            }

            i += (size_t) padding;
            if (width > padding)
            {
             
            }
            else
            {
              width = 0;
            }

            if (sign_char)
            {
              while (1)
              {
                if (width < 0)
                {
                 
                }

                if (_n___4 < _w___4)
                {
                 
                }

                if (_incr___4 >= (maxsize - i))
                {
                 
                }

                if (p)
                {
                  if (digits == 0)
                  {
                    if (_n___4 < _w___4)
                    {
                      if (pad == 48)
                      {
                        while (1)
                        {
                          while (1)
                          {
                            if (! (_i___10 < _delta___4))
                            {
                             
                            }

                          }

                          while_break___33:
                          ;

                        }

                        while_break___32:
                        ;

                      }
                      else
                      {
                        while (1)
                        {
                          while (1)
                          {
                            if (! (_i___11 < _delta___4))
                            {
                             
                            }

                          }

                          while_break___35:
                          ;

                        }

                        while_break___34:
                        ;

                      }

                    }

                  }

                }

              }

              while_break___31:
              ;

            }

          }
          else
          {
            if (((size_t) digits) >= (maxsize - i))
            {
             
            }

            if (sign_char)
            {
              while (1)
              {
                _n___5 = (size_t) 1;
                if (width < 0)
                {
                  tmp___19 = 0;
                }
                else
                {
                  tmp___19 = width;
                }

                _w___5 = (size_t) tmp___19;
                if (_n___5 < _w___5)
                {
                  tmp___20 = _w___5;
                }
                else
                {
                  tmp___20 = _n___5;
                }

                _incr___5 = tmp___20;
                if (_incr___5 >= (maxsize - i))
                {
                 
                }

                if (p)
                {
                  if (digits == 0)
                  {
                    if (_n___5 < _w___5)
                    {
                      if (pad == 48)
                      {
                        while (1)
                        {
                          while (1)
                          {
                            if (! (_i___12 < _delta___5))
                            {
                             
                            }

                          }

                          while_break___38:
                          ;

                        }

                        while_break___37:
                        ;

                      }
                      else
                      {
                        while (1)
                        {
                          while (1)
                          {
                            if (! (_i___13 < _delta___5))
                            {
                             
                            }

                          }

                          while_break___40:
                          ;

                        }

                        while_break___39:
                        ;

                      }

                    }

                  }

                  fputc((int) sign_char, p);
                }

                i += _incr___5;
                goto while_break___36;
              }

              while_break___36:
              ;

            }

            if (p)
            {
              while (1)
              {
                _i___14 = (size_t) 0;
                while (1)
                {
                  if (! (_i___14 < ((size_t) padding)))
                  {
                    goto while_break___42;
                  }

                  fputc('0', p);
                  _i___14++;
                }

                while_break___42:
                ;

                goto while_break___41;
              }

              while_break___41:
              ;

            }

            i += (size_t) padding;
            width = 0;
          }

        }
        else
        {
          if (sign_char)
          {
            while (1)
            {
              if (width < 0)
              {
               
              }

              if (_n___6 < _w___6)
              {
               
              }

              if (_incr___6 >= (maxsize - i))
              {
               
              }

              if (p)
              {
                if (digits == 0)
                {
                  if (_n___6 < _w___6)
                  {
                    if (pad == 48)
                    {
                      while (1)
                      {
                        while (1)
                        {
                          if (! (_i___15 < _delta___6))
                          {
                           
                          }

                        }

                        while_break___45:
                        ;

                      }

                      while_break___44:
                      ;

                    }
                    else
                    {
                      while (1)
                      {
                        while (1)
                        {
                          if (! (_i___16 < _delta___6))
                          {
                           
                          }

                        }

                        while_break___47:
                        ;

                      }

                      while_break___46:
                      ;

                    }

                  }

                }

              }

            }

            while_break___43:
            ;

          }

        }

      }

      while (1)
      {
        _n___7 = (size_t) ((buf___1 + ((sizeof(buf___1)) / (sizeof(buf___1[0])))) - bufp);
        if (width < 0)
        {
          tmp___23 = 0;
        }
        else
        {
          tmp___23 = width;
        }

        _w___7 = (size_t) tmp___23;
        if (_n___7 < _w___7)
        {
         
        }
        else
        {
          tmp___24 = _n___7;
        }

        _incr___7 = tmp___24;
        if (_incr___7 >= (maxsize - i))
        {
         
        }

        if (p)
        {
          if (digits == 0)
          {
            if (_n___7 < _w___7)
            {
              if (pad == 48)
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___17 < _delta___7))
                    {
                     
                    }

                  }

                  while_break___50:
                  ;

                }

                while_break___49:
                ;

              }
              else
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___18 < _delta___7))
                    {
                     
                    }

                  }

                  while_break___52:
                  ;

                }

                while_break___51:
                ;

              }

            }

          }

          while (1)
          {
            if (to_lowcase)
            {
             
            }
            else
            {
              if (to_uppcase)
              {
               
              }
              else
              {
                fwrite((const void *) bufp, _n___7, (size_t) 1, p);
              }

            }

            goto while_break___53;
          }

          while_break___53:
          ;

        }

        i += _incr___7;
        goto while_break___48;
      }

      while_break___48:
      ;

      goto switch_break___1;
      case_70:
      ;

      if (modifier != 0)
      {
       
      }

      case_72:
      if (modifier == 69)
      {
       
      }


      digits = 2;
      number_value = (int) tp->tm_hour;
      goto do_number;
      case_73:
      ;

      if (modifier == 69)
      {
       
      }

      case_107:
      ;

      if (modifier == 69)
      {
       
      }

      case_108:
      ;

      if (modifier == 69)
      {
       
      }

      case_106:
      ;

      if (modifier == 69)
      {
       
      }

      case_77:
      if (modifier == 69)
      {
       
      }


      digits = 2;
      number_value = (int) tp->tm_min;
      goto do_number;
      case_109:
      if (modifier == 69)
      {
       
      }


      digits = 2;
      negative_number = (_Bool) (tp->tm_mon < (- 1));
      u_number_value = ((unsigned int) tp->tm_mon) + 1U;
      goto do_signed_number;
      case_78:
      if (modifier == 69)
      {
       
      }


      number_value = ns;
      if (width == (- 1))
      {
        width = 9;
      }
      else
      {
        while (1)
        {
          if (! (j < 9))
          {
           
          }

        }

        while_break___54:
        ;

      }

      digits = width;
      number_value = number_value;
      goto do_number;
      case_110:
      ;

      while (1)
      {
        if (width < 0)
        {
         
        }

        if (_n___8 < _w___8)
        {
         
        }

        if (_incr___8 >= (maxsize - i))
        {
         
        }

        if (p)
        {
          if (digits == 0)
          {
            if (_n___8 < _w___8)
            {
              if (pad == 48)
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___19 < _delta___8))
                    {
                     
                    }

                  }

                  while_break___57:
                  ;

                }

                while_break___56:
                ;

              }
              else
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___20 < _delta___8))
                    {
                     
                    }

                  }

                  while_break___59:
                  ;

                }

                while_break___58:
                ;

              }

            }

          }

        }

      }

      while_break___55:
      ;

      case_80:
      ;

      to_lowcase = (_Bool) 1;
      case_112:
      ;

      if (change_case)
      {
       
      }

      case_82:
      ;

      subfmt = "%H:%M";
      case_114:
      ;

      goto underlying_strftime;
      case_83:
      if (modifier == 69)
      {
       
      }


      digits = 2;
      number_value = (int) tp->tm_sec;
      goto do_number;
      case_115:
      ltm = (struct tm) (* tp);

      t = mktime(& ltm);
      bufp = buf___1 + ((sizeof(buf___1)) / (sizeof(buf___1[0])));
      negative_number = (_Bool) (t < 0L);
      while (1)
      {
        d = (int) (t % 10L);
        t /= 10L;
        bufp--;
        if (negative_number)
        {
          tmp___27 = - d;
        }

        * bufp = (char) (tmp___27 + 48);
        if (! (t != 0L))
        {
          goto while_break___60;
        }

      }

      while_break___60:
      digits = 1;

      always_output_a_sign = (_Bool) 0;
      goto do_number_sign_and_padding;
      case_88:
      ;

      if (modifier == 79)
      {
       
      }

      case_84:
      subfmt = "%H:%M:%S";

      goto subformat;
      case_116:
      ;

      while (1)
      {
        if (width < 0)
        {
         
        }

        if (_n___9 < _w___9)
        {
         
        }

        if (_incr___9 >= (maxsize - i))
        {
         
        }

        if (p)
        {
          if (digits == 0)
          {
            if (_n___9 < _w___9)
            {
              if (pad == 48)
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___21 < _delta___9))
                    {
                     
                    }

                  }

                  while_break___63:
                  ;

                }

                while_break___62:
                ;

              }
              else
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___22 < _delta___9))
                    {
                     
                    }

                  }

                  while_break___65:
                  ;

                }

                while_break___64:
                ;

              }

            }

          }

        }

      }

      while_break___61:
      ;

      case_117:
      ;

      digits = 1;
      case_85:
      if (modifier == 69)
      {
       
      }


      digits = 2;
      number_value = (int) (((tp->tm_yday - tp->tm_wday) + 7) / 7);
      goto do_number;
      case_86:
      if (modifier == 69)
      {
       
      }


      if (tp->tm_year < 0)
      {
       
      }
      else
      {
        tmp___30 = - 100;
      }

      year___1 = (int) (tp->tm_year + ((const int) tmp___30));
      year_adjust = 0;
      tmp___31 = iso_week_days((int) tp->tm_yday, (int) tp->tm_wday);
      days = tmp___31;
      if (days < 0)
      {
        if (((year___1 - 1) % 4) == 0)
        {
         
        }

      }
      else
      {
        if ((year___1 % 4) == 0)
        {
          if ((year___1 % 100) != 0)
          {
            tmp___33 = 1;
          }
          else
          {
            if ((year___1 % 400) == 0)
            {
             
            }

          }

        }

        tmp___34 = iso_week_days((int) (tp->tm_yday - ((const int) (365 + tmp___33))), (int) tp->tm_wday);
        d___0 = tmp___34;
        if (0 <= d___0)
        {
         
        }

      }

      if (((const int) (* f)) == 103)
      {
       
      }

      if (((const int) (* f)) == 71)
      {
       
      }

      goto switch_default___1;
      case_103___0:
      ;

      yy = (int) (((tp->tm_year % 100) + ((const int) year_adjust)) % 100);
      if (0 <= yy)
      {
       
      }
      else
      {
        if (tp->tm_year < ((const int) ((- 1900) - year_adjust)))
        {
         
        }

      }

      case_71___0:
      ;

      digits = 4;
      switch_default___1:
      digits = 2;

      number_value = (days / 7) + 1;
      goto do_number;
      case_87:
      if (modifier == 69)
      {
       
      }


      digits = 2;
      number_value = (int) (((tp->tm_yday - (((tp->tm_wday - 1) + 7) % 7)) + 7) / 7);
      goto do_number;
      case_119:
      ;

      if (modifier == 69)
      {
       
      }

      case_89:
      if (modifier == 69)
      {
       
      }


      if (modifier == 79)
      {
       
      }
      else
      {
        digits = 4;
      }

      negative_number = (_Bool) (tp->tm_year < (- 1900));
      u_number_value = ((unsigned int) tp->tm_year) + 1900U;
      goto do_signed_number;
      case_121:
      ;

      if (modifier == 69)
      {
       
      }

      if (yy___0 < 0)
      {
       
      }

      case_90:
      if (change_case)
      {
       
      }


      if (! zone)
      {
       
      }

      while (1)
      {
        tmp___36 = strlen(zone);
        _n___10 = tmp___36;
        if (width < 0)
        {
          tmp___37 = 0;
        }

        _w___10 = (size_t) tmp___37;
        if (_n___10 < _w___10)
        {
         
        }
        else
        {
          tmp___38 = _n___10;
        }

        _incr___10 = tmp___38;
        if (_incr___10 >= (maxsize - i))
        {
         
        }

        if (p)
        {
          if (digits == 0)
          {
            if (_n___10 < _w___10)
            {
              if (pad == 48)
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___23 < _delta___10))
                    {
                     
                    }

                  }

                  while_break___68:
                  ;

                }

                while_break___67:
                ;

              }
              else
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___24 < _delta___10))
                    {
                     
                    }

                  }

                  while_break___70:
                  ;

                }

                while_break___69:
                ;

              }

            }

          }

          while (1)
          {
            if (to_lowcase)
            {
             
            }
            else
            {
              if (to_uppcase)
              {
               
              }
              else
              {
                fwrite((const void *) zone, _n___10, (size_t) 1, p);
              }

            }

            goto while_break___71;
          }

          while_break___71:
          ;

        }

        i += _incr___10;
        goto while_break___66;
      }

      while_break___66:
      ;

      goto switch_break___1;
      case_58:
      colons = (size_t) 1;

      while (1)
      {
        if (! (((const int) (* (f + colons))) == 58))
        {
          goto while_break___72;
        }

        __Cont___0:
        ;

        colons++;
      }

      while_break___72:
      ;

      if (((const int) (* (f + colons))) != 122)
      {
       
      }

      f += colons;
      goto do_z_conversion;
      case_122:
      colons = (size_t) 0;

      do_z_conversion:
      if (tp->tm_isdst < 0)
      {
       
      }


      diff = (int) tp->tm_gmtoff;
      hour_diff = (diff / 60) / 60;
      min_diff = (diff / 60) % 60;
      sec_diff = diff % 60;
      if (colons == 0UL)
      {
        goto case_0;
      }

      if (colons == 1UL)
      {
        goto tz_hh_mm;
      }

      if (colons == 2UL)
      {
       
      }

      if (colons == 3UL)
      {
       
      }

      case_0:
      digits = 5;

      negative_number = (_Bool) (diff < 0);
      tz_colon_mask = 0;
      u_number_value = (unsigned int) ((hour_diff * 100) + min_diff);
      goto do_tz_offset;
      tz_hh_mm:
      digits = 6;

      negative_number = (_Bool) (diff < 0);
      tz_colon_mask = 4;
      u_number_value = (unsigned int) ((hour_diff * 100) + min_diff);
      goto do_tz_offset;
      tz_hh_mm_ss:
      ;

      digits = 9;
      case_3:
      ;

      if (sec_diff != 0)
      {
       
      }

      if (min_diff != 0)
      {
       
      }

      switch_default___2:
      ;

      goto bad_format;
      case_0___0:
      ;

      f--;
      bad_format:
      ;

      flen = 1;
      while (1)
      {
        if (! (((const int) (* (f + (1 - flen)))) != 37))
        {
         
        }

        __Cont___1:
        ;

        flen++;
      }

      while_break___73:
      ;

      while (1)
      {
        if (width < 0)
        {
         
        }

        if (_n___11 < _w___11)
        {
         
        }

        if (_incr___11 >= (maxsize - i))
        {
         
        }

        if (p)
        {
          if (digits == 0)
          {
            if (_n___11 < _w___11)
            {
              if (pad == 48)
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___25 < _delta___11))
                    {
                     
                    }

                  }

                  while_break___76:
                  ;

                }

                while_break___75:
                ;

              }
              else
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___26 < _delta___11))
                    {
                     
                    }

                  }

                  while_break___78:
                  ;

                }

                while_break___77:
                ;

              }

            }

          }

          while (1)
          {
            if (to_lowcase)
            {
             
            }
            else
            {
              if (to_uppcase)
              {
               
              }

            }

          }

          while_break___79:
          ;

        }

      }

      while_break___74:
      ;

      switch_break___1:
      ;

      __Cont:
      f++;

    }

    while_break:
    ;

    return i;
  }
}

size_t fprintftime(FILE *s, const char *format, const struct tm *tp, int ut, int ns)
{
  size_t tmp;
  {
    tmp = strftime_case____0((_Bool) 0, s, format, tp, ut, ns);
    return tmp;
  }
}

int rpl_fflush(FILE *stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int __freading(FILE *__fp);
static void clear_ungetc_buffer_preserving_position(FILE *fp)
{
 
}

int rpl_fflush(FILE *stream)
{
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    if (((unsigned long) stream) == ((unsigned long) ((void *) 0)))
    {
     
    }
    else
    {
      tmp___0 = __freading(stream);
      if (! (tmp___0 != 0))
      {
        tmp = fflush(stream);
        return tmp;
      }

    }

  }
}

#pragma GCC diagnostic pop
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
    saved_errno = 0;
    result = 0;
    fd = fileno(fp);
    if (fd < 0)
    {
     
    }

    tmp___1 = __freading(fp);
    if (tmp___1 != 0)
    {
      if (tmp___3 != (- 1L))
      {
        _L:
        ;

        tmp___4 = rpl_fflush(fp);
        if (tmp___4)
        {
         
        }

      }

    }
    else
    {
      goto _L;
    }

    result = fclose(fp);
    if (saved_errno != 0)
    {
     
    }

    return result;
  }
}

int close_stream(FILE *stream);
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
  {
    tmp___3 = close_stream(stdout);
    if (tmp___3 != 0)
    {
      if (ignore_EPIPE)
      {
       
      }
      else
      {
        _L:
        ;

        tmp = (const char *) gettext("write error");
        if (file_name)
        {
         
        }

      }

    }

    tmp___5 = close_stream(stderr);
    if (tmp___5 != 0)
    {
     
    }

    return;
  }
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
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
    tmp = __fpending(stream);
    some_pending = (_Bool) (tmp != 0UL);
    tmp___0 = ferror_unlocked(stream);
    prev_fail = (_Bool) (tmp___0 != 0);
    tmp___1 = rpl_fclose(stream);
    fclose_fail = (_Bool) (tmp___1 != 0);
    if (prev_fail)
    {
     
    }
    else
    {
      if (fclose_fail)
      {
        if (some_pending)
        {
         
        }
        else
        {
          if ((* tmp___3) != 9)
          {
            _L___0:
            ;

            if (! fclose_fail)
            {
             
            }

          }

        }

      }

    }

    return 0;
  }
}

#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
const char *Version = "8.21";
extern int fputc_unlocked(int __c, FILE *__stream);
extern char *optarg;
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
__inline static void emit_mandatory_arg_note(void)
{
 
}

__inline static void emit_ancillary_info(void)
{
 
}

__inline static void emit_try_help(void)
{
 
}

__inline static char *timetostr(time_t t, char *buf___1)
{
 
}

__inline static char *bad_cast(const char *s)
{
  return (char *) s;
}

static _Bool show_date(const char *format, struct timespec when);
static const char *const time_spec_string[6] = {"hours", "minutes", "date", "seconds", "ns", (const char *) ((void *) 0)};
static const enum Time_spec time_spec[5] = {(const enum Time_spec) 3, (const enum Time_spec) 4, (const enum Time_spec) 0, (const enum Time_spec) 1, (const enum Time_spec) 2};
static const char rfc_2822_format[25] = {(const char) '%', (const char) 'a', (const char) ',', (const char) ' ', (const char) '%', (const char) 'd', (const char) ' ', (const char) '%', (const char) 'b', (const char) ' ', (const char) '%', (const char) 'Y', (const char) ' ', (const char) '%', (const char) 'H', (const char) ':', (const char) '%', (const char) 'M', (const char) ':', (const char) '%', (const char) 'S', (const char) ' ', (const char) '%', (const char) 'z', (const char) '\000'};
static const char short_options[14] = {(const char) 'd', (const char) ':', (const char) 'f', (const char) ':', (const char) 'I', (const char) ':', (const char) ':', (const char) 'r', (const char) ':', (const char) 'R', (const char) 's', (const char) ':', (const char) 'u', (const char) '\000'};
static const struct option long_options___1[14] = {{"date", 1, (int *) ((void *) 0), 'd'}, {"file", 1, (int *) ((void *) 0), 'f'}, {"iso-8601", 2, (int *) ((void *) 0), 'I'}, {"reference", 1, (int *) ((void *) 0), 'r'}, {"rfc-822", 0, (int *) ((void *) 0), 'R'}, {"rfc-2822", 0, (int *) ((void *) 0), 'R'}, {"rfc-3339", 1, (int *) ((void *) 0), 128}, {"set", 1, (int *) ((void *) 0), 's'}, {"uct", 0, (int *) ((void *) 0), 'u'}, {"utc", 0, (int *) ((void *) 0), 'u'}, {"universal", 0, (int *) ((void *) 0), 'u'}, {"help", 0, (int *) ((void *) 0), - 130}, {"version", 0, (int *) ((void *) 0), - 131}, {(const char *) ((void *) 0), 0, (int *) ((void *) 0), 0}};
void usage(int status)
{
 
}

static _Bool batch_convert(const char *input_filename, const char *format)
{
 
}

static const char rfc_3339_format[3][32] = {{(const char) '%', (const char) 'Y', (const char) '-', (const char) '%', (const char) 'm', (const char) '-', (const char) '%', (const char) 'd', (const char) '\000'}, {(const char) '%', (const char) 'Y', (const char) '-', (const char) '%', (const char) 'm', (const char) '-', (const char) '%', (const char) 'd', (const char) ' ', (const char) '%', (const char) 'H', (const char) ':', (const char) '%', (const char) 'M', (const char) ':', (const char) '%', (const char) 'S', (const char) '%', (const char) ':', (const char) 'z', (const char) '\000'}, {(const char) '%', (const char) 'Y', (const char) '-', (const char) '%', (const char) 'm', (const char) '-', (const char) '%', (const char) 'd', (const char) ' ', (const char) '%', (const char) 'H', (const char) ':', (const char) '%', (const char) 'M', (const char) ':', (const char) '%', (const char) 'S', (const char) '.', (const char) '%', (const char) 'N', (const char) '%', (const char) ':', (const char) 'z', (const char) '\000'}};
int main(int argc, char **argv)
{
  int optc;
  const char *datestr;
  const char *set_datestr;
  struct timespec when;
  _Bool set_date;
  const char *format;
  char *batch_file;
  char *reference;
  struct stat refstats;
  _Bool ok;
  int option_specified_date;
  const char *new_format;
  enum Time_spec i;
  ptrdiff_t tmp;
  enum Time_spec i___0;
  ptrdiff_t tmp___0;
  unsigned int tmp___1;
  char *tmp___2;
  int tmp___3;
  char *tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  char *tmp___8;
  char *tmp___9;
  const char *tmp___10;
  char *tmp___11;
  char *tmp___12;
  int tmp___13;
  const char *tmp___14;
  char *tmp___15;
  _Bool valid_date;
  int *tmp___16;
  int tmp___17;
  const char *tmp___18;
  char *tmp___19;
  char *tmp___20;
  int *tmp___21;
  int tmp___22;
  _Bool tmp___23;
  int tmp___24;
  {
    datestr = (const char *) ((void *) 0);
    set_datestr = (const char *) ((void *) 0);
    set_date = (_Bool) 0;
    format = (const char *) ((void *) 0);
    batch_file = (char *) ((void *) 0);
    reference = (char *) ((void *) 0);
    set_program_name((const char *) (* (argv + 0)));
    setlocale(6, "");
    bindtextdomain("coreutils", "/usr/local/share/locale");
    textdomain("coreutils");
    atexit(& close_stdout);
    while (1)
    {
      optc = getopt_long(argc, (char *const *) argv, short_options, long_options___1, (int *) ((void *) 0));
      if (! (optc != (- 1)))
      {
        goto while_break;
      }

      new_format = (const char *) ((void *) 0);
      if (optc == 100)
      {
        goto case_100;
      }

      if (optc == 102)
      {
       
      }

      if (optc == 128)
      {
        goto case_128;
      }

      if (optc == 73)
      {
       
      }

      if (optc == 114)
      {
       
      }

      if (optc == 82)
      {
        goto case_82;
      }

      if (optc == 115)
      {
       
      }

      if (optc == 117)
      {
        goto case_117;
      }

      if (optc == (- 130))
      {
       
      }

      if (optc == (- 131))
      {
       
      }

      case_100:
      datestr = (const char *) optarg;

      goto switch_break;
      case_102:
      ;

      batch_file = optarg;
      case_128:
      tmp = __xargmatch_internal("--rfc-3339", (const char *) optarg, time_spec_string + 2, (const char *) (time_spec + 2), sizeof(* (time_spec + 2)), argmatch_die);

      i = (enum Time_spec) (* ((time_spec + 2) + tmp));
      new_format = rfc_3339_format[i];
      goto switch_break;
      case_73:
      ;

      if (optarg)
      {
       
      }

      case_114:
      ;

      reference = optarg;
      case_82:
      new_format = rfc_2822_format;

      goto switch_break;
      case_115:
      ;

      set_datestr = (const char *) optarg;
      case_117:
      tmp___2 = bad_cast("TZ=UTC0");

      tmp___3 = putenv(tmp___2);
      if (tmp___3 != 0)
      {
       
      }

      goto switch_break;
      case_neg_130:
      ;

      usage(0);
      case_neg_131:
      ;

      version_etc(stdout, "date", "GNU coreutils", Version, "David MacKenzie", (char *) ((void *) 0));
      goto switch_break;
      switch_default:
      ;

      usage(1);
      switch_break:
      ;

      if (new_format)
      {
        if (format)
        {
         
        }

        format = new_format;
      }

    }

    while_break:
    ;

    if (datestr)
    {
      tmp___5 = 1;
    }
    else
    {
      tmp___5 = 0;
    }

    if (batch_file)
    {
     
    }
    else
    {
      tmp___6 = 0;
    }

    if (reference)
    {
     
    }
    else
    {
      tmp___7 = 0;
    }

    option_specified_date = (tmp___5 + tmp___6) + tmp___7;
    if (option_specified_date > 1)
    {
     
    }

    if (set_date)
    {
      if (option_specified_date)
      {
       
      }

    }

    if (optind < argc)
    {
      if ((optind + 1) < argc)
      {
       
      }

      if (((int) (* ((* (argv + optind)) + 0))) == 43)
      {
        if (format)
        {
         
        }

        tmp___13 = optind;
        optind++;
        format = (const char *) ((* (argv + tmp___13)) + 1);
      }
      else
      {
        if (set_date)
        {
         
        }
        else
        {
          if (option_specified_date)
          {
           
          }

        }

      }

    }

    if (! format)
    {
      format = (const char *) nl_langinfo(131180);
      if (! (* format))
      {
       
      }

    }

    if (((unsigned long) batch_file) != ((unsigned long) ((void *) 0)))
    {
     
    }
    else
    {
      valid_date = (_Bool) 1;
      ok = (_Bool) 1;
      if (! option_specified_date)
      {
        if (! set_date)
        {
          if (optind < argc)
          {
           
          }
          else
          {
            gettime(& when);
          }

        }

      }
      else
      {
        _L:
        if (((unsigned long) reference) != ((unsigned long) ((void *) 0)))
        {
          if (tmp___17 != 0)
          {
           
          }

        }
        else
        {
          if (set_datestr)
          {
           
          }

          valid_date = parse_datetime(& when, datestr, (const struct timespec *) ((void *) 0));
        }


      }

      if (! valid_date)
      {
        tmp___18 = quote(datestr);
        tmp___19 = gettext("invalid date %s");
        error(1, 0, (const char *) tmp___19, tmp___18);
      }

      if (set_date)
      {
        if (tmp___22 != 0)
        {
         
        }

      }

      tmp___23 = show_date(format, when);
      ok = (_Bool) (((int) ok) & ((int) tmp___23));
    }

    if (ok)
    {
      tmp___24 = 0;
    }

    exit(tmp___24);
  }
}

static _Bool show_date(const char *format, struct timespec when)
{
  struct tm *tm;
  char buf___1[(((((((sizeof(intmax_t)) * 8UL) - 1UL) * 146UL) + 484UL) / 485UL) + 1UL) + 1UL];
  char *tmp;
  char *tmp___0;
  {
    tm = localtime((const time_t *) (& when.tv_sec));
    if (! tm)
    {
     
    }

    if (((unsigned long) format) == ((unsigned long) rfc_2822_format))
    {
      setlocale(2, "C");
    }

    fprintftime(stdout, format, (const struct tm *) tm, 0, (int) when.tv_nsec);
    fputc_unlocked('\n', stdout);
    if (((unsigned long) format) == ((unsigned long) rfc_2822_format))
    {
      setlocale(2, "");
    }

    return (_Bool) 1;
  }
}

