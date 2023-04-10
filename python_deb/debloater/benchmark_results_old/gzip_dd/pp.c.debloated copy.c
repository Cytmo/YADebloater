typedef void *voidp;
typedef unsigned char uch;
typedef unsigned short ush;
typedef unsigned long ulg;
typedef long __off_t;
typedef long __off64_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
typedef unsigned long size_t;
struct _IO_FILE;
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
typedef unsigned char char_type;
typedef long code_int;
typedef unsigned long cmp_code_int;
typedef struct _IO_FILE _IO_FILE;
struct huft;
union __anonunion_v_25
{
  ush n;
  struct huft *t;
};
struct huft
{
  uch e;
  uch b;
  union __anonunion_v_25 v;
};
typedef int file_t;
union __anonunion_fc_7
{
  ush freq;
  ush code;
};
union __anonunion_dl_8
{
  ush dad;
  ush len;
};
struct ct_data
{
  union __anonunion_fc_7 fc;
  union __anonunion_dl_8 dl;
};
typedef struct ct_data ct_data;
struct tree_desc
{
  ct_data *dyn_tree;
  ct_data *static_tree;
  int *extra_bits;
  int extra_base;
  int elems;
  int max_length;
  int max_code;
};
typedef struct tree_desc tree_desc;
typedef ush Pos;
typedef unsigned int IPos;
struct config
{
  ush good_length;
  ush max_lazy;
  ush nice_length;
  ush max_chain;
};
typedef struct config config;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __syscall_slong_t;
typedef __off_t off_t;
typedef __time_t time_t;
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef void (*__sighandler_t)(int);
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
struct option
{
  const char *name;
  int has_arg;
  int *flag;
  int val;
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
typedef struct dirent dir_type;
struct utimbuf
{
  __time_t actime;
  __time_t modtime;
};
uch inbuf[32832];
uch outbuf[18432];
ush d_buf[32768];
uch window[65536L];
ush prev[1L << 16];
unsigned int insize;
unsigned int inptr;
int ifd;
int ofd;
int test;
static unsigned int blocksize;
static ush pt_table[256];
static ush bitbuf;
static unsigned int subbitbuf;
static int bitcount;
static void fillbuf(int n)
{
  _Exit(-1);
}

static unsigned int getbits(int n)
{
  _Exit(-1);
}

static void init_getbits(void)
{
  _Exit(-1);
}

static void make_table(int nchar, uch *bitlen, int tablebits, ush *table)
{
  _Exit(-1);
}

static void read_pt_len(int nn, int nbit, int i_special)
{
  _Exit(-1);
}

static void read_c_len(void)
{
  _Exit(-1);
}

static unsigned int decode_c(void)
{
  _Exit(-1);
}

static unsigned int decode_p(void)
{
  _Exit(-1);
}

static void huf_decode_start(void)
{
  _Exit(-1);
}

static int j;
static int done;
static void decode_start(void)
{
  _Exit(-1);
}

static unsigned int i;
static unsigned int decode(unsigned int count, uch *buffer)
{
  _Exit(-1);
}

int unlzh(int in, int out)
{
  _Exit(-1);
}

unsigned int outcnt;
long bytes_out;
static int peek_bits;
static ulg bitbuf___0;
static int valid;
static void read_tree(void);
static void build_tree(void);
static void read_tree(void)
{
  _Exit(-1);
}

static void build_tree(void)
{
  _Exit(-1);
}

int unpack(int in, int out)
{
  _Exit(-1);
}

extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern struct _IO_FILE *stderr;
extern int fprintf(FILE *__restrict __stream, const char *__restrict __format, ...);
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
extern void *memset(void *__s, int __c, size_t __n);
long bytes_in;
char ifname[1024];
char *progname;
int unlzw(int in, int out)
{
  _Exit(-1);
}

int lzw(int in, int out);
static int msg_done = 0;
int lzw(int in, int out)
{
  _Exit(-1);
}

extern void perror(const char *__s);
extern char *strcpy(char *__restrict __dest, const char *__restrict __src);
extern char *strrchr(const char *__s, int __c);
extern size_t strcspn(const char *__s, const char *__reject);
extern size_t strspn(const char *__s, const char *__accept);
extern size_t strlen(const char *__s);
char ofname[1024];
void abort_gzip(void);
void display_ratio(long num, long den, FILE *file);
voidp xmalloc(unsigned int size);
ulg crc_32_tab[256];
int copy(int in, int out)
{
  _Exit(-1);
}

static ulg crc = (ulg) 4294967295L;
ulg updcrc(uch *s, unsigned int n)
{
  register ulg c;
  uch *tmp;
  {
    if (((unsigned long) s) == ((unsigned long) ((void *) 0)))
    {
      c = (ulg) 4294967295L;
    }
    else
    {
      c = crc;
      if (n)
      {
        {
          while (1)
          {
            while_continue:
            ;

            tmp = s;
            s++;
            c = crc_32_tab[(((int) c) ^ ((int) (* tmp))) & 255] ^ (c >> 8);
            n--;
            if (! n)
            {
              goto while_break;
            }

          }

          while_break:
          ;

        }
      }

    }

    crc = c;
    return c ^ 4294967295UL;
  }
}

void clear_bufs(void)
{
  {
    outcnt = 0U;
    inptr = 0U;
    insize = inptr;
    bytes_out = 0L;
    bytes_in = bytes_out;
    return;
  }
}

int fill_inbuf(int eof_ok)
{
  int len;
  int *tmp;
  {
    {
      insize = 0U;
      tmp = __errno_location();
      * tmp = 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        {
          len = (int) read(ifd, (void *) (((char *) inbuf) + insize), (size_t) (32768U - insize));
        }
        if (len == 0)
        {
          goto while_break;
        }
        else
          if (len == (- 1))
        {
          _Exit(-1);
        }


        insize += (unsigned int) len;
        if (! (insize < 32768U))
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    if (insize == 0U)
    {
      if (eof_ok)
      {
        _Exit(-1);
      }

      {
      }
    }

    bytes_in = (long) (((ulg) bytes_in) + ((ulg) insize));
    inptr = 1U;
    return (int) inbuf[0];
  }
}

void flush_outbuf(void)
{
  {
    if (outcnt == 0U)
    {
      _Exit(-1);
    }

    {
      write_buf(ofd, (voidp) ((char *) outbuf), outcnt);
      bytes_out = (long) (((ulg) bytes_out) + ((ulg) outcnt));
      outcnt = 0U;
    }
    return;
  }
}

void flush_window(void)
{
  {
    if (outcnt == 0U)
    {
      _Exit(-1);
    }

    {
      updcrc(window, outcnt);
    }
    if (! test)
    {
      {
        write_buf(ofd, (voidp) ((char *) window), outcnt);
      }
    }

    bytes_out = (long) (((ulg) bytes_out) + ((ulg) outcnt));
    outcnt = 0U;
    return;
  }
}

void write_buf(int fd, voidp buf, unsigned int cnt)
{
  unsigned int n;
  {
    {
      while (1)
      {
        while_continue:
        ;

        {
          n = (unsigned int) write(fd, (const void *) buf, (size_t) cnt);
        }
        if (! (n != cnt))
        {
          goto while_break;
        }

        if (n == 4294967295U)
        {
          _Exit(-1);
        }

      }

      while_break:
      ;

    }
    return;
  }
}

char *strlwr(char *s)
{
  char *t;
  const unsigned short **tmp___0;
  {
    t = s;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (* t))
        {
          goto while_break;
        }

        {
          tmp___0 = __ctype_b_loc();
        }
        if (((const int) (* ((* tmp___0) + ((int) (* t))))) & 256)
        {
          _Exit(-1);
        }
        else
        {
          * t = * t;
        }

        t++;
      }

      while_break:
      ;

    }
    return s;
  }
}

char *basename(char *fname)
{
  char *p;
  {
    {
      p = strrchr((const char *) fname, '/');
    }
    if (((unsigned long) p) != ((unsigned long) ((void *) 0)))
    {
      fname = p + 1;
    }

    return fname;
  }
}

char *add_envopt(int *argcp, char ***argvp, char *env___0)
{
  char *p;
  char **oargv;
  char **nargv;
  int oargc;
  int nargc;
  char *tmp;
  size_t tmp___0;
  size_t tmp___2;
  size_t tmp___3;
  char *tmp___4;
  int tmp___6;
  char **tmp___7;
  char **tmp___8;
  size_t tmp___9;
  char **tmp___10;
  char *tmp___11;
  char **tmp___12;
  char **tmp___13;
  int tmp___14;
  char *__cil_tmp25;
  char *__cil_tmp26;
  {
    {
      oargc = * argcp;
      nargc = 0;
      tmp = getenv((const char *) env___0);
      env___0 = tmp;
    }
    if (((unsigned long) env___0) == ((unsigned long) ((void *) 0)))
    {
      return (char *) ((void *) 0);
    }

    {
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (* p))
        {
          _Exit(-1);
        }

        {
        }
        if (((int) (* p)) == 0)
        {
          _Exit(-1);
        }

        {
        }
        if (* p)
        {
          _Exit(-1);
        }

      }

      while_break:
      ;

    }
    if (nargc == 0)
    {
      _Exit(-1);
    }

    {
    }
    if (((unsigned long) nargv) == ((unsigned long) ((void *) 0)))
    {
      _Exit(-1);
    }

    if (tmp___6 < 0)
    {
      _Exit(-1);
    }

    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (nargc > 0))
        {
          _Exit(-1);
        }

        {
        }
        {
          while (1)
          {
            while_continue___1:
            ;

            if (! (* tmp___11))
            {
              _Exit(-1);
            }

          }

          while_break___1:
          ;

        }
      }

      while_break___0:
      ;

    }
    {
      while (1)
      {
        while_continue___2:
        ;

        if (! tmp___14)
        {
          _Exit(-1);
        }

      }

      while_break___2:
      ;

    }
  }
}

void error(char *m)
{
  _Exit(-1);
}

void read_error(void)
{
  _Exit(-1);
}

void write_error(void)
{
  _Exit(-1);
}

void display_ratio(long num, long den, FILE *file)
{
  _Exit(-1);
}

voidp xmalloc(unsigned int size)
{
  _Exit(-1);
}

int inflate_block(int *e);
static unsigned int border[19] = {16U, 17U, 18U, 0U, 8U, 7U, 9U, 6U, 10U, 5U, 11U, 4U, 12U, 3U, 13U, 2U, 14U, 1U, 15U};
static ush cplens[31] = {(ush) 3, (ush) 4, (ush) 5, (ush) 6, (ush) 7, (ush) 8, (ush) 9, (ush) 10, (ush) 11, (ush) 13, (ush) 15, (ush) 17, (ush) 19, (ush) 23, (ush) 27, (ush) 31, (ush) 35, (ush) 43, (ush) 51, (ush) 59, (ush) 67, (ush) 83, (ush) 99, (ush) 115, (ush) 131, (ush) 163, (ush) 195, (ush) 227, (ush) 258, (ush) 0, (ush) 0};
static ush cplext[31] = {(ush) 0, (ush) 0, (ush) 0, (ush) 0, (ush) 0, (ush) 0, (ush) 0, (ush) 0, (ush) 1, (ush) 1, (ush) 1, (ush) 1, (ush) 2, (ush) 2, (ush) 2, (ush) 2, (ush) 3, (ush) 3, (ush) 3, (ush) 3, (ush) 4, (ush) 4, (ush) 4, (ush) 4, (ush) 5, (ush) 5, (ush) 5, (ush) 5, (ush) 0, (ush) 99, (ush) 99};
static ush cpdist[30] = {(ush) 1, (ush) 2, (ush) 3, (ush) 4, (ush) 5, (ush) 7, (ush) 9, (ush) 13, (ush) 17, (ush) 25, (ush) 33, (ush) 49, (ush) 65, (ush) 97, (ush) 129, (ush) 193, (ush) 257, (ush) 385, (ush) 513, (ush) 769, (ush) 1025, (ush) 1537, (ush) 2049, (ush) 3073, (ush) 4097, (ush) 6145, (ush) 8193, (ush) 12289, (ush) 16385, (ush) 24577};
static ush cpdext[30] = {(ush) 0, (ush) 0, (ush) 0, (ush) 0, (ush) 1, (ush) 1, (ush) 2, (ush) 2, (ush) 3, (ush) 3, (ush) 4, (ush) 4, (ush) 5, (ush) 5, (ush) 6, (ush) 6, (ush) 7, (ush) 7, (ush) 8, (ush) 8, (ush) 9, (ush) 9, (ush) 10, (ush) 10, (ush) 11, (ush) 11, (ush) 12, (ush) 12, (ush) 13, (ush) 13};
ulg bb;
unsigned int bk;
ush mask_bits[17] = {(ush) 0, (ush) 1, (ush) 3, (ush) 7, (ush) 15, (ush) 31, (ush) 63, (ush) 127, (ush) 255, (ush) 511, (ush) 1023, (ush) 2047, (ush) 4095, (ush) 8191, (ush) 16383, (ush) 32767, (ush) 65535};
int lbits = 9;
int dbits = 6;
unsigned int hufts;
int huft_build(unsigned int *b, unsigned int n, unsigned int s, ush *d, ush *e, struct huft **t, int *m)
{
  unsigned int a;
  unsigned int c[17];
  unsigned int f;
  int g;
  int h;
  register unsigned int i___0;
  register unsigned int j___0;
  register int k;
  int l;
  register unsigned int *p;
  register struct huft *q;
  struct huft r;
  struct huft *u[16];
  unsigned int v[288];
  register int w;
  unsigned int x[17];
  unsigned int *xp;
  int y;
  unsigned int z;
  unsigned int *tmp;
  unsigned int *tmp___0;
  unsigned int tmp___1;
  unsigned int *tmp___2;
  int tmp___4;
  unsigned int *tmp___5;
  unsigned int tmp___6;
  int tmp___7;
  void *__cil_tmp36;
  void *__cil_tmp37;
  void *__cil_tmp38;
  void *__cil_tmp39;
  int __cil_tmp40;
  {
    {
      memset((voidp) c, 0, sizeof(c));
      p = b;
      i___0 = n;
    }
    {
      while (1)
      {
        while_continue:
        ;

        c[* p]++;
        p++;
        i___0--;
        if (! i___0)
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    if (c[0] == n)
    {
      _Exit(-1);
    }

    l = * m;
    j___0 = 1U;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (j___0 <= 16U))
        {
          _Exit(-1);
        }

        if (c[j___0])
        {
          goto while_break___0;
        }

        j___0++;
      }

      while_break___0:
      ;

    }
    k = (int) j___0;
    if (((unsigned int) l) < j___0)
    {
      _Exit(-1);
    }

    i___0 = 16U;
    {
      while (1)
      {
        while_continue___1:
        ;

        if (! i___0)
        {
          _Exit(-1);
        }

        if (c[i___0])
        {
          goto while_break___1;
        }

        i___0--;
      }

      while_break___1:
      ;

    }
    g = (int) i___0;
    if (((unsigned int) l) > i___0)
    {
      _Exit(-1);
    }

    * m = l;
    y = 1 << j___0;
    {
      while (1)
      {
        while_continue___2:
        ;

        if (! (j___0 < i___0))
        {
          goto while_break___2;
        }

        y = (int) (((unsigned int) y) - c[j___0]);
        if (y < 0)
        {
          _Exit(-1);
        }

        j___0++;
        y <<= 1;
      }

      while_break___2:
      ;

    }
    y = (int) (((unsigned int) y) - c[i___0]);
    if (y < 0)
    {
      _Exit(-1);
    }

    c[i___0] += (unsigned int) y;
    j___0 = 0U;
    x[1] = j___0;
    p = c + 1;
    xp = x + 2;
    {
      while (1)
      {
        while_continue___3:
        ;

        i___0--;
        if (! i___0)
        {
          goto while_break___3;
        }

        tmp = xp;
        xp++;
        tmp___0 = p;
        p++;
        j___0 += * tmp___0;
        * tmp = j___0;
      }

      while_break___3:
      ;

    }
    p = b;
    i___0 = 0U;
    {
      while (1)
      {
        while_continue___4:
        ;

        tmp___2 = p;
        p++;
        j___0 = * tmp___2;
        if (j___0 != 0U)
        {
          tmp___1 = x[j___0];
          x[j___0]++;
          v[tmp___1] = i___0;
        }

        i___0++;
        if (! (i___0 < n))
        {
          goto while_break___4;
        }

      }

      while_break___4:
      ;

    }
    i___0 = 0U;
    x[0] = i___0;
    p = v;
    h = - 1;
    w = - l;
    u[0] = (struct huft *) ((void *) 0);
    q = (struct huft *) ((void *) 0);
    z = 0U;
    {
      while (1)
      {
        while_continue___5:
        ;

        if (! (k <= g))
        {
          goto while_break___5;
        }

        a = c[k];
        {
          while (1)
          {
            while_continue___6:
            ;

            tmp___6 = a;
            a--;
            if (! tmp___6)
            {
              goto while_break___6;
            }

            {
              while (1)
              {
                while_continue___7:
                ;

                if (! (k > (w + l)))
                {
                  goto while_break___7;
                }

                h++;
                w += l;
                z = (unsigned int) (g - w);
                if (z > ((unsigned int) l))
                {
                  z = (unsigned int) l;
                }
                else
                {
                  z = z;
                }

                j___0 = (unsigned int) (k - w);
                f = (unsigned int) (1 << j___0);
                if (f > (a + 1U))
                {
                  f -= a + 1U;
                  xp = c + k;
                  {
                    while (1)
                    {
                      while_continue___8:
                      ;

                      j___0++;
                      if (! (j___0 < z))
                      {
                        goto while_break___8;
                      }

                      f <<= 1;
                      xp++;
                      if (f <= (* xp))
                      {
                        goto while_break___8;
                      }

                      f -= * xp;
                    }

                    while_break___8:
                    ;

                  }
                }

                {
                  z = (unsigned int) (1 << j___0);
                  q = (struct huft *) malloc(((unsigned long) (z + 1U)) * (sizeof(struct huft)));
                }
                if (((unsigned long) q) == ((unsigned long) ((struct huft *) ((void *) 0))))
                {
                  if (h)
                  {
                    _Exit(-1);
                  }

                }

                hufts += z + 1U;
                * t = q + 1;
                t = & q->v.t;
                * t = (struct huft *) ((void *) 0);
                q++;
                u[h] = q;
                if (h)
                {
                  x[h] = i___0;
                  r.b = (uch) l;
                  r.e = (uch) (16U + j___0);
                  r.v.t = q;
                  j___0 = i___0 >> (w - l);
                  * (u[h - 1] + j___0) = r;
                }

              }

              while_break___7:
              ;

            }
            r.b = (uch) (k - w);
            if (((unsigned long) p) >= ((unsigned long) (v + n)))
            {
              _Exit(-1);
            }
            else
              if ((* p) < s)
            {
              if ((* p) < 256U)
              {
                tmp___4 = 16;
              }
              else
              {
                tmp___4 = 15;
              }

              r.e = (uch) tmp___4;
              r.v.n = (ush) (* p);
              p++;
            }
            else
            {
              r.e = (uch) (* (e + ((* p) - s)));
              tmp___5 = p;
              p++;
              r.v.n = * (d + ((* tmp___5) - s));
            }


            f = (unsigned int) (1 << (k - w));
            j___0 = i___0 >> w;
            {
              while (1)
              {
                while_continue___9:
                ;

                if (! (j___0 < z))
                {
                  goto while_break___9;
                }

                * (q + j___0) = r;
                j___0 += f;
              }

              while_break___9:
              ;

            }
            j___0 = (unsigned int) (1 << (k - 1));
            {
              while (1)
              {
                while_continue___10:
                ;

                if (! (i___0 & j___0))
                {
                  goto while_break___10;
                }

                i___0 ^= j___0;
                j___0 >>= 1;
              }

              while_break___10:
              ;

            }
            i___0 ^= j___0;
            {
              while (1)
              {
                while_continue___11:
                ;

                if (! ((i___0 & ((unsigned int) ((1 << w) - 1))) != x[h]))
                {
                  goto while_break___11;
                }

                h--;
                w -= l;
              }

              while_break___11:
              ;

            }
          }

          while_break___6:
          ;

        }
        k++;
      }

      while_break___5:
      ;

    }
    if (y != 0)
    {
      if (g != 1)
      {
        _Exit(-1);
      }

    }
    else
    {
      tmp___7 = 0;
    }

    return tmp___7;
  }
}

int huft_free(struct huft *t)
{
  register struct huft *p;
  register struct huft *q;
  {
    p = t;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) p) != ((unsigned long) ((struct huft *) ((void *) 0)))))
        {
          goto while_break;
        }

        {
          p--;
          q = p->v.t;
          free((void *) ((char *) p));
          p = q;
        }
      }

      while_break:
      ;

    }
    return 0;
  }
}

int inflate_codes(struct huft *tl, struct huft *td, int bl, int bd)
{
  register unsigned int e;
  unsigned int n;
  unsigned int d;
  unsigned int w;
  struct huft *t;
  unsigned int ml;
  unsigned int md;
  register ulg b;
  register unsigned int k;
  unsigned int tmp;
  int tmp___0;
  int tmp___1;
  unsigned int tmp___2;
  int tmp___3;
  int tmp___4;
  unsigned int tmp___5;
  unsigned int tmp___6;
  int tmp___7;
  int tmp___8;
  unsigned int tmp___9;
  int tmp___10;
  int tmp___11;
  unsigned int tmp___12;
  int tmp___13;
  int tmp___14;
  unsigned int tmp___15;
  int tmp___16;
  int tmp___17;
  unsigned int tmp___19;
  unsigned int tmp___20;
  unsigned int tmp___21;
  {
    b = bb;
    k = bk;
    w = outcnt;
    ml = (unsigned int) mask_bits[bl];
    md = (unsigned int) mask_bits[bd];
    {
      while (1)
      {
        while_continue:
        ;

        {
          while (1)
          {
            while_continue___0:
            ;

            if (! (k < ((unsigned int) bl)))
            {
              goto while_break___0;
            }

            if (inptr < insize)
            {
              tmp = inptr;
              inptr++;
              tmp___1 = (int) inbuf[tmp];
            }

            b |= ((ulg) ((uch) tmp___1)) << k;
            k += 8U;
          }

          while_break___0:
          ;

        }
        t = tl + (((unsigned int) b) & ml);
        e = (unsigned int) t->e;
        if (e > 16U)
        {
          {
            while (1)
            {
              while_continue___1:
              ;

              if (e == 99U)
              {
                _Exit(-1);
              }

              b >>= (int) t->b;
              k -= (unsigned int) t->b;
              e -= 16U;
              {
                while (1)
                {
                  while_continue___2:
                  ;

                  if (! (k < e))
                  {
                    goto while_break___2;
                  }

                  if (inptr < insize)
                  {
                    tmp___2 = inptr;
                    inptr++;
                    tmp___4 = (int) inbuf[tmp___2];
                  }

                  b |= ((ulg) ((uch) tmp___4)) << k;
                  k += 8U;
                }

                while_break___2:
                ;

              }
              t = t->v.t + (((unsigned int) b) & ((unsigned int) mask_bits[e]));
              e = (unsigned int) t->e;
              if (! (e > 16U))
              {
                goto while_break___1;
              }

            }

            while_break___1:
            ;

          }
        }

        b >>= (int) t->b;
        k -= (unsigned int) t->b;
        if (e == 16U)
        {
          tmp___5 = w;
          w++;
          window[tmp___5] = (uch) t->v.n;
          if (w == 32768U)
          {
            {
              outcnt = w;
              flush_window();
              w = 0U;
            }
          }

        }
        else
        {
          if (e == 15U)
          {
            goto while_break;
          }

          {
            while (1)
            {
              while_continue___3:
              ;

              if (! (k < e))
              {
                goto while_break___3;
              }

              if (inptr < insize)
              {
                tmp___6 = inptr;
                inptr++;
                tmp___8 = (int) inbuf[tmp___6];
              }

              b |= ((ulg) ((uch) tmp___8)) << k;
              k += 8U;
            }

            while_break___3:
            ;

          }
          n = ((unsigned int) t->v.n) + (((unsigned int) b) & ((unsigned int) mask_bits[e]));
          b >>= e;
          k -= e;
          {
            while (1)
            {
              while_continue___4:
              ;

              if (! (k < ((unsigned int) bd)))
              {
                goto while_break___4;
              }

              if (inptr < insize)
              {
                tmp___9 = inptr;
                inptr++;
                tmp___11 = (int) inbuf[tmp___9];
              }
              else
              {
                {
                  tmp___10 = fill_inbuf(0);
                  tmp___11 = tmp___10;
                }
              }

              b |= ((ulg) ((uch) tmp___11)) << k;
              k += 8U;
            }

            while_break___4:
            ;

          }
          t = td + (((unsigned int) b) & md);
          e = (unsigned int) t->e;
          if (e > 16U)
          {
            {
              while (1)
              {
                while_continue___5:
                ;

                if (e == 99U)
                {
                  _Exit(-1);
                }

                b >>= (int) t->b;
                k -= (unsigned int) t->b;
                e -= 16U;
                {
                  while (1)
                  {
                    while_continue___6:
                    ;

                    if (! (k < e))
                    {
                      goto while_break___6;
                    }

                    if (inptr < insize)
                    {
                      tmp___12 = inptr;
                      inptr++;
                      tmp___14 = (int) inbuf[tmp___12];
                    }

                    b |= ((ulg) ((uch) tmp___14)) << k;
                    k += 8U;
                  }

                  while_break___6:
                  ;

                }
                t = t->v.t + (((unsigned int) b) & ((unsigned int) mask_bits[e]));
                e = (unsigned int) t->e;
                if (! (e > 16U))
                {
                  goto while_break___5;
                }

              }

              while_break___5:
              ;

            }
          }

          b >>= (int) t->b;
          k -= (unsigned int) t->b;
          {
            while (1)
            {
              while_continue___7:
              ;

              if (! (k < e))
              {
                goto while_break___7;
              }

              if (inptr < insize)
              {
                tmp___15 = inptr;
                inptr++;
                tmp___17 = (int) inbuf[tmp___15];
              }

              b |= ((ulg) ((uch) tmp___17)) << k;
              k += 8U;
            }

            while_break___7:
            ;

          }
          d = (w - ((unsigned int) t->v.n)) - (((unsigned int) b) & ((unsigned int) mask_bits[e]));
          b >>= e;
          k -= e;
          {
            while (1)
            {
              while_continue___8:
              ;

              d &= 32767U;
              if (d > w)
              {
                tmp___19 = d;
              }
              else
              {
                tmp___19 = w;
              }

              e = 32768U - tmp___19;
              if (e > n)
              {
                e = n;
              }
              else
              {
                e = e;
              }

              n -= e;
              if ((w - d) >= e)
              {
                {
                  memcpy((void *) (window + w), (const void *) (window + d), (size_t) e);
                  w += e;
                  d += e;
                }
              }
              else
              {
                {
                  while (1)
                  {
                    while_continue___9:
                    ;

                    tmp___20 = w;
                    w++;
                    tmp___21 = d;
                    d++;
                    window[tmp___20] = window[tmp___21];
                    e--;
                    if (! e)
                    {
                      goto while_break___9;
                    }

                  }

                  while_break___9:
                  ;

                }
              }

              if (w == 32768U)
              {
                {
                  outcnt = w;
                  flush_window();
                  w = 0U;
                }
              }

              if (! n)
              {
                goto while_break___8;
              }

            }

            while_break___8:
            ;

          }
        }

      }

      while_break:
      ;

    }
    outcnt = w;
    bb = b;
    bk = k;
    return 0;
  }
}

int inflate_stored(void)
{
  _Exit(-1);
}

int inflate_fixed(void)
{
  _Exit(-1);
}

int inflate_dynamic(void)
{
  int i___0;
  unsigned int j___0;
  unsigned int l;
  unsigned int m;
  unsigned int n;
  struct huft *tl;
  struct huft *td;
  int bl;
  int bd;
  unsigned int nb;
  unsigned int nl;
  unsigned int nd;
  unsigned int ll[316];
  register ulg b;
  register unsigned int k;
  unsigned int tmp;
  int tmp___0;
  int tmp___1;
  unsigned int tmp___2;
  int tmp___3;
  int tmp___4;
  unsigned int tmp___5;
  int tmp___6;
  int tmp___7;
  unsigned int tmp___8;
  int tmp___9;
  int tmp___10;
  unsigned int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  unsigned int tmp___15;
  int tmp___16;
  int tmp___17;
  int tmp___18;
  unsigned int tmp___19;
  unsigned int tmp___20;
  int tmp___21;
  int tmp___22;
  int tmp___23;
  unsigned int tmp___24;
  unsigned int tmp___25;
  int tmp___26;
  int tmp___27;
  int tmp___28;
  unsigned int tmp___29;
  int tmp___30;
  void *__cil_tmp48;
  {
    b = bb;
    k = bk;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (k < 5U))
        {
          goto while_break;
        }

        if (inptr < insize)
        {
          tmp = inptr;
          inptr++;
          tmp___1 = (int) inbuf[tmp];
        }

        b |= ((ulg) ((uch) tmp___1)) << k;
        k += 8U;
      }

      while_break:
      ;

    }
    nl = 257U + (((unsigned int) b) & 31U);
    b >>= 5;
    k -= 5U;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (k < 5U))
        {
          goto while_break___0;
        }

        if (inptr < insize)
        {
          tmp___2 = inptr;
          inptr++;
          tmp___4 = (int) inbuf[tmp___2];
        }

        b |= ((ulg) ((uch) tmp___4)) << k;
        k += 8U;
      }

      while_break___0:
      ;

    }
    nd = 1U + (((unsigned int) b) & 31U);
    b >>= 5;
    k -= 5U;
    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (k < 4U))
        {
          goto while_break___1;
        }

        if (inptr < insize)
        {
          tmp___5 = inptr;
          inptr++;
          tmp___7 = (int) inbuf[tmp___5];
        }

        b |= ((ulg) ((uch) tmp___7)) << k;
        k += 8U;
      }

      while_break___1:
      ;

    }
    nb = 4U + (((unsigned int) b) & 15U);
    b >>= 4;
    k -= 4U;
    if (nl > 286U)
    {
      _Exit(-1);
    }
    else
      if (nd > 30U)
    {
      _Exit(-1);
    }


    j___0 = 0U;
    {
      while (1)
      {
        while_continue___2:
        ;

        if (! (j___0 < nb))
        {
          goto while_break___2;
        }

        {
          while (1)
          {
            while_continue___3:
            ;

            if (! (k < 3U))
            {
              goto while_break___3;
            }

            if (inptr < insize)
            {
              tmp___8 = inptr;
              inptr++;
              tmp___10 = (int) inbuf[tmp___8];
            }

            b |= ((ulg) ((uch) tmp___10)) << k;
            k += 8U;
          }

          while_break___3:
          ;

        }
        ll[border[j___0]] = ((unsigned int) b) & 7U;
        b >>= 3;
        k -= 3U;
        j___0++;
      }

      while_break___2:
      ;

    }
    {
      while (1)
      {
        while_continue___4:
        ;

        if (! (j___0 < 19U))
        {
          goto while_break___4;
        }

        ll[border[j___0]] = 0U;
        j___0++;
      }

      while_break___4:
      ;

    }
    {
      bl = 7;
      i___0 = huft_build(ll, 19U, 19U, (ush *) ((void *) 0), (ush *) ((void *) 0), & tl, & bl);
    }
    if (i___0 != 0)
    {
      if (i___0 == 1)
      {
        _Exit(-1);
      }

    }

    n = nl + nd;
    m = (unsigned int) mask_bits[bl];
    l = 0U;
    i___0 = (int) l;
    {
      while (1)
      {
        while_continue___5:
        ;

        if (! (((unsigned int) i___0) < n))
        {
          goto while_break___5;
        }

        {
          while (1)
          {
            while_continue___6:
            ;

            if (! (k < ((unsigned int) bl)))
            {
              goto while_break___6;
            }

            if (inptr < insize)
            {
              tmp___11 = inptr;
              inptr++;
              tmp___13 = (int) inbuf[tmp___11];
            }

            b |= ((ulg) ((uch) tmp___13)) << k;
            k += 8U;
          }

          while_break___6:
          ;

        }
        td = tl + (((unsigned int) b) & m);
        j___0 = (unsigned int) td->b;
        b >>= j___0;
        k -= j___0;
        j___0 = (unsigned int) td->v.n;
        if (j___0 < 16U)
        {
          tmp___14 = i___0;
          i___0++;
          l = j___0;
          ll[tmp___14] = l;
        }
        else
          if (j___0 == 16U)
        {
          {
            while (1)
            {
              while_continue___7:
              ;

              if (! (k < 2U))
              {
                goto while_break___7;
              }

              if (inptr < insize)
              {
                _Exit(-1);
              }

            }

            while_break___7:
            ;

          }
          j___0 = 3U + (((unsigned int) b) & 3U);
          b >>= 2;
          k -= 2U;
          if ((((unsigned int) i___0) + j___0) > n)
          {
            _Exit(-1);
          }

          {
            while (1)
            {
              while_continue___8:
              ;

              tmp___19 = j___0;
              j___0--;
              if (! tmp___19)
              {
                goto while_break___8;
              }

              tmp___18 = i___0;
              i___0++;
              ll[tmp___18] = l;
            }

            while_break___8:
            ;

          }
        }
        else
          if (j___0 == 17U)
        {
          {
            while (1)
            {
              while_continue___9:
              ;

              if (! (k < 3U))
              {
                _Exit(-1);
              }

              if (inptr < insize)
              {
                _Exit(-1);
              }

            }

            while_break___9:
            ;

          }
          if ((((unsigned int) i___0) + j___0) > n)
          {
            _Exit(-1);
          }

          {
            while (1)
            {
              while_continue___10:
              ;

              if (! tmp___24)
              {
                _Exit(-1);
              }

            }

            while_break___10:
            ;

          }
        }
        else
        {
          {
            while (1)
            {
              while_continue___11:
              ;

              if (! (k < 7U))
              {
                _Exit(-1);
              }

              if (inptr < insize)
              {
                _Exit(-1);
              }

            }

            while_break___11:
            ;

          }
          if ((((unsigned int) i___0) + j___0) > n)
          {
            _Exit(-1);
          }

          {
            while (1)
            {
              while_continue___12:
              ;

              if (! tmp___29)
              {
                _Exit(-1);
              }

            }

            while_break___12:
            ;

          }
        }



      }

      while_break___5:
      ;

    }
    {
      huft_free(tl);
      bb = b;
      bk = k;
      bl = lbits;
      i___0 = huft_build(ll, nl, 257U, cplens, cplext, & tl, & bl);
    }
    if (i___0 != 0)
    {
      if (i___0 == 1)
      {
        _Exit(-1);
      }

    }

    {
      bd = dbits;
      i___0 = huft_build(ll + nl, nd, 0U, cpdist, cpdext, & td, & bd);
    }
    if (i___0 != 0)
    {
      if (i___0 == 1)
      {
        _Exit(-1);
      }

      {
      }
    }

    {
      tmp___30 = inflate_codes(tl, td, bl, bd);
    }
    if (tmp___30)
    {
      _Exit(-1);
    }

    {
      huft_free(tl);
      huft_free(td);
    }
    return 0;
  }
}

int inflate_block(int *e)
{
  unsigned int t;
  register ulg b;
  register unsigned int k;
  unsigned int tmp;
  int tmp___0;
  int tmp___1;
  unsigned int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  {
    b = bb;
    k = bk;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (k < 1U))
        {
          goto while_break;
        }

        if (inptr < insize)
        {
          tmp = inptr;
          inptr++;
          tmp___1 = (int) inbuf[tmp];
        }

        b |= ((ulg) ((uch) tmp___1)) << k;
        k += 8U;
      }

      while_break:
      ;

    }
    * e = ((int) b) & 1;
    b >>= 1;
    k--;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (k < 2U))
        {
          goto while_break___0;
        }

        if (inptr < insize)
        {
          _Exit(-1);
        }

      }

      while_break___0:
      ;

    }
    t = ((unsigned int) b) & 3U;
    b >>= 2;
    k -= 2U;
    bb = b;
    bk = k;
    if (t == 2U)
    {
      {
        tmp___5 = inflate_dynamic();
      }
      return tmp___5;
    }

    if (t == 0U)
    {
      _Exit(-1);
    }

    if (t == 1U)
    {
      _Exit(-1);
    }

  }
}

int inflate(void)
{
  int e;
  int r;
  unsigned int h;
  {
    outcnt = 0U;
    bk = 0U;
    bb = (ulg) 0;
    h = 0U;
    {
      while (1)
      {
        while_continue:
        ;

        {
          hufts = 0U;
          r = inflate_block(& e);
        }
        if (r != 0)
        {
          _Exit(-1);
        }

        if (hufts > h)
        {
          h = hufts;
        }

        if (! (! e))
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (bk >= 8U))
        {
          goto while_break___0;
        }

      }

      while_break___0:
      ;

    }
    {
      outcnt = outcnt;
      flush_window();
    }
    return 0;
  }
}

int method;
int decrypt;
int unzip(int in, int out);
int check_zipfile(int in);
char *key;
int pkzip = 0;
int ext_header = 0;
int check_zipfile(int in)
{
  _Exit(-1);
}

int unzip(int in, int out)
{
  ulg orig_crc;
  ulg orig_len___0;
  int n;
  uch buf[16];
  int res;
  int tmp;
  register ulg n___0;
  int tmp___0;
  uch c;
  unsigned int tmp___1;
  int tmp___2;
  int tmp___3;
  unsigned int tmp___4;
  ulg tmp___5;
  unsigned int tmp___6;
  int tmp___7;
  int tmp___8;
  unsigned int tmp___9;
  int tmp___10;
  int tmp___11;
  ulg tmp___12;
  void *__cil_tmp24;
  char *__cil_tmp25;
  char *__cil_tmp26;
  char *__cil_tmp27;
  char *__cil_tmp28;
  char *__cil_tmp29;
  char *__cil_tmp30;
  char *__cil_tmp31;
  {
    {
      orig_crc = (ulg) 0;
      orig_len___0 = (ulg) 0;
      ifd = in;
      ofd = out;
      updcrc((uch *) ((void *) 0), 0U);
    }
    if (pkzip)
    {
      if (! ext_header)
      {
        _Exit(-1);
      }

    }

    if (method == 8)
    {
      {
        tmp = inflate();
        res = tmp;
      }
      if (res == 3)
      {
        _Exit(-1);
      }
      else
        if (res != 0)
      {
        _Exit(-1);
      }


    }
    else
      if (pkzip)
    {
      if (method == 0)
      {
        if (decrypt)
        {
          _Exit(-1);
        }

        if (n___0 != ((((ulg) (((int) ((ush) (* ((inbuf + 18) + 0)))) | (((int) ((ush) (* ((inbuf + 18) + 1)))) << 8))) | (((ulg) (((int) ((ush) (* (((inbuf + 18) + 2) + 0)))) | (((int) ((ush) (* (((inbuf + 18) + 2) + 1)))) << 8))) << 16)) - ((unsigned long) tmp___0)))
        {
          _Exit(-1);
        }

        {
          while (1)
          {
            while_continue:
            ;

            if (! tmp___5)
            {
              _Exit(-1);
            }

            if (inptr < insize)
            {
              _Exit(-1);
            }

            if (outcnt == 32768U)
            {
              _Exit(-1);
            }

          }

          while_break:
          ;

        }
        {
        }
      }

    }


    if (! pkzip)
    {
      n = 0;
      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (n < 8))
          {
            goto while_break___0;
          }

          if (inptr < insize)
          {
            tmp___6 = inptr;
            inptr++;
            tmp___8 = (int) inbuf[tmp___6];
          }

          buf[n] = (uch) tmp___8;
          n++;
        }

        while_break___0:
        ;

      }
      orig_crc = ((ulg) (((int) ((ush) buf[0])) | (((int) ((ush) buf[1])) << 8))) | (((ulg) (((int) ((ush) (* ((buf + 2) + 0)))) | (((int) ((ush) (* ((buf + 2) + 1)))) << 8))) << 16);
      orig_len___0 = ((ulg) (((int) ((ush) (* ((buf + 4) + 0)))) | (((int) ((ush) (* ((buf + 4) + 1)))) << 8))) | (((ulg) (((int) ((ush) (* (((buf + 4) + 2) + 0)))) | (((int) ((ush) (* (((buf + 4) + 2) + 1)))) << 8))) << 16);
    }
    else
      if (ext_header)
    {
      {
        while (1)
        {
          while_continue___1:
          ;

          if (! (n < 16))
          {
            _Exit(-1);
          }

          if (inptr < insize)
          {
            _Exit(-1);
          }

        }

        while_break___1:
        ;

      }
    }


    {
      tmp___12 = updcrc(outbuf, 0U);
    }
    if (orig_crc != tmp___12)
    {
      _Exit(-1);
    }

    if (orig_len___0 != ((ulg) bytes_out))
    {
      _Exit(-1);
    }

    if (pkzip)
    {
      if ((inptr + 4U) < insize)
      {
        _Exit(-1);
      }

    }

    pkzip = 0;
    ext_header = pkzip;
    return 0;
  }
}

int file_read(char *buf, unsigned int size);
void bi_init(file_t zipfile);
void send_bits(int value, int length);
unsigned int bi_reverse(unsigned int code, int len);
void bi_windup(void);
void copy_block(char *buf, unsigned int len, int header);
int (*read_buf)(char *buf, unsigned int size);
static file_t zfile;
static unsigned short bi_buf;
static int bi_valid;
void bi_init(file_t zipfile)
{
  {
    zfile = zipfile;
    bi_buf = (unsigned short) 0;
    bi_valid = 0;
    if (zfile != (- 1))
    {
      read_buf = & file_read;
    }

    return;
  }
}

void send_bits(int value, int length)
{
  unsigned int tmp;
  unsigned int tmp___0;
  unsigned int tmp___1;
  unsigned int tmp___2;
  {
    if (bi_valid > (((int) (16UL * (sizeof(char)))) - length))
    {
      bi_buf = (unsigned short) (((int) bi_buf) | (value << bi_valid));
      if (outcnt < 16382U)
      {
        tmp = outcnt;
        outcnt++;
        outbuf[tmp] = (uch) (((int) bi_buf) & 255);
        tmp___0 = outcnt;
        outcnt++;
        outbuf[tmp___0] = (uch) (((int) bi_buf) >> 8);
      }
      else
      {
        tmp___1 = outcnt;
        outcnt++;
        outbuf[tmp___1] = (uch) (((int) bi_buf) & 255);
        if (outcnt == 16384U)
        {
          _Exit(-1);
        }

        tmp___2 = outcnt;
        outcnt++;
        outbuf[tmp___2] = (uch) (((int) bi_buf) >> 8);
        if (outcnt == 16384U)
        {
          {
            flush_outbuf();
          }
        }

      }

      bi_buf = (unsigned short) (((int) ((ush) value)) >> ((16UL * (sizeof(char))) - ((unsigned long) bi_valid)));
      bi_valid = (int) (((unsigned long) bi_valid) + (((unsigned long) length) - (16UL * (sizeof(char)))));
    }
    else
    {
      bi_buf = (unsigned short) (((int) bi_buf) | (value << bi_valid));
      bi_valid += length;
    }

    return;
  }
}

unsigned int bi_reverse(unsigned int code, int len)
{
  register unsigned int res;
  {
    res = 0U;
    {
      while (1)
      {
        while_continue:
        ;

        res |= code & 1U;
        code >>= 1;
        res <<= 1;
        len--;
        if (! (len > 0))
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    return res >> 1;
  }
}

void bi_windup(void)
{
  unsigned int tmp;
  unsigned int tmp___0;
  unsigned int tmp___1;
  unsigned int tmp___2;
  unsigned int tmp___3;
  {
    if (bi_valid > 8)
    {
      if (outcnt < 16382U)
      {
        _Exit(-1);
      }
      else
      {
        if (outcnt == 16384U)
        {
          _Exit(-1);
        }

        if (outcnt == 16384U)
        {
          _Exit(-1);
        }

      }

    }
    else
      if (bi_valid > 0)
    {
      tmp___3 = outcnt;
      outcnt++;
      outbuf[tmp___3] = (uch) bi_buf;
      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

    }


    bi_buf = (unsigned short) 0;
    bi_valid = 0;
    return;
  }
}

void copy_block(char *buf, unsigned int len, int header)
{
  _Exit(-1);
}

int level;
void ct_init(ush *attr, int *methodp);
int ct_tally(int dist, int lc);
ulg flush_block(char *buf, ulg stored_len, int eof);
static int extra_lbits[29] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0};
static int extra_dbits[30] = {0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13};
static int extra_blbits[19] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 7};
static ct_data dyn_ltree[573];
static ct_data dyn_dtree[61];
static ct_data static_ltree[288];
static ct_data static_dtree[30];
static ct_data bl_tree[39];
static tree_desc l_desc = {dyn_ltree, static_ltree, extra_lbits, 257, 286, 15, 0};
static tree_desc d_desc = {dyn_dtree, static_dtree, extra_dbits, 0, 30, 15, 0};
static tree_desc bl_desc = {bl_tree, (ct_data *) 0, extra_blbits, 0, 19, 7, 0};
static ush bl_count[16];
static uch bl_order[19] = {(uch) 16, (uch) 17, (uch) 18, (uch) 0, (uch) 8, (uch) 7, (uch) 9, (uch) 6, (uch) 10, (uch) 5, (uch) 11, (uch) 4, (uch) 12, (uch) 3, (uch) 13, (uch) 2, (uch) 14, (uch) 1, (uch) 15};
static int heap[573];
static int heap_len;
static int heap_max;
static uch depth[573];
static uch length_code[256];
static uch dist_code[512];
static int base_length[29];
static int base_dist[30];
static uch flag_buf[4096];
static unsigned int last_lit;
static unsigned int last_dist;
static unsigned int last_flags;
static uch flags;
static uch flag_bit;
static ulg opt_len;
static ulg static_len;
static ulg compressed_len;
static ulg input_len;
ush *file_type;
int *file_method;
long block_start;
unsigned int strstart;
static void init_block(void);
static void pqdownheap(ct_data *tree, int k);
static void gen_bitlen(tree_desc *desc);
static void gen_codes(ct_data *tree, int max_code);
static void build_tree___0(tree_desc *desc);
static void scan_tree(ct_data *tree, int max_code);
static void send_tree(ct_data *tree, int max_code);
static int build_bl_tree(void);
static void send_all_trees(int lcodes, int dcodes, int blcodes);
static void compress_block(ct_data *ltree, ct_data *dtree);
static void set_file_type(void);
void ct_init(ush *attr, int *methodp)
{
  int n;
  int bits;
  int length;
  int code;
  int dist;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  {
    file_type = attr;
    file_method = methodp;
    input_len = (ulg) 0L;
    compressed_len = input_len;
    if (((int) static_dtree[0].dl.len) != 0)
    {
      _Exit(-1);
    }

    length = 0;
    code = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (code < 28))
        {
          goto while_break;
        }

        base_length[code] = length;
        n = 0;
        {
          while (1)
          {
            while_continue___0:
            ;

            if (! (n < (1 << extra_lbits[code])))
            {
              goto while_break___0;
            }

            tmp = length;
            length++;
            length_code[tmp] = (uch) code;
            n++;
          }

          while_break___0:
          ;

        }
        code++;
      }

      while_break:
      ;

    }
    length_code[length - 1] = (uch) code;
    dist = 0;
    code = 0;
    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (code < 16))
        {
          goto while_break___1;
        }

        base_dist[code] = dist;
        n = 0;
        {
          while (1)
          {
            while_continue___2:
            ;

            if (! (n < (1 << extra_dbits[code])))
            {
              goto while_break___2;
            }

            tmp___0 = dist;
            dist++;
            dist_code[tmp___0] = (uch) code;
            n++;
          }

          while_break___2:
          ;

        }
        code++;
      }

      while_break___1:
      ;

    }
    dist >>= 7;
    {
      while (1)
      {
        while_continue___3:
        ;

        if (! (code < 30))
        {
          goto while_break___3;
        }

        base_dist[code] = dist << 7;
        n = 0;
        {
          while (1)
          {
            while_continue___4:
            ;

            if (! (n < (1 << (extra_dbits[code] - 7))))
            {
              goto while_break___4;
            }

            tmp___1 = dist;
            dist++;
            dist_code[256 + tmp___1] = (uch) code;
            n++;
          }

          while_break___4:
          ;

        }
        code++;
      }

      while_break___3:
      ;

    }
    bits = 0;
    {
      while (1)
      {
        while_continue___5:
        ;

        if (! (bits <= 15))
        {
          goto while_break___5;
        }

        bl_count[bits] = (ush) 0;
        bits++;
      }

      while_break___5:
      ;

    }
    n = 0;
    {
      while (1)
      {
        while_continue___6:
        ;

        if (! (n <= 143))
        {
          goto while_break___6;
        }

        tmp___2 = n;
        n++;
        static_ltree[tmp___2].dl.len = (ush) 8;
        bl_count[8] = (ush) (((int) bl_count[8]) + 1);
      }

      while_break___6:
      ;

    }
    {
      while (1)
      {
        while_continue___7:
        ;

        if (! (n <= 255))
        {
          goto while_break___7;
        }

        tmp___3 = n;
        n++;
        static_ltree[tmp___3].dl.len = (ush) 9;
        bl_count[9] = (ush) (((int) bl_count[9]) + 1);
      }

      while_break___7:
      ;

    }
    {
      while (1)
      {
        while_continue___8:
        ;

        if (! (n <= 279))
        {
          goto while_break___8;
        }

        tmp___4 = n;
        n++;
        static_ltree[tmp___4].dl.len = (ush) 7;
        bl_count[7] = (ush) (((int) bl_count[7]) + 1);
      }

      while_break___8:
      ;

    }
    {
      while (1)
      {
        while_continue___9:
        ;

        if (! (n <= 287))
        {
          goto while_break___9;
        }

        tmp___5 = n;
        n++;
        static_ltree[tmp___5].dl.len = (ush) 8;
        bl_count[8] = (ush) (((int) bl_count[8]) + 1);
      }

      while_break___9:
      ;

    }
    {
      gen_codes(static_ltree, 287);
      n = 0;
    }
    {
      while (1)
      {
        while_continue___10:
        ;

        if (! (n < 30))
        {
          goto while_break___10;
        }

        {
          static_dtree[n].dl.len = (ush) 5;
          static_dtree[n].fc.code = (ush) bi_reverse((unsigned int) n, 5);
          n++;
        }
      }

      while_break___10:
      ;

    }
    {
      init_block();
    }
    return;
  }
}

static void init_block(void)
{
  int n;
  {
    n = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (n < 286))
        {
          goto while_break;
        }

        dyn_ltree[n].fc.freq = (ush) 0;
        n++;
      }

      while_break:
      ;

    }
    n = 0;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (n < 30))
        {
          goto while_break___0;
        }

        dyn_dtree[n].fc.freq = (ush) 0;
        n++;
      }

      while_break___0:
      ;

    }
    n = 0;
    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (n < 19))
        {
          goto while_break___1;
        }

        bl_tree[n].fc.freq = (ush) 0;
        n++;
      }

      while_break___1:
      ;

    }
    dyn_ltree[256].fc.freq = (ush) 1;
    static_len = (ulg) 0L;
    opt_len = static_len;
    last_flags = 0U;
    last_dist = last_flags;
    last_lit = last_dist;
    flags = (uch) 0;
    flag_bit = (uch) 1;
    return;
  }
}

static void pqdownheap(ct_data *tree, int k)
{
  int v;
  int j___0;
  {
    v = heap[k];
    j___0 = k << 1;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (j___0 <= heap_len))
        {
          goto while_break;
        }

        if (j___0 < heap_len)
        {
          if (((int) (tree + heap[j___0 + 1])->fc.freq) < ((int) (tree + heap[j___0])->fc.freq))
          {
            j___0++;
          }
          else
            if (((int) (tree + heap[j___0 + 1])->fc.freq) == ((int) (tree + heap[j___0])->fc.freq))
          {
            if (((int) depth[heap[j___0 + 1]]) <= ((int) depth[heap[j___0]]))
            {
              j___0++;
            }

          }


        }

        if (((int) (tree + v)->fc.freq) < ((int) (tree + heap[j___0])->fc.freq))
        {
          goto while_break;
        }
        else
          if (((int) (tree + v)->fc.freq) == ((int) (tree + heap[j___0])->fc.freq))
        {
          if (((int) depth[v]) <= ((int) depth[heap[j___0]]))
          {
            goto while_break;
          }

        }


        heap[k] = heap[j___0];
        k = j___0;
        j___0 <<= 1;
      }

      while_break:
      ;

    }
    heap[k] = v;
    return;
  }
}

static void gen_bitlen(tree_desc *desc)
{
  ct_data *tree;
  int *extra;
  int base;
  int max_code;
  int max_length;
  ct_data *stree;
  int h;
  int n;
  int m;
  int bits;
  int xbits;
  ush f;
  int overflow;
  {
    tree = desc->dyn_tree;
    extra = desc->extra_bits;
    base = desc->extra_base;
    max_code = desc->max_code;
    max_length = desc->max_length;
    stree = desc->static_tree;
    overflow = 0;
    bits = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (bits <= 15))
        {
          goto while_break;
        }

        bl_count[bits] = (ush) 0;
        bits++;
      }

      while_break:
      ;

    }
    (tree + heap[heap_max])->dl.len = (ush) 0;
    h = heap_max + 1;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (h < 573))
        {
          goto while_break___0;
        }

        n = heap[h];
        bits = ((int) (tree + ((int) (tree + n)->dl.dad))->dl.len) + 1;
        if (bits > max_length)
        {
          _Exit(-1);
        }

        (tree + n)->dl.len = (ush) bits;
        if (n > max_code)
        {
          goto __Cont;
        }

        bl_count[bits] = (ush) (((int) bl_count[bits]) + 1);
        xbits = 0;
        if (n >= base)
        {
          xbits = * (extra + (n - base));
        }

        f = (tree + n)->fc.freq;
        opt_len += ((ulg) f) * ((ulg) (bits + xbits));
        if (stree)
        {
          static_len += ((ulg) f) * ((ulg) (((int) (stree + n)->dl.len) + xbits));
        }

        __Cont:
        h++;

      }

      while_break___0:
      ;

    }
    if (overflow == 0)
    {
      return;
    }

    {
      while (1)
      {
        while_continue___1:
        ;

        {
          while (1)
          {
            while_continue___2:
            ;

            if (! (((int) bl_count[bits]) == 0))
            {
              _Exit(-1);
            }

          }

          while_break___2:
          ;

        }
        if (! (overflow > 0))
        {
          _Exit(-1);
        }

      }

      while_break___1:
      ;

    }
    {
      while (1)
      {
        while_continue___3:
        ;

        if (! (bits != 0))
        {
          _Exit(-1);
        }

        {
          while (1)
          {
            while_continue___4:
            ;

            if (! (n != 0))
            {
              _Exit(-1);
            }

            if (m > max_code)
            {
              _Exit(-1);
            }

            if (((unsigned int) (tree + m)->dl.len) != ((unsigned int) bits))
            {
              _Exit(-1);
            }

          }

          while_break___4:
          ;

        }
      }

      while_break___3:
      ;

    }
  }
}

static void gen_codes(ct_data *tree, int max_code)
{
  ush next_code[16];
  ush code;
  int bits;
  int n;
  int len;
  ush tmp;
  void *__cil_tmp10;
  {
    code = (ush) 0;
    bits = 1;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (bits <= 15))
        {
          goto while_break;
        }

        code = (ush) ((((int) code) + ((int) bl_count[bits - 1])) << 1);
        next_code[bits] = code;
        bits++;
      }

      while_break:
      ;

    }
    n = 0;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (n <= max_code))
        {
          goto while_break___0;
        }

        len = (int) (tree + n)->dl.len;
        if (len == 0)
        {
          goto __Cont;
        }

        {
          tmp = next_code[len];
          next_code[len] = (ush) (((int) next_code[len]) + 1);
          (tree + n)->fc.code = (ush) bi_reverse((unsigned int) tmp, len);
        }
        __Cont:
        n++;

      }

      while_break___0:
      ;

    }
    return;
  }
}

static void build_tree___0(tree_desc *desc)
{
  ct_data *tree;
  ct_data *stree;
  int elems;
  int n;
  int m;
  int max_code;
  int node;
  int new;
  int tmp;
  int tmp___0;
  int tmp___1;
  ush tmp___2;
  int tmp___3;
  {
    tree = desc->dyn_tree;
    stree = desc->static_tree;
    elems = desc->elems;
    max_code = - 1;
    node = elems;
    heap_len = 0;
    heap_max = 573;
    n = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (n < elems))
        {
          goto while_break;
        }

        if (((int) (tree + n)->fc.freq) != 0)
        {
          heap_len++;
          max_code = n;
          heap[heap_len] = max_code;
          depth[n] = (uch) 0;
        }
        else
        {
          (tree + n)->dl.len = (ush) 0;
        }

        n++;
      }

      while_break:
      ;

    }
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (heap_len < 2))
        {
          goto while_break___0;
        }

        if (max_code < 2)
        {
          _Exit(-1);
        }

        if (stree)
        {
          _Exit(-1);
        }

      }

      while_break___0:
      ;

    }
    desc->max_code = max_code;
    n = heap_len / 2;
    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (n >= 1))
        {
          goto while_break___1;
        }

        {
          pqdownheap(tree, n);
          n--;
        }
      }

      while_break___1:
      ;

    }
    {
      while (1)
      {
        while_continue___2:
        ;

        {
          n = heap[1];
          tmp___0 = heap_len;
          heap_len--;
          heap[1] = heap[tmp___0];
          pqdownheap(tree, 1);
          m = heap[1];
          heap_max--;
          heap[heap_max] = n;
          heap_max--;
          heap[heap_max] = m;
          (tree + node)->fc.freq = (ush) (((int) (tree + n)->fc.freq) + ((int) (tree + m)->fc.freq));
        }
        if (((int) depth[n]) >= ((int) depth[m]))
        {
          tmp___1 = (int) depth[n];
        }
        else
        {
          tmp___1 = (int) depth[m];
        }

        {
          depth[node] = (uch) (tmp___1 + 1);
          tmp___2 = (ush) node;
          (tree + m)->dl.dad = tmp___2;
          (tree + n)->dl.dad = tmp___2;
          tmp___3 = node;
          node++;
          heap[1] = tmp___3;
          pqdownheap(tree, 1);
        }
        if (! (heap_len >= 2))
        {
          goto while_break___2;
        }

      }

      while_break___2:
      ;

    }
    {
      heap_max--;
      heap[heap_max] = heap[1];
      gen_bitlen(desc);
      gen_codes(tree, max_code);
    }
    return;
  }
}

static void scan_tree(ct_data *tree, int max_code)
{
  int n;
  int prevlen;
  int curlen;
  int nextlen;
  int count;
  int max_count;
  int min_count;
  {
    prevlen = - 1;
    nextlen = (int) (tree + 0)->dl.len;
    count = 0;
    max_count = 7;
    min_count = 4;
    if (nextlen == 0)
    {
      _Exit(-1);
    }

    (tree + (max_code + 1))->dl.len = (ush) 65535;
    n = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (n <= max_code))
        {
          goto while_break;
        }

        curlen = nextlen;
        nextlen = (int) (tree + (n + 1))->dl.len;
        count++;
        if (count < max_count)
        {
          if (curlen == nextlen)
          {
            goto __Cont;
          }
          else
          {
            goto _L;
          }

        }

        _L:
        ;

        if (count < min_count)
        {
          bl_tree[curlen].fc.freq = (ush) (((int) bl_tree[curlen].fc.freq) + count);
        }
        else
          if (curlen != 0)
        {
          if (curlen != prevlen)
          {
            bl_tree[curlen].fc.freq = (ush) (((int) bl_tree[curlen].fc.freq) + 1);
          }

          bl_tree[16].fc.freq = (ush) (((int) bl_tree[16].fc.freq) + 1);
        }
        else
          if (count <= 10)
        {
          _Exit(-1);
        }



        count = 0;
        prevlen = curlen;
        if (nextlen == 0)
        {
          max_count = 138;
          min_count = 3;
        }
        else
          if (curlen == nextlen)
        {
          _Exit(-1);
        }
        else
        {
          max_count = 7;
          min_count = 4;
        }


        __Cont:
        n++;

      }

      while_break:
      ;

    }
    return;
  }
}

static void send_tree(ct_data *tree, int max_code)
{
  int n;
  int prevlen;
  int curlen;
  int nextlen;
  int count;
  int max_count;
  int min_count;
  {
    prevlen = - 1;
    nextlen = (int) (tree + 0)->dl.len;
    count = 0;
    max_count = 7;
    min_count = 4;
    if (nextlen == 0)
    {
      _Exit(-1);
    }

    n = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (n <= max_code))
        {
          goto while_break;
        }

        curlen = nextlen;
        nextlen = (int) (tree + (n + 1))->dl.len;
        count++;
        if (count < max_count)
        {
          if (curlen == nextlen)
          {
            goto __Cont;
          }
          else
          {
            goto _L;
          }

        }

        _L:
        ;

        if (count < min_count)
        {
          {
            while (1)
            {
              while_continue___0:
              ;

              {
                send_bits((int) bl_tree[curlen].fc.code, (int) bl_tree[curlen].dl.len);
                count--;
              }
              if (! (count != 0))
              {
                goto while_break___0;
              }

            }

            while_break___0:
            ;

          }
        }
        else
          if (curlen != 0)
        {
          if (curlen != prevlen)
          {
            {
              send_bits((int) bl_tree[curlen].fc.code, (int) bl_tree[curlen].dl.len);
              count--;
            }
          }

          {
            send_bits((int) bl_tree[16].fc.code, (int) bl_tree[16].dl.len);
            send_bits(count - 3, 2);
          }
        }
        else
          if (count <= 10)
        {
          _Exit(-1);
        }



        count = 0;
        prevlen = curlen;
        if (nextlen == 0)
        {
          max_count = 138;
          min_count = 3;
        }
        else
          if (curlen == nextlen)
        {
          _Exit(-1);
        }
        else
        {
          max_count = 7;
          min_count = 4;
        }


        __Cont:
        n++;

      }

      while_break:
      ;

    }
    return;
  }
}

static int build_bl_tree(void)
{
  int max_blindex;
  {
    {
      scan_tree(dyn_ltree, l_desc.max_code);
      scan_tree(dyn_dtree, d_desc.max_code);
      build_tree___0(& bl_desc);
      max_blindex = 18;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (max_blindex >= 3))
        {
          _Exit(-1);
        }

        if (((int) bl_tree[bl_order[max_blindex]].dl.len) != 0)
        {
          goto while_break;
        }

        max_blindex--;
      }

      while_break:
      ;

    }
    opt_len += (ulg) ((((3 * (max_blindex + 1)) + 5) + 5) + 4);
    return max_blindex;
  }
}

static void send_all_trees(int lcodes, int dcodes, int blcodes)
{
  int rank;
  {
    {
      send_bits(lcodes - 257, 5);
      send_bits(dcodes - 1, 5);
      send_bits(blcodes - 4, 4);
      rank = 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (rank < blcodes))
        {
          goto while_break;
        }

        {
          send_bits((int) bl_tree[bl_order[rank]].dl.len, 3);
          rank++;
        }
      }

      while_break:
      ;

    }
    {
      send_tree(dyn_ltree, lcodes - 1);
      send_tree(dyn_dtree, dcodes - 1);
    }
    return;
  }
}

ulg flush_block(char *buf, ulg stored_len, int eof)
{
  ulg opt_lenb;
  ulg static_lenb;
  int max_blindex;
  {
    flag_buf[last_flags] = flags;
    if (((int) (* file_type)) == 65535)
    {
      _Exit(-1);
    }

    {
      build_tree___0(& l_desc);
      build_tree___0(& d_desc);
      max_blindex = build_bl_tree();
      opt_lenb = ((opt_len + 3UL) + 7UL) >> 3;
      static_lenb = ((static_len + 3UL) + 7UL) >> 3;
      input_len += stored_len;
    }
    if (static_lenb <= opt_lenb)
    {
      _Exit(-1);
    }

    if (stored_len <= opt_lenb)
    {
      if (eof)
      {
        _Exit(-1);
      }

    }

    _L___2:
    ;

    if ((stored_len + 4UL) <= opt_lenb)
    {
      if (((unsigned long) buf) != ((unsigned long) ((char *) 0)))
      {
        _Exit(-1);
      }

    }

    _L:
    ;

    if (static_lenb == opt_lenb)
    {
      _Exit(-1);
    }
    else
    {
      {
        send_bits((2 << 1) + eof, 3);
        send_all_trees(l_desc.max_code + 1, d_desc.max_code + 1, max_blindex + 1);
        compress_block(dyn_ltree, dyn_dtree);
        compressed_len += 3UL + opt_len;
      }
    }

    {
      init_block();
    }
    if (eof)
    {
      {
        bi_windup();
        compressed_len += 7UL;
      }
    }

    return compressed_len >> 3;
  }
}

int ct_tally(int dist, int lc)
{
  unsigned int tmp;
  int tmp___0;
  unsigned int tmp___1;
  unsigned int tmp___2;
  ulg out_length;
  ulg in_length;
  int dcode;
  int tmp___3;
  {
    tmp = last_lit;
    last_lit++;
    inbuf[tmp] = (uch) lc;
    if (dist == 0)
    {
      dyn_ltree[lc].fc.freq = (ush) (((int) dyn_ltree[lc].fc.freq) + 1);
    }
    else
    {
      dist--;
      dyn_ltree[(((int) length_code[lc]) + 256) + 1].fc.freq = (ush) (((int) dyn_ltree[(((int) length_code[lc]) + 256) + 1].fc.freq) + 1);
      if (dist < 256)
      {
        tmp___0 = (int) dist_code[dist];
      }
      else
      {
        tmp___0 = (int) dist_code[256 + (dist >> 7)];
      }

      dyn_dtree[tmp___0].fc.freq = (ush) (((int) dyn_dtree[tmp___0].fc.freq) + 1);
      tmp___1 = last_dist;
      last_dist++;
      d_buf[tmp___1] = (ush) dist;
      flags = (uch) (((int) flags) | ((int) flag_bit));
    }

    flag_bit = (uch) (((int) flag_bit) << 1);
    if ((last_lit & 7U) == 0U)
    {
      tmp___2 = last_flags;
      last_flags++;
      flag_buf[tmp___2] = flags;
      flags = (uch) 0;
      flag_bit = (uch) 1;
    }

    if (level > 2)
    {
      if ((last_lit & 4095U) == 0U)
      {
        out_length = ((ulg) last_lit) * 8UL;
        in_length = ((ulg) strstart) - ((ulg) block_start);
        dcode = 0;
        {
          while (1)
          {
            while_continue:
            ;

            if (! (dcode < 30))
            {
              goto while_break;
            }

            out_length += ((ulg) dyn_dtree[dcode].fc.freq) * ((ulg) (5L + ((long) extra_dbits[dcode])));
            dcode++;
          }

          while_break:
          ;

        }
        out_length >>= 3;
        if (last_dist < (last_lit / 2U))
        {
          if (out_length < (in_length / 2UL))
          {
            return 1;
          }

        }

      }

    }

    if (last_lit == 32767U)
    {
      _Exit(-1);
    }
    else
      if (last_dist == 32768U)
    {
      _Exit(-1);
    }
    else
    {
      tmp___3 = 0;
    }


    return tmp___3;
  }
}

static void compress_block(ct_data *ltree, ct_data *dtree)
{
  unsigned int dist;
  int lc;
  unsigned int lx;
  unsigned int dx;
  unsigned int fx;
  uch flag;
  unsigned int code;
  int extra;
  unsigned int tmp;
  unsigned int tmp___0;
  unsigned int tmp___1;
  {
    lx = 0U;
    dx = 0U;
    fx = 0U;
    flag = (uch) 0;
    if (last_lit != 0U)
    {
      {
        while (1)
        {
          while_continue:
          ;

          if ((lx & 7U) == 0U)
          {
            tmp = fx;
            fx++;
            flag = flag_buf[tmp];
          }

          tmp___0 = lx;
          lx++;
          lc = (int) inbuf[tmp___0];
          if ((((int) flag) & 1) == 0)
          {
            {
              send_bits((int) (ltree + lc)->fc.code, (int) (ltree + lc)->dl.len);
            }
          }
          else
          {
            {
              code = (unsigned int) length_code[lc];
              send_bits((int) (ltree + ((code + 256U) + 1U))->fc.code, (int) (ltree + ((code + 256U) + 1U))->dl.len);
              extra = extra_lbits[code];
            }
            if (extra != 0)
            {
              {
                lc -= base_length[code];
                send_bits(lc, extra);
              }
            }

            tmp___1 = dx;
            dx++;
            dist = (unsigned int) d_buf[tmp___1];
            if (dist < 256U)
            {
              code = (unsigned int) dist_code[dist];
            }
            else
            {
              code = (unsigned int) dist_code[256U + (dist >> 7)];
            }

            {
              send_bits((int) (dtree + code)->fc.code, (int) (dtree + code)->dl.len);
              extra = extra_dbits[code];
            }
            if (extra != 0)
            {
              {
                dist -= (unsigned int) base_dist[code];
                send_bits((int) dist, extra);
              }
            }

          }

          flag = (uch) (((int) flag) >> 1);
          if (! (lx < last_lit))
          {
            goto while_break;
          }

        }

        while_break:
        ;

      }
    }

    {
      send_bits((int) (ltree + 256)->fc.code, (int) (ltree + 256)->dl.len);
    }
    return;
  }
}

static void set_file_type(void)
{
  _Exit(-1);
}

void lm_init(int pack_level, ush *flags___0);
ulg deflate(void);
ulg window_size = 65536UL;
static unsigned int ins_h;
unsigned int prev_length;
unsigned int match_start;
static int eofile;
static unsigned int lookahead;
unsigned int max_chain_length;
static unsigned int max_lazy_match;
static int compr_level;
unsigned int good_match;
int nice_match;
static config configuration_table[10] = {{(ush) 0, (ush) 0, (ush) 0, (ush) 0}, {(ush) 4, (ush) 4, (ush) 8, (ush) 4}, {(ush) 4, (ush) 5, (ush) 16, (ush) 8}, {(ush) 4, (ush) 6, (ush) 32, (ush) 32}, {(ush) 4, (ush) 4, (ush) 16, (ush) 16}, {(ush) 8, (ush) 16, (ush) 32, (ush) 32}, {(ush) 8, (ush) 16, (ush) 128, (ush) 128}, {(ush) 8, (ush) 32, (ush) 128, (ush) 256}, {(ush) 32, (ush) 128, (ush) 258, (ush) 1024}, {(ush) 32, (ush) 258, (ush) 258, (ush) 4096}};
static void fill_window(void);
static ulg deflate_fast(void);
int longest_match(IPos cur_match);
void lm_init(int pack_level, ush *flags___0)
{
  register unsigned int j___0;
  unsigned int tmp;
  char *__cil_tmp6;
  char *__cil_tmp7;
  {
    if (pack_level < 1)
    {
      _Exit(-1);
    }
    else
      if (pack_level > 9)
    {
      _Exit(-1);
    }


    {
      compr_level = pack_level;
      memset((voidp) ((char *) (prev + 32768)), 0, ((unsigned long) ((unsigned int) (1 << 15))) * (sizeof(* (prev + 32768))));
      max_lazy_match = (unsigned int) configuration_table[pack_level].max_lazy;
      good_match = (unsigned int) configuration_table[pack_level].good_length;
      nice_match = (int) configuration_table[pack_level].nice_length;
      max_chain_length = (unsigned int) configuration_table[pack_level].max_chain;
    }
    if (pack_level == 1)
    {
      _Exit(-1);
    }
    else
      if (pack_level == 9)
    {
      _Exit(-1);
    }


    strstart = 0U;
    block_start = 0L;
    if ((sizeof(int)) <= 2UL)
    {
      tmp = 32768U;
    }
    else
    {
      tmp = 65536U;
    }

    {
      lookahead = (unsigned int) (* read_buf)((char *) window, tmp);
    }
    if (lookahead == 0U)
    {
      _Exit(-1);
    }
    else
      if (lookahead == 4294967295U)
    {
      _Exit(-1);
    }


    eofile = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (lookahead < 262U)
        {
          if (! (! eofile))
          {
            _Exit(-1);
          }

        }
        else
        {
          goto while_break;
        }

        {
        }
      }

      while_break:
      ;

    }
    ins_h = 0U;
    j___0 = 0U;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (j___0 < 2U))
        {
          goto while_break___0;
        }

        ins_h = ((ins_h << 5) ^ ((unsigned int) window[j___0])) & (((unsigned int) (1 << 15)) - 1U);
        j___0++;
      }

      while_break___0:
      ;

    }
    return;
  }
}

int longest_match(IPos cur_match)
{
  unsigned int chain_length;
  register uch *scan;
  register uch *match;
  register int len;
  int best_len;
  IPos limit;
  unsigned int tmp;
  register uch *strend;
  register uch scan_end1;
  register uch scan_end;
  {
    chain_length = max_chain_length;
    scan = window + strstart;
    best_len = (int) prev_length;
    if (strstart > 32506U)
    {
      tmp = strstart - 32506U;
    }
    else
    {
      tmp = 0U;
    }

    limit = tmp;
    strend = (window + strstart) + 258;
    scan_end1 = * (scan + (best_len - 1));
    scan_end = * (scan + best_len);
    if (prev_length >= good_match)
    {
      chain_length >>= 2;
    }

    {
      while (1)
      {
        while_continue:
        ;

        match = window + cur_match;
        if (((int) (* (match + best_len))) != ((int) scan_end))
        {
          goto __Cont;
        }
        else
          if (((int) (* (match + (best_len - 1)))) != ((int) scan_end1))
        {
          goto __Cont;
        }
        else
          if (((int) (* match)) != ((int) (* scan)))
        {
          goto __Cont;
        }
        else
        {
          match++;
          if (((int) (* match)) != ((int) (* (scan + 1))))
          {
            goto __Cont;
          }

        }



        scan += 2;
        match++;
        {
          while (1)
          {
            while_continue___0:
            ;

            scan++;
            match++;
            if (((int) (* scan)) == ((int) (* match)))
            {
              scan++;
              match++;
              if (((int) (* scan)) == ((int) (* match)))
              {
                scan++;
                match++;
                if (((int) (* scan)) == ((int) (* match)))
                {
                  scan++;
                  match++;
                  if (((int) (* scan)) == ((int) (* match)))
                  {
                    scan++;
                    match++;
                    if (((int) (* scan)) == ((int) (* match)))
                    {
                      scan++;
                      match++;
                      if (((int) (* scan)) == ((int) (* match)))
                      {
                        scan++;
                        match++;
                        if (((int) (* scan)) == ((int) (* match)))
                        {
                          scan++;
                          match++;
                          if (((int) (* scan)) == ((int) (* match)))
                          {
                            if (! (((unsigned long) scan) < ((unsigned long) strend)))
                            {
                              _Exit(-1);
                            }

                          }
                          else
                          {
                            goto while_break___0;
                          }

                        }
                        else
                        {
                          goto while_break___0;
                        }

                      }
                      else
                      {
                        goto while_break___0;
                      }

                    }
                    else
                    {
                      goto while_break___0;
                    }

                  }
                  else
                  {
                    goto while_break___0;
                  }

                }
                else
                {
                  goto while_break___0;
                }

              }
              else
              {
                goto while_break___0;
              }

            }
            else
            {
              goto while_break___0;
            }

          }

          while_break___0:
          ;

        }
        len = 258 - ((int) (strend - scan));
        scan = strend - 258;
        if (len > best_len)
        {
          match_start = cur_match;
          best_len = len;
          if (len >= nice_match)
          {
            _Exit(-1);
          }

          scan_end1 = * (scan + (best_len - 1));
          scan_end = * (scan + best_len);
        }

        __Cont:
        cur_match = (IPos) prev[cur_match & 32767U];

        if (cur_match > limit)
        {
          chain_length--;
          if (! (chain_length != 0U))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    return best_len;
  }
}

static void fill_window(void)
{
  register unsigned int n;
  register unsigned int m;
  unsigned int more;
  unsigned int tmp;
  unsigned int tmp___0;
  {
    more = (unsigned int) ((window_size - ((ulg) lookahead)) - ((ulg) strstart));
    if (more == 4294967295U)
    {
      _Exit(-1);
    }
    else
      if (strstart >= 65274U)
    {
      {
        memcpy((void *) ((char *) window), (const void *) (((char *) window) + 32768), (size_t) 32768U);
        match_start -= 32768U;
        strstart -= 32768U;
        block_start -= 32768L;
        n = 0U;
      }
      {
        while (1)
        {
          while_continue:
          ;

          if (! (n < ((unsigned int) (1 << 15))))
          {
            goto while_break;
          }

          m = (unsigned int) (* ((prev + 32768) + n));
          if (m >= 32768U)
          {
            tmp = m - 32768U;
          }
          else
          {
            tmp = 0U;
          }

          * ((prev + 32768) + n) = (Pos) tmp;
          n++;
        }

        while_break:
        ;

      }
      n = 0U;
      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (n < 32768U))
          {
            goto while_break___0;
          }

          m = (unsigned int) prev[n];
          if (m >= 32768U)
          {
            tmp___0 = m - 32768U;
          }
          else
          {
            tmp___0 = 0U;
          }

          prev[n] = (Pos) tmp___0;
          n++;
        }

        while_break___0:
        ;

      }
      more += 32768U;
    }


    if (! eofile)
    {
      {
        n = (unsigned int) (* read_buf)((((char *) window) + strstart) + lookahead, more);
      }
      if (n == 0U)
      {
        eofile = 1;
      }
      else
        if (n == 4294967295U)
      {
        _Exit(-1);
      }
      else
      {
        lookahead += n;
      }


    }

    return;
  }
}

static ulg deflate_fast(void)
{
  _Exit(-1);
}

ulg deflate(void)
{
  IPos hash_head;
  IPos prev_match;
  int flush;
  int match_available;
  register unsigned int match_length;
  ulg tmp;
  char *tmp___0;
  char *tmp___1;
  int tmp___2;
  char *tmp___3;
  ulg tmp___4;
  {
    match_available = 0;
    match_length = 2U;
    if (compr_level <= 3)
    {
      _Exit(-1);
    }

    {
      while (1)
      {
        while_continue:
        ;

        if (! (lookahead != 0U))
        {
          goto while_break;
        }

        ins_h = ((ins_h << 5) ^ ((unsigned int) window[(strstart + 3U) - 1U])) & (((unsigned int) (1 << 15)) - 1U);
        hash_head = (IPos) (* ((prev + 32768) + ins_h));
        prev[strstart & 32767U] = (ush) hash_head;
        * ((prev + 32768) + ins_h) = (ush) strstart;
        prev_length = match_length;
        prev_match = match_start;
        match_length = 2U;
        if (hash_head != 0U)
        {
          if (prev_length < max_lazy_match)
          {
            if ((strstart - hash_head) <= 32506U)
            {
              {
                match_length = (unsigned int) longest_match(hash_head);
              }
              if (match_length > lookahead)
              {
                match_length = lookahead;
              }

              if (match_length == 3U)
              {
                if ((strstart - match_start) > 4096U)
                {
                  match_length--;
                }

              }

            }

          }

        }

        if (prev_length >= 3U)
        {
          if (match_length <= prev_length)
          {
            {
              flush = ct_tally((int) ((strstart - 1U) - prev_match), (int) (prev_length - 3U));
              lookahead -= prev_length - 1U;
              prev_length -= 2U;
            }
            {
              while (1)
              {
                while_continue___0:
                ;

                strstart++;
                ins_h = ((ins_h << 5) ^ ((unsigned int) window[(strstart + 3U) - 1U])) & (((unsigned int) (1 << 15)) - 1U);
                hash_head = (IPos) (* ((prev + 32768) + ins_h));
                prev[strstart & 32767U] = (ush) hash_head;
                * ((prev + 32768) + ins_h) = (ush) strstart;
                prev_length--;
                if (! (prev_length != 0U))
                {
                  goto while_break___0;
                }

              }

              while_break___0:
              ;

            }
            match_available = 0;
            match_length = 2U;
            strstart++;
            if (flush)
            {
              if (block_start >= 0L)
              {
                _Exit(-1);
              }

              {
              }
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
          if (match_available)
          {
            {
              tmp___2 = ct_tally(0, (int) window[strstart - 1U]);
            }
            if (tmp___2)
            {
              if (block_start >= 0L)
              {
                tmp___1 = (char *) (& window[(unsigned int) block_start]);
              }

              {
                flush_block(tmp___1, (ulg) (((long) strstart) - block_start), 0);
                block_start = (long) strstart;
              }
            }

            strstart++;
            lookahead--;
          }
          else
          {
            match_available = 1;
            strstart++;
            lookahead--;
          }


        }

        {
          while (1)
          {
            while_continue___1:
            ;

            if (lookahead < 262U)
            {
              if (! (! eofile))
              {
                goto while_break___1;
              }

            }
            else
            {
              goto while_break___1;
            }

            {
              fill_window();
            }
          }

          while_break___1:
          ;

        }
      }

      while_break:
      ;

    }
    if (match_available)
    {
      _Exit(-1);
    }

    if (block_start >= 0L)
    {
      _Exit(-1);
    }
    else
    {
      tmp___3 = (char *) ((void *) 0);
    }

    {
      tmp___4 = flush_block(tmp___3, (ulg) (((long) strstart) - block_start), 1);
    }
    return tmp___4;
  }
}

long header_bytes;
long time_stamp;
int save_orig_name;
int zip(int in, int out);
static ulg crc___0;
int zip(int in, int out)
{
  uch flags___0;
  ush attr;
  ush deflate_flags;
  unsigned int tmp;
  unsigned int tmp___0;
  unsigned int tmp___1;
  unsigned int tmp___2;
  unsigned int tmp___3;
  unsigned int tmp___4;
  unsigned int tmp___5;
  unsigned int tmp___6;
  unsigned int tmp___7;
  unsigned int tmp___8;
  unsigned int tmp___9;
  unsigned int tmp___10;
  unsigned int tmp___11;
  unsigned int tmp___12;
  char *p;
  char *tmp___13;
  unsigned int tmp___14;
  char *tmp___15;
  unsigned int tmp___16;
  unsigned int tmp___17;
  unsigned int tmp___18;
  unsigned int tmp___19;
  unsigned int tmp___20;
  unsigned int tmp___21;
  unsigned int tmp___22;
  unsigned int tmp___23;
  unsigned int tmp___24;
  unsigned int tmp___25;
  unsigned int tmp___26;
  unsigned int tmp___27;
  unsigned int tmp___28;
  unsigned int tmp___29;
  unsigned int tmp___30;
  unsigned int tmp___31;
  char *__cil_tmp40;
  char *__cil_tmp41;
  {
    flags___0 = (uch) 0;
    attr = (ush) 0;
    deflate_flags = (ush) 0;
    ifd = in;
    ofd = out;
    outcnt = 0U;
    method = 8;
    tmp = outcnt;
    outcnt++;
    outbuf[tmp] = (uch) (* ("\037\213" + 0));
    if (outcnt == 16384U)
    {
      _Exit(-1);
    }

    tmp___0 = outcnt;
    outcnt++;
    outbuf[tmp___0] = (uch) (* ("\037\213" + 1));
    if (outcnt == 16384U)
    {
      _Exit(-1);
    }

    tmp___1 = outcnt;
    outcnt++;
    outbuf[tmp___1] = (uch) 8;
    if (outcnt == 16384U)
    {
      _Exit(-1);
    }

    if (save_orig_name)
    {
      _Exit(-1);
    }

    tmp___2 = outcnt;
    outcnt++;
    outbuf[tmp___2] = flags___0;
    if (outcnt == 16384U)
    {
      _Exit(-1);
    }

    if (outcnt < 16382U)
    {
      tmp___3 = outcnt;
      outcnt++;
      outbuf[tmp___3] = (uch) ((time_stamp & 65535L) & 255L);
      tmp___4 = outcnt;
      outcnt++;
      outbuf[tmp___4] = (uch) (((int) ((ush) (time_stamp & 65535L))) >> 8);
    }
    else
    {
      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

    }

    if (outcnt < 16382U)
    {
      tmp___7 = outcnt;
      outcnt++;
      outbuf[tmp___7] = (uch) ((((ulg) time_stamp) >> 16) & 255UL);
      tmp___8 = outcnt;
      outcnt++;
      outbuf[tmp___8] = (uch) (((int) ((ush) (((ulg) time_stamp) >> 16))) >> 8);
    }
    else
    {
      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

    }

    {
      crc___0 = updcrc((uch *) 0, 0U);
      bi_init(out);
      ct_init(& attr, & method);
      lm_init(level, & deflate_flags);
      tmp___11 = outcnt;
      outcnt++;
      outbuf[tmp___11] = (uch) deflate_flags;
    }
    if (outcnt == 16384U)
    {
      _Exit(-1);
    }

    tmp___12 = outcnt;
    outcnt++;
    outbuf[tmp___12] = (uch) 3;
    if (outcnt == 16384U)
    {
      _Exit(-1);
    }

    if (save_orig_name)
    {
      {
        while (1)
        {
          while_continue:
          ;

          if (outcnt == 16384U)
          {
            _Exit(-1);
          }

          if (! (* tmp___15))
          {
            _Exit(-1);
          }

        }

        while_break:
        ;

      }
    }

    {
      header_bytes = (long) outcnt;
      deflate();
    }
    if (outcnt < 16382U)
    {
      tmp___16 = outcnt;
      outcnt++;
      outbuf[tmp___16] = (uch) ((crc___0 & 65535UL) & 255UL);
      tmp___17 = outcnt;
      outcnt++;
      outbuf[tmp___17] = (uch) (((int) ((ush) (crc___0 & 65535UL))) >> 8);
    }
    else
    {
      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

    }

    if (outcnt < 16382U)
    {
      tmp___20 = outcnt;
      outcnt++;
      outbuf[tmp___20] = (uch) ((crc___0 >> 16) & 255UL);
      tmp___21 = outcnt;
      outcnt++;
      outbuf[tmp___21] = (uch) (((int) ((ush) (crc___0 >> 16))) >> 8);
    }
    else
    {
      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

    }

    if (outcnt < 16382U)
    {
      tmp___24 = outcnt;
      outcnt++;
      outbuf[tmp___24] = (uch) ((bytes_in & 65535L) & 255L);
      tmp___25 = outcnt;
      outcnt++;
      outbuf[tmp___25] = (uch) (((int) ((ush) (bytes_in & 65535L))) >> 8);
    }
    else
    {
      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

    }

    if (outcnt < 16382U)
    {
      tmp___28 = outcnt;
      outcnt++;
      outbuf[tmp___28] = (uch) ((((ulg) bytes_in) >> 16) & 255UL);
      tmp___29 = outcnt;
      outcnt++;
      outbuf[tmp___29] = (uch) (((int) ((ush) (((ulg) bytes_in) >> 16))) >> 8);
    }
    else
    {
      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

      if (outcnt == 16384U)
      {
        _Exit(-1);
      }

    }

    {
      header_bytes = (long) (((unsigned long) header_bytes) + (2UL * (sizeof(long))));
      flush_outbuf();
    }
    return 0;
  }
}

int file_read(char *buf, unsigned int size)
{
  unsigned int len;
  {
    {
      len = (unsigned int) read(ifd, (void *) buf, (size_t) size);
    }
    if (len == 4294967295U)
    {
      _Exit(-1);
    }
    else
      if (len == 0U)
    {
      return (int) len;
    }


    {
      crc___0 = updcrc((uch *) buf, len);
      bytes_in = (long) (((ulg) bytes_in) + ((ulg) len));
    }
    return (int) len;
  }
}

static char *license_msg[15] = {(char *) "   Copyright (C) 1992-1993 Jean-loup Gailly", (char *) "   This program is free software; you can redistribute it and/or modify", (char *) "   it under the terms of the GNU General Public License as published by", (char *) "   the Free Software Foundation; either version 2, or (at your option)", (char *) "   any later version.", (char *) "", (char *) "   This program is distributed in the hope that it will be useful,", (char *) "   but WITHOUT ANY WARRANTY; without even the implied warranty of", (char *) "   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the", (char *) "   GNU General Public License for more details.", (char *) "", (char *) "   You should have received a copy of the GNU General Public License", (char *) "   along with this program; if not, write to the Free Software", (char *) "   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.", (char *) 0};
extern __sighandler_t signal(int __sig, void (*__handler)(int));
extern int stat(const char *__restrict __file, struct stat *__restrict __buf);
extern int fstat(int __fd, struct stat *__buf);
extern int lstat(const char *__restrict __file, struct stat *__restrict __buf);
extern int chmod(const char *__file, __mode_t __mode);
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern int strncmp(const char *__s1, const char *__s2, size_t __n);
long ifile_size;
int verbose;
extern char *optarg;
extern int optind;
extern struct dirent *readdir(DIR *__dirp);
extern int utime(const char *__file, const struct utimbuf *__file_times);
int ascii = 0;
int to_stdout = 0;
int decompress = 0;
int force = 0;
int no_name = - 1;
int no_time = - 1;
int recursive = 0;
int list = 0;
int verbose = 0;
int quiet = 0;
int do_lzw = 0;
int test = 0;
int foreground;
int maxbits = 16;
int method = 8;
int level = 6;
int exit_code = 0;
int last_member;
int part_nb;
char *env;
char **args = (char **) ((void *) 0);
char z_suffix[31];
int z_len;
long total_in = 0L;
long total_out = 0L;
int remove_ofname = 0;
struct stat istat;
struct option longopts[24] = {{"ascii", 0, (int *) 0, 'a'}, {"to-stdout", 0, (int *) 0, 'c'}, {"stdout", 0, (int *) 0, 'c'}, {"decompress", 0, (int *) 0, 'd'}, {"uncompress", 0, (int *) 0, 'd'}, {"force", 0, (int *) 0, 'f'}, {"help", 0, (int *) 0, 'h'}, {"list", 0, (int *) 0, 'l'}, {"license", 0, (int *) 0, 'L'}, {"no-name", 0, (int *) 0, 'n'}, {"name", 0, (int *) 0, 'N'}, {"quiet", 0, (int *) 0, 'q'}, {"silent", 0, (int *) 0, 'q'}, {"recursive", 0, (int *) 0, 'r'}, {"suffix", 1, (int *) 0, 'S'}, {"test", 0, (int *) 0, 't'}, {"no-time", 0, (int *) 0, 'T'}, {"verbose", 0, (int *) 0, 'v'}, {"version", 0, (int *) 0, 'V'}, {"fast", 0, (int *) 0, '1'}, {"best", 0, (int *) 0, '9'}, {"lzw", 0, (int *) 0, 'Z'}, {"bits", 1, (int *) 0, 'b'}, {(const char *) 0, 0, (int *) 0, 0}};
static void treat_stdin(void);
static void treat_file(char *iname);
static char *get_suffix(char *name);
static int get_istat(char *iname, struct stat *sbuf);
static int make_ofname(void);
static void shorten_name(char *name);
static int get_method(int in);
static void copy_stat(struct stat *ifstat);
static void do_exit(int exitcode);
int main(int argc, char **argv);
int (*work)(int infile, int outfile) = & zip;
static void usage(void)
{
  _Exit(-1);
}

static char *help_msg[18] = {(char *) " -c --stdout      write on standard output, keep original files unchanged", (char *) " -d --decompress  decompress", (char *) " -f --force       force overwrite of output file and compress links", (char *) " -h --help        give this help", (char *) " -l --list        list compressed file contents", (char *) " -L --license     display software license", (char *) " -n --no-name     do not save or restore the original name and time stamp", (char *) " -N --name        save or restore the original name and time stamp", (char *) " -q --quiet       suppress all warnings", (char *) " -r --recursive   operate recursively on directories", (char *) " -S .suf  --suffix .suf     use suffix .suf on compressed files", (char *) " -t --test        test compressed file integrity", (char *) " -v --verbose     verbose mode", (char *) " -V --version     display version number", (char *) " -1 --fast        compress faster", (char *) " -9 --best        compress better", (char *) " file...          files to (de)compress. If none given, use standard input.", (char *) 0};
static void help(void)
{
  _Exit(-1);
}

static void license(void)
{
  _Exit(-1);
}

static void version(void)
{
  _Exit(-1);
}

int main(int argc, char **argv)
{
  int file_count;
  int proglen;
  int optc;
  int tmp;
  void (*tmp___0)(int);
  void (*tmp___1)(int);
  void (*tmp___2)(int);
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  char *__cil_tmp19;
  char *__cil_tmp20;
  {
    {
      progname = basename(* (argv + 0));
      proglen = (int) strlen((const char *) progname);
    }
    if (proglen > 4)
    {
      {
        tmp = strcmp((const char *) ((progname + proglen) - 4), ".exe");
      }
      if (tmp == 0)
      {
        _Exit(-1);
      }

    }

    {
      env = add_envopt(& argc, & argv, (char *) "GZIP");
    }
    if (((unsigned long) env) != ((unsigned long) ((void *) 0)))
    {
      _Exit(-1);
    }

    {
      tmp___0 = signal(2, (void (*)(int)) 1);
      foreground = ((unsigned long) tmp___0) != ((unsigned long) ((void (*)(int)) 1));
    }
    if (foreground)
    {
      {
        signal(2, (void (*)(int)) (& abort_gzip));
      }
    }

    {
      tmp___1 = signal(15, (void (*)(int)) 1);
    }
    if (((unsigned long) tmp___1) != ((unsigned long) ((void (*)(int)) 1)))
    {
      {
        signal(15, (void (*)(int)) (& abort_gzip));
      }
    }

    {
      tmp___2 = signal(1, (void (*)(int)) 1);
    }
    if (((unsigned long) tmp___2) != ((unsigned long) ((void (*)(int)) 1)))
    {
      {
        signal(1, (void (*)(int)) (& abort_gzip));
      }
    }

    {
      tmp___5 = strncmp((const char *) progname, "un", (size_t) 2);
    }
    if (tmp___5 == 0)
    {
      _Exit(-1);
    }
    else
    {
      {
        tmp___6 = strncmp((const char *) progname, "gun", (size_t) 3);
      }
      if (tmp___6 == 0)
      {
        _Exit(-1);
      }
      else
      {
        {
          tmp___3 = strcmp((const char *) (progname + 1), "cat");
        }
        if (tmp___3 == 0)
        {
          _Exit(-1);
        }
        else
        {
          {
            tmp___4 = strcmp((const char *) progname, "gzcat");
          }
          if (tmp___4 == 0)
          {
            _Exit(-1);
          }

        }

      }

    }

    {
      strncpy((char *) z_suffix, (const char *) ".gz", (sizeof(z_suffix)) - 1UL);
      z_len = (int) strlen((const char *) z_suffix);
    }
    {
      while (1)
      {
        while_continue:
        ;

        {
          optc = getopt_long(argc, (char *const *) argv, "ab:cdfhH?lLmMnNqrS:tvVZ123456789", (const struct option *) longopts, (int *) 0);
        }
        if (! (optc != (- 1)))
        {
          goto while_break;
        }

        {
          if (optc == 97)
          {
            _Exit(-1);
          }

          if (optc == 98)
          {
            _Exit(-1);
          }

          if (optc == 99)
          {
            goto case_99;
          }

          if (optc == 100)
          {
            goto case_100;
          }

          if (optc == 102)
          {
            goto case_102;
          }

          if (optc == 104)
          {
            _Exit(-1);
          }

          if (optc == 72)
          {
            _Exit(-1);
          }

          if (optc == 63)
          {
            _Exit(-1);
          }

          if (optc == 108)
          {
            _Exit(-1);
          }

          if (optc == 76)
          {
            _Exit(-1);
          }

          if (optc == 109)
          {
            _Exit(-1);
          }

          if (optc == 77)
          {
            _Exit(-1);
          }

          if (optc == 110)
          {
            _Exit(-1);
          }

          if (optc == 78)
          {
            _Exit(-1);
          }

          if (optc == 113)
          {
            _Exit(-1);
          }

          if (optc == 114)
          {
            _Exit(-1);
          }

          if (optc == 83)
          {
            _Exit(-1);
          }

          if (optc == 116)
          {
            goto case_116;
          }

          if (optc == 118)
          {
            _Exit(-1);
          }

          if (optc == 86)
          {
            _Exit(-1);
          }

          if (optc == 90)
          {
            _Exit(-1);
          }

          if (optc == 49)
          {
            _Exit(-1);
          }

          if (optc == 50)
          {
            _Exit(-1);
          }

          if (optc == 51)
          {
            _Exit(-1);
          }

          if (optc == 52)
          {
            _Exit(-1);
          }

          if (optc == 53)
          {
            _Exit(-1);
          }

          if (optc == 54)
          {
            _Exit(-1);
          }

          if (optc == 55)
          {
            _Exit(-1);
          }

          if (optc == 56)
          {
            _Exit(-1);
          }

          if (optc == 57)
          {
            _Exit(-1);
          }

          case_97:
          ;

          ascii = 1;
          case_98:
          ;

          {
          }
          case_99:
          to_stdout = 1;

          goto switch_break;
          case_100:
          decompress = 1;

          goto switch_break;
          case_102:
          force++;

          goto switch_break;
          case_104:
          ;

          case_72:
          ;

          case_63:
          ;

          {
          }
          case_108:
          ;

          to_stdout = 1;
          case_76:
          ;

          {
          }
          case_109:
          ;

          no_time = 1;
          case_77:
          ;

          no_time = 0;
          case_110:
          ;

          no_time = 1;
          case_78:
          ;

          no_time = 0;
          case_113:
          ;

          quiet = 1;
          case_114:
          ;

          recursive = 1;
          case_83:
          ;

          {
          }
          case_116:
          to_stdout = 1;

          decompress = to_stdout;
          test = decompress;
          goto switch_break;
          case_118:
          ;

          verbose++;
          case_86:
          ;

          {
          }
          case_90:
          ;

          {
          }
          case_49:
          ;

          case_50:
          ;

          case_51:
          ;

          case_52:
          ;

          case_53:
          ;

          case_54:
          ;

          case_55:
          ;

          case_56:
          ;

          case_57:
          ;

          level = optc - 48;
          switch_default:
          ;

          {
          }
          switch_break:
          ;

        }
      }

      while_break:
      ;

    }
    if (no_time < 0)
    {
      no_time = decompress;
    }

    if (no_name < 0)
    {
      no_name = decompress;
    }

    file_count = argc - optind;
    if (ascii)
    {
      if (! quiet)
      {
        _Exit(-1);
      }

    }

    if (z_len == 0)
    {
      if (! decompress)
      {
        _Exit(-1);
      }

    }

    _L:
    ;

    if (z_len > 30)
    {
      _Exit(-1);
    }

    if (do_lzw)
    {
      if (! decompress)
      {
        _Exit(-1);
      }

    }

    if (file_count != 0)
    {
      if (to_stdout)
      {
        if (! test)
        {
          if (! list)
          {
            _Exit(-1);
          }

        }
        else
        {
          tmp___7 = 0;
        }

      }
      else
      {
        tmp___7 = 0;
      }

      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (optind < argc))
          {
            goto while_break___0;
          }

          {
            tmp___8 = optind;
            optind++;
            treat_file(* (argv + tmp___8));
          }
        }

        while_break___0:
        ;

      }
    }
    else
    {
      {
        treat_stdin();
      }
    }

    if (list)
    {
      if (! quiet)
      {
        _Exit(-1);
      }

    }

    {
      do_exit(exit_code);
    }
  }
}

static void treat_stdin(void)
{
  const char *tmp;
  const char *tmp___0;
  struct _IO_FILE *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  char *__cil_tmp13;
  char *__cil_tmp14;
  char *__cil_tmp15;
  char *__cil_tmp16;
  char *__cil_tmp17;
  char *__cil_tmp18;
  char *__cil_tmp19;
  {
    if (! force)
    {
      if (! list)
      {
        if (decompress)
        {
          tmp___1 = stdin;
        }
        else
        {
          tmp___1 = stdout;
        }

        {
          tmp___2 = fileno(tmp___1);
          tmp___3 = isatty(tmp___2);
        }
        if (tmp___3)
        {
          if (decompress)
          {
            _Exit(-1);
          }

          if (decompress)
          {
            _Exit(-1);
          }

          {
          }
        }

      }

    }

    if (decompress)
    {
      tmp___4 = 1;
    }
    else
      if (! ascii)
    {
      tmp___4 = 1;
    }


    if (! test)
    {
      if (! list)
      {
        if (! decompress)
        {
          tmp___5 = 1;
        }
        else
          if (! ascii)
        {
          tmp___5 = 1;
        }


      }

    }

    {
      strcpy((char *) ifname, (const char *) "stdin");
      strcpy((char *) ofname, (const char *) "stdout");
      time_stamp = 0L;
    }
    if (list)
    {
      _Exit(-1);
    }
    else
      if (! no_time)
    {
      _L:
      {
        tmp___6 = fileno(stdin);
        tmp___7 = fstat(tmp___6, & istat);
      }

      if (tmp___7 != 0)
      {
        _Exit(-1);
      }

      time_stamp = istat.st_mtim.tv_sec;
    }


    {
      ifile_size = - 1L;
      clear_bufs();
      to_stdout = 1;
      part_nb = 0;
    }
    if (decompress)
    {
      {
        method = get_method(ifd);
      }
      if (method < 0)
      {
        _Exit(-1);
      }

    }

    if (list)
    {
      _Exit(-1);
    }

    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp___8 = fileno(stdout);
          tmp___9 = fileno(stdin);
          tmp___10 = (* work)(tmp___9, tmp___8);
        }
        if (tmp___10 != 0)
        {
          _Exit(-1);
        }

        if (! decompress)
        {
          goto while_break;
        }
        else
          if (last_member)
        {
          _Exit(-1);
        }
        else
          if (inptr == insize)
        {
          goto while_break;
        }



        {
        }
        if (method < 0)
        {
          _Exit(-1);
        }

      }

      while_break:
      ;

    }
    if (verbose)
    {
      if (test)
      {
        _Exit(-1);
      }
      else
        if (! decompress)
      {
        _Exit(-1);
      }


    }

    return;
  }
}

static void treat_file(char *iname)
{
  int cflag;
  int tmp;
  int tmp___0;
  struct stat st;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  const char *tmp___7;
  size_t tmp___8;
  const char *tmp___9;
  size_t tmp___10;
  int tmp___11;
  int tmp___12;
  void *__cil_tmp16;
  char *__cil_tmp17;
  char *__cil_tmp18;
  char *__cil_tmp19;
  char *__cil_tmp20;
  {
    {
      tmp = strcmp((const char *) iname, "-");
    }
    if (tmp == 0)
    {
      _Exit(-1);
    }

    {
      tmp___0 = get_istat(iname, & istat);
    }
    if (tmp___0 != 0)
    {
      _Exit(-1);
    }

    if ((istat.st_mode & 61440U) == 16384U)
    {
      if (recursive)
      {
        _Exit(-1);
      }
      else
      {
        if (! quiet)
        {
          _Exit(-1);
        }

        if (exit_code == 0)
        {
          _Exit(-1);
        }

      }

    }

    if (! ((istat.st_mode & 61440U) == 32768U))
    {
      if (! quiet)
      {
        _Exit(-1);
      }

      if (exit_code == 0)
      {
        _Exit(-1);
      }

    }

    if (istat.st_nlink > 1UL)
    {
      if (! to_stdout)
      {
        _Exit(-1);
      }

    }

    ifile_size = istat.st_size;
    if (no_time)
    {
      if (! list)
      {
        time_stamp = 0L;
      }

    }
    else
    {
      time_stamp = istat.st_mtim.tv_sec;
    }

    if (to_stdout)
    {
      if (! list)
      {
        if (! test)
        {
          _Exit(-1);
        }
        else
        {
          goto _L___0;
        }

      }

    }
    else
    {
      _L___0:
      {
        tmp___2 = make_ofname();
      }

      if (tmp___2 != 0)
      {
        return;
      }

    }

    if (ascii)
    {
      if (! decompress)
      {
        _Exit(-1);
      }

    }
    else
    {
      tmp___3 = 0;
    }

    {
      ifd = open((const char *) ifname, tmp___3, 384);
    }
    if (ifd == (- 1))
    {
      _Exit(-1);
    }

    {
      clear_bufs();
      part_nb = 0;
    }
    if (decompress)
    {
      {
        method = get_method(ifd);
      }
      if (method < 0)
      {
        {
          close(ifd);
        }
        return;
      }

    }

    if (list)
    {
      _Exit(-1);
    }

    if (to_stdout)
    {
      {
        ofd = fileno(stdout);
      }
    }
    else
    {
      if (tmp___4 != 0)
      {
        _Exit(-1);
      }

      if (! decompress)
      {
        _Exit(-1);
      }

    }

    if (! save_orig_name)
    {
      save_orig_name = ! no_name;
    }

    if (verbose)
    {
      if (((int) tmp___10) >= 15)
      {
        _Exit(-1);
      }
      else
      {
        if (((int) tmp___8) >= 7)
        {
          _Exit(-1);
        }

      }

      {
      }
    }

    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp___11 = (* work)(ifd, ofd);
        }
        if (tmp___11 != 0)
        {
          _Exit(-1);
        }

        if (! decompress)
        {
          _Exit(-1);
        }
        else
          if (last_member)
        {
          _Exit(-1);
        }
        else
          if (inptr == insize)
        {
          goto while_break;
        }



        {
        }
        if (method < 0)
        {
          _Exit(-1);
        }

      }

      while_break:
      ;

    }
    {
      close(ifd);
    }
    if (! to_stdout)
    {
      if (tmp___12)
      {
        _Exit(-1);
      }

    }

    if (method == (- 1))
    {
      if (! to_stdout)
      {
        _Exit(-1);
      }

    }

    if (verbose)
    {
      if (test)
      {
        _Exit(-1);
      }
      else
        if (decompress)
      {
        _Exit(-1);
      }


      if (! test)
      {
        _Exit(-1);
      }

      {
      }
    }

    if (! to_stdout)
    {
      _Exit(-1);
    }

    return;
  }
}

static int create_outfile(void)
{
  _Exit(-1);
}

static int do_stat(char *name, struct stat *sbuf)
{
  int *tmp;
  int tmp___0;
  int tmp___1;
  {
    {
      tmp = __errno_location();
      * tmp = 0;
    }
    if (! to_stdout)
    {
      if (! force)
      {
        _Exit(-1);
      }

    }

    {
      tmp___1 = stat((const char *) name, (struct stat *) sbuf);
    }
    return tmp___1;
  }
}

static char *known_suffixes[9] = {z_suffix, (char *) ".gz", (char *) ".z", (char *) ".taz", (char *) ".tgz", (char *) "-gz", (char *) "-z", (char *) "_z", (char *) ((void *) 0)};
static char *get_suffix(char *name)
{
  int nlen;
  int slen;
  char suffix[33];
  char **suf;
  int tmp;
  int s;
  int tmp___0;
  int tmp___1;
  void *__cil_tmp13;
  {
    {
      suf = known_suffixes;
      tmp = strcmp((const char *) z_suffix, "z");
    }
    if (tmp == 0)
    {
      _Exit(-1);
    }

    {
      nlen = (int) strlen((const char *) name);
    }
    if (nlen <= 32)
    {
      {
        strcpy((char *) suffix, (const char *) name);
      }
    }
    else
    {
      {
        strcpy((char *) suffix, (const char *) (((name + nlen) - 30) - 2));
      }
    }

    {
      strlwr(suffix);
      slen = (int) strlen((const char *) suffix);
    }
    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp___0 = (int) strlen((const char *) (* suf));
          s = tmp___0;
        }
        if (slen > s)
        {
          if (((int) suffix[(slen - s) - 1]) != 47)
          {
            {
              tmp___1 = strcmp((const char *) ((suffix + slen) - s), (const char *) (* suf));
            }
            if (tmp___1 == 0)
            {
              return (name + nlen) - s;
            }

          }

        }

        suf++;
        if (! (((unsigned long) (* suf)) != ((unsigned long) ((void *) 0))))
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    return (char *) ((void *) 0);
  }
}

static char *suffixes[6] = {z_suffix, (char *) ".gz", (char *) ".z", (char *) "-z", (char *) ".Z", (char *) ((void *) 0)};
static int get_istat(char *iname, struct stat *sbuf)
{
  int ilen;
  char **suf;
  char *s;
  int tmp;
  int *tmp___0;
  int tmp___1;
  int tmp___2;
  {
    {
      suf = suffixes;
      strcpy((char *) ifname, (const char *) iname);
      tmp = do_stat(ifname, sbuf);
    }
    if (tmp == 0)
    {
      return 0;
    }

    if (! decompress)
    {
      _Exit(-1);
    }
    else
    {
      if ((* tmp___0) != 2)
      {
        _Exit(-1);
      }

    }

    {
    }
    if (((unsigned long) s) != ((unsigned long) ((void *) 0)))
    {
      _Exit(-1);
    }

    {
    }
    if (tmp___1 == 0)
    {
      _Exit(-1);
    }

    {
      while (1)
      {
        while_continue:
        ;

        {
        }
        if (tmp___2 == 0)
        {
          _Exit(-1);
        }

        if (! (((unsigned long) (* suf)) != ((unsigned long) ((void *) 0))))
        {
          _Exit(-1);
        }

      }

      while_break:
      ;

    }
    {
    }
  }
}

static int make_ofname(void)
{
  char *suff;
  int tmp;
  int tmp___0;
  char *__cil_tmp4;
  char *__cil_tmp5;
  {
    {
      strcpy((char *) ofname, (const char *) ifname);
      suff = get_suffix(ofname);
    }
    if (decompress)
    {
      if (((unsigned long) suff) == ((unsigned long) ((void *) 0)))
      {
        if (! recursive)
        {
          if (list)
          {
            _Exit(-1);
          }
          else
            if (test)
          {
            return 0;
          }


        }

        if (verbose)
        {
          _Exit(-1);
        }
        else
          if (! recursive)
        {
          if (! quiet)
          {
            _L:
            ;

            if (! quiet)
            {
              _Exit(-1);
            }

            if (exit_code == 0)
            {
              _Exit(-1);
            }

          }

        }


      }

      {
        strlwr(suff);
        tmp = strcmp((const char *) suff, ".tgz");
      }
      if (tmp == 0)
      {
        _Exit(-1);
      }
      else
      {
        {
          tmp___0 = strcmp((const char *) suff, ".taz");
        }
        if (tmp___0 == 0)
        {
          _Exit(-1);
        }
        else
        {
          * suff = (char) '\000';
        }

      }

    }
    else
      if (((unsigned long) suff) != ((unsigned long) ((void *) 0)))
    {
      if (verbose)
      {
        _Exit(-1);
      }
      else
        if (! recursive)
      {
        if (! quiet)
        {
          {
            fprintf((FILE *) stderr, (const char *) "%s: %s already has %s suffix -- unchanged\n", progname, ifname, suff);
          }
        }

      }


      if (exit_code == 0)
      {
        exit_code = 2;
      }

      return 2;
    }


    return 0;
  }
}

static int get_method(int in)
{
  uch flags___0;
  char magic[2];
  ulg stamp;
  unsigned int tmp;
  int tmp___0;
  int tmp___1;
  unsigned int tmp___2;
  int tmp___3;
  int tmp___4;
  unsigned int tmp___5;
  int tmp___6;
  int tmp___7;
  unsigned int tmp___8;
  int tmp___9;
  int tmp___10;
  unsigned int tmp___11;
  int tmp___12;
  int tmp___13;
  unsigned int tmp___14;
  int tmp___15;
  int tmp___16;
  unsigned int tmp___17;
  int tmp___18;
  int tmp___19;
  unsigned int tmp___20;
  int tmp___21;
  int tmp___22;
  unsigned int tmp___23;
  int tmp___24;
  int tmp___25;
  unsigned int tmp___26;
  int tmp___27;
  int tmp___28;
  unsigned int tmp___29;
  unsigned int tmp___30;
  unsigned int part;
  unsigned int tmp___31;
  int tmp___32;
  int tmp___33;
  unsigned int tmp___34;
  int tmp___35;
  int tmp___36;
  unsigned int len;
  unsigned int tmp___37;
  int tmp___38;
  int tmp___39;
  unsigned int tmp___40;
  int tmp___41;
  int tmp___42;
  unsigned int tmp___43;
  unsigned int tmp___44;
  char c;
  unsigned int tmp___45;
  int tmp___46;
  char *p;
  char *tmp___47;
  char *base;
  unsigned int tmp___48;
  int tmp___49;
  int tmp___50;
  char *tmp___51;
  unsigned int tmp___52;
  int tmp___53;
  int tmp___54;
  int tmp___55;
  int tmp___56;
  int tmp___57;
  int tmp___58;
  int tmp___59;
  int tmp___60;
  int tmp___61;
  int tmp___62;
  void *__cil_tmp74;
  char *__cil_tmp75;
  {
    if (force)
    {
      if (to_stdout)
      {
        _Exit(-1);
      }

    }
    else
    {
      _L:
      if (inptr < insize)
      {
        _Exit(-1);
      }
      else
      {
        {
          tmp___6 = fill_inbuf(0);
          tmp___7 = tmp___6;
        }
      }


      magic[0] = (char) tmp___7;
      if (inptr < insize)
      {
        tmp___8 = inptr;
        inptr++;
        tmp___10 = (int) inbuf[tmp___8];
      }

      magic[1] = (char) tmp___10;
    }

    {
      method = - 1;
      part_nb++;
      header_bytes = 0L;
      last_member = 0;
      tmp___61 = memcmp((const void *) magic, (const void *) "\037\213", (size_t) 2);
    }
    if (tmp___61 == 0)
    {
      goto _L___4;
    }
    else
    {
      {
        tmp___62 = memcmp((const void *) magic, (const void *) "\037\236", (size_t) 2);
      }
      if (tmp___62 == 0)
      {
        _L___4:
        ;

        if (inptr < insize)
        {
          tmp___11 = inptr;
          inptr++;
          tmp___13 = (int) inbuf[tmp___11];
        }

        method = tmp___13;
        if (method != 8)
        {
          _Exit(-1);
        }

        work = & unzip;
        if (inptr < insize)
        {
          tmp___14 = inptr;
          inptr++;
          tmp___16 = (int) inbuf[tmp___14];
        }

        flags___0 = (uch) tmp___16;
        if ((((int) flags___0) & 32) != 0)
        {
          _Exit(-1);
        }

        if ((((int) flags___0) & 2) != 0)
        {
          if (force <= 1)
          {
            _Exit(-1);
          }

        }

        if ((((int) flags___0) & 192) != 0)
        {
          if (force <= 1)
          {
            _Exit(-1);
          }

        }

        if (inptr < insize)
        {
          tmp___17 = inptr;
          inptr++;
          tmp___19 = (int) inbuf[tmp___17];
        }

        stamp = (ulg) tmp___19;
        if (inptr < insize)
        {
          tmp___20 = inptr;
          inptr++;
          tmp___22 = (int) inbuf[tmp___20];
        }

        stamp |= ((ulg) tmp___22) << 8;
        if (inptr < insize)
        {
          tmp___23 = inptr;
          inptr++;
          tmp___25 = (int) inbuf[tmp___23];
        }

        stamp |= ((ulg) tmp___25) << 16;
        if (inptr < insize)
        {
          tmp___26 = inptr;
          inptr++;
          tmp___28 = (int) inbuf[tmp___26];
        }

        stamp |= ((ulg) tmp___28) << 24;
        if (stamp != 0UL)
        {
          if (! no_time)
          {
            _Exit(-1);
          }

        }

        if (inptr < insize)
        {
          tmp___29 = inptr;
          inptr++;
        }

        if (inptr < insize)
        {
          tmp___30 = inptr;
          inptr++;
        }

        if ((((int) flags___0) & 2) != 0)
        {
          if (inptr < insize)
          {
            _Exit(-1);
          }

          if (inptr < insize)
          {
            _Exit(-1);
          }

          if (verbose)
          {
            _Exit(-1);
          }

        }

        if ((((int) flags___0) & 4) != 0)
        {
          if (inptr < insize)
          {
            _Exit(-1);
          }

          if (inptr < insize)
          {
            _Exit(-1);
          }

          if (verbose)
          {
            _Exit(-1);
          }

          {
            while (1)
            {
              while_continue:
              ;

              if (! tmp___44)
              {
                _Exit(-1);
              }

              if (inptr < insize)
              {
                _Exit(-1);
              }

            }

            while_break:
            ;

          }
        }

        if ((((int) flags___0) & 8) != 0)
        {
          if (no_name)
          {
            _Exit(-1);
          }
          else
            if (to_stdout)
          {
            _Exit(-1);
          }


          _L___1:
          ;

          if (part_nb > 1)
          {
            _L___0:
            ;

            {
              while (1)
              {
                while_continue___0:
                ;

                if (inptr < insize)
                {
                  _Exit(-1);
                }

                if (! (((int) c) != 0))
                {
                  _Exit(-1);
                }

              }

              while_break___0:
              ;

            }
          }
          else
          {
            {
              while (1)
              {
                while_continue___1:
                ;

                if (inptr < insize)
                {
                  _Exit(-1);
                }

                if (((int) (* tmp___51)) == 0)
                {
                  _Exit(-1);
                }

                if (((unsigned long) p) >= ((unsigned long) (ofname + (sizeof(ofname)))))
                {
                  _Exit(-1);
                }

              }

              while_break___1:
              ;

            }
            if (! list)
            {
              _Exit(-1);
            }

          }

        }

        if ((((int) flags___0) & 16) != 0)
        {
          {
            while (1)
            {
              while_continue___2:
              ;

              if (inptr < insize)
              {
                _Exit(-1);
              }

              if (! (tmp___54 != 0))
              {
                _Exit(-1);
              }

            }

            while_break___2:
            ;

          }
        }

        if (part_nb == 1)
        {
          header_bytes = (long) (((unsigned long) inptr) + (2UL * (sizeof(long))));
        }

      }
      else
      {
        {
          tmp___59 = memcmp((const void *) magic, (const void *) "PK\003\004", (size_t) 2);
        }
        if (tmp___59 == 0)
        {
          if (inptr == 2U)
          {
            _Exit(-1);
          }

        }
        else
        {
          _L___3:
          {
            tmp___58 = memcmp((const void *) magic, (const void *) "\037\036", (size_t) 2);
          }

          if (tmp___58 == 0)
          {
            _Exit(-1);
          }
          else
          {
            {
              tmp___57 = memcmp((const void *) magic, (const void *) "\037\235", (size_t) 2);
            }
            if (tmp___57 == 0)
            {
              _Exit(-1);
            }
            else
            {
              {
                tmp___56 = memcmp((const void *) magic, (const void *) "\037\240", (size_t) 2);
              }
              if (tmp___56 == 0)
              {
                _Exit(-1);
              }
              else
                if (force)
              {
                if (to_stdout)
                {
                  _Exit(-1);
                }

              }


            }

          }

        }

      }

    }

    if (method >= 0)
    {
      return method;
    }

    if (part_nb == 1)
    {
      {
        fprintf((FILE *) stderr, (const char *) "\n%s: %s: not in gzip format\n", progname, ifname);
        exit_code = 1;
      }
      return - 1;
    }
    else
    {
      if (! quiet)
      {
        _Exit(-1);
      }

      if (exit_code == 0)
      {
        _Exit(-1);
      }

    }

  }
}

static void do_list(int ifd___0, int method___0)
{
  _Exit(-1);
}

static int same_file(struct stat *stat1, struct stat *stat2)
{
  _Exit(-1);
}

static int name_too_long(char *name, struct stat *statb)
{
  _Exit(-1);
}

static void shorten_name(char *name)
{
  _Exit(-1);
}

static int check_ofname(void)
{
  _Exit(-1);
}

static void reset_times(char *name, struct stat *statb)
{
  _Exit(-1);
}

static void copy_stat(struct stat *ifstat)
{
  _Exit(-1);
}

static void treat_dir(char *dir)
{
  _Exit(-1);
}

static int in_exit = 0;
static void do_exit(int exitcode)
{
  {
    if (in_exit)
    {
      _Exit(-1);
    }

    in_exit = 1;
    if (((unsigned long) env) != ((unsigned long) ((void *) 0)))
    {
      _Exit(-1);
    }

    if (((unsigned long) args) != ((unsigned long) ((void *) 0)))
    {
      _Exit(-1);
    }

    {
      exit(exitcode);
    }
  }
}

void abort_gzip(void)
{
  _Exit(-1);
}

