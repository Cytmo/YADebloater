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
static uch pt_len[19];
static unsigned int blocksize;
static ush pt_table[256];
static ush bitbuf;
static unsigned int subbitbuf;
static int bitcount;
static void fillbuf(int n)
{
 
}

static unsigned int getbits(int n)
{
 
}

static void init_getbits(void)
{
 
}

static void make_table(int nchar, uch *bitlen, int tablebits, ush *table)
{
 
}

static void read_pt_len(int nn, int nbit, int i_special)
{
 
}

static void read_c_len(void)
{
 
}

static unsigned int decode_c(void)
{
 
}

static unsigned int decode_p(void)
{
 
}

static void huf_decode_start(void)
{
 
}

static int j;
static int done;
static void decode_start(void)
{
 
}

static unsigned int i;
static unsigned int decode(unsigned int count, uch *buffer)
{
 
}

int unlzh(int in, int out)
{
 
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
 
}

static void build_tree(void)
{
 
}

int unpack(int in, int out)
{
 
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
 
}

int lzw(int in, int out);
static int msg_done = 0;
int lzw(int in, int out)
{
 
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
 
}

void flush_outbuf(void)
{
  {
    if (outcnt == 0U)
    {
     
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
         
        }

        {
        }
        if (((int) (* p)) == 0)
        {
         
        }

        {
        }
        if (* p)
        {
         
        }

      }

      while_break:
      ;

    }
    if (nargc == 0)
    {
     
    }

    {
    }
    if (((unsigned long) nargv) == ((unsigned long) ((void *) 0)))
    {
     
    }

    if (tmp___6 < 0)
    {
     
    }

    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (nargc > 0))
        {
         
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
         
        }

      }

      while_break___2:
      ;

    }
  }
}

void error(char *m)
{
 
}

void read_error(void)
{
 
}

void write_error(void)
{
 
}

void display_ratio(long num, long den, FILE *file)
{
 
}

voidp xmalloc(unsigned int size)
{
 
}

ulg crc_32_tab[256] = {(ulg) 0L, (ulg) 1996959894L, (ulg) 3993919788L, (ulg) 2567524794L, (ulg) 124634137L, (ulg) 1886057615L, (ulg) 3915621685L, (ulg) 2657392035L, (ulg) 249268274L, (ulg) 2044508324L, (ulg) 3772115230L, (ulg) 2547177864L, (ulg) 162941995L, (ulg) 2125561021L, (ulg) 3887607047L, (ulg) 2428444049L, (ulg) 498536548L, (ulg) 1789927666L, (ulg) 4089016648L, (ulg) 2227061214L, (ulg) 450548861L, (ulg) 1843258603L, (ulg) 4107580753L, (ulg) 2211677639L, (ulg) 325883990L, (ulg) 1684777152L, (ulg) 4251122042L, (ulg) 2321926636L, (ulg) 335633487L, (ulg) 1661365465L, (ulg) 4195302755L, (ulg) 2366115317L, (ulg) 997073096L, (ulg) 1281953886L, (ulg) 3579855332L, (ulg) 2724688242L, (ulg) 1006888145L, (ulg) 1258607687L, (ulg) 3524101629L, (ulg) 2768942443L, (ulg) 901097722L, (ulg) 1119000684L, (ulg) 3686517206L, (ulg) 2898065728L, (ulg) 853044451L, (ulg) 1172266101L, (ulg) 3705015759L, (ulg) 2882616665L, (ulg) 651767980L, (ulg) 1373503546L, (ulg) 3369554304L, (ulg) 3218104598L, (ulg) 565507253L, (ulg) 1454621731L, (ulg) 3485111705L, (ulg) 3099436303L, (ulg) 671266974L, (ulg) 1594198024L, (ulg) 3322730930L, (ulg) 2970347812L, (ulg) 795835527L, (ulg) 1483230225L, (ulg) 3244367275L, (ulg) 3060149565L, (ulg) 1994146192L, (ulg) 31158534L, (ulg) 2563907772L, (ulg) 4023717930L, (ulg) 1907459465L, (ulg) 112637215L, (ulg) 2680153253L, (ulg) 3904427059L, (ulg) 2013776290L, (ulg) 251722036L, (ulg) 2517215374L, (ulg) 3775830040L, (ulg) 2137656763L, (ulg) 141376813L, (ulg) 2439277719L, (ulg) 3865271297L, (ulg) 1802195444L, (ulg) 476864866L, (ulg) 2238001368L, (ulg) 4066508878L, (ulg) 1812370925L, (ulg) 453092731L, (ulg) 2181625025L, (ulg) 4111451223L, (ulg) 1706088902L, (ulg) 314042704L, (ulg) 2344532202L, (ulg) 4240017532L, (ulg) 1658658271L, (ulg) 366619977L, (ulg) 2362670323L, (ulg) 4224994405L, (ulg) 1303535960L, (ulg) 984961486L, (ulg) 2747007092L, (ulg) 3569037538L, (ulg) 1256170817L, (ulg) 1037604311L, (ulg) 2765210733L, (ulg) 3554079995L, (ulg) 1131014506L, (ulg) 879679996L, (ulg) 2909243462L, (ulg) 3663771856L, (ulg) 1141124467L, (ulg) 855842277L, (ulg) 2852801631L, (ulg) 3708648649L, (ulg) 1342533948L, (ulg) 654459306L, (ulg) 3188396048L, (ulg) 3373015174L, (ulg) 1466479909L, (ulg) 544179635L, (ulg) 3110523913L, (ulg) 3462522015L, (ulg) 1591671054L, (ulg) 702138776L, (ulg) 2966460450L, (ulg) 3352799412L, (ulg) 1504918807L, (ulg) 783551873L, (ulg) 3082640443L, (ulg) 3233442989L, (ulg) 3988292384L, (ulg) 2596254646L, (ulg) 62317068L, (ulg) 1957810842L, (ulg) 3939845945L, (ulg) 2647816111L, (ulg) 81470997L, (ulg) 1943803523L, (ulg) 3814918930L, (ulg) 2489596804L, (ulg) 225274430L, (ulg) 2053790376L, (ulg) 3826175755L, (ulg) 2466906013L, (ulg) 167816743L, (ulg) 2097651377L, (ulg) 4027552580L, (ulg) 2265490386L, (ulg) 503444072L, (ulg) 1762050814L, (ulg) 4150417245L, (ulg) 2154129355L, (ulg) 426522225L, (ulg) 1852507879L, (ulg) 4275313526L, (ulg) 2312317920L, (ulg) 282753626L, (ulg) 1742555852L, (ulg) 4189708143L, (ulg) 2394877945L, (ulg) 397917763L, (ulg) 1622183637L, (ulg) 3604390888L, (ulg) 2714866558L, (ulg) 953729732L, (ulg) 1340076626L, (ulg) 3518719985L, (ulg) 2797360999L, (ulg) 1068828381L, (ulg) 1219638859L, (ulg) 3624741850L, (ulg) 2936675148L, (ulg) 906185462L, (ulg) 1090812512L, (ulg) 3747672003L, (ulg) 2825379669L, (ulg) 829329135L, (ulg) 1181335161L, (ulg) 3412177804L, (ulg) 3160834842L, (ulg) 628085408L, (ulg) 1382605366L, (ulg) 3423369109L, (ulg) 3138078467L, (ulg) 570562233L, (ulg) 1426400815L, (ulg) 3317316542L, (ulg) 2998733608L, (ulg) 733239954L, (ulg) 1555261956L, (ulg) 3268935591L, (ulg) 3050360625L, (ulg) 752459403L, (ulg) 1541320221L, (ulg) 2607071920L, (ulg) 3965973030L, (ulg) 1969922972L, (ulg) 40735498L, (ulg) 2617837225L, (ulg) 3943577151L, (ulg) 1913087877L, (ulg) 83908371L, (ulg) 2512341634L, (ulg) 3803740692L, (ulg) 2075208622L, (ulg) 213261112L, (ulg) 2463272603L, (ulg) 3855990285L, (ulg) 2094854071L, (ulg) 198958881L, (ulg) 2262029012L, (ulg) 4057260610L, (ulg) 1759359992L, (ulg) 534414190L, (ulg) 2176718541L, (ulg) 4139329115L, (ulg) 1873836001L, (ulg) 414664567L, (ulg) 2282248934L, (ulg) 4279200368L, (ulg) 1711684554L, (ulg) 285281116L, (ulg) 2405801727L, (ulg) 4167216745L, (ulg) 1634467795L, (ulg) 376229701L, (ulg) 2685067896L, (ulg) 3608007406L, (ulg) 1308918612L, (ulg) 956543938L, (ulg) 2808555105L, (ulg) 3495958263L, (ulg) 1231636301L, (ulg) 1047427035L, (ulg) 2932959818L, (ulg) 3654703836L, (ulg) 1088359270L, (ulg) 936918000L, (ulg) 2847714899L, (ulg) 3736837829L, (ulg) 1202900863L, (ulg) 817233897L, (ulg) 3183342108L, (ulg) 3401237130L, (ulg) 1404277552L, (ulg) 615818150L, (ulg) 3134207493L, (ulg) 3453421203L, (ulg) 1423857449L, (ulg) 601450431L, (ulg) 3009837614L, (ulg) 3294710456L, (ulg) 1567103746L, (ulg) 711928724L, (ulg) 3020668471L, (ulg) 3272380065L, (ulg) 1510334235L, (ulg) 755167117L};
int lbits = 9;
int dbits = 6;
unsigned int hufts;
int huft_build(unsigned int *b, unsigned int n, unsigned int s, ush *d, ush *e, struct huft **t, int *m)
{
 
}

int huft_free(struct huft *t)
{
 
}

int inflate_codes(struct huft *tl, struct huft *td, int bl, int bd)
{
 
}

int inflate_stored(void)
{
 
}

int inflate_fixed(void)
{
 
}

int inflate_dynamic(void)
{
 
}

int inflate_block(int *e)
{
 
}

int inflate(void)
{
 
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
 
}

int unzip(int in, int out)
{
 
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
        tmp = outcnt;
        outcnt++;
        outbuf[tmp] = (uch) (((int) bi_buf) & 255);
        tmp___0 = outcnt;
        outcnt++;
        outbuf[tmp___0] = (uch) (((int) bi_buf) >> 8);
      }
      else
      {
        if (outcnt == 16384U)
        {
         
        }

        if (outcnt == 16384U)
        {
         
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
       
      }

    }


    bi_buf = (unsigned short) 0;
    bi_valid = 0;
    return;
  }
}

void copy_block(char *buf, unsigned int len, int header)
{
 
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
          bits = max_length;
          overflow++;
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

        bits = max_length - 1;
        {
          while (1)
          {
            while_continue___2:
            ;

            if (! (((int) bl_count[bits]) == 0))
            {
              goto while_break___2;
            }

          }

          while_break___2:
          ;

        }
        bl_count[bits] = (ush) (((int) bl_count[bits]) - 1);
        bl_count[bits + 1] = (ush) (((int) bl_count[bits + 1]) + 2);
        bl_count[max_length] = (ush) (((int) bl_count[max_length]) - 1);
        overflow -= 2;
        if (! (overflow > 0))
        {
          goto while_break___1;
        }

      }

      while_break___1:
      ;

    }
    bits = max_length;
    {
      while (1)
      {
        while_continue___3:
        ;

        if (! (bits != 0))
        {
          goto while_break___3;
        }

        n = (int) bl_count[bits];
        {
          while (1)
          {
            while_continue___4:
            ;

            if (! (n != 0))
            {
              goto while_break___4;
            }

            h--;
            m = heap[h];
            if (m > max_code)
            {
              goto while_continue___4;
            }

            if (((unsigned int) (tree + m)->dl.len) != ((unsigned int) bits))
            {
              opt_len += (ulg) ((((long) bits) - ((long) (tree + m)->dl.len)) * ((long) (tree + m)->fc.freq));
              (tree + m)->dl.len = (ush) bits;
            }

            n--;
          }

          while_break___4:
          ;

        }
        bits--;
      }

      while_break___3:
      ;

    }
    return;
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

        heap_len++;
        if (max_code < 2)
        {
          max_code++;
          tmp = max_code;
        }

        heap[heap_len] = tmp;
        new = tmp;
        (tree + new)->fc.freq = (ush) 1;
        depth[new] = (uch) 0;
        opt_len--;
        if (stree)
        {
          static_len -= (ulg) (stree + new)->dl.len;
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
      max_count = 138;
      min_count = 3;
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
          bl_tree[17].fc.freq = (ush) (((int) bl_tree[17].fc.freq) + 1);
        }
        else
        {
          bl_tree[18].fc.freq = (ush) (((int) bl_tree[18].fc.freq) + 1);
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
          max_count = 6;
          min_count = 3;
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
      max_count = 138;
      min_count = 3;
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
          {
            send_bits((int) bl_tree[17].fc.code, (int) bl_tree[17].dl.len);
            send_bits(count - 3, 3);
          }
        }
        else
        {
          {
            send_bits((int) bl_tree[18].fc.code, (int) bl_tree[18].dl.len);
            send_bits(count - 11, 7);
          }
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
          max_count = 6;
          min_count = 3;
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
     
    }

    if (stored_len <= opt_lenb)
    {
      if (eof)
      {
       
      }

    }

    _L___2:
    ;

    if ((stored_len + 4UL) <= opt_lenb)
    {
      if (((unsigned long) buf) != ((unsigned long) ((char *) 0)))
      {
       
      }

    }

    _L:
    ;

    if (static_lenb == opt_lenb)
    {
     
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
      tmp___3 = 1;
    }
    else
      if (last_dist == 32768U)
    {
     
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
     
    }
    else
      if (pack_level > 9)
    {
     
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
     
    }
    else
      if (pack_level == 9)
    {
     
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
     
    }
    else
      if (lookahead == 4294967295U)
    {
     
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
            goto while_break;
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
                tmp___0 = (char *) (& window[(unsigned int) block_start]);
              }
              else
              {
                tmp___0 = (char *) ((void *) 0);
              }

              {
                flush_block(tmp___0, (ulg) (((long) strstart) - block_start), 0);
                block_start = (long) strstart;
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
              else
              {
                tmp___1 = (char *) ((void *) 0);
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
      {
        ct_tally(0, (int) window[strstart - 1U]);
      }
    }

    if (block_start >= 0L)
    {
      tmp___3 = (char *) (& window[(unsigned int) block_start]);
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
     
    }

    tmp___0 = outcnt;
    outcnt++;
    outbuf[tmp___0] = (uch) (* ("\037\213" + 1));
    if (outcnt == 16384U)
    {
     
    }

    tmp___1 = outcnt;
    outcnt++;
    outbuf[tmp___1] = (uch) 8;
    if (outcnt == 16384U)
    {
     
    }

    if (save_orig_name)
    {
     
    }

    tmp___2 = outcnt;
    outcnt++;
    outbuf[tmp___2] = flags___0;
    if (outcnt == 16384U)
    {
     
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
       
      }

      if (outcnt == 16384U)
      {
       
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
       
      }

      if (outcnt == 16384U)
      {
       
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
     
    }

    tmp___12 = outcnt;
    outcnt++;
    outbuf[tmp___12] = (uch) 3;
    if (outcnt == 16384U)
    {
     
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
           
          }

          if (! (* tmp___15))
          {
           
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
       
      }

      if (outcnt == 16384U)
      {
       
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
       
      }

      if (outcnt == 16384U)
      {
       
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
       
      }

      if (outcnt == 16384U)
      {
       
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
       
      }

      if (outcnt == 16384U)
      {
       
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
extern int atoi(const char *__nptr);
extern void exit(int __status);
extern DIR *opendir(const char *__name);
extern int closedir(DIR *__dirp);
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
static void usage(void);
static void help(void);
static void license(void);
static void version(void);
static void treat_stdin(void);
static void copy_stat(struct stat *ifstat);
static void do_exit(int exitcode);
int main(int argc, char **argv);
int (*work)(int infile, int outfile) = & zip;
static void usage(void)
{
 
}

static char *help_msg[18] = {(char *) " -c --stdout      write on standard output, keep original files unchanged", (char *) " -d --decompress  decompress", (char *) " -f --force       force overwrite of output file and compress links", (char *) " -h --help        give this help", (char *) " -l --list        list compressed file contents", (char *) " -L --license     display software license", (char *) " -n --no-name     do not save or restore the original name and time stamp", (char *) " -N --name        save or restore the original name and time stamp", (char *) " -q --quiet       suppress all warnings", (char *) " -r --recursive   operate recursively on directories", (char *) " -S .suf  --suffix .suf     use suffix .suf on compressed files", (char *) " -t --test        test compressed file integrity", (char *) " -v --verbose     verbose mode", (char *) " -V --version     display version number", (char *) " -1 --fast        compress faster", (char *) " -9 --best        compress better", (char *) " file...          files to (de)compress. If none given, use standard input.", (char *) 0};
static void help(void)
{
 
}

static void license(void)
{
 
}

static void version(void)
{
 
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
       
      }

    }

    {
      env = add_envopt(& argc, & argv, (char *) "GZIP");
    }
    if (((unsigned long) env) != ((unsigned long) ((void *) 0)))
    {
     
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
     
    }
    else
    {
      {
        tmp___6 = strncmp((const char *) progname, "gun", (size_t) 3);
      }
      if (tmp___6 == 0)
      {
       
      }
      else
      {
        {
          tmp___3 = strcmp((const char *) (progname + 1), "cat");
        }
        if (tmp___3 == 0)
        {
         
        }
        else
        {
          {
            tmp___4 = strcmp((const char *) progname, "gzcat");
          }
          if (tmp___4 == 0)
          {
           
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
           
          }

          if (optc == 98)
          {
           
          }

          if (optc == 99)
          {
            goto case_99;
          }

          if (optc == 100)
          {
           
          }

          if (optc == 102)
          {
           
          }

          if (optc == 104)
          {
           
          }

          if (optc == 72)
          {
           
          }

          if (optc == 63)
          {
           
          }

          if (optc == 108)
          {
           
          }

          if (optc == 76)
          {
           
          }

          if (optc == 109)
          {
           
          }

          if (optc == 77)
          {
           
          }

          if (optc == 110)
          {
           
          }

          if (optc == 78)
          {
           
          }

          if (optc == 113)
          {
           
          }

          if (optc == 114)
          {
           
          }

          if (optc == 83)
          {
           
          }

          if (optc == 116)
          {
           
          }

          if (optc == 118)
          {
           
          }

          if (optc == 86)
          {
           
          }

          if (optc == 90)
          {
           
          }

          if (optc == 49)
          {
           
          }

          if (optc == 50)
          {
           
          }

          if (optc == 51)
          {
           
          }

          if (optc == 52)
          {
           
          }

          if (optc == 53)
          {
           
          }

          if (optc == 54)
          {
           
          }

          if (optc == 55)
          {
           
          }

          if (optc == 56)
          {
           
          }

          if (optc == 57)
          {
           
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
          ;

          decompress = 1;
          case_102:
          ;

          force++;
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
          ;

          to_stdout = 1;
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
       
      }

    }

    if (z_len == 0)
    {
      if (! decompress)
      {
       
      }

    }

    _L:
    ;

    if (z_len > 30)
    {
     
    }

    if (do_lzw)
    {
      if (! decompress)
      {
       
      }

    }

    if (file_count != 0)
    {
      if (to_stdout)
      {
       
      }

      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (optind < argc))
          {
           
          }

          {
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
           
          }

          if (decompress)
          {
           
          }

          {
          }
        }

      }

    }

    if (decompress)
    {
     
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
      if (method < 0)
      {
       
      }

    }

    if (list)
    {
     
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
         
        }

        if (! decompress)
        {
          goto while_break;
        }
        else
          if (last_member)
        {
         
        }
        else
          if (inptr == insize)
        {
         
        }



        {
        }
        if (method < 0)
        {
         
        }

      }

      while_break:
      ;

    }
    if (verbose)
    {
      if (test)
      {
       
      }
      else
        if (! decompress)
      {
       
      }


    }

    return;
  }
}

static void treat_file(char *iname)
{
 
}

static int create_outfile(void)
{
 
}

static int do_stat(char *name, struct stat *sbuf)
{
 
}

static char *known_suffixes[9] = {z_suffix, (char *) ".gz", (char *) ".z", (char *) ".taz", (char *) ".tgz", (char *) "-gz", (char *) "-z", (char *) "_z", (char *) ((void *) 0)};
static char *get_suffix(char *name)
{
 
}

static char *suffixes[6] = {z_suffix, (char *) ".gz", (char *) ".z", (char *) "-z", (char *) ".Z", (char *) ((void *) 0)};
static int get_istat(char *iname, struct stat *sbuf)
{
 
}

static int make_ofname(void)
{
 
}

static int get_method(int in)
{
 
}

static void do_list(int ifd___0, int method___0)
{
 
}

static int same_file(struct stat *stat1, struct stat *stat2)
{
 
}

static int name_too_long(char *name, struct stat *statb)
{
 
}

static void shorten_name(char *name)
{
 
}

static int check_ofname(void)
{
 
}

static void reset_times(char *name, struct stat *statb)
{
 
}

static void copy_stat(struct stat *ifstat)
{
 
}

static void treat_dir(char *dir)
{
 
}

static int in_exit = 0;
static void do_exit(int exitcode)
{
  {
    if (in_exit)
    {
     
    }

    in_exit = 1;
    if (((unsigned long) env) != ((unsigned long) ((void *) 0)))
    {
     
    }

    if (((unsigned long) args) != ((unsigned long) ((void *) 0)))
    {
     
    }

    {
      exit(exitcode);
    }
  }
}

void abort_gzip(void)
{
 
}

