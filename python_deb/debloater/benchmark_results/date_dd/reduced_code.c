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








    {










      {
 
      }

    }




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





      {





        {





          {





            {









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


  }
}







#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}



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










static void __argmatch_die(void)
{
 
 
}



ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize)
{
  size_t i;
  size_t arglen;
  ptrdiff_t matchind;
  _Bool ambiguous;
  int tmp;
  size_t tmp___0;

  {
    matchind = (ptrdiff_t) (- 1);

    arglen = strlen(arg);

    while (1)
    {







      {
        tmp___0 = strlen((const char *) (* (arglist + i)));
        if (tmp___0 == arglen)
        {
          return (ptrdiff_t) i;
        }
        else
        {





          {





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

    {
      return res;
    }

 
 
 
 
  }
}







#pragma GCC diagnostic ignored "-Wmissing-declarations"
































#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern struct _IO_FILE *stdout;










void *xmalloc(size_t n)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}


void *xrealloc(void *p, size_t n)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}


void *xmemdup(const void *p, size_t s)
{
 
 
 
 
 
 
 
}

























void xalloc_die(void)
{
 
 
 
 
 
 
}




























void version_etc_arn(FILE *stream, const char *command_name, const char *package, const char *version, const char *const *authors, size_t n_authors)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}

void version_etc_va(FILE *stream, const char *command_name, const char *package, const char *version, va_list authors)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}


void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...)
{
 
 
 
 
 
 
 
}


extern char *nl_langinfo(nl_item __item);











struct timespec get_stat_mtime(const struct stat *st)
{
 
}























































#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
const char *locale_charset(void);
















































__inline static int iso_week_days(int yday, int wday)
{

  {


  }
}







































int settime(const struct timespec *ts)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
















































































































int set_char_quoting(struct quoting_options *o, char c, int i)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}

static struct quoting_options quoting_options_from_style(enum quoting_style style)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}

static const char *gettext_quote(const char *msgid, enum quoting_style s)
{






  int tmp___3;

  {










    {










    }

 
    if (tmp___3 == 0)
    {
 
 
 
 
 
 
 
 
 
 
    }


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



























































    {
      while (1)
      {
        if (len < buffersize)
        {
 
        }

 
 
      }




    }


 
 
 
 














    {


      {






        {







        }








































































        {
          if ((i + quote_string_len) <= argsize)
          {


            {
              if (elide_outer_quotes)
              {
 
              }

 
            }

          }

        }

      }



































































































































































































































































































































































































































































































































      {






        {
          if (len < buffersize)
          {
 
          }

 
 
        }





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





              {
                if (len < buffersize)
                {
 
                }

 
 
              }




            }

          }

        }







































        {
          if (((const int) (* (arg + (i + 1UL)))) == 63)
          {
























































            {











































              {
 
              }

 
 
            }









            ;

          }

        }

      }


 












































































































      {






        {





























          {
 
          }

 
 
        }




      }














      {
 
 
 






        {
 
 





          {






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

 
                      case_91___0:;
                      goto force_outer_quoting_style;

                      switch_default___3:;
                      goto switch_break___3;

                      switch_break___3:;
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
            _L___0:;
            ilim = i + m;

            while (1)
            {
              if (backslash_escapes)
              {

                {

                  {
 
                  }


                  {

                    {
 
                    }

 
 
                  }


                  ;


                  {

                    {
 
                    }

 
 
                  }


                  ;


                  {

                    {
 
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


              }


              {
 
              }


              {

                {
 
                }

 
 
              }




 
            }


            ;

 
          }

        }

      }

      switch_break___0:
      ;


      {

      }

      {
        if (elide_outer_quotes)
        {


          {

            {

            }

          }
 
 
 
 


        }

        {


          {
            goto store_c;
          }


        }

      }



      {
 
      }



      {

        {
 
        }

 
 
      }


      ;

      store_c:

      {

        {

        }



      }



      ;

      __Cont:
      i++;

    }

    while_break___3:
    ;


    {

      {
 
 
 
 
 
      }

    }


    {

      {

        {

          {

          }


          {

            {

            }



          }




        }


        ;

      }

    }


    {

    }

    return len;
    force_outer_quoting_style:;
    tmp___7 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize, quoting_style, flags & (- 3), (const unsigned int *) ((void *) 0), left_quote, right_quote);

 
  }
}

static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = & slotvec0;
static char *quotearg_n_options(int n, const char *arg, size_t argsize, const struct quoting_options *options)
{



  struct slotvec *sv;




  size_t size;
  char *val;
  int flags;


  int *tmp___3;
  {










    {
 
 


























      {
 
      }

 
 
    }

    size = (sv + n)->size;
    val = (sv + n)->val;
    flags = (int) (options->flags | 1);



    {
 
 

      {
 
      }

 
 
 
    }

    tmp___3 = __errno_location();


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


  int tmp;

  {

















    {


      {
 
 
        if (tmp == 0)
        {
 
 
        }

      }

    }




  }
}















#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern time_t time(time_t *__timer);
extern struct tm *localtime(const time_t *__timer);


static int year(struct tm *tm, const int *digit_pair, size_t n, unsigned int syntax_bits)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}

static int posix_time_parse(struct tm *tm, const char *s, unsigned int syntax_bits)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}

_Bool posixtime(time_t *p, const char *s, unsigned int syntax_bits)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}































#pragma GCC diagnostic ignored "-Wmissing-declarations"
static unsigned char to_uchar___0(char ch)
{

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





    }

    {
 

      {
 
 
      }
 
 
 
 
 

 
 
 
    }


  }


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










  ;

  return;
}


int yyparse(parser_control *pc)
{



  int yystate;



  yytype_int16 *yyssp;


  YYSTYPE *yyvsp;

  int yyn;


  YYSTYPE yyval;
  int yylen;














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







  relative_time __constr_expr_38;
  relative_time __constr_expr_39;
  {












    yynewstate:












































































































    {





      {



















        {
 
        }

      }

 
 
    }





















































































































































































































































































































































































































































































































































































































































































 
 
 
 
 
 
 
 
 
    case_61:;
    __constr_expr_20.year = 0L;

 
 
 
 
 
 
 
 
 
    case_62:;
    __constr_expr_21.year = 0L;

 
 
 
 
 
 
 
 
 
    case_63:;
    __constr_expr_22.year = 0L;

 
 
 
 
 
 
 
 
 
    case_64:;
    __constr_expr_23.year = 0L;

 
 
 
 
 
 
 
 
 
    case_65:;
    __constr_expr_24.year = 0L;

 
 
 
 
 
 
 
 
 
    case_66:;
    __constr_expr_25.year = 0L;

 
 
 
 
 
 
 
 
 
    case_67:;
    __constr_expr_26.year = 0L;

 
 
 
 
 
 
 
 
 
    case_68:;
    __constr_expr_27.year = 0L;

 
 
 
 
 
 
 
 
 
    case_69:;
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














 
 
 
 
 
 
 
 
 
 



 
 
 
 
 
 
 
 
 



 
 
 
 
 
 
 
 
 



 
 
 
 
 
 
 
 
 
    case_77:














 
 
 
 
 
 
 
 
 



 
 
 
 
 
 
 
 
 
    case_80:
    __constr_expr_38.year = 0L;

    __constr_expr_38.month = 0L;








    case_81:








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






 
 
    case_90:
    yyval.intval = - 1L;

    goto switch_break;
    case_91:;
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

        {

        }

      }

      {

      }

    }

    {
      yystate = (int) yydefgoto[yyn - 28];
    }

    goto yynewstate;


    {
 
 
    }



    {
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    }

 









    {
 

      {
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
      }


      {
 
      }

 
 
 
 
    }




 
 
 
    yyacceptlab:






 



 


    {
 
    }





    {

      {

      }




    }


    ;


    {
 
    }


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
  long n_minutes;

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


  }
}

static int to_hour(long hours, int meridian)
{





  {













    {




 
 
 
 

    }
 
 
 
 

















    {


      {
 
      }
 
 
 
 


 
    }


 
    case_1:;
    if (0L < hours)
    {
 
 
 
 
 
 
 
 
 
    }

    {


      {
 
      }
 
 
 
 


 
    }


 

  }
}

static long to_year(textint textyear)
{


  {






    {
      if (textyear.digits == 2UL)
      {










      }

    }


  }
}

static const table *lookup_zone(const parser_control *pc, const char *name)
{




  {


    {


















































    }




    return (const table *) ((void *) 0);
  }
}

static const table *lookup_word(const parser_control *pc, char *word___0)
{

  char *q;















  {


    {







































      {













      }

    }




    {






































































































































      {
 
      }

      if (((int) (* q)) == 46)
      {
 
      }
 
 
 
 

 
    }


    ;


    {
 
 
 
 
 
 
    }

 
  }
}

static int yylex(union YYSTYPE *lvalp, parser_control *pc)
{
  unsigned char c;


  const char *p;
  int sign;









  int tmp___3;
  int tmp___4;
  char buff[20];
  char *p___0;




  const char *tmp___8;
  int tmp___9;

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


























              }







            }

            while_break___2:
            ;

            if (((int) c) == 46)




            {
              if (((int) c) == 44)
              {
                _L___1:;

                {
                  if (sign < 0)










                  {







                  }












                  {






















                    {






                      {
 
 
                      }

 
                    }













 








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
          if (((unsigned long) (p___0 - buff)) < ((sizeof(buff)) - 1UL))
          {



          }





          {





          }

        }

        while_break___6:










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


        {
 
        }

        {

          {
 
          }

        }


        {
 
        }

      }


      ;


      ;

    }


  }
}

static int yyerror(const parser_control *pc, const char *s)
{
 
}

static _Bool mktime_ok(const struct tm *tm0, const struct tm *tm1, time_t t)
{

  {
 
    if (! tm1)
    {
 
    }

  }


}

static char *get_tz(char *tzbuf)
{


  size_t tzsize;



  {



    {
 
 
      if (tzsize <= 100UL)
      {
 
 
      }
 
 
 
 
 

    }


  }
}

_Bool parse_datetime(struct timespec *result, const char *p, const struct timespec *now)
{
  time_t Start;


  struct tm tm;
  struct tm tm0;
  parser_control pc;





  _Bool ok;
  _Bool tmp___0;
  const char *tzbase;
  size_t tzsize;
  const char *s;



























  int year___1;
  int month;
  int day;
  long delta;
  time_t t1;















  {




    {


    }

























    {




      {





        if (((const int) (* s)) == 92)













        {
          if (((const int) (* s)) == 34)
          {














































          }

        }



      }

      while_break___0:
      ;

    }








































    {


































      {


        {
 
 
        }

      }

    }












    {
      if (1UL < ((((pc.times_seen | pc.dates_seen) | pc.days_seen) | pc.dsts_seen) | (pc.local_zones_seen + pc.zones_seen)))













      {
        if (pc.rels_seen)
        {
          if (! pc.dates_seen)
          {
            if (! pc.days_seen)
            {
              _L:;









            }
 
 
 
 
 
 
 

          }
          else
          {




          }

        }
        else
        {




        }






      }










      {
        if (! pc.zones_seen)




        {
 





























          {
 
          }

        }






        {
          if (0L < pc.day_ordinal)
          {




 
 
 
 

          }
 
 
 
 





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


      }














      {
 
      }



    }

    goto done;
    fail:
    ok = (_Bool) 0;

    done:

    {

      {
 
 
      }

      {


      }


    }



    {

    }


  }
}







































































































































#pragma GCC diagnostic pop
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

  const char *dir;











  size_t res_size;
  int c;





  int tmp___3;
  {


    {







      {
        if (((const int) (* (dir + 0))) == 0)
        {
 
        }

      }






      {




 
 
 
 

      }
 
 
 
 




      {





















        {
 






          {
 
 
            while (1)
            {
 










              {





                {
                  if (c == 9)
                  {
 
                  }

                }






                {
 





                  {
                    if (c == 10)
                    {
 
                    }

                  }

                }





                {
 
                }

 
              }

 
 
              if (tmp___3 < 2)
              {
 
              }

 
 
 
              if (res_size == 0UL)
              {
 
 
              }
 
 
 
 
 


              {
 
 
 
              }

 
 

              ;

            }





            {
 
            }
 
 
 
 
 

          }

        }


      }


    }


  }
}

const char *locale_charset(void)
{

  const char *aliases;




  {








    {





 







      {
        if (((const int) (* (aliases + 0))) == 42)
        {
 
 
 
 
 
 
 
        }

      }

 
 
 
 
    }

    while_break:
    ;


    {
 
    }


  }
}















char *imaxtostr(intmax_t i, char *buf___1)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}





























void gettime(struct timespec *ts)
{


  {






 
 
 
 
  }
}



































int rpl_fseeko(FILE *fp, off_t offset, int whence)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}















static void fwrite_lowcase(FILE *fp, const char *src, size_t len)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
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


  char ubuf[1024];





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



  size_t _delta___3;
  size_t _i___7;
  size_t _i___8;
  int padding;
  size_t _i___9;
  size_t _n___4;
  size_t _w___4;



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
  int tmp___30;
  int year_adjust;
  int days;
  int tmp___31;

  int d___0;
  int tmp___33;
  int tmp___34;
  int yy;


  size_t _n___10;

  size_t _w___10;

  size_t _incr___10;
  size_t tmp___38;
















  {











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
                      if (! (_i < _delta))
                      {
 
                      }

 
 
                    }




 
                  }








                  {
 
                    while (1)
                    {
                      if (! (_i___0 < _delta))
                      {
 
                      }

 
 
                    }




 
                  }




                }

              }

            }

            fputc((int) (* f), p);
          }



        }







































































































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
                    if (! (_i___1 < _delta___0))
                    {
 
                    }

 
 
                  }




 
                }








                {
 
                  while (1)
                  {
                    if (! (_i___2 < _delta___0))
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




 
                }








                {
 
                  while (1)
                  {
                    if (! (_i___4 < _delta___1))
                    {
 
                    }

 
 
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




 
                  }








                  {
 
                    while (1)
                    {
                      if (! (_i___6 < _delta___2))
                      {
 
                      }

 
 
                    }




 
                  }




                }

              }

            }

            while (1)
            {





              {









              }

              goto while_break___22;
            }

            while_break___22:
            ;

          }



        }




      }















































      {
 
      }






























      {





      }


      do_number:;









      {
        if (! negative_number)
        {
 
        }

      }














































      {
        if (always_output_a_sign)














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
                        if (! (_i___7 < _delta___3))
                        {
 
                        }

 
 
                      }




 
                    }








                    {
 
                      while (1)
                      {
                        if (! (_i___8 < _delta___3))
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





        if (padding > 0)
        {
          if (pad == 95)
          {






            {






































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
                            if (! (_i___10 < _delta___4))
                            {
 
                            }

 
 
                          }




 
                        }








                        {
 
                          while (1)
                          {
                            if (! (_i___11 < _delta___4))
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
                            if (! (_i___12 < _delta___5))
                            {
 
                            }

 
 
                          }




 
                        }








                        {
 
                          while (1)
                          {
                            if (! (_i___13 < _delta___5))
                            {
 
                            }

 
 
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
                          if (! (_i___15 < _delta___6))
                          {
 
                          }

 
 
                        }




 
                      }








                      {
 
                        while (1)
                        {
                          if (! (_i___16 < _delta___6))
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




 
                }








                {
 
                  while (1)
                  {
                    if (! (_i___18 < _delta___7))
                    {
 
                    }

 
 
                  }




 
                }




              }

            }

          }

          while (1)
          {





            {









            }

            goto while_break___53;
          }

          while_break___53:
          ;

        }



      }







      {
 
      }

























































































      {
 
        while (1)
        {
          if (! (j < 9))
          {
 
          }

 
 
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
 
                    }

 
 
                  }




 
                }








                {
 
                  while (1)
                  {
                    if (! (_i___20 < _delta___8))
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







 
 
 
 







      }

      while_break___60:






      {
 
      }









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

 
      case_117:;
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
      case_103___0:;
      yy = (int) (((tp->tm_year % 100) + ((const int) year_adjust)) % 100);

 

      {
 
      }

      {

        {
 
        }
 
 
 
 

 
      }

 



 
 
 
      switch_default___1:
      digits = 2;

      number_value = (days / 7) + 1;
      goto do_number;
      case_87:

      {
 
      }







      {
 
      }


 
 
 
      case_89:
      if (modifier == 69)
      {
 
      }



      {
 
      }

      {

      }






      {
 
      }


 

      {
 
 
 
 
 
 
 
 
 
      }

 
 
 
      case_90:

      {
 
 
      }



      {
 
      }


      {



        {

        }
 
 
 
 



        {
 
        }

        {

        }

        _incr___10 = tmp___38;

        {
 
        }


        {

          {
            if (_n___10 < _w___10)
            {
 
              if (pad == 48)
              {

                {
 

                  {

                    {
 
                    }

 
 
                  }


                  ;

 
                }


                ;

              }

              {

                {
 

                  {

                    {
 
                    }

 
 
                  }


                  ;

 
                }


                ;

              }

            }

          }


          {
            if (to_lowcase)
            {
 
            }

            {

              {
 
              }

              {

              }

            }


          }


          ;

        }



      }


      ;

      goto switch_break___1;
      case_58:



      {

        {

        }

 



      }


      ;


      {
 
      }


      goto do_z_conversion;
      case_122:
      colons = (size_t) 0;

      do_z_conversion:

      {
 
      }







      {

      }


      {

      }


      {
 
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


      ;


      {
 

        {
 
        }
 
 
 
 

 

        {
 
        }
 
 
 
 

 

        {
 
        }


        {

          {

            {
 
              if (pad == 48)
              {

                {
 

                  {

                    {
 
                    }

 
 
                  }


                  ;

 
                }


                ;

              }

              {

                {
 

                  {

                    {
 
                    }

 
 
                  }


                  ;

 
                }


                ;

              }

            }

          }


          {

            {
 
            }

            {

              {
 
              }
 
 
 
 

            }

 
          }


          ;

        }

 
 
      }


      ;

 
      switch_break___1:
      ;

      __Cont:
      f++;

    }

    while_break:
    ;


  }
}

size_t fprintftime(FILE *s, const char *format, const struct tm *tp, int ut, int ns)
{

  {


  }
}























static void clear_ungetc_buffer_preserving_position(FILE *fp)
{
 
 
 
 
 
 
}

int rpl_fflush(FILE *stream)
{



  {






    {


      {


      }

    }

 
 
 
  }
}


























int rpl_fclose(FILE *fp)
{
  int saved_errno;

  int result;


  int tmp___1;

  __off_t tmp___3;


  {










    if (tmp___1 != 0)
    {
 
 
      if (tmp___3 != (- 1L))
      {




        {
 
 
        }

      }





    }

    result = fclose(fp);
    if (saved_errno != 0)
    {
 
 
 
    }


  }
}























































#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int close_stream(FILE *stream);
static const char *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void)
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






int close_stream(FILE *stream)
{




  _Bool fclose_fail;


  int *tmp___3;
  {











    {
      if (fclose_fail)
      {





        {
 
          if ((* tmp___3) != 9)
          {


            {
 
 
            }


 
          }

        }

      }

    }


  }
}















































































































































































































































































































































































































































































































































































































































































































































































































































#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
const char *Version = "8.21";
extern int fputc_unlocked(int __c, FILE *__stream);
extern char *optarg;


















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

}


#pragma GCC diagnostic ignored "-Wmissing-prototypes"
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}

static _Bool batch_convert(const char *input_filename, const char *format)
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}


static const char rfc_3339_format[3][32] = {{(const char) '%', (const char) 'Y', (const char) '-', (const char) '%', (const char) 'm', (const char) '-', (const char) '%', (const char) 'd', (const char) '\000'}, {(const char) '%', (const char) 'Y', (const char) '-', (const char) '%', (const char) 'm', (const char) '-', (const char) '%', (const char) 'd', (const char) ' ', (const char) '%', (const char) 'H', (const char) ':', (const char) '%', (const char) 'M', (const char) ':', (const char) '%', (const char) 'S', (const char) '%', (const char) ':', (const char) 'z', (const char) '\000'}, {(const char) '%', (const char) 'Y', (const char) '-', (const char) '%', (const char) 'm', (const char) '-', (const char) '%', (const char) 'd', (const char) ' ', (const char) '%', (const char) 'H', (const char) ':', (const char) '%', (const char) 'M', (const char) ':', (const char) '%', (const char) 'S', (const char) '.', (const char) '%', (const char) 'N', (const char) '%', (const char) ':', (const char) 'z', (const char) '\000'}};

int main(int argc, char **argv)
{



  struct timespec when;
  _Bool set_date;
  const char *format;

  char *reference;


  int option_specified_date;






























  {












    {






























































































































      {







      }

    }



















































    {





















      {








        {
          if (option_specified_date)
          {
 
 
 
 
          }

        }

      }

    }

    if (! format)
    {


      {
 
      }

    }






    {


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
 

          {
 
 
          }

 
        }

        {

          {
 
          }


        }


      }


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

static _Bool show_date(const char *format, struct timespec when)
{




  {

















    {
      setlocale(2, "");
    }


  }
}

