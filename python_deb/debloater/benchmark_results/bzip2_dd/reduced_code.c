typedef int Int32;
typedef unsigned char Bool;
typedef unsigned char UChar;
typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;

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
struct __anonstruct_bz_stream_26
{
  char *next_in;
  unsigned int avail_in;
  unsigned int total_in_lo32;
  unsigned int total_in_hi32;
  char *next_out;
  unsigned int avail_out;
  unsigned int total_out_lo32;
  unsigned int total_out_hi32;
  void *state;
  void *(*bzalloc)(void *, int, int);
  void (*bzfree)(void *, void *);
  void *opaque;
};
typedef struct __anonstruct_bz_stream_26 bz_stream;
typedef unsigned int UInt32;
typedef unsigned short UInt16;
struct __anonstruct_DState_28
{































































  Int32 *save_gPerm;
};
typedef struct __anonstruct_DState_28 DState;
struct __anonstruct_EState_27
{
  bz_stream *strm;
  Int32 mode;
  Int32 state;
  UInt32 avail_in_expect;
  UInt32 *arr1;
  UInt32 *arr2;
  UInt32 *ftab;
  Int32 origPtr;
  UInt32 *ptr;
  UChar *block;
  UInt16 *mtfv;
  UChar *zbits;
  Int32 workFactor;
  UInt32 state_in_ch;
  Int32 state_in_len;
  Int32 rNToGo;
  Int32 rTPos;
  Int32 nblock;
  Int32 nblockMAX;
  Int32 numZ;
  Int32 state_out_pos;
  Int32 nInUse;
  Bool inUse[256];
  UChar unseqToSeq[256];
  UInt32 bsBuff;
  Int32 bsLive;
  UInt32 blockCRC;
  UInt32 combinedCRC;
  Int32 verbosity;
  Int32 blockNo;
  Int32 blockSize100k;
  Int32 nMTF;
  Int32 mtfFreq[258];
  UChar selector[18002];
  UChar selectorMtf[18002];
  UChar len[6][258];
  Int32 code[6][258];
  Int32 rfreq[6][258];
  UInt32 len_pack[258][4];
};
typedef struct __anonstruct_EState_27 EState;
typedef void BZFILE;
typedef char Char;
struct __anonstruct_bzFile_29
{
  FILE *handle;
  Char buf[5000];
  Int32 bufN;
  Bool writing;
  bz_stream strm;
  Int32 lastErr;
  Bool initialisedOk;
};
typedef struct __anonstruct_bzFile_29 bzFile;
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








  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
};
struct utimbuf
{
  __time_t actime;
  __time_t modtime;
};
typedef short Int16;
typedef int IntNative;
struct __anonstruct_UInt64_56
{
  UChar b[8];
};
typedef struct __anonstruct_UInt64_56 UInt64;
struct zzzz
{
  Char *name;
  struct zzzz *link;
};
typedef struct zzzz Cell;






void BZ2_hbMakeCodeLengths(UChar *len, Int32 *freq, Int32 alphaSize, Int32 maxLen)
{
  Int32 nNodes;
  Int32 nHeap;
  Int32 n1;
  Int32 n2;
  Int32 i;
  Int32 j;
  Int32 k;
  Bool tooLong;
  Int32 heap[260];
  Int32 weight[516];
  Int32 parent[516];

  Int32 zz;
  Int32 tmp___0;

  Int32 yy;

  Int32 zz___1;
  Int32 yy___0;
  Int32 tmp___2;
  Int32 tmp___3;
  int tmp___4;
  Int32 zz___2;
  Int32 tmp___5;



  {
    i = 0;
    {
      while (1)
      {



        if (! (i < alphaSize))
        {
          goto while_break;
        }











        i++;
      }

      while_break:





      {



        nNodes = alphaSize;




        i = 1;
        {
          while (1)
          {



            if (! (i <= alphaSize))
            {
              goto while_break___1;
            }

            parent[i] = - 1;
            nHeap++;
            heap[nHeap] = i;


            {
              while (1)
              {




                {
                  goto while_break___2;
                }



              }

              while_break___2:
              ;

            }
            heap[zz] = tmp___0;
            i++;
          }

          while_break___1:
          ;





        }

        {
          while (1)
          {



            if (! (nHeap > 1))
            {
              goto while_break___3;
            }

            n1 = heap[1];
            heap[1] = heap[nHeap];
            nHeap--;


            {
              while (1)
              {





                {
                  goto while_break___4;
                }

                if (yy < nHeap)
                {










                }



              }

              while_break___4:
              ;

            }



            nHeap--;


            {
              while (1)
              {





                {
                  goto while_break___5;
                }

                if (yy___0 < nHeap)
                {










                }



              }

              while_break___5:
              ;

            }
            heap[zz___1] = tmp___2;
            nNodes++;
            tmp___3 = nNodes;

            parent[n1] = tmp___3;









            weight[nNodes] = (Int32) (((((unsigned int) weight[n1]) & 4294967040U) + (((unsigned int) weight[n2]) & 4294967040U)) | ((unsigned int) (1 + tmp___4)));
            parent[nNodes] = - 1;
            nHeap++;



            {
              while (1)
              {




                {
                  goto while_break___6;
                }



              }

              while_break___6:
              ;

            }
            heap[zz___2] = tmp___5;
          }

          while_break___3:
          ;





        }

        tooLong = (Bool) 0;
        i = 1;
        {
          while (1)
          {



            if (! (i <= alphaSize))
            {
              goto while_break___7;
            }

            j = 0;
            k = i;
            {
              while (1)
              {



                if (! (parent[k] >= 0))
                {
                  goto while_break___8;
                }

                k = parent[k];
                j++;
              }

              while_break___8:
              ;

            }
            * (len + (i - 1)) = (UChar) j;





            i++;
          }

          while_break___7:
          ;

        }
        if (! tooLong)
        {





          {








          }




        }
      }




    }
    return;
  }
}

void BZ2_hbAssignCodes(Int32 *code, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize)
{


  Int32 i;
  {


    {
      while (1)
      {




        {
          goto while_break;
        }

        i = 0;
        {




















          ;

        }


      }

      while_break:
      ;

    }
    return;
  }
}

void BZ2_hbCreateDecodeTables(Int32 *limit, Int32 *base, Int32 *perm, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize)
{
  exit(-1);
}





static void makeMaps_d(DState *s)
{
  exit(-1);
}

Int32 BZ2_decompress(DState *s)
{
  exit(-1);
}

UInt32 BZ2_crc32Table[256];




void BZ2_bsInitWrite(EState *s)
{
  {
    s->bsLive = 0;


  }
}

static void bsFinishWrite(EState *s)
{
  {
    {
      while (1)
      {




        {
          goto while_break;
        }





      }

      while_break:
      ;

    }
    return;
  }
}

__inline static void bsW(EState *s, Int32 n, UInt32 v)
{
  {
    {
      while (1)
      {




        {
          goto while_break;
        }





      }

      while_break:
      ;

    }



  }
}

static void bsPutUInt32(EState *s, UInt32 u)
{
  {
    {




    }
    return;
  }
}

static void bsPutUChar(EState *s, UChar c)
{
  {
    {
      bsW(s, 8, (UInt32) c);
    }
    return;
  }
}

static void makeMaps_e(EState *s)
{
  Int32 i;
  {
    s->nInUse = 0;
    i = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < 256))
        {
          goto while_break;
        }

        if (s->inUse[i])
        {
          s->unseqToSeq[i] = (UChar) s->nInUse;
          s->nInUse++;
        }

        i++;
      }

      while_break:
      ;

    }
    return;
  }
}

static void generateMTFValues(EState *s)
{
  UChar yy[256];
  Int32 i;
  Int32 j;
  Int32 zPend;
  Int32 wr;
  Int32 EOB;
  UInt32 *ptr;
  UChar *block;
  UInt16 *mtfv;
  UChar ll_i;





  {
    {


      mtfv = s->mtfv;
      makeMaps_e(s);
      EOB = s->nInUse + 1;




















    }
    wr = 0;


    {





















      {




        {
          goto while_break___1;
        }













        {
          if (zPend > 0)
          {
            zPend--;
            {
              while (1)
              {






















              }

              while_break___2:
              ;

            }
            zPend = 0;
          }





          {
            while (1)
            {












            }

            while_break___3:
            ;

          }





        }

        i++;
      }

      while_break___1:
      ;





      {
        while (1)
        {

















          {
            goto while_break___4;
          }

          zPend = (zPend - 2) / 2;
        }

        while_break___4:
        ;

      }
      zPend = 0;
    }

    * (mtfv + wr) = (UInt16) EOB;
    wr++;
    s->mtfFreq[EOB]++;
    s->nMTF = wr;

  }
}

static void sendMTFValues(EState *s)
{
  Int32 v;
  Int32 t;
  Int32 i;
  Int32 j;
  Int32 gs;
  Int32 ge;
  Int32 totc;
  Int32 bt;
  Int32 bc;
  Int32 iter;
  Int32 nSelectors;
  Int32 alphaSize;
  Int32 minLen;
  Int32 maxLen;
  Int32 selCtr;
  Int32 nGroups;
  Int32 nBytes;
  UInt16 cost[6];
  Int32 fave[6];
  UInt16 *mtfv;
  Int32 nPart;
  Int32 remF;
  Int32 tFreq;
  Int32 aFreq;









  Bool inUse16[16];








  {
    mtfv = s->mtfv;







    {
      while (1)
      {




        {
          goto while_break;
        }

        v = 0;
        {

















        }
        t++;
      }

      while_break:
      ;





    }

    if (s->nMTF < 200)
    {
      nGroups = 2;
    }
    else
      if (s->nMTF < 600)
























    {
      while (1)
      {











        {
          while (1)
          {



            if (aFreq < tFreq)
            {









            }



          }

          while_break___2:
          ;





          {
            if (nPart != 1)
            {
              if (((nGroups - nPart) % 2) == 1)
              {


              }

            }

          }











          {


























          }

          while_break___3:
          ;








































          ;





          {









            {

















            }
            t++;
          }

          while_break___6:
          ;





          {
            while (1)
            {

























































              ;

            }
            if (nGroups == 6)
            {
              if (50 == ((ge - gs) + 1))
              {





















































































































































































































              }







              {
                while (1)
                {










                  {

















                  }
                  i++;
                }

                while_break___11:
                ;

              }


























              ;

            }



            nSelectors++;
            if (nGroups == 6)
            {
              if (50 == ((ge - gs) + 1))
              {














































































                ;

              }
            }

            gs = ge + 1;
          }

          while_break___9:
          ;

        }
        if (s->verbosity >= 3)
        {
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








            {


            }
          }

          while_break___16:
          ;

        }

















      }


























      {











        {
          while (1)
          {




            {
              goto while_break___19;
            }





          }

          while_break___19:
          ;

        }



      }

      while_break___18:
      ;





      {




        {
          goto while_break___20;
        }




        {
          while (1)
          {













            if (((int) s->len[t][i]) < minLen)




            i++;
          }

          while_break___21:
          ;





        }

        if (! (! (minLen < 1)))
        {






        }
      }

      while_break___20:
      ;





      {




        {
          goto while_break___22;
        }



        {
          while (1)
          {














          }

          while_break___23:
          ;

        }
        i++;
      }

      while_break___22:
      ;

    }


    {
      while (1)
      {




        {
          goto while_break___24;
        }

        if (inUse16[i])






        {
          {
            bsW(s, 1, (UInt32) 0);
          }
        }

        i++;
      }

      while_break___24:
      ;





      {




        {






          {
            while (1)
            {




              {
                goto while_break___26;
              }

              if (s->inUse[(i * 16) + j])






              {
                {
                  bsW(s, 1, (UInt32) 0);
                }
              }

              j++;
            }

            while_break___26:
            ;

          }
        }

        i++;
      }

      while_break___25:
      ;

    }
    if (s->verbosity >= 3)
    {











      {




        {






          {




            {






            }
          }








        }
      }

      while_break___27:
      ;











      {













































































      }

      while_break___29:
      ;





    }

    nBytes = s->numZ;
    selCtr = 0;
    gs = 0;
    {
      while (1)
      {



        if (! (! (gs >= s->nMTF)))
        {
          goto while_break___33;
        }












        if (nGroups == 6)
        {
          if (50 == ((ge - gs) + 1))
          {
            {






































































































            }
          }











          {
            while (1)
















            ;

          }
        }

        gs = ge + 1;
        selCtr++;
      }

      while_break___33:
      ;










    }

    return;
  }
}

void BZ2_compressBlock(EState *s, Bool is_last_block)
{
  {
    if (s->nblock > 0)
































    {
      {











      }














      {





      }
    }

    return;
  }
}

extern void *malloc(size_t __size);
extern void free(void *__ptr);
extern void exit(int __status);
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;


























void BZ2_bz__AssertH__fail(int errcode)
{
  exit(-1);
}

static int bz_config_ok(void)
{
  {
    if ((sizeof(int)) != 4UL)
    {
      return 0;
    }

    if ((sizeof(short)) != 2UL)
    {
      return 0;
    }

    if ((sizeof(char)) != 1UL)
    {
      return 0;
    }

    return 1;
  }
}

static void *default_bzalloc(void *opaque, Int32 items, Int32 size)
{
  void *v;
  void *tmp;
  {
    {
      tmp = malloc((size_t) (items * size));
      v = tmp;
    }
    return v;
  }
}

static void default_bzfree(void *opaque, void *addr)
{
  {
    if (((unsigned long) addr) != ((unsigned long) ((void *) 0)))
    {
      {
        free(addr);
      }
    }

    return;
  }
}

static void prepare_new_block(EState *s)
{

  {





    {
      while (1)
      {




        {
          goto while_break;
        }



      }

      while_break:
      ;

    }


  }
}

static void init_RL(EState *s)
{
  {
    s->state_in_ch = (UInt32) 256;


  }
}

static Bool isempty_RL(EState *s)
{
  {
    if (s->state_in_ch < 256U)
    {
      if (s->state_in_len > 0)
      {
        exit(-1);
      }

    }
    else
    {
      return (Bool) 1;
    }

  }
}

int BZ2_bzCompressInit(bz_stream *strm, int blockSize100k___0, int verbosity___0, int workFactor___0)
{
  Int32 n;
  EState *s;

  {
    {







































    }

    if (((unsigned long) strm->bzalloc) == ((unsigned long) ((void *) 0)))
    {
      strm->bzalloc = & default_bzalloc;
    }

    if (((unsigned long) strm->bzfree) == ((unsigned long) ((void *) 0)))
    {
      strm->bzfree = & default_bzfree;
    }

    {
      s = (EState *) (* strm->bzalloc)(strm->opaque, (int) (sizeof(EState)), 1);
    }





    {
      s->strm = strm;



      n = 100000 * blockSize100k___0;

      s->arr2 = (UInt32 *) (* strm->bzalloc)(strm->opaque, (int) (((unsigned long) (n + 34)) * (sizeof(UInt32))), 1);











































      s->state = 2;
      s->mode = 2;


      s->nblockMAX = (100000 * blockSize100k___0) - 19;


      s->block = (UChar *) s->arr2;



      strm->state = (void *) s;






    }
    return 0;
  }
}

static void add_pair_to_block(EState *s)
{


  {


    {
      while (1)
      {




        {
          goto while_break;
        }



      }

      while_break:
      ;
























































      ;

    }
    return;
  }
}

static void flush_RL(EState *s)
{
  {
    if (s->state_in_ch < 256U)
    {
      {
        add_pair_to_block(s);
      }
    }

    {
      init_RL(s);
    }
    return;
  }
}

static Bool copy_input_until_stop(EState *s)
{
  Bool progress_in;




  {


    {
      {
        while (1)
        {








          if (s->strm->avail_in == 0U)
          {
            goto while_break;
          }

          progress_in = (Bool) 1;


          {
            if (s->state_in_len == 1)
            {










            }















            {
              {
                add_pair_to_block(s);
              }
            }








          }


          s->strm->next_in++;
          s->strm->avail_in--;






        }

        while_break:





























































        ;

      }
    }

    return progress_in;
  }
}

static Bool copy_output_until_stop(EState *s)
{

  {



































  }
}

static Bool handle_compress(bz_stream *strm)
{


  EState *s;



  Bool tmp___2;
  int tmp___3;
  {


    s = (EState *) strm->state;
    {
      while (1)
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

        if (s->state == 2)
        {
          {
            tmp___2 = copy_input_until_stop(s);





            {
              {



              }
            }

          }










          {
            goto while_break;
          }


        }

      }

      while_break:
      ;





    }


    {
      tmp___3 = 1;
    }


    return (Bool) tmp___3;
  }
}

int BZ2_bzCompress(bz_stream *strm, int action)
{
  Bool progress;
  EState *s;
  int tmp;
  Bool tmp___0;
  Bool tmp___1;
  {





    s = (EState *) strm->state;










    preswitch:
    {

























      if (action == 0)
      {
        {
          progress = handle_compress(strm);
        }
        if (progress)
        {
          tmp = 1;
        }

        return tmp;
      }
      else




















































































      return 4;

      ;

    }

  }
}

int BZ2_bzCompressEnd(bz_stream *strm)
{
  EState *s;
  {





    s = (EState *) strm->state;




































  }
}

int BZ2_bzDecompressInit(bz_stream *strm, int verbosity___0, int small)
{
  exit(-1);
}

static Bool unRLE_obuf_to_output_FAST(DState *s)
{
  exit(-1);
}

Int32 BZ2_indexIntoF(Int32 indx, Int32 *cftab)
{
  exit(-1);
}

static Bool unRLE_obuf_to_output_SMALL(DState *s)
{
  exit(-1);
}

int BZ2_bzDecompress(bz_stream *strm)
{
  exit(-1);
}

int BZ2_bzDecompressEnd(bz_stream *strm)
{
  exit(-1);
}

static Bool myfeof(FILE *f)
{
  exit(-1);
}

BZFILE *BZ2_bzWriteOpen(int *bzerror, FILE *f, int blockSize100k___0, int verbosity___0, int workFactor___0)
{
  Int32 ret;
  bzFile *bzf;


  {










































    {




































    }

    {
      bzf = (bzFile *) malloc(sizeof(bzFile));
    }
    if (((unsigned long) bzf) == ((unsigned long) ((void *) 0)))
    {




















    }



    bzf->handle = f;
    bzf->writing = (Bool) 1;








    {
      ret = BZ2_bzCompressInit(& bzf->strm, blockSize100k___0, verbosity___0, workFactor___0);
    }
    if (ret != 0)
    {










      {
      }
    }

    bzf->strm.avail_in = 0U;


  }
}

void BZ2_bzWrite(int *bzerror, BZFILE *b, void *buf, int len)
{
  Int32 n;
  Int32 n2;
  Int32 ret;
  bzFile *bzf;
  int tmp;
  int tmp___0;
  {
    bzf = (bzFile *) b;

























































    {






























      {



        {
          bzf->strm.avail_out = 5000U;
























          {
            if (tmp___0)
            {













            }

          }
















        }

      }




    }
  }
}

void BZ2_bzWriteClose64(int *bzerror, BZFILE *b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32)
{



  bzFile *bzf;

  int tmp___0;
  int tmp___1;

  {
    bzf = (bzFile *) b;
    if (((unsigned long) bzf) == ((unsigned long) ((void *) 0)))
    {


































































      {
        {
          while (1)
          {



            {







              {










              }

            }

            if (bzf->strm.avail_out < 5000U)
            {
              {


              }





              {
                {
                  tmp___0 = ferror(bzf->handle);
                }
                if (tmp___0)
                {













                }

              }






            }

          }



















        }
        if (tmp___1)
        {










        }

      }


























    }











  }
}

BZFILE *BZ2_bzReadOpen(int *bzerror, FILE *f, int verbosity___0, int small, void *unused, int nUnused)
{
  exit(-1);
}

void BZ2_bzReadClose(int *bzerror, BZFILE *b)
{
  exit(-1);
}

int BZ2_bzRead(int *bzerror, BZFILE *b, void *buf, int len)
{
  exit(-1);
}

void BZ2_bzReadGetUnused(int *bzerror, BZFILE *b, void **unused, int *nUnused)
{
  exit(-1);
}

const char *BZ2_bzlibVersion(void)
{
  exit(-1);
}
















extern int utime(const char *__file, const struct utimbuf *__file_times);
extern int close(int __fd);
extern int fchown(int __fd, __uid_t __owner, __gid_t __group);
extern int isatty(int __fd);
extern int stat(const char *__restrict __file, struct stat *__restrict __buf)  __asm__("stat64");
extern int lstat(const char *__restrict __file, struct stat *__restrict __buf)  __asm__("lstat64");
extern int fchmod(int __fd, __mode_t __mode);
Int32 verbosity;
Bool keepInputFiles;
Bool smallMode;
Bool deleteOutputOnInterrupt;
Bool forceOverwrite;
Bool testFailsExist;
Bool unzFailsExist;
Bool noisy;
Int32 numFileNames;
Int32 numFilesProcessed;
Int32 blockSize100k;
Int32 exitValue;
Int32 opMode;
Int32 srcMode;
Int32 longestFileName;
Char inName[1034];
Char outName[1034];
Char tmpName[1034];
Char *progName;
Char progNameReally[1034];
FILE *outputHandleJustInCase;
Int32 workFactor;










static void uInt64_from_UInt32s(UInt64 *n, UInt32 lo32, UInt32 hi32)
{
  exit(-1);
}

static double uInt64_to_double(UInt64 *n)
{
  exit(-1);
}

static Bool uInt64_isZero(UInt64 *n)
{
  exit(-1);
}

static Int32 uInt64_qrm10(UInt64 *n)
{
  exit(-1);
}

static void uInt64_toAscii(char *outbuf, UInt64 *n)
{
  exit(-1);
}

static Bool myfeof___0(FILE *f)
{
  Int32 c;
  Int32 tmp;
  {
    {
      tmp = fgetc(f);
      c = tmp;
    }
    if (c == (- 1))
    {
      return (Bool) 1;




    }
    return (Bool) 0;
  }
}

static void compressStream(FILE *stream, FILE *zStream)
{
  BZFILE *bzf;
  UChar ibuf[5000];
  Int32 nIbuf;
  UInt32 nbytes_in_lo32;
  UInt32 nbytes_in_hi32;
  UInt32 nbytes_out_lo32;
  UInt32 nbytes_out_hi32;
  Int32 bzerr;

  Int32 ret;
  int tmp;




















  {
    {
      bzf = (void *) 0;
      tmp = ferror(stream);
    }
    if (tmp)
    {



































































    }
    if (bzerr != 0)
    {














































































































      ;

    }
    {
    }
  }
}

static Bool uncompressStream(FILE *zStream, FILE *stream)
{
  exit(-1);
}

static Bool testStream(FILE *zStream)
{
  exit(-1);
}

static void setExit(Int32 v)
{
  exit(-1);
}

static void cadvise(void)
{
  exit(-1);
}

static void showFileNames(void)
{
  exit(-1);
}


static void cleanUpAndFail(Int32 ec)
{
  exit(-1);
}


static void panic(const Char *s)
{
  exit(-1);
}


static void crcError(void)
{
  exit(-1);
}


static void compressedStreamEOF(void)
{
  exit(-1);
}


static void ioError(void)
{
  exit(-1);
}

static void mySignalCatcher(IntNative n)
{
  exit(-1);
}

static void mySIGSEGVorSIGBUScatcher(IntNative n)
{
  exit(-1);
}


static void outOfMemory(void)
{
  exit(-1);
}


static void configError(void)
{
  exit(-1);
}

static void pad(Char *s)
{
  exit(-1);
}

static void copyFileName(Char *to, Char *from)
{
  size_t tmp;
  {
    {
      tmp = strlen((const char *) from);
    }
    if (tmp > 1024UL)
    {
      exit(-1);
    }

    {
      strncpy((char *) to, (const char *) from, (size_t) 1024);

    }
    return;
  }
}

static Bool fileExists(Char *name)
{
  exit(-1);
}

static FILE *fopen_output_safely(Char *name, const char *mode)
{
  exit(-1);
}

static Bool notAStandardFile(Char *name)
{
  exit(-1);
}

static Int32 countHardLinks(Char *name)
{
  exit(-1);
}


static void saveInputFileMetaInfo(Char *srcName)
{
  exit(-1);
}

static void applySavedTimeInfoToOutputFile(Char *dstName)
{
  exit(-1);
}

static void applySavedFileAttrToOutputFile(IntNative fd)
{
  exit(-1);
}

static Bool containsDubiousChars(Char *name)
{
  exit(-1);
}

const Char *zSuffix[4] = {".bz2", ".bz", ".tbz2", ".tbz"};

static Bool hasSuffix(Char *s, const Char *suffix)
{





  {
    {




    }





    {





    }

    return (Bool) 0;
  }
}

static Bool mapSuffix(Char *name, const Char *oldSuffix, const Char *newSuffix)
{
  exit(-1);
}

static void compress(Char *name)
{



































  {


    {











































    }
    if (srcMode != 1)
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

static void uncompress(Char *name)
{
  exit(-1);
}

static void testf(Char *name)
{
  exit(-1);
}

static void license(void)
{
  exit(-1);
}

static void usage(Char *fullProgName)
{
  exit(-1);
}

static void redundant(Char *flag)
{
  exit(-1);
}

static void *myMalloc(Int32 n)
{
  void *p;
  {
    {
      p = malloc((size_t) n);
    }
    if (((unsigned long) p) == ((unsigned long) ((void *) 0)))
    {
      exit(-1);
    }

    return p;
  }
}

static Cell *mkCell(void)
{
  Cell *c;
  {
    {
      c = (Cell *) myMalloc((Int32) (sizeof(Cell)));


    }
    return c;
  }
}

static Cell *snocString(Cell *root, Char *name)
{
  Cell *tmp;
  Cell *tmp___0;
  size_t tmp___1;

  {
    if (((unsigned long) root) == ((unsigned long) ((void *) 0)))
    {
      {
        tmp___0 = mkCell();
        tmp = tmp___0;

        tmp->name = (Char *) myMalloc((Int32) (5UL + tmp___1));
        strcpy((char *) tmp->name, (const char *) name);
      }
      return tmp;
    }
    else
    {
      {
        while (1)
        {








        }




      }
      {
      }
    }

  }
}

static void addFlagsFromEnvVar(Cell **argList, Char *varName)
{



  Char *envbase;



  {
    {
      envbase = getenv((const char *) varName);
    }
    if (((unsigned long) envbase) != ((unsigned long) ((void *) 0)))
    {
      {
        while (1)
        {




          {





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

        }




      }
    }

    return;
  }
}

IntNative main(IntNative argc, Char **argv)
{
  Int32 i;
  Int32 j;
  Char *tmp;
  Cell *argList;
  Cell *aa;
  Bool decode;
  int tmp___0;
  size_t tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int tmp___26;
  int tmp___27;
  int tmp___28;








  {
    if ((sizeof(Int32)) != 4UL)



































    {
      {
        configError();
      }
    }






    {





















      progName = & progNameReally[0];




      {














      }

      while_break:











      {




        {











































        }

        {
        }









      }

      while_break___1:
      ;

    }














    {
      {





      }

    }

    {
      tmp___5 = strstr((const char *) progName, "z2cat");
    }
    if (((unsigned long) tmp___5) != ((unsigned long) ((char *) 0)))




    {
      {
        tmp___6 = strstr((const char *) progName, "Z2CAT");
      }
      if (((unsigned long) tmp___6) != ((unsigned long) ((char *) 0)))




      {
        {
          tmp___7 = strstr((const char *) progName, "zcat");
        }
        if (((unsigned long) tmp___7) != ((unsigned long) ((char *) 0)))




        {
          {
            tmp___8 = strstr((const char *) progName, "ZCAT");
          }
          if (((unsigned long) tmp___8) != ((unsigned long) ((char *) 0)))
          {









          }

        }

      }






      {

















        {
          if (((int) (* (aa->name + 1))) != 45)
          {
            j = 1;
            {
              while (1)
              {




                {










































































































































































































                  ;

                }
                j++;
              }




            }
          }

        }

        aa = aa->link;
      }

      while_break___2:
      ;





      {
























        {
          {
            tmp___27 = strcmp((const char *) aa->name, "--decompress");
          }
          if (tmp___27 == 0)




          {
            {
              tmp___26 = strcmp((const char *) aa->name, "--compress");
            }
            if (tmp___26 == 0)




            {
              {
                tmp___25 = strcmp((const char *) aa->name, "--force");
              }
              if (tmp___25 == 0)




              {
                {
                  tmp___24 = strcmp((const char *) aa->name, "--test");
                }
                if (tmp___24 == 0)




                {
                  {
                    tmp___23 = strcmp((const char *) aa->name, "--keep");
                  }
                  if (tmp___23 == 0)




                  {
                    {
                      tmp___22 = strcmp((const char *) aa->name, "--small");
                    }
                    if (tmp___22 == 0)




                    {
                      {
                        tmp___21 = strcmp((const char *) aa->name, "--quiet");
                      }
                      if (tmp___21 == 0)




                      {
                        {
                          tmp___20 = strcmp((const char *) aa->name, "--version");
                        }
                        if (tmp___20 == 0)




                        {
                          {
                            tmp___19 = strcmp((const char *) aa->name, "--license");
                          }
                          if (tmp___19 == 0)




                          {
                            {
                              tmp___18 = strcmp((const char *) aa->name, "--exponential");
                            }
                            if (tmp___18 == 0)




                            {
                              {
                                tmp___17 = strcmp((const char *) aa->name, "--repetitive-best");
                              }
                              if (tmp___17 == 0)




                              {
                                {
                                  tmp___16 = strcmp((const char *) aa->name, "--repetitive-fast");
                                }
                                if (tmp___16 == 0)




                                {
                                  {
                                    tmp___15 = strcmp((const char *) aa->name, "--fast");
                                  }
                                  if (tmp___15 == 0)




                                  {
                                    {
                                      tmp___14 = strcmp((const char *) aa->name, "--best");
                                    }
                                    if (tmp___14 == 0)




                                    {
                                      {
                                        tmp___13 = strcmp((const char *) aa->name, "--verbose");
                                      }
                                      if (tmp___13 == 0)




                                      {
                                        {
                                          tmp___12 = strcmp((const char *) aa->name, "--help");
                                        }
                                        if (tmp___12 == 0)




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

            }

          }

        }

        aa = aa->link;
      }

      while_break___4:
      ;










      {





      }








































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
    else
      if (opMode == 2)
    {
      if (srcMode == 1)




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



        {
          {
            free((void *) aa->name);
          }
        }

        {


        }
      }

      while_break___8:
      ;

    }
    return exitValue;
  }
}

__inline static void fallbackSimpleSort(UInt32 *fmap, UInt32 *eclass, Int32 lo, Int32 hi)
{
  Int32 i;
  Int32 j;


  {






    {
      i = hi - 4;
      {
        while (1)
        {











          {
            while (1)
            {



              if (j <= hi)
              {









              }



            }




          }


        }




      }





      {











        {
          while (1)
          {



            if (j <= hi)
            {









            }



          }




        }


      }




    }
    return;
  }
}

static void fallbackQSort3(UInt32 *fmap, UInt32 *eclass, Int32 loSt, Int32 hiSt)
{



























  {





    {
      while (1)
      {
        while_continue:












































        {
          while (1)
          {



            {
              while (1)
              {

























              }

              while_break___1:





              {

























              }

              while_break___2:
              ;





            }






          }

          while_break___0:
          ;





















          {














          }

          while_break___3:
          ;
















          {














          }

          while_break___4:
          ;

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

static void fallbackSort(UInt32 *fmap, UInt32 *eclass, UInt32 *bhtab, Int32 nblock, Int32 verb)
{
  Int32 ftab[257];
  Int32 ftabCopy[256];
  Int32 H;
  Int32 i;
  Int32 j;
  Int32 k;









  {







    {
































































































































































      ;





      {










        {
          while (1)
          {





















          }

          while_break___8:
          ;

        }


        {
          while (1)
          {




            {
              while (1)
              {







































































































































































                ;

              }
            }

          }





























































          ;

        }



      }








    }

    return;
  }
}

__inline static Bool mainGtU(UInt32 i1, UInt32 i2, UChar *block, UInt16 *quadrant, UInt32 nblock, Int32 *budget)
{





  {













































































































    {
      while (1)
      {




















































































































































      }




    }
  }
}

static Int32 incs[14] = {1, 4, 13, 40, 121, 364, 1093, 3280, 9841, 29524, 88573, 265720, 797161, 2391484};
static void mainSimpleSort(UInt32 *ptr, UChar *block, UInt16 *quadrant, Int32 nblock, Int32 lo, Int32 hi, Int32 d, Int32 *budget)
{









  {







    {














      ;





      {








































































































































      }




    }
    return;
  }
}

__inline static UChar mmed3(UChar a, UChar b, UChar c)
{

  {


















  }
}

static void mainQSort3(UInt32 *ptr, UChar *block, UInt16 *quadrant, Int32 nblock, Int32 loSt, Int32 hiSt, Int32 dSt, Int32 *budget)
{
  Int32 unLo;
  Int32 unHi;
  Int32 ltLo;
  Int32 gtHi;










  Int32 nextLo[3];
  Int32 nextHi[3];





















  {





    {
      while (1)
      {
        while_continue:






















        {























          {



            {
              while (1)
              {

























              }

              while_break___1:





              {

























              }

              while_break___2:
              ;





            }






          }

          while_break___0:
          ;

        }
        if (gtHi < ltLo)
        {





















          {














          }

          while_break___3:
          ;
















          {














          }

          while_break___4:
          ;

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

static void mainSort(UInt32 *ptr, UChar *block, UInt16 *quadrant, UInt32 *ftab, Int32 nblock, Int32 verb, Int32 *budget)
{
  Int32 i;
  Int32 j;

























  {






    {

























































































































































































































      {





        {
          while (1)
          {










            {
              while (1)
              {















              }

              while_break___10:
              ;

            }
            zero:



          }

          while_break___9:
          ;






























          {









            {


























            }

            j++;
          }

          while_break___12:
          ;


























































          ;





          {









































































































            ;





          }

        }

        i++;
      }

      while_break___11:
      ;





    }

    return;
  }
}

void BZ2_blockSort(EState *s)
{











  {













    {























      {





        {
        }









        {
        }
      }

    }



    {
      while (1)
      {















      }








    }

    return;
  }
}

