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


  {





    {


      {
        {

















          ;

        }
      }

    }



  }
}

void clear_bufs(void)
{
  {
    outcnt = 0U;





  }
}

int fill_inbuf(int eof_ok)
{


  {
    {






      {






















      }








      {
      }

      {
      }
    }




  }
}

void flush_outbuf(void)
{
  {
    if (outcnt == 0U)
    {
    }

    {



    }
    return;
  }
}

void flush_window(void)
{
  {
    if (outcnt == 0U)
    {
    }





    {
      {
        write_buf(ofd, (voidp) ((char *) window), outcnt);
      }
    }




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

  {
    t = s;
    {
      while (1)
      {




        {





        }









      }




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





















  {
    {
























































      {




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







      {




        {
        }

      }




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

















  {
    {

























































































































































































      {









        {
          while (1)
          {






            {





              {























                {


                  {
                    while (1)
                    {

















                    }

                    while_break___8:
                    ;

                  }
                }

                {






                  {
                  }

                }








                {






                }

              }

              while_break___7:
              ;

            }
            r.b = (uch) (k - w);
            if (((unsigned long) p) >= ((unsigned long) (v + n)))




            {
















































































              ;

            }
          }




        }
        k++;
      }

      while_break___5:
      ;

    }













  }
}

int huft_free(struct huft *t)
{


  {

























  }
}

int inflate_codes(struct huft *tl, struct huft *td, int bl, int bd)
{



  unsigned int w;



























  {





    {
      while (1)
      {



        {







































































































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















              {










                {






















                  ;

                }







              }




            }
          }



          {






























            {

































              {
                {



















                  ;

                }
              }

              if (w == 32768U)
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

int inflate_stored(void)
{
}

int inflate_fixed(void)
{
}

int inflate_dynamic(void)
{
  int i___0;
  unsigned int j___0;












































  int tmp___30;

  {


    {
      while (1)
      {









        {



        }



      }

      while_break:
      ;











































































      {




        {





          {









            {



            }



          }

          while_break___3:
          ;

        }




      }










































      {




        {





          {









            {



            }



          }

          while_break___6:
          ;

        }













          if (j___0 == 16U)
        {
          {
            while (1)
            {









              {
              }

            }

            while_break___7:
            ;

          }




          {
          }

          {
            while (1)
            {













            }

            while_break___8:
            ;








            {








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




              {
              }

            }




          }
        }



      }











    }
    if (i___0 != 0)
    {









    }
    if (i___0 != 0)
    {










    }
    if (tmp___30)
    {
    }

    {


    }
    return 0;
  }
}

int inflate_block(int *e)
{












  {


    {






















      ;





































    }






    {
    }

  }
}

int inflate(void)
{



  {




    {

















































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
}

int unzip(int in, int out)
{


  int n;


























  {
    {









      {
      }



























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
        {
        }
      }

    }


    if (! pkzip)
    {
      n = 0;
      {






















        ;

      }















































      {
      }

    }




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



    {
      read_buf = & file_read;
    }

    return;
  }
}

void send_bits(int value, int length)
{




  {
    if (bi_valid > (((int) (16UL * (sizeof(char)))) - length))
    {











      {













        {
          {
            flush_outbuf();
          }
        }

      }



    }







  }
}

unsigned int bi_reverse(unsigned int code, int len)
{

  {























  }
}

void bi_windup(void)
{





  {
    if (bi_valid > 8)
    {




      {





        {
        }

      }

    }


    {




      {
        {
        }
      }

    }





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








  {










    {
      while (1)
      {










        {
          while (1)
          {












          }

          while_break___0:






















































































          ;

        }
        code++;
      }

      while_break___3:
      ;

















































































































      {




        {







        }
      }







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























































      ;

    }









  }
}

static void pqdownheap(ct_data *tree, int k)
{


  {


    {


















































      ;

    }


  }
}

static void gen_bitlen(tree_desc *desc)
{












  int overflow;
  {








    {































































      ;

    }
    if (overflow == 0)
    {





      {




















        {
        }

      }







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

static void gen_codes(ct_data *tree, int max_code)
{







  {


    {
















































      ;

    }
    return;
  }
}

static void build_tree___0(tree_desc *desc)
{













  {








    {



































































































































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











    {
      while (1)
      {

































        {






        }




























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










    {
      while (1)
      {



























        if (count < min_count)
        {
          {
            while (1)
            {



              {






              }

            }

            while_break___0:
            ;

          }
        }
        else

























        {


        }





        {


        }





      }

      while_break:
      ;

    }
    return;
  }
}

static int build_bl_tree(void)
{

  {
    {







      {













      }




    }


  }
}

static void send_all_trees(int lcodes, int dcodes, int blcodes)
{

  {
    {







      {




        {






        }
      }








    }
    return;
  }
}

ulg flush_block(char *buf, ulg stored_len, int eof)
{



  {


    {
      {
      }
    }

    {






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



    if (dist == 0)




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















  }
}

static void compress_block(ct_data *ltree, ct_data *dtree)
{











  {





    {
      {







































































        ;

      }
    }





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




  {







    {
      {
      }
    }


    {




















































































      ;

    }
    return;
  }
}

int longest_match(IPos cur_match)
{

  register uch *scan;
  register uch *match;

  int best_len;





  {

















    {





      {



















        {














          {





            if (((int) (* scan)) == ((int) (* match)))
            {


              if (((int) (* scan)) == ((int) (* match)))
              {


                if (((int) (* scan)) == ((int) (* match)))
                {


                  if (((int) (* scan)) == ((int) (* match)))
                  {


                    if (((int) (* scan)) == ((int) (* match)))
                    {


                      if (((int) (* scan)) == ((int) (* match)))
                      {


                        if (((int) (* scan)) == ((int) (* match)))
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








        }





        {










        }

      }




    }
    return best_len;
  }
}

static void fill_window(void)
{


  unsigned int more;


  {






    {
      {








        {


















































        }




      }
      more += 32768U;
    }
























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


  char *tmp___1;
  int tmp___2;
  char *tmp___3;
  ulg tmp___4;
  {



    {
      {
      }
    }

    {
      while (1)
      {













































        {
          if (match_length <= prev_length)
          {
            {






              {














              }

              while_break___0:
              ;

            }




            {
              if (block_start >= 0L)
              {
              }

              {
              }
            }





          }





          if (match_available)
          {
            {





              {






              }
            }



          }
          else
          {























            {





            }
          }

          while_break___1:
          ;

        }
      }

      while_break:
      ;

    }










    {





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







































  {














































































    {


















    }
















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

    {


    }
    if (outcnt < 16382U)
    {






    }
    else
    {





      {
      }

    }

    if (outcnt < 16382U)
    {






    }
    else
    {





      {
      }

    }

    if (outcnt < 16382U)
    {






    }
    else
    {





      {
      }

    }

    if (outcnt < 16382U)
    {






    }
    else
    {













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





    {







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







  int tmp___3;
  int tmp___4;






  {
    {


    }























    {
      {


































      }




      {
        {
          tmp___3 = strcmp((const char *) (progname + 1), "cat");
        }




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





      {







        {




























































































































































































































































          ;

        }
      }



















      {
      }























      {
      }

    }






















































    {








    }
  }
}

static void treat_stdin(void)
{



















  {
    if (! force)
    {
      if (! list)
      {
        if (decompress)













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
      {
        method = get_method(ifd);
      }
      if (method < 0)
      {
        {
        }
      }











      {



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





      {
      }


    }

    return;
  }
}

static void treat_file(char *iname)
{



















  {
    {










    }





    {




      {





        {
        }

      }

    }

    if (! ((istat.st_mode & 61440U) == 32768U))
    {





      {
      }






      {
      }




















      {










      }



















      {
      }

    }
    else
    {





    }
    if (ifd == (- 1))
    {
      {
      }
    }

    {
















    }

    if (list)































    {
      {
      }

































































      {
      }






      {
      }

    }

    if (verbose)
    {










      {
      }

      {
      }
    }








  }
}

static int create_outfile(void)
{
}

static int do_stat(char *name, struct stat *sbuf)
{



  {
    {


    }














  }
}

static char *known_suffixes[9] = {z_suffix, (char *) ".gz", (char *) ".z", (char *) ".taz", (char *) ".tgz", (char *) "-gz", (char *) "-z", (char *) "_z", (char *) ((void *) 0)};
static char *get_suffix(char *name)
{









  {
    {









    }
























































  }
}

static char *suffixes[6] = {z_suffix, (char *) ".gz", (char *) ".z", (char *) "-z", (char *) ".Z", (char *) ((void *) 0)};
static int get_istat(char *iname, struct stat *sbuf)
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

static int make_ofname(void)
{
  char *suff;




  {
    {






      {















































































        {
          {
            fprintf((FILE *) stderr, (const char *) "%s: %s already has %s suffix -- unchanged\n", progname, ifname, suff);
          }
        }

      }








    }


    return 0;
  }
}

static int get_method(int in)
{
  uch flags___0;
  char magic[2];































































  int tmp___56;
  int tmp___57;
  int tmp___58;
  int tmp___59;

  int tmp___61;
  int tmp___62;


  {








    {





      {
        {


        }
      }




      {



      }










    }
    if (tmp___61 == 0)




    {
      {
        tmp___62 = memcmp((const void *) magic, (const void *) "\037\236", (size_t) 2);
      }
      if (tmp___62 == 0)
      {
        _L___4:



        {



        }










        {



        }





































































































































        {
          if (no_name)












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

              }




            }
            if (! list)
            {
            }

          }

        }

        if ((((int) flags___0) & 16) != 0)
























        {
          header_bytes = (long) (((unsigned long) inptr) + (2UL * (sizeof(long))));
        }

      }
      else
      {
        {
          tmp___59 = memcmp((const void *) magic, (const void *) "PK\003\004", (size_t) 2);
        }








        {









          {
            {
              tmp___57 = memcmp((const void *) magic, (const void *) "\037\235", (size_t) 2);
            }




            {
              {
                tmp___56 = memcmp((const void *) magic, (const void *) "\037\240", (size_t) 2);
              }





              {
                if (to_stdout)
                {
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
      }

    }

  }
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
      {
      }
    }

    {
      exit(exitcode);
    }
  }
}

void abort_gzip(void)
{
}

