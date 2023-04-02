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
Int32 BZ2_rNums[512];
Int32 BZ2_rNums[512] = {619, 720, 127, 481, 931, 816, 813, 233, 566, 247, 985, 724, 205, 454, 863, 491, 741, 242, 949, 214, 733, 859, 335, 708, 621, 574, 73, 654, 730, 472, 419, 436, 278, 496, 867, 210, 399, 680, 480, 51, 878, 465, 811, 169, 869, 675, 611, 697, 867, 561, 862, 687, 507, 283, 482, 129, 807, 591, 733, 623, 150, 238, 59, 379, 684, 877, 625, 169, 643, 105, 170, 607, 520, 932, 727, 476, 693, 425, 174, 647, 73, 122, 335, 530, 442, 853, 695, 249, 445, 515, 909, 545, 703, 919, 874, 474, 882, 500, 594, 612, 641, 801, 220, 162, 819, 984, 589, 513, 495, 799, 161, 604, 958, 533, 221, 400, 386, 867, 600, 782, 382, 596, 414, 171, 516, 375, 682, 485, 911, 276, 98, 553, 163, 354, 666, 933, 424, 341, 533, 870, 227, 730, 475, 186, 263, 647, 537, 686, 600, 224, 469, 68, 770, 919, 190, 373, 294, 822, 808, 206, 184, 943, 795, 384, 383, 461, 404, 758, 839, 887, 715, 67, 618, 276, 204, 918, 873, 777, 604, 560, 951, 160, 578, 722, 79, 804, 96, 409, 713, 940, 652, 934, 970, 447, 318, 353, 859, 672, 112, 785, 645, 863, 803, 350, 139, 93, 354, 99, 820, 908, 609, 772, 154, 274, 580, 184, 79, 626, 630, 742, 653, 282, 762, 623, 680, 81, 927, 626, 789, 125, 411, 521, 938, 300, 821, 78, 343, 175, 128, 250, 170, 774, 972, 275, 999, 639, 495, 78, 352, 126, 857, 956, 358, 619, 580, 124, 737, 594, 701, 612, 669, 112, 134, 694, 363, 992, 809, 743, 168, 974, 944, 375, 748, 52, 600, 747, 642, 182, 862, 81, 344, 805, 988, 739, 511, 655, 814, 334, 249, 515, 897, 955, 664, 981, 649, 113, 974, 459, 893, 228, 433, 837, 553, 268, 926, 240, 102, 654, 459, 51, 686, 754, 806, 760, 493, 403, 415, 394, 687, 700, 946, 670, 656, 610, 738, 392, 760, 799, 887, 653, 978, 321, 576, 617, 626, 502, 894, 679, 243, 440, 680, 879, 194, 572, 640, 724, 926, 56, 204, 700, 707, 151, 457, 449, 797, 195, 791, 558, 945, 679, 297, 59, 87, 824, 713, 663, 412, 693, 342, 606, 134, 108, 571, 364, 631, 212, 174, 643, 304, 329, 343, 97, 430, 751, 497, 314, 983, 374, 822, 928, 140, 206, 73, 263, 980, 736, 876, 478, 430, 305, 170, 514, 364, 692, 829, 82, 855, 953, 676, 246, 369, 970, 294, 750, 807, 827, 150, 790, 288, 923, 804, 378, 215, 828, 592, 281, 565, 555, 710, 82, 896, 831, 547, 261, 524, 462, 293, 465, 502, 56, 661, 821, 976, 991, 658, 869, 905, 758, 745, 193, 768, 550, 608, 933, 378, 286, 215, 979, 792, 961, 61, 688, 793, 644, 986, 403, 106, 366, 905, 644, 372, 567, 466, 434, 645, 210, 389, 550, 919, 135, 780, 773, 635, 389, 707, 100, 626, 958, 165, 504, 920, 176, 193, 713, 857, 265, 203, 50, 668, 108, 645, 990, 626, 197, 510, 357, 358, 850, 858, 364, 936, 638};
void BZ2_bz__AssertH__fail(int errcode);
void BZ2_hbAssignCodes(Int32 *code, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize);
void BZ2_hbMakeCodeLengths(UChar *len, Int32 *freq, Int32 alphaSize, Int32 maxLen);
void BZ2_hbCreateDecodeTables(Int32 *limit, Int32 *base, Int32 *perm, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize);
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
  int tmp;
  Int32 zz;
  Int32 tmp___0;
  Int32 zz___0;
  Int32 yy;
  Int32 tmp___1;
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




        {
          goto while_break;
        }












      }

      while_break:





      {









        {
          while (1)
          {




            {
              goto while_break___1;
            }






            {

















            }


          }

          while_break___1:
          ;










          {













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





            if ((weight[n1] & 255) > (weight[n2] & 255))














            {

















            }
            heap[zz___2] = tmp___5;
          }

          while_break___3:
          ;

        }








        {
          while (1)
          {




            {
              goto while_break___7;
            }



            {

















            }






          }

          while_break___7:
          ;

        }
        if (! tooLong)
        {





          {




            {
            }

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
}

extern struct _IO_FILE *stderr;
extern int fprintf(FILE *__restrict __stream, const char *__restrict __format, ...);
Int32 BZ2_indexIntoF(Int32 indx, Int32 *cftab);
Int32 BZ2_decompress(DState *s);
static void makeMaps_d(DState *s)
{
}

Int32 BZ2_decompress(DState *s)
{
}

UInt32 BZ2_crc32Table[256];
UInt32 BZ2_crc32Table[256] = {(UInt32) 0L, (UInt32) 79764919L, (UInt32) 159529838L, (UInt32) 222504665L, (UInt32) 319059676L, (UInt32) 398814059L, (UInt32) 445009330L, (UInt32) 507990021L, (UInt32) 638119352L, (UInt32) 583659535L, (UInt32) 797628118L, (UInt32) 726387553L, (UInt32) 890018660L, (UInt32) 835552979L, (UInt32) 1015980042L, (UInt32) 944750013L, (UInt32) 1276238704L, (UInt32) 1221641927L, (UInt32) 1167319070L, (UInt32) 1095957929L, (UInt32) 1595256236L, (UInt32) 1540665371L, (UInt32) 1452775106L, (UInt32) 1381403509L, (UInt32) 1780037320L, (UInt32) 1859660671L, (UInt32) 1671105958L, (UInt32) 1733955601L, (UInt32) 2031960084L, (UInt32) 2111593891L, (UInt32) 1889500026L, (UInt32) 1952343757L, (UInt32) 2552477408L, (UInt32) 2632100695L, (UInt32) 2443283854L, (UInt32) 2506133561L, (UInt32) 2334638140L, (UInt32) 2414271883L, (UInt32) 2191915858L, (UInt32) 2254759653L, (UInt32) 3190512472L, (UInt32) 3135915759L, (UInt32) 3081330742L, (UInt32) 3009969537L, (UInt32) 2905550212L, (UInt32) 2850959411L, (UInt32) 2762807018L, (UInt32) 2691435357L, (UInt32) 3560074640L, (UInt32) 3505614887L, (UInt32) 3719321342L, (UInt32) 3648080713L, (UInt32) 3342211916L, (UInt32) 3287746299L, (UInt32) 3467911202L, (UInt32) 3396681109L, (UInt32) 4063920168L, (UInt32) 4143685023L, (UInt32) 4223187782L, (UInt32) 4286162673L, (UInt32) 3779000052L, (UInt32) 3858754371L, (UInt32) 3904687514L, (UInt32) 3967668269L, (UInt32) 881225847L, (UInt32) 809987520L, (UInt32) 1023691545L, (UInt32) 969234094L, (UInt32) 662832811L, (UInt32) 591600412L, (UInt32) 771767749L, (UInt32) 717299826L, (UInt32) 311336399L, (UInt32) 374308984L, (UInt32) 453813921L, (UInt32) 533576470L, (UInt32) 25881363L, (UInt32) 88864420L, (UInt32) 134795389L, (UInt32) 214552010L, (UInt32) 2023205639L, (UInt32) 2086057648L, (UInt32) 1897238633L, (UInt32) 1976864222L, (UInt32) 1804852699L, (UInt32) 1867694188L, (UInt32) 1645340341L, (UInt32) 1724971778L, (UInt32) 1587496639L, (UInt32) 1516133128L, (UInt32) 1461550545L, (UInt32) 1406951526L, (UInt32) 1302016099L, (UInt32) 1230646740L, (UInt32) 1142491917L, (UInt32) 1087903418L, (UInt32) 2896545431L, (UInt32) 2825181984L, (UInt32) 2770861561L, (UInt32) 2716262478L, (UInt32) 3215044683L, (UInt32) 3143675388L, (UInt32) 3055782693L, (UInt32) 3001194130L, (UInt32) 2326604591L, (UInt32) 2389456536L, (UInt32) 2200899649L, (UInt32) 2280525302L, (UInt32) 2578013683L, (UInt32) 2640855108L, (UInt32) 2418763421L, (UInt32) 2498394922L, (UInt32) 3769900519L, (UInt32) 3832873040L, (UInt32) 3912640137L, (UInt32) 3992402750L, (UInt32) 4088425275L, (UInt32) 4151408268L, (UInt32) 4197601365L, (UInt32) 4277358050L, (UInt32) 3334271071L, (UInt32) 3263032808L, (UInt32) 3476998961L, (UInt32) 3422541446L, (UInt32) 3585640067L, (UInt32) 3514407732L, (UInt32) 3694837229L, (UInt32) 3640369242L, (UInt32) 1762451694L, (UInt32) 1842216281L, (UInt32) 1619975040L, (UInt32) 1682949687L, (UInt32) 2047383090L, (UInt32) 2127137669L, (UInt32) 1938468188L, (UInt32) 2001449195L, (UInt32) 1325665622L, (UInt32) 1271206113L, (UInt32) 1183200824L, (UInt32) 1111960463L, (UInt32) 1543535498L, (UInt32) 1489069629L, (UInt32) 1434599652L, (UInt32) 1363369299L, (UInt32) 622672798L, (UInt32) 568075817L, (UInt32) 748617968L, (UInt32) 677256519L, (UInt32) 907627842L, (UInt32) 853037301L, (UInt32) 1067152940L, (UInt32) 995781531L, (UInt32) 51762726L, (UInt32) 131386257L, (UInt32) 177728840L, (UInt32) 240578815L, (UInt32) 269590778L, (UInt32) 349224269L, (UInt32) 429104020L, (UInt32) 491947555L, (UInt32) 4046411278L, (UInt32) 4126034873L, (UInt32) 4172115296L, (UInt32) 4234965207L, (UInt32) 3794477266L, (UInt32) 3874110821L, (UInt32) 3953728444L, (UInt32) 4016571915L, (UInt32) 3609705398L, (UInt32) 3555108353L, (UInt32) 3735388376L, (UInt32) 3664026991L, (UInt32) 3290680682L, (UInt32) 3236090077L, (UInt32) 3449943556L, (UInt32) 3378572211L, (UInt32) 3174993278L, (UInt32) 3120533705L, (UInt32) 3032266256L, (UInt32) 2961025959L, (UInt32) 2923101090L, (UInt32) 2868635157L, (UInt32) 2813903052L, (UInt32) 2742672763L, (UInt32) 2604032198L, (UInt32) 2683796849L, (UInt32) 2461293480L, (UInt32) 2524268063L, (UInt32) 2284983834L, (UInt32) 2364738477L, (UInt32) 2175806836L, (UInt32) 2238787779L, (UInt32) 1569362073L, (UInt32) 1498123566L, (UInt32) 1409854455L, (UInt32) 1355396672L, (UInt32) 1317987909L, (UInt32) 1246755826L, (UInt32) 1192025387L, (UInt32) 1137557660L, (UInt32) 2072149281L, (UInt32) 2135122070L, (UInt32) 1912620623L, (UInt32) 1992383480L, (UInt32) 1753615357L, (UInt32) 1816598090L, (UInt32) 1627664531L, (UInt32) 1707420964L, (UInt32) 295390185L, (UInt32) 358241886L, (UInt32) 404320391L, (UInt32) 483945776L, (UInt32) 43990325L, (UInt32) 106832002L, (UInt32) 186451547L, (UInt32) 266083308L, (UInt32) 932423249L, (UInt32) 861060070L, (UInt32) 1041341759L, (UInt32) 986742920L, (UInt32) 613929101L, (UInt32) 542559546L, (UInt32) 756411363L, (UInt32) 701822548L, (UInt32) 3316196985L, (UInt32) 3244833742L, (UInt32) 3425377559L, (UInt32) 3370778784L, (UInt32) 3601682597L, (UInt32) 3530312978L, (UInt32) 3744426955L, (UInt32) 3689838204L, (UInt32) 3819031489L, (UInt32) 3881883254L, (UInt32) 3928223919L, (UInt32) 4007849240L, (UInt32) 4037393693L, (UInt32) 4100235434L, (UInt32) 4180117107L, (UInt32) 4259748804L, (UInt32) 2310601993L, (UInt32) 2373574846L, (UInt32) 2151335527L, (UInt32) 2231098320L, (UInt32) 2596047829L, (UInt32) 2659030626L, (UInt32) 2470359227L, (UInt32) 2550115596L, (UInt32) 2947551409L, (UInt32) 2876312838L, (UInt32) 2788305887L, (UInt32) 2733848168L, (UInt32) 3165939309L, (UInt32) 3094707162L, (UInt32) 3040238851L, (UInt32) 2985771188L};
void BZ2_blockSort(EState *s);
void BZ2_compressBlock(EState *s, Bool is_last_block);
void BZ2_bsInitWrite(EState *s);
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


    {
      while (1)
      {




        {
          goto while_break;
        }

        if (s->inUse[i])
        {


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













































      ;





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

















  Bool inUse16[16];








  {


    {
      {
      }






      {









        {































































































          ;





























          {




            {
              goto while_break___3;
            }

            if (v >= gs)
            {













            }

            v++;
          }

          while_break___3:
          ;

        }



      }

      while_break___1:
      ;





      {




        {
          goto while_break___4;
        }

        t = 0;
        {





















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









              {














































































                ;

              }
            }

            gs = ge + 1;












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




            {






            }
          }




        }
        iter++;
      }

      while_break___4:
      ;

    }

















    {





















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



















































          ;

        }







        {
          {
          }
        }

        {


        }
      }

      while_break___20:
      ;





      {










        {
          while (1)
          {




            {
              goto while_break___23;
            }







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
      }
    }

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

    }








    {
      while (1)
      {




        {
          goto while_break___29;









          {




            {





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
        t++;
      }

      while_break___29:
      ;

    }









    {
      while (1)
      {




        {
          goto while_break___33;
        }














        {
          if (50 == ((ge - gs) + 1))
          {
            {






































































































            }
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

      while_break___33:
      ;

    }













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
        {
        }
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
























void BZ2_bzWriteClose64(int *bzerror, BZFILE *b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32);
const char *BZ2_bzlibVersion(void);
void BZ2_bz__AssertH__fail(int errcode)
{
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
  int tmp;
  {
    {
      tmp = bz_config_ok();
    }

































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
    if (((unsigned long) s) == ((unsigned long) ((void *) 0)))
    {
    }

    {
      s->strm = strm;



      n = 100000 * blockSize100k___0;

      s->arr2 = (UInt32 *) (* strm->bzalloc)(strm->opaque, (int) (((unsigned long) (n + 34)) * (sizeof(UInt32))), 1);

    }









    {

























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




          {
          }

          if (s->strm->avail_in == 0U)
          {
            goto while_break;







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


          {
          }

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
          if (s->mode == 3)
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


    return (Bool) tmp___3;
  }
}

int BZ2_bzCompress(bz_stream *strm, int action)
{
  Bool progress;




  {














    {





      {










      }







      {
        {
          progress = handle_compress(strm);
        }











































        {
        }















      }
























      return 4;

      ;

    }

  }
}

int BZ2_bzCompressEnd(bz_stream *strm)
{
  EState *s;
  {
    if (((unsigned long) strm) == ((unsigned long) ((void *) 0)))
    {
    }

    s = (EState *) strm->state;


































  }
}

int BZ2_bzDecompressInit(bz_stream *strm, int verbosity___0, int small)
{
}

static Bool unRLE_obuf_to_output_FAST(DState *s)
{
}

Int32 BZ2_indexIntoF(Int32 indx, Int32 *cftab)
{
}

static Bool unRLE_obuf_to_output_SMALL(DState *s)
{
}

int BZ2_bzDecompress(bz_stream *strm)
{
}

int BZ2_bzDecompressEnd(bz_stream *strm)
{
}

static Bool myfeof(FILE *f)
{
}

BZFILE *BZ2_bzWriteOpen(int *bzerror, FILE *f, int blockSize100k___0, int verbosity___0, int workFactor___0)
{
  Int32 ret;
  bzFile *bzf;


  {



























































    {





      {
      }

    }

    {
      bzf = (bzFile *) malloc(sizeof(bzFile));
    }
    if (((unsigned long) bzf) == ((unsigned long) ((void *) 0)))
    {





      {
      }











    }



    bzf->handle = f;





    {
    }

    {
      ret = BZ2_bzCompressInit(& bzf->strm, blockSize100k___0, verbosity___0, workFactor___0);
    }
    if (ret != 0)
    {





      {
      }

      {
      }
    }

    bzf->strm.avail_in = 0U;


  }
}

void BZ2_bzWrite(int *bzerror, BZFILE *b, void *buf, int len)
{





  int tmp___0;
  {
































































    {





      {
      }

    }



    {
      while (1)
      {





















        {
          {
          }




          {
            {
            }
            if (tmp___0)
            {








              {
              }

            }

          }















          return;
        }

      }




    }
  }
}

void BZ2_bzWriteClose64(int *bzerror, BZFILE *b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32)
{


  Int32 ret;
  bzFile *bzf;

  int tmp___0;


  {
    bzf = (bzFile *) b;




























    {





      {
      }


























      {
        {
          while (1)
          {



            {


              ret = BZ2_bzCompress(& bzf->strm, 2);
            }

















            {
              {


              }




              {
                {
                  tmp___0 = ferror(bzf->handle);
                }
                if (tmp___0)
                {








                  {
                  }

                }

              }

            }

            if (ret == 4)
            {
              goto while_break;
            }

          }

          while_break:
          ;

        }
      }

    }































































  }
}

BZFILE *BZ2_bzReadOpen(int *bzerror, FILE *f, int verbosity___0, int small, void *unused, int nUnused)
{
}

void BZ2_bzReadClose(int *bzerror, BZFILE *b)
{
}

int BZ2_bzRead(int *bzerror, BZFILE *b, void *buf, int len)
{
}

void BZ2_bzReadGetUnused(int *bzerror, BZFILE *b, void **unused, int *nUnused)
{
}

const char *BZ2_bzlibVersion(void)
{
}

















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
}

static double uInt64_to_double(UInt64 *n)
{
}

static Bool uInt64_isZero(UInt64 *n)
{
}

static Int32 uInt64_qrm10(UInt64 *n)
{
}

static void uInt64_toAscii(char *outbuf, UInt64 *n)
{
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































  {
    {


















































































    }





    {
      {
      }






















    }





    {





      ;

    }



    ;

    {
    }
    {




































      ;

    }
    {
    }
  }
}

static Bool uncompressStream(FILE *zStream, FILE *stream)
{
}

static Bool testStream(FILE *zStream)
{
}

static void setExit(Int32 v)
{
}

static void cadvise(void)
{
}

static void showFileNames(void)
{
}


static void cleanUpAndFail(Int32 ec)
{
}


static void panic(const Char *s)
{
}


static void crcError(void)
{
}


static void compressedStreamEOF(void)
{
}


static void ioError(void)
{
}

static void mySignalCatcher(IntNative n)
{
}

static void mySIGSEGVorSIGBUScatcher(IntNative n)
{
}


static void outOfMemory(void)
{
}


static void configError(void)
{
}

static void pad(Char *s)
{
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
      {
      }
    }

    {


    }
    return;
  }
}

static Bool fileExists(Char *name)
{
}

static FILE *fopen_output_safely(Char *name, const char *mode)
{
}

static Bool notAStandardFile(Char *name)
{
}

static Int32 countHardLinks(Char *name)
{
}


static void saveInputFileMetaInfo(Char *srcName)
{
}

static void applySavedTimeInfoToOutputFile(Char *dstName)
{
}

static void applySavedFileAttrToOutputFile(IntNative fd)
{
}

static Bool containsDubiousChars(Char *name)
{
}

const Char *zSuffix[4] = {".bz2", ".bz", ".tbz2", ".tbz"};

static Bool hasSuffix(Char *s, const Char *suffix)
{





  {
    {











    }





  }
}

static Bool mapSuffix(Char *name, const Char *oldSuffix, const Char *newSuffix)
{
}

static void compress(Char *name)
{



































  {


    {























      {


      }













      ;







      {
      }








      {
      }






      {






















      }

      while_break:
      ;

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

static void uncompress(Char *name)
{
}

static void testf(Char *name)
{
}

static void license(void)
{
}

static void usage(Char *fullProgName)
{
}

static void redundant(Char *flag)
{
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
      {
      }
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

      }
      return tmp;
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
      {
      }
    }

  }
}

static void addFlagsFromEnvVar(Cell **argList, Char *varName)
{


  Int32 k;
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
          }




































          {
            if (k > 1024)
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









  {
    if ((sizeof(Int32)) != 4UL)




























    {
      {
        configError();
      }
    }


    {
      {
        configError();
      }
    }






    {





















      progName = & progNameReally[0];











































































































    }




    {
      {
        tmp___4 = strstr((const char *) progName, "UNZIP");
      }








    }




    {
      {
        tmp___6 = strstr((const char *) progName, "Z2CAT");
      }




      {
        {
          tmp___7 = strstr((const char *) progName, "zcat");
        }




        {
          {
            tmp___8 = strstr((const char *) progName, "ZCAT");
          }
          if (((unsigned long) tmp___8) != ((unsigned long) ((char *) 0)))
          {





            {
            }

          }

        }

      }






      {




        {
          goto while_break___2;




        }





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
          goto while_break___4;











        }




        {
          {
            tmp___27 = strcmp((const char *) aa->name, "--decompress");
          }




          {
            {
              tmp___26 = strcmp((const char *) aa->name, "--compress");
            }




            {
              {
                tmp___25 = strcmp((const char *) aa->name, "--force");
              }




              {
                {
                  tmp___24 = strcmp((const char *) aa->name, "--test");
                }




                {
                  {
                    tmp___23 = strcmp((const char *) aa->name, "--keep");
                  }




                  {
                    {
                      tmp___22 = strcmp((const char *) aa->name, "--small");
                    }




                    {
                      {
                        tmp___21 = strcmp((const char *) aa->name, "--quiet");
                      }




                      {
                        {
                          tmp___20 = strcmp((const char *) aa->name, "--version");
                        }






                        {
                          {
                            tmp___19 = strcmp((const char *) aa->name, "--license");
                          }






                          {
                            {
                              tmp___18 = strcmp((const char *) aa->name, "--exponential");
                            }




                            {
                              {
                                tmp___17 = strcmp((const char *) aa->name, "--repetitive-best");
                              }






                              {
                                {
                                  tmp___16 = strcmp((const char *) aa->name, "--repetitive-fast");
                                }






                                {
                                  {
                                    tmp___15 = strcmp((const char *) aa->name, "--fast");
                                  }




                                  {
                                    {
                                      tmp___14 = strcmp((const char *) aa->name, "--best");
                                    }




                                    {
                                      {
                                        tmp___13 = strcmp((const char *) aa->name, "--verbose");
                                      }




                                      {
                                        {
                                          tmp___12 = strcmp((const char *) aa->name, "--help");
                                        }






                                        {
                                          {
                                            tmp___11 = strncmp((const char *) aa->name, "--", (size_t) 2);
                                          }
                                          if (tmp___11 == 0)
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

        }

        aa = aa->link;
      }

      while_break___4:
      ;

    }





    {
      if (smallMode)
      {
        if (blockSize100k > 2)
        {
        }

      }





































































































































































































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















        }


        {
        }


      }

      while_break___7:
      ;

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

__inline static Bool mainGtU(UInt32 i1, UInt32 i2, UChar *block, UInt16 *quadrant, UInt32 nblock, Int32 *budget)
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
  Int32 k;
  Int32 ss;
  Int32 sb;














  Int32 bbSize;
  Int32 shifts;
  Int32 a2update;
  UInt16 qVal;




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


              {



                {
                  if (verb >= 4)
                  {
                    {
                    }
                  }

                  {


                  }
                  if ((* budget) < 0)
                  {
                  }

                }

              }

              * (ftab + sb) |= (unsigned int) (1 << 21);
            }

            j++;
          }

          while_break___12:
          ;

        }







        {
          while (1)



































































































































































          {
            {
            }
          }

        }

        i++;
      }

      while_break___11:
      ;

    }







  }
}

void BZ2_blockSort(EState *s)
{
  UInt32 *ptr;
  UChar *block;
  UInt32 *ftab;
  Int32 nblock;
  Int32 verb;
  Int32 wfact;
  UInt16 *quadrant;
  Int32 budget;
  Int32 budgetInit;
  Int32 i;

  {













    {


































































    }







  }
}

