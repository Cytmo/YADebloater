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



int c_strcasecmp(const char *s1, const char *s2)
{


  unsigned char c1;
  unsigned char c2;
  {


























    ;

    return ((int) c1) - ((int) c2);
  }
}





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
        exit(-1);
      }
      else
      {
        if (c == 10)
        {
          exit(-1);
        }
        else
        {
          if (c == 11)
          {
            exit(-1);
          }
          else
          {
            if (c == 12)
            {
              exit(-1);
            }
            else
            {
              if (c == 13)
              {
                exit(-1);
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



__inline void *xnmalloc(size_t n, size_t s)
{


  {
















  }
}

char *xcharalloc(size_t n)
{
  exit(-1);
}



char *last_component(const char *name)
{
  exit(-1);
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










static void __argmatch_die(void)
{
  exit(-1);
}



ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize)
{
  size_t i;
  size_t arglen;
  ptrdiff_t matchind;

  int tmp;
  size_t tmp___0;

  {





    {







      {
        tmp___0 = strlen((const char *) (* (arglist + i)));
        if (tmp___0 == arglen)




        {
          if (matchind == (- 1L))




          {





            {
              if (tmp)
              {
                exit(-1);
              }

            }

          }

        }

      }

      i++;
    }









  }
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
  ptrdiff_t res;
  ptrdiff_t tmp;
  {
    tmp = argmatch(arg, arglist, vallist, valsize);
    res = tmp;

    {
      return res;
    }

  }
}








































#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern struct _IO_FILE *stdout;










void *xmalloc(size_t n)
{
  exit(-1);
}


void *xrealloc(void *p, size_t n)
{
  exit(-1);
}


void *xmemdup(const void *p, size_t s)
{
  exit(-1);
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


extern char *nl_langinfo(nl_item __item);











struct timespec get_stat_mtime(const struct stat *st)
{
  exit(-1);
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







































int settime(const struct timespec *ts)
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








  {










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



  size_t bytes;

  size_t j;
  int tmp___4;
  int tmp___5;
  size_t ilim;
  int tmp___6;
  size_t tmp___7;
  {







    if (((unsigned int) quoting_style) == 4U)









    if (((unsigned int) quoting_style) == 5U)






































































    {


      {



















      }

      while_break___0:
      ;

















      {
        if (len < buffersize)
        {
          exit(-1);
        }

      }




    }













    {












      {
        if (quote_string_len)
        {
          if ((i + quote_string_len) <= argsize)
          {


            {





            }

          }

        }

      }

      c = (unsigned char) (* (arg + i));
      if (((int) c) == 0)


































































































































      {






















































































      }

      if (((int) c) == 55)
      {
        goto case_37;
      }

      if (((int) c) == 56)
































































































































































































































































































      {






        {





















































































          {






















































            {









































            }









            ;

          }

        }

      }

      switch_default___1:




























































































      {





        while (1)
        {





        }


























        ;

      }

      case_37:
      goto switch_break___0;


      ;

      if (unibyte_locale)
      {









        while (1)
        {
          if (bytes == 0UL)




          {
            if (bytes == 0xffffffffffffffffUL)




            {
              if (bytes == 0xfffffffffffffffeUL)
              {
                while (1)
                {
                  if ((i + m) < argsize)
                  {
                    exit(-1);
                  }

                }








                {
                  if (((unsigned int) quoting_style) == 2U)
                  {
                    while (1)
                    {
                      if (! (j < bytes))

























                      {
                        exit(-1);
                      }

                      case_91___0:











                    }

                    while_break___16:
                    ;

                  }






                }

              }

            }

          }

          if (tmp___5)
          {
            exit(-1);
          }

        }













        {
          if (! printable)
          {





            {
              if (backslash_escapes)
              {
                if (! printable)
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

      switch_break___0:
      ;

      if (backslash_escapes)
      {




















        {
          _L___2:



          {
            goto store_c;
          }

        }

      }





















      store_c:

      {







      }








    }

    while_break___3:



    {
      if (((unsigned int) quoting_style) == 2U)









      {
        while (1)
        {
          if (! (* quote_string))
          {
            goto while_break___25;
          }

          while (1)
          {







          }

          while_break___26:
          quote_string++;

        }

        while_break___25:
        ;

      }






    }






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




  size_t size;
  char *val;
  int flags;
  size_t qsize;
  size_t tmp___2;
  int *tmp___3;
  {
    tmp = __errno_location();

    n0 = (unsigned int) n;
    sv = slotvec;






    {
























    }




    tmp___2 = quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style) options->style, flags, (const unsigned int *) options->quote_these_too, (const char *) options->left_quote, (const char *) options->right_quote);

    if (size <= qsize)
    {
      if (((unsigned long) val) != ((unsigned long) slot0))
      {
        exit(-1);
      }

    }

    tmp___3 = __errno_location();
    * tmp___3 = e;

  }
}

char *quotearg_n_style(int n, enum quoting_style s, const char *arg)
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

struct quoting_options quote_quoting_options = {(enum quoting_style) 6, 0, {0U}, (const char *) ((void *) 0), (const char *) ((void *) 0)};
const char *quote_n_mem(int n, const char *arg, size_t argsize)
{

  {


  }
}

const char *quote_n(int n, const char *arg)
{

  {


  }
}

const char *quote(const char *arg)
{

  {


  }
}

















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

















#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern time_t time(time_t *__timer);
extern struct tm *localtime(const time_t *__timer);


static int year(struct tm *tm, const int *digit_pair, size_t n, unsigned int syntax_bits)
{
  exit(-1);
}

static int posix_time_parse(struct tm *tm, const char *s, unsigned int syntax_bits)
{
  exit(-1);
}

_Bool posixtime(time_t *p, const char *s, unsigned int syntax_bits)
{
  exit(-1);
}
































static unsigned char to_uchar___0(char ch)
{

}

static int yylex(union YYSTYPE *lvalp, parser_control *pc);
static int yyerror(const parser_control *pc, const char *s);
static long time_zone_hhmm(parser_control *pc, textint s, long mm);
static void digits_to_date_time(parser_control *pc, textint text_int)
{
































}

static void apply_relative_time(parser_control *pc, relative_time rel, int factor)
{









}

static void set_hhmmss(parser_control *pc, long hour, long minutes, time_t sec, long nsec)
{





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













}


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


  union yyalloc *yyptr;





  relative_time __constr_expr_14;


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




  relative_time __constr_expr_35;
  relative_time __constr_expr_36;
  relative_time __constr_expr_37;
  relative_time __constr_expr_38;
  relative_time __constr_expr_39;
  {


    yyss = yyssa;


    yystate = 0;
    yyerrstatus = 0;

    yychar = - 2;
    yyssp = yyss;
    yyvsp = yyvs;

    yynewstate:
    yyssp++;


    * yyssp = (yytype_int16) yystate;

    if (((unsigned long) ((yyss + yystacksize) - 1)) <= ((unsigned long) yyssp))
    {










      if (! yyptr)
























      {
        exit(-1);
      }

    }

    if (yystate == 12)
    {
      goto yyacceptlab;
    }



    yyn = (int) yypact[yystate];











    if (yychar <= 0)
    {
      yytoken = 0;























      {
        if (((const int) yycheck[yyn]) != ((const int) yytoken))
        {
          goto yydefault;
        }

      }

    }

    yyn = (int) yytable[yyn];

    {
      if (yyn == 0)




      {





      }






    }

    yychar = - 2;
    yystate = yyn;
    yyvsp++;
    * yyvsp = yylval;
    goto yynewstate;
    yydefault:
    yyn = (int) yydefact[yystate];















































































































































































































































































































































































































































































































































































    yyval.rel = __constr_expr_14;



















    yyval.rel = __constr_expr_17;



    ;

    __constr_expr_18.year = 0L;

    ;

    __constr_expr_19.year = 0L;

    ;

    __constr_expr_20.year = 0L;

    ;

    __constr_expr_21.year = 0L;

    ;

    __constr_expr_22.year = 0L;

    ;

    __constr_expr_23.year = 0L;

    ;

    __constr_expr_24.year = 0L;

    ;

    __constr_expr_25.year = 0L;

    ;

    __constr_expr_26.year = 0L;

    ;

    __constr_expr_27.year = 0L;

    ;

    __constr_expr_28.year = 0L;









    yyval.rel = __constr_expr_29;











    yyval.rel = __constr_expr_30;




























    yyval.rel = __constr_expr_35;



    ;

    __constr_expr_36.year = 0L;

    ;

    __constr_expr_37.year = 0L;









    yyval.rel = __constr_expr_38;











    yyval.rel = __constr_expr_39;






































    yyn = (int) yyr1[yyn];
    yystate = (int) (((const int) yypgoto[yyn - 28]) + ((const int) (* yyssp)));
    if (0 <= yystate)
    {
      if (yystate <= 112)
      {













      }

    }
    else
    {
      yystate = (int) yydefgoto[yyn - 28];
    }

    goto yynewstate;























    {










    }





    yyacceptlab:
    yyresult = 0;







































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

static long time_zone_hhmm(parser_control *pc, textint s, long mm)
{



  {





























  }
}

static int to_hour(long hours, int meridian)
{





  {













    {





    }










































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
      exit(-1);
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




  {


    {


















































    }





  }
}

static const table *lookup_word(const parser_control *pc, char *word___0)
{

















  {


    {







































      {













      }

    }




    {





















































    }

    while_break___2:



    {



      {












      }





    }



    {




















      {










      }


























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








  int tmp___3;
  int tmp___4;
  char buff[20];
  char *p___0;







  {
    {
      while (1)
      {
























        {
          if (((int) c) == 43)
          {
            _L___2:
            if (((int) c) == 45)




            {
              if (((int) c) == 43)
              {
                _L:
                if (((int) c) == 45)










                {


















                }



















































                {
                  if (sign < 0)
                  {





                  }
                  else
                  {











































                    {










                    }

























                  }




                  if (sign)








                  return tmp___3;
                }






































              }

            }

          }

        }

      }










































      {


















        {










        }

      }





      ;

    }
    return 0;
  }
}

static int yyerror(const parser_control *pc, const char *s)
{
  exit(-1);
}

static _Bool mktime_ok(const struct tm *tm0, const struct tm *tm1, time_t t)
{

  {
    if (! tm1)
    {
      exit(-1);
    }

  }

  return (_Bool) (! ((((((tm0->tm_sec ^ tm1->tm_sec) | (tm0->tm_min ^ tm1->tm_min)) | (tm0->tm_hour ^ tm1->tm_hour)) | (tm0->tm_mday ^ tm1->tm_mday)) | (tm0->tm_mon ^ tm1->tm_mon)) | (tm0->tm_year ^ tm1->tm_year)));
}

static char *get_tz(char *tzbuf)
{
  char *tz;
  char *tmp;
  size_t tzsize;



  {
    tmp = getenv("TZ");
    tz = tmp;

    {
      if (tzsize <= 100UL)
      {
        exit(-1);
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

















  long time_zone;












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

  int tmp___15;
  int tmp___16;
  {
    tz_was_altered = (_Bool) 0;
    tz0 = (char *) ((void *) 0);


    {
      gettime(& gettime_buffer);
      now = (const struct timespec *) (& gettime_buffer);
    }




    if (! tmp)



















    {
      tzbase = p + 4;
      tzsize = (size_t) 1;
      s = tzbase;

      {





        if (((const int) (* s)) == 92)
        {









          {













































          }

        }



      }

      while_break___0:
      ;






    }



































    {


































      {






      }





























      {
        if (pc.rels_seen)
        {
          if (! pc.dates_seen)
          {
            if (! pc.days_seen)
            {
              _L:










            }

          }
          else
          {




          }

        }
        else
        {




        }























        {
          if (time_zone < 0L)




























          {













          }

        }







































      }

      sum_ns = pc.seconds.tv_nsec + pc.rel.ns;


















    }

    goto done;
    fail:


    done:

    {











    }








  }
}








































































































































const unsigned int is_basic_table[8] = {(const unsigned int) 6656, (const unsigned int) 4294967279U, (const unsigned int) 4294967294U, (const unsigned int) 2147483646};
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


  char *file_name___3;

















  {


    {







      {


















      }




      {





















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

                }
























              }




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






  {






































  }
}















char *imaxtostr(intmax_t i, char *buf___1)
{
  exit(-1);
}





























void gettime(struct timespec *ts)
{


  {


    {
      return;
    }

  }
}



































int rpl_fseeko(FILE *fp, off_t offset, int whence)
{
  exit(-1);
}















static void fwrite_lowcase(FILE *fp, const char *src, size_t len)
{
  exit(-1);
}

static void fwrite_uppcase(FILE *fp, const char *src, size_t len)
{


  {


















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








  size_t _n___1;
  size_t _w___1;








  char ubuf[1024];




  char *tmp___10;
  size_t _n___2;
  size_t _w___2;
  int tmp___11;
  size_t _incr___2;
  size_t tmp___12;
  size_t _delta___2;
  size_t _i___5;
  size_t _i___6;


  int tmp___14;
  size_t _n___3;
  size_t _w___3;

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

  size_t _incr___9;

  size_t _delta___9;
  size_t _i___21;
  size_t _i___22;
  int year___1;











  size_t _n___10;
  size_t tmp___36;
  size_t _w___10;










  int flen;
  size_t _n___11;
  size_t _w___11;

  size_t _incr___11;

  size_t _delta___11;
  size_t _i___25;
  size_t _i___26;
  {



    p = s;


    if (hour12 > 12)




    {






















      {
        while (1)
        {























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





                    }




                  }








                  {
                    while (1)
                    {





                    }




                  }




                }

              }

            }

            fputc((int) (* f), p);
          }

          i += _incr;
          goto while_break___0;
        }

        while_break___0:























































      }

      while_break___5:
      ;

      if ((((unsigned int) (* f)) - 48U) <= 9U)
      {


        {
          if (width > 214748364)




          {
            if (width == 214748364)
            {





            }
            else
            {


            }

          }







        }

        while_break___6:
        ;











      }


















































































































































































































































      {
















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





                  }




                }








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





































































      {























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





                  }




                }








                {
                  while (1)
                  {





                  }




                }




              }

            }

          }

          strftime_case____0(to_uppcase, p, subfmt, tp, ut, ns);
        }



      }

























      {
        while (1)
        {







          if (_n___2 < _w___2)















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





                    }




                  }








                  {
                    while (1)
                    {





                    }




                  }




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





















      {

























      }









      {
        if (tz_colon_mask & 1)
        {


        }















































        {
          while (1)
          {
















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





                      }




                    }








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













          {






            {
              while (1)
              {
                while (1)
                {





                }




              }














              {
















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





                          }




                        }








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










            {
              while (1)
              {
                _n___5 = (size_t) 1;
                if (width < 0)

























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





                          }




                        }








                        {
                          while (1)
                          {





                          }




                        }




                      }

                    }

                  }

                  fputc((int) sign_char, p);
                }



              }









              {


                {







                }

                while_break___42:



              }




            }



          }





          {
            while (1)
            {
















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





                        }




                      }








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

        }
































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





                  }




                }








                {
                  while (1)
                  {





                  }




                }




              }






















            }

            goto while_break___53;
          }

          while_break___53:
          ;

        }



      }

























































































      {
        while (1)
        {





        }




      }








      {
















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
                      exit(-1);
                    }

                  }




                }




              }
              else
              {
                while (1)
                {
                  while (1)
                  {
                    if (! (_i___20 < _delta___8))
                    {
                      exit(-1);
                    }

                  }




                }




              }

            }

          }

        }

      }















































































      {
















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





                  }




                }








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







































      {









        {
          if ((year___1 % 100) != 0)




          {





          }

        }


















      }











      {





      }









































































      {
























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





                  }




                }








                {
                  while (1)
                  {





                  }




                }




              }






















            }

            goto while_break___71;
          }

          while_break___71:
          ;

        }



      }













































































































      {
        if (! (((const int) (* (f + (1 - flen)))) != 37))
        {
          exit(-1);
        }





      }





      {
















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





                  }




                }








                {
                  while (1)
                  {





                  }




                }




              }

            }

          }

          while (1)
          {
            if (to_lowcase)




            {





            }

          }




        }

      }










    }

    while_break:



  }
}

size_t fprintftime(FILE *s, const char *format, const struct tm *tp, int ut, int ns)
{

  {


  }
}























static void clear_ungetc_buffer_preserving_position(FILE *fp)
{
  exit(-1);
}

int rpl_fflush(FILE *stream)
{
  int tmp;


  {
    if (((unsigned long) stream) == ((unsigned long) ((void *) 0)))
    {
      exit(-1);
    }
    else
    {


      {
        tmp = fflush(stream);

      }

    }

  }
}


























int rpl_fclose(FILE *fp)
{
  int saved_errno;
  int fd;
  int result;


  int tmp___1;

  __off_t tmp___3;
  int tmp___4;

  {
    saved_errno = 0;

    fd = fileno(fp);
    if (fd < 0)
    {
      exit(-1);
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
          exit(-1);
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
      exit(-1);
    }

    return result;
  }
}

























































int close_stream(FILE *stream);
static const char *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void)
{








  {


    {
      if (ignore_EPIPE)




      {









      }







    }

    return;
  }
}






int close_stream(FILE *stream)
{
  _Bool some_pending;
  size_t tmp;
  _Bool prev_fail;
  int tmp___0;
  _Bool fclose_fail;


  int *tmp___3;
  {







































  }
}

















































































































































































































































































































































































































































































































































































































































































































































































































































#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
const char *Version = "8.21";
extern int fputc_unlocked(int __c, FILE *__stream);
extern char *optarg;


















__inline static void emit_mandatory_arg_note(void)
{
  exit(-1);
}

__inline static void emit_ancillary_info(void)
{
  exit(-1);
}

__inline static void emit_try_help(void)
{
  exit(-1);
}

__inline static char *timetostr(time_t t, char *buf___1)
{
  exit(-1);
}

__inline static char *bad_cast(const char *s)
{

}



#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
static _Bool show_date(const char *format, struct timespec when);
static const char *const time_spec_string[6] = {"hours", "minutes", "date", "seconds", "ns", (const char *) ((void *) 0)};
static const enum Time_spec time_spec[5] = {(const enum Time_spec) 3, (const enum Time_spec) 4, (const enum Time_spec) 0, (const enum Time_spec) 1, (const enum Time_spec) 2};
static const char rfc_2822_format[25] = {(const char) '%', (const char) 'a', (const char) ',', (const char) ' ', (const char) '%', (const char) 'd', (const char) ' ', (const char) '%', (const char) 'b', (const char) ' ', (const char) '%', (const char) 'Y', (const char) ' ', (const char) '%', (const char) 'H', (const char) ':', (const char) '%', (const char) 'M', (const char) ':', (const char) '%', (const char) 'S', (const char) ' ', (const char) '%', (const char) 'z', (const char) '\000'};
static const char short_options[14] = {(const char) 'd', (const char) ':', (const char) 'f', (const char) ':', (const char) 'I', (const char) ':', (const char) ':', (const char) 'r', (const char) ':', (const char) 'R', (const char) 's', (const char) ':', (const char) 'u', (const char) '\000'};
static const struct option long_options___1[14] = {{"date", 1, (int *) ((void *) 0), 'd'}, {"file", 1, (int *) ((void *) 0), 'f'}, {"iso-8601", 2, (int *) ((void *) 0), 'I'}, {"reference", 1, (int *) ((void *) 0), 'r'}, {"rfc-822", 0, (int *) ((void *) 0), 'R'}, {"rfc-2822", 0, (int *) ((void *) 0), 'R'}, {"rfc-3339", 1, (int *) ((void *) 0), 128}, {"set", 1, (int *) ((void *) 0), 's'}, {"uct", 0, (int *) ((void *) 0), 'u'}, {"utc", 0, (int *) ((void *) 0), 'u'}, {"universal", 0, (int *) ((void *) 0), 'u'}, {"help", 0, (int *) ((void *) 0), - 130}, {"version", 0, (int *) ((void *) 0), - 131}, {(const char *) ((void *) 0), 0, (int *) ((void *) 0), 0}};

void usage(int status)
{
  exit(-1);
}

static _Bool batch_convert(const char *input_filename, const char *format)
{
  exit(-1);
}

int main(int argc, char **argv);
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

  _Bool ok;
  int option_specified_date;
  const char *new_format;



















  _Bool valid_date;

  int tmp___17;
  const char *tmp___18;
  char *tmp___19;


  int tmp___22;
  _Bool tmp___23;
  int tmp___24;
  {
    datestr = (const char *) ((void *) 0);


    format = (const char *) ((void *) 0);
    batch_file = (char *) ((void *) 0);
    reference = (char *) ((void *) 0);





    while (1)
    {
      optc = getopt_long(argc, (char *const *) argv, short_options, long_options___1, (int *) ((void *) 0));
      if (! (optc != (- 1)))
      {
        goto while_break;
      }

      new_format = (const char *) ((void *) 0);















































































































      {






      }

    }

    while_break:
    ;

    if (datestr)










































    {





      if (((int) (* ((* (argv + optind)) + 0))) == 43)











      {
        if (set_date)




        {





        }

      }

    }

    if (! format)
    {

















      {
        if (! set_date)
        {









        }





        if (((unsigned long) reference) != ((unsigned long) ((void *) 0)))
        {














        }


      }

      if (! valid_date)
      {


        error(1, 0, (const char *) tmp___19, tmp___18);
      }

      if (set_date)
      {
        if (tmp___22 != 0)
        {
          exit(-1);
        }

      }








    }

    exit(tmp___24);
  }
}

static _Bool show_date(const char *format, struct timespec when)
{




  {














    {
      setlocale(2, "");
    }

    return (_Bool) 1;
  }
}

