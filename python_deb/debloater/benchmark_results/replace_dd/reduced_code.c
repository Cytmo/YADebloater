typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
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
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
























  char _unused2[((15UL * (sizeof(int))) - (4UL * (sizeof(void *)))) - (sizeof(size_t))];
};
typedef char bool;
typedef char character;
typedef char string[100];
#pragma merger("0","./empty.i","-w")
#pragma merger("0","./replace.i","-w")
extern void exit();
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern int fprintf(FILE *__restrict __stream, const char *__restrict __format, ...);
extern int fputc(int __c, FILE *__stream);
extern char *fgets(char *__restrict __s, int __n, FILE *__restrict __stream);
void Caseerror(int n);
bool getline_in_replace(char *s, int maxsize)
{
  char *result;
  {
    {
      result = fgets((char *__restrict ) s, maxsize, (FILE *__restrict ) stdin);
    }
    return (bool) (((unsigned long) result) != ((unsigned long) ((char *) 0)));
  }
}

int addstr(char c, char *outset, int *j, int maxset)
{
  bool result;
  {
    if ((* j) >= maxset)
    {
 
    }
    else
    {
      * (outset + (* j)) = c;
      (* j)++;
      result = (bool) 1;
    }

    return (int) result;
  }
}

char esc(char *s, int *i)
{
  char result;
  {
    if (((int) (* (s + (* i)))) != 64)
    {
      result = * (s + (* i));
    }
    else
    {
      if (((int) (* (s + ((* i) + 1)))) == 0)
      {
 
      }
      else
      {
        (* i)++;
        if (((int) (* (s + (* i)))) == 110)
        {
          result = (char) 10;
        }
        else
        {
          if (((int) (* (s + (* i)))) == 116)
          {
            result = (char) 9;
          }
          else
          {
            result = * (s + (* i));
          }

        }

      }

    }

    return result;
  }
}



void dodash(char delim, char *src, int *i, char *dest, int *j, int maxset)
{
  int k;

  char escjunk;

  int tmp___0;


  int tmp___3;
  int tmp___4;
  int tmp___5;
  {
    {
      while (1)
      {
        while_continue:
        ;

        if (((int) (* (src + (* i)))) != ((int) delim))
        {
          if (! (((int) (* (src + (* i)))) != 0))
          {
 
          }

        }
        else
        {
          goto while_break;
        }

        if (((int) (* (src + ((* i) - 1)))) == 64)
        {
          {
            escjunk = esc(src, i);


          }
        }
        else
        {
          if (((int) (* (src + (* i)))) != 45)
          {
            {
              tmp___0 = addstr(* (src + (* i)), dest, j, maxset);

            }
          }
          else
          {
            if ((* j) <= 1)







            {
              if (((int) (* (src + ((* i) + 1)))) == 0)







              {
                {
                  tmp___4 = isalnum((int) (* (src + ((* i) - 1))));

                }
                if (tmp___4 & tmp___5)
                {
                  if (((int) (* (src + ((* i) - 1)))) <= ((int) (* (src + ((* i) + 1)))))
                  {
                    k = ((int) (* (src + ((* i) - 1)))) + 1;
                    {
                      while (1)
                      {
                        while_continue___0:



                        {
                          goto while_break___0;






                        }
                      }

                      while_break___0:
                      ;

                    }
                    (* i)++;
                  }
 
 
 
 
 
 
 

                }
                else
                {
                  {
                    tmp___3 = addstr((char) '-', dest, j, maxset);

                  }
                }

              }

            }

          }

        }

        (* i)++;
      }

      while_break:
      ;

    }

  }
}

bool getccl(char *arg, int *i, char *pat, int *j)
{
  int jstart;

  int tmp;
  int tmp___0;
  int tmp___1;
  {
    (* i)++;
    if (((int) (* (arg + (* i)))) == 94)
    {
      {
        tmp = addstr((char) '!', pat, j, 100);


      }
    }
    else
    {
      {
        tmp___0 = addstr((char) '[', pat, j, 100);

      }
    }

    {
      jstart = * j;
      tmp___1 = addstr((char) 0, pat, j, 100);

      dodash((char) ']', arg, i, pat, j, 100);
      * (pat + jstart) = (char) (((* j) - jstart) - 1);
    }
    return (bool) (((int) (* (arg + (* i)))) == 93);
  }
}

void stclose(char *pat, int *j, int lastj)
{
  int jt;
  int jp;

  int tmp;
  {
    jp = (* j) - 1;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (jp >= lastj))
        {
          goto while_break;
        }

        {
          jt = jp + 1;
          tmp = addstr(* (pat + jp), pat, & jt, 100);

          jp--;
        }
      }

      while_break:
      ;

    }
    (* j)++;
    * (pat + lastj) = (char) '*';

  }
}

bool in_set_2(char c)
{
  int tmp;
  {
    if (((int) c) == 37)
    {
 
    }
    else
    {
      if (((int) c) == 36)
      {
 
      }
      else
      {
        if (((int) c) == 42)
        {
          tmp = 1;
        }
        else
        {
          tmp = 0;
        }

      }

    }

    return (bool) tmp;
  }
}

bool in_pat_set(char c)
{
  int tmp;
  {
    if (((int) c) == 99)
    {
      tmp = 1;
    }
    else
    {
      if (((int) c) == 37)
      {
        tmp = 1;
      }
      else
      {
        if (((int) c) == 36)




        {
          if (((int) c) == 63)
          {
            tmp = 1;
          }
          else
          {
            if (((int) c) == 91)
            {
              tmp = 1;
            }
            else
            {
              if (((int) c) == 33)
              {
                tmp = 1;
              }
              else
              {
                if (((int) c) == 42)
                {
                  tmp = 1;
                }
 
 
 
 

              }

            }

          }

        }

      }

    }


  }
}

int makepat(char *arg, int start, char delim, char *pat)
{
  int result;
  int i;
  int j;
  int lastj;
  int lj;
  bool done;
  bool junk;
  bool getres;
  char escjunk;
  int tmp;
  int tmp___0;
  int tmp___1;
  bool tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  {
    j = 0;



    {
      while (1)
      {
        while_continue:
        ;

        if (! done)
        {
          if (((int) (* (arg + i))) != ((int) delim))
          {
            if (! (((int) (* (arg + i))) != 0))
            {
 
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

        lj = j;
        if (((int) (* (arg + i))) == 63)
        {
          {
            tmp = addstr((char) '?', pat, & j, 100);

          }
        }
        else
        {
          if (((int) (* (arg + i))) == 37)
          {
            if (i == start)
            {
              {
                tmp___0 = addstr((char) '%', pat, & j, 100);

              }
            }
 
 
 
 

          }
          else
          {
            _L___0:
            if (((int) (* (arg + i))) == 36)
            {
              if (((int) (* (arg + (i + 1)))) == ((int) delim))
              {
                {
                  tmp___1 = addstr((char) '$', pat, & j, 100);

                }
              }
 
 
 
 

            }
            else
            {
              _L:
              if (((int) (* (arg + i))) == 91)
              {
                {
                  getres = getccl(arg, & i, pat, & j);

                }
              }
              else
              {
                if (((int) (* (arg + i))) == 42)
                {
                  if (i > start)
                  {
                    {
                      lj = lastj;
                      tmp___2 = in_set_2(* (pat + lj));
                    }
                    if (tmp___2)
                    {
                      done = (bool) 1;
                    }
                    else
                    {
                      {
                        stclose(pat, & j, lastj);
                      }
                    }

                  }
 
 
 
 
 
 
 
 
 
 

                }
                else
                {
                  {
                    tmp___3 = addstr((char) 'c', pat, & j, 100);

                    escjunk = esc(arg, & i);
                    tmp___4 = addstr(escjunk, pat, & j, 100);

                  }
                }

              }


            }


          }

        }

        lastj = lj;

        {
          i++;
        }

      }

      while_break:
      ;

    }
    {
      tmp___5 = addstr((char) '\000', pat, & j, 100);
      junk = (bool) tmp___5;
    }
    if (done)
    {
      result = 0;
    }
    else
    {
      if (((int) (* (arg + i))) != ((int) delim))
      {
 
      }

      {
        if (! junk)
        {
 
        }
        else
        {
          result = i;
        }

      }

    }

    return result;
  }
}

int getpat(char *arg, char *pat)
{
  int makeres;
  {
    {
      makeres = makepat(arg, 0, (char) '\000', pat);
    }
    return makeres > 0;
  }
}

int makesub(char *arg, int from, character delim, char *sub)
{

  int i;
  int j;

  character escjunk;
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    j = 0;
    i = from;
    {
      while (1)
      {
        while_continue:
        ;

        if (((int) (* (arg + i))) != ((int) delim))
        {
          if (! (((int) (* (arg + i))) != 0))
          {
 
          }

        }
        else
        {
          goto while_break;
        }

        if (((unsigned int) (* (arg + i))) == 38U)
        {
          {
            tmp = addstr((char) (- 1), sub, & j, 100);

          }
        }
        else
        {
          {
            escjunk = esc(arg, & i);
            tmp___0 = addstr(escjunk, sub, & j, 100);

          }
        }

        i++;
      }

      while_break:
      ;

    }





    {
      {
        tmp___1 = addstr((char) '\000', sub, & j, 100);









      }

    }


  }
}

bool getsub(char *arg, char *sub)
{
  int makeres;
  {
    {
      makeres = makesub(arg, 0, (character) '\000', sub);
    }
    return (bool) (makeres > 0);
  }
}


bool locate(character c, char *pat, int offset)
{
  int i;
  bool flag;
  {
    flag = (bool) 0;
    i = offset + ((int) (* (pat + offset)));
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i > offset))
        {
          goto while_break;
        }

        if (((int) c) == ((int) (* (pat + i))))
        {
          flag = (bool) 1;
          i = offset;
        }
        else
        {
          i--;
        }

      }

      while_break:
      ;

    }
    return flag;
  }
}


bool omatch(char *lin, int *i, char *pat, int j)
{
  char advance;
  bool result;
  bool tmp;
  bool tmp___0;
  bool tmp___1;
  {
    advance = (char) (- 1);





    {
      {
        tmp___1 = in_pat_set(* (pat + j));
      }
      if (tmp___1)
      {
        {
          if (((int) (* (pat + j))) == 99)
          {
            goto case_99;
          }

          if (((int) (* (pat + j))) == 37)
          {
            goto case_37;
          }

          if (((int) (* (pat + j))) == 63)
          {
            goto case_63;
          }

          if (((int) (* (pat + j))) == 36)
          {
 
          }

          if (((int) (* (pat + j))) == 91)
          {
            goto case_91;
          }

          if (((int) (* (pat + j))) == 33)
          {
            goto case_33;
          }

 
          case_99:
          if (((int) (* (lin + (* i)))) == ((int) (* (pat + (j + 1)))))
          {
            advance = (char) 1;
          }


          goto switch_break;
          case_37:

          {
            advance = (char) 0;
          }


          goto switch_break;
          case_63:
          if (((int) (* (lin + (* i)))) != 10)
          {
            advance = (char) 1;
          }


          goto switch_break;


          {
 
          }


 
          case_91:
          {
            tmp = locate(* (lin + (* i)), pat, j + 1);
          }

          if (tmp)
          {
            advance = (char) 1;
          }

          goto switch_break;
          case_33:
          if (((int) (* (lin + (* i)))) != 10)
          {
            {
              tmp___0 = locate(* (lin + (* i)), pat, j + 1);
            }
            if (! tmp___0)
            {
              advance = (char) 1;
            }

          }


          goto switch_break;

          {
 
          }

          switch_break:
          ;

        }
      }
 
 
 
 
 
 
 

    }

    if (((int) advance) >= 0)
    {
      * i += (int) advance;
      result = (bool) 1;
    }
    else
    {
      result = (bool) 0;
    }

    return result;
  }
}

int patsize(char *pat, int n)
{
  int size;
  bool tmp;
  {
    {
      tmp = in_pat_set(* (pat + n));
    }
    if (tmp)
    {
      {
        if (((int) (* (pat + n))) == 99)
        {
          goto case_99;
        }

        if (((int) (* (pat + n))) == 63)
        {
          goto case_63;
        }

        if (((int) (* (pat + n))) == 36)
        {
 
        }

        if (((int) (* (pat + n))) == 37)
        {
          goto case_63;
        }

        if (((int) (* (pat + n))) == 33)
        {
          goto case_33;
        }

        if (((int) (* (pat + n))) == 91)
        {
          goto case_33;
        }

        if (((int) (* (pat + n))) == 42)
        {
          goto case_42;
        }

 
        case_99:
        size = 2;

        goto switch_break;
        case_63:


        size = 1;



        goto switch_break;
        case_33:

        size = ((int) (* (pat + (n + 1)))) + 2;


        goto switch_break;
        case_42:
        size = 1;



        {
 
        }

        switch_break:
        ;

      }
    }
 
 
 
 
 
 
 

    return size;
  }
}

int amatch(char *lin, int offset, char *pat, int j)
{
  int i;
  int k;
  bool result;
  bool done;
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    done = (bool) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! done)
        {
          if (! (((int) (* (pat + j))) != 0))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        if (((int) (* (pat + j))) == 42)
        {
          {
            tmp = patsize(pat, j);
            j += tmp;
            i = offset;
          }
          {
            while (1)
            {
              while_continue___0:
              ;

              if (! done)
              {
                if (! (((int) (* (lin + i))) != 0))
                {
 
                }

              }
              else
              {
                goto while_break___0;
              }

              {
                result = omatch(lin, & i, pat, j);
              }
              if (! result)
              {
                done = (bool) 1;
              }

            }

            while_break___0:
            ;

          }
          done = (bool) 0;
          {
            while (1)
            {
              while_continue___1:
              ;

              if (! done)
              {
                if (! (i >= offset))
                {
                  goto while_break___1;
                }

              }
              else
              {
                goto while_break___1;
              }

              {
                tmp___0 = patsize(pat, j);
                k = amatch(lin, i, pat, j + tmp___0);
              }
              if (k >= 0)
              {
                done = (bool) 1;
              }
              else
              {
                i--;
              }

            }

            while_break___1:
            ;

          }
          offset = k;

        }
        else
        {
          {
            result = omatch(lin, & offset, pat, j);
          }
          if (! result)
          {
            offset = - 1;
            done = (bool) 1;
          }
          else
          {
            {
              tmp___1 = patsize(pat, j);
              j += tmp___1;
            }
          }

        }

      }

      while_break:
      ;

    }
    return offset;
  }
}

void putsub(char *lin, int s1, int s2, char *sub)
{
  int i;
  int j;
  {
    i = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((int) (* (sub + i))) != 0))
        {
          goto while_break;
        }

        if (((int) (* (sub + i))) == (- 1))
        {
          j = s1;
          {
            while (1)
            {
              while_continue___0:
              ;

              if (! (j < s2))
              {
                goto while_break___0;
              }

              {
                fputc((int) (* (lin + j)), stdout);
                j++;
              }
            }

            while_break___0:
            ;

          }
        }
        else
        {
          {
            fputc((int) (* (sub + i)), stdout);
          }
        }

        i++;
      }

      while_break:
      ;

    }
    return;
  }
}

void subline(char *lin, char *pat, char *sub)
{
  int i;
  int lastm;
  int m;
  {
    lastm = - 1;
    i = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((int) (* (lin + i))) != 0))
        {
          goto while_break;
        }

        {
          m = amatch(lin, i, pat, 0);
        }
        if (m >= 0)
        {
          if (lastm != m)
          {
            {
              putsub(lin, i, m, sub);
              lastm = m;
            }
          }

        }

        if (m == (- 1))
        {
          {
            fputc((int) (* (lin + i)), stdout);
            i++;
          }
        }
        else
        {
          if (m == i)
          {
            {
              fputc((int) (* (lin + i)), stdout);
              i++;
            }
          }
          else
          {
            i = m;
          }

        }

      }

      while_break:
      ;

    }
    return;
  }
}

void change(char *pat, char *sub)
{
  string line;
  bool result;
  {
    {
      result = getline_in_replace(line, 100);
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! result)
        {
          goto while_break;
        }

        {
          subline(line, pat, sub);
          result = getline_in_replace(line, 100);
        }
      }

      while_break:
      ;

    }
    return;
  }
}

int main(int argc, char **argv)
{
  string pat;
  string sub;
  bool result;
  int tmp;
  {
    if (argc < 2)
    {
      {
 
 
      }
    }

    {
      tmp = getpat(* (argv + 1), pat);
      result = (bool) tmp;
    }
    if (! result)
    {
      {
        fprintf((FILE *__restrict ) stdout, (const char *__restrict ) "change: illegal \"from\" pattern\n");
        exit(2);
      }
    }

    if (argc >= 3)
    {
      {
        result = getsub(* (argv + 2), sub);
      }
      if (! result)
      {
        {
 
 
        }
      }

    }
 
 
 
 

    {
      change(pat, sub);
    }

  }
}

void Caseerror(int n)
{
 
 
 
 
 
 
}
