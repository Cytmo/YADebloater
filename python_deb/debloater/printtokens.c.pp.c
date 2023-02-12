# 1 "printtokens.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "printtokens.c"



typedef long __off_t;
typedef long __off64_t;
typedef int BOOLEAN;
typedef char *string;
typedef unsigned long size_t;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
struct stream_type {
   FILE *fp ;
   int stream_ind ;
   char stream[80] ;
};
typedef struct stream_type *character_stream;
typedef char CHARACTER;
struct token_stream_type {
   character_stream ch_stream ;
};
typedef struct token_stream_type *token_stream;
struct token_type {
   int token_id ;
   char token_string[80] ;
};
typedef struct token_type *token;
#pragma merger("0","/tmp/cil-dunIBpnQ.i","")
#pragma merger("0","/tmp/cil-uRnG7XVt.i","")
extern unsigned short const **( __ctype_b_loc)(void) ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern FILE *fopen(char const  __filename , char const  __modes ) ;
extern int fprintf(FILE  __stream , char const  __format
                   , ...) ;
extern char *fgets(char  __s , int __n , FILE  __stream ) ;
character_stream open_character_stream(string FILENAME ) ;
CHARACTER get_char(character_stream stream_ptr ) ;
BOOLEAN is_end_of_character_stream(character_stream stream_ptr ) ;
token_stream open_token_stream(string FILENAME ) ;
token get_token(token_stream tstream_ptr ) ;
BOOLEAN is_eof_token(token t ) ;
int default1[60] =
  { 54, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 51, -2, -1,
        -1, -1, -1, -1,
        -1, -1, -1, -1,
        -1, -1, -1, -1,
        -1, -1, -1, -1,
        -1, -1, -1, -1,
        -1, -1, -1, -1,
        -1, -1, -1, -1,
        -1, -1, -1, 52,
        -3, -1, -1, -1,
        -1, -1, -1, -1};
int base[60] =
  { -32, -96, -105, -93,
        -94, -87, -1, -97,
        -86, -1, -99, -1,
        -72, -1, -80, -82,
        -1, 53, 43, -1,
        -1, -1, -1, -1,
        -1, -1, 133, -1,
        233, -1, -1, 0,
        -1, -1, -1, -1,
        -1, -1, -1, -1,
        -1, -1, -1, -1,
        -1, -1, -1, -1,
        -1, -1, -1, 46,
        40, -1, 251, -1,
        -1, -1, -1, -1};
int next[360] =
  { 0, 2, 26, 28,
        3, 4, 5, 23,
        19, 20, 6, -1,
        25, 8, 9, 11,
        18, 18, 18, 18,
        18, 18, 18, 18,
        18, 18, -1, 30,
        -1, 31, 13, 15,
        16, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 21,
        -1, 22, 32, -1,
        24, 7, 17, 17,
        17, 17, 17, 17,
        17, 12, 17, 17,
        1, 17, 17, 10,
        17, 17, 17, 17,
        17, 17, 17, 17,
        14, 17, 17, 18,
        18, 18, 18, 18,
        18, 18, 18, 18,
        18, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, -1,
        -1, 26, 26, 27,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        0, 0, -1, -1,
        -1, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29,
        29, 29, 29, 29};
int check[360] =
  { 0, 1, 0, 0,
        2, 3, 4, 0,
        0, 0, 5, -1,
        0, 7, 8, 10,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, -1, 0,
        -1, 0, 12, 14,
        15, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        -1, 0, 31, -1,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 18,
        18, 18, 18, 18,
        18, 18, 18, 18,
        18, 17, 17, 17,
        17, 17, 17, 17,
        17, 17, 17, 51,
        51, 51, 51, 51,
        51, 51, 51, 51,
        51, 51, 51, 51,
        51, 51, 51, 51,
        51, 51, 51, 51,
        51, 51, 51, 51,
        51, 52, 52, 52,
        52, 52, 52, 52,
        52, 52, 52, 52,
        52, 52, 52, 52,
        52, 52, 52, 52,
        52, 52, 52, 52,
        52, 52, 52, -1,
        -1, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        26, 26, 26, 26,
        54, 54, -1, -1,
        -1, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28,
        28, 28, 28, 28};
static token numeric_case(token_stream tstream_ptr , token token_ptr , char ch , char *token_str ,
                          int token_ind ) ;
static token error_or_eof_case(token_stream tstream_ptr , token token_ptr , int cu_state ,
                               char *token_str , int token_ind , char ch ) ;
static int check_delimiter(char ch ) ;
static int keyword(int state ) ;
static int special(int state ) ;
static void skip(character_stream stream_ptr ) ;
static int constant(int state , char *token_str , int token_ind ) ;
static int next_state(int state , char ch ) ;
static void get_actual_token(char *token_str , int token_ind ) ;
extern int exit() ;
BOOLEAN print_token(token token_ptr ) ;
int main(int argc , char **argv )
{
  token token_ptr ;
  token_stream stream_ptr ;
  BOOLEAN tmp ;

  {
  if (argc > 2) {
    {
    fprintf((FILE  )stdout, (char const  )"The format is print_tokens filename(optional)\n");
    exit(1);
    }
  }
  {
  stream_ptr = open_token_stream(*(argv + 1));
  }
  {
  while (1) {
    while_continue: ;
    {
    token_ptr = get_token(stream_ptr);
    tmp = is_eof_token(token_ptr);
    }
    if (tmp) {
      goto while_break;
    }
    {
    print_token(token_ptr);
    }
  }
  while_break: ;
  }
  {
  print_token(token_ptr);
  exit(0);
  }
}
}
extern int malloc() ;
character_stream open_character_stream(string FILENAME )
{
  character_stream stream_ptr ;
  int tmp ;
  FILE *tmp___0 ;

  {
  {
  tmp = malloc(sizeof(struct stream_type ));
  stream_ptr = (character_stream )tmp;
  stream_ptr->stream_ind = 5;
  stream_ptr->stream[5] = (char )'\000';
  }
  if ((unsigned long )FILENAME == (unsigned long )((void *)0)) {
    stream_ptr->fp = stdin;
  } else {
    {
    tmp___0 = fopen((char const  )FILENAME, (char const  )"r");
    stream_ptr->fp = tmp___0;
    }
    if ((unsigned long )tmp___0 == (unsigned long )((void *)0)) {
      {
      fprintf((FILE  )stdout, (char const  )"The file %s doesn\'t exists\n",
              FILENAME);
      exit(0);
      }
    }
  }
  return (stream_ptr);
}
}
CHARACTER get_char(character_stream stream_ptr )
{
  char *tmp ;
  int tmp___0 ;

  {
  if ((int )stream_ptr->stream[stream_ptr->stream_ind] == 0) {
    {
    tmp = fgets((char  )(stream_ptr->stream + 5), 75, (FILE  )stream_ptr->fp);
    }
    if ((unsigned long )tmp == (unsigned long )((void *)0)) {
      stream_ptr->stream[5] = (char)-1;
    }
    stream_ptr->stream_ind = 5;
  }
  tmp___0 = stream_ptr->stream_ind;
  (stream_ptr->stream_ind) ++;
  return (stream_ptr->stream[tmp___0]);
}
}
BOOLEAN is_end_of_character_stream(character_stream stream_ptr )
{


  {
  if ((int )stream_ptr->stream[stream_ptr->stream_ind - 1] == -1) {
    return (1);
  } else {
    return (0);
  }
}
}
void unget_char(CHARACTER ch , character_stream stream_ptr )
{


  {
  if (stream_ptr->stream_ind == 0) {
    return;
  } else {
    (stream_ptr->stream_ind) --;
    stream_ptr->stream[stream_ptr->stream_ind] = ch;
  }
  return;
}
}
token_stream open_token_stream(string FILENAME )
{
  token_stream token_ptr ;
  int tmp ;

  {
  {
  tmp = malloc(sizeof(struct token_stream_type ));
  token_ptr = (token_stream )tmp;
  token_ptr->ch_stream = open_character_stream(FILENAME);
  }
  return (token_ptr);
}
}
extern int strcpy() ;
token get_token(token_stream tstream_ptr )
{
  char token_str[80] ;
  int token_ind ;
  token token_ptr ;
  CHARACTER ch ;
  int cu_state ;
  int next_st ;
  int token_found ;
  int tmp ;
  int tmp___0 ;
  token tmp___1 ;
  token tmp___2 ;
  int tmp___3 ;

  {
  {
  tmp = malloc(sizeof(struct token_type ));
  token_ptr = (token )tmp;
  ch = get_char(tstream_ptr->ch_stream);
  token_found = 0;
  token_ind = token_found;
  cu_state = token_ind;
  }
  {
  while (1) {
    while_continue: ;
    if (! (! token_found)) {
      goto while_break;
    }
    if (token_ind < 80) {
      {
      tmp___0 = token_ind;
      token_ind ++;
      token_str[tmp___0] = ch;
      next_st = next_state(cu_state, (char )((int )ch));
      }
    } else {
      next_st = -1;
    }
    if (next_st == -1) {
      {
      tmp___1 = error_or_eof_case(tstream_ptr, token_ptr, cu_state, token_str, token_ind,
                                  (char )((int )ch));
      }
      return (tmp___1);
    } else {
    if (next_st == -2) {
      {
      tmp___2 = numeric_case(tstream_ptr, token_ptr, (char )((int )ch), token_str,
                             token_ind);
      }
      return (tmp___2);
    } else {
    if (next_st == -3) {
      {
      token_ptr->token_id = 17;
      unget_char(ch, tstream_ptr->ch_stream);
      token_ind --;
      get_actual_token(token_str, token_ind);
      strcpy(token_ptr->token_string, token_str);
      }
      return (token_ptr);
    }
    }
    }
    {
    if (next_st == 6) {
      goto case_6;
    }
    if (next_st == 9) {
      goto case_6;
    }
    if (next_st == 11) {
      goto case_6;
    }
    if (next_st == 13) {
      goto case_6;
    }
    if (next_st == 16) {
      goto case_6;
    }
    if (next_st == 19) {
      goto case_19;
    }
    if (next_st == 20) {
      goto case_19;
    }
    if (next_st == 21) {
      goto case_19;
    }
    if (next_st == 22) {
      goto case_19;
    }
    if (next_st == 23) {
      goto case_19;
    }
    if (next_st == 24) {
      goto case_19;
    }
    if (next_st == 25) {
      goto case_19;
    }
    if (next_st == 32) {
      goto case_19;
    }
    if (next_st == 27) {
      goto case_27;
    }
    if (next_st == 29) {
      goto case_27;
    }
    if (next_st == 30) {
      goto case_30;
    }
    goto switch_default;
    switch_default:
    goto switch_break;
    case_6:
    case_9:
    case_11:
    case_13:
    case_16:
    {
    ch = get_char(tstream_ptr->ch_stream);
    tmp___3 = check_delimiter((char )((int )ch));
    }
    if (tmp___3 == 1) {
      {
      token_ptr->token_id = keyword(next_st);
      unget_char(ch, tstream_ptr->ch_stream);
      token_ptr->token_string[0] = (char )'\000';
      }
      return (token_ptr);
    }
    {
    unget_char(ch, tstream_ptr->ch_stream);
    }
    goto switch_break;
    case_19:
    case_20:
    case_21:
    case_22:
    case_23:
    case_24:
    case_25:
    case_32:
    {
    token_ptr->token_id = special(next_st);
    token_ptr->token_string[0] = (char )'\000';
    }
    return (token_ptr);
    case_27:
    case_29:
    {
    token_ptr->token_id = constant(next_st, token_str, token_ind);
    get_actual_token(token_str, token_ind);
    strcpy(token_ptr->token_string, token_str);
    }
    return (token_ptr);
    case_30:
    {
    skip(tstream_ptr->ch_stream);
    next_st = 0;
    token_ind = next_st;
    }
    goto switch_break;
    switch_break: ;
    }
    {
    cu_state = next_st;
    ch = get_char(tstream_ptr->ch_stream);
    }
  }
  while_break: ;
  }
  return ((struct token_type *)0);
}
}
static token numeric_case(token_stream tstream_ptr , token token_ptr , char ch , char *token_str ,
                          int token_ind )
{
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
  tmp___1 = check_delimiter((char )((int )ch));
  }
  if (tmp___1 != 1) {
    token_ptr->token_id = -1;
    {
    while (1) {
      while_continue: ;
      {
      tmp___0 = check_delimiter((char )((int )ch));
      }
      if (! (tmp___0 == 0)) {
        goto while_break;
      }
      if (token_ind >= 80) {
        goto while_break;
      }
      {
      tmp = token_ind;
      token_ind ++;
      ch = get_char(tstream_ptr->ch_stream);
      *(token_str + tmp) = ch;
      }
    }
    while_break: ;
    }
    {
    unget_char(ch, tstream_ptr->ch_stream);
    token_ind --;
    get_actual_token(token_str, token_ind);
    strcpy(token_ptr->token_string, token_str);
    }
    return (token_ptr);
  }
  {
  token_ptr->token_id = 18;
  unget_char(ch, tstream_ptr->ch_stream);
  token_ind --;
  get_actual_token(token_str, token_ind);
  strcpy(token_ptr->token_string, token_str);
  }
  return (token_ptr);
}
}
static token error_or_eof_case(token_stream tstream_ptr , token token_ptr , int cu_state ,
                               char *token_str , int token_ind , char ch )
{
  BOOLEAN tmp ;

  {
  {
  tmp = is_end_of_character_stream(tstream_ptr->ch_stream);
  }
  if (tmp) {
    token_ptr->token_id = 0;
    token_ptr->token_string[0] = (char )'\000';
    return (token_ptr);
  }
  if (cu_state != 0) {
    {
    unget_char(ch, tstream_ptr->ch_stream);
    token_ind --;
    }
  }
  {
  token_ptr->token_id = -1;
  get_actual_token(token_str, token_ind);
  strcpy(token_ptr->token_string, token_str);
  }
  return (token_ptr);
}
}
static int check_delimiter(char ch )
{
  unsigned short const **tmp ;
  unsigned short const **tmp___0 ;

  {
  {
  tmp = __ctype_b_loc();
  }
  if (! ((int const )*(*tmp + (int )ch) & 1024)) {
    {
    tmp___0 = __ctype_b_loc();
    }
    if (! ((int const )*(*tmp___0 + (int )ch) & 2048)) {
      return (1);
    }
  }
  return (0);
}
}
static int keyword(int state )
{


  {
  {
  if (state == 6) {
    goto case_6;
  }
  if (state == 9) {
    goto case_9;
  }
  if (state == 11) {
    goto case_11;
  }
  if (state == 13) {
    goto case_13;
  }
  if (state == 16) {
    goto case_16;
  }
  goto switch_default;
  case_6:
  return (6);
  case_9:
  return (9);
  case_11:
  return (11);
  case_13:
  return (13);
  case_16:
  return (16);
  switch_default:
  {
  fprintf((FILE  )stdout, (char const  )"error\n");
  }
  goto switch_break;
  switch_break: ;
  }
  {
  exit(0);
  }
}
}
static int special(int state )
{


  {
  {
  if (state == 19) {
    goto case_19;
  }
  if (state == 20) {
    goto case_20;
  }
  if (state == 21) {
    goto case_21;
  }
  if (state == 22) {
    goto case_22;
  }
  if (state == 23) {
    goto case_23;
  }
  if (state == 24) {
    goto case_24;
  }
  if (state == 25) {
    goto case_25;
  }
  if (state == 32) {
    goto case_32;
  }
  goto switch_default;
  case_19:
  return (19);
  case_20:
  return (20);
  case_21:
  return (21);
  case_22:
  return (22);
  case_23:
  return (23);
  case_24:
  return (24);
  case_25:
  return (25);
  case_32:
  return (32);
  switch_default:
  {
  fprintf((FILE  )stdout, (char const  )"error\n");
  }
  goto switch_break;
  switch_break: ;
  }
  {
  exit(0);
  }
}
}
static void skip(character_stream stream_ptr )
{
  char c ;
  BOOLEAN tmp ;

  {
  {
  while (1) {
    while_continue: ;
    {
    c = get_char(stream_ptr);
    }
    if ((int )c != 10) {
      {
      tmp = is_end_of_character_stream(stream_ptr);
      }
      if (tmp) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
  }
  while_break: ;
  }
  if ((int )c == -1) {
    {
    unget_char(c, stream_ptr);
    }
  }
  return;
}
}
static int constant(int state , char *token_str , int token_ind )
{


  {
  {
  if (state == 27) {
    goto case_27;
  }
  if (state == 29) {
    goto case_29;
  }
  goto switch_default;
  case_27:
  return (27);
  case_29:
  *(token_str + (token_ind - 2)) = (char )' ';
  return (29);
  switch_default:
  goto switch_break;
  switch_break: ;
  }
  return (0);
}
}
static int next_state(int state , char ch )
{
  int tmp ;
  int tmp___0 ;

  {
  if (state < 0) {
    return (state);
  }
  if (base[state] + (int )ch >= 0) {
    if (check[base[state] + (int )ch] == state) {
      return (next[base[state] + (int )ch]);
    } else {
      {
      tmp = next_state(default1[state], ch);
      }
      return (tmp);
    }
  } else {
    {
    tmp___0 = next_state(default1[state], ch);
    }
    return (tmp___0);
  }
}
}
BOOLEAN is_eof_token(token t )
{


  {
  if (t->token_id == 0) {
    return (1);
  }
  return (0);
}
}
BOOLEAN print_token(token token_ptr )
{


  {
  {
  if (token_ptr->token_id == -1) {
    goto case_neg_1;
  }
  if (token_ptr->token_id == 0) {
    goto case_0;
  }
  if (token_ptr->token_id == 6) {
    goto case_6;
  }
  if (token_ptr->token_id == 9) {
    goto case_9;
  }
  if (token_ptr->token_id == 11) {
    goto case_11;
  }
  if (token_ptr->token_id == 13) {
    goto case_13;
  }
  if (token_ptr->token_id == 16) {
    goto case_16;
  }
  if (token_ptr->token_id == 17) {
    goto case_17;
  }
  if (token_ptr->token_id == 18) {
    goto case_18;
  }
  if (token_ptr->token_id == 19) {
    goto case_19;
  }
  if (token_ptr->token_id == 20) {
    goto case_20;
  }
  if (token_ptr->token_id == 21) {
    goto case_21;
  }
  if (token_ptr->token_id == 22) {
    goto case_22;
  }
  if (token_ptr->token_id == 23) {
    goto case_23;
  }
  if (token_ptr->token_id == 24) {
    goto case_24;
  }
  if (token_ptr->token_id == 25) {
    goto case_25;
  }
  if (token_ptr->token_id == 27) {
    goto case_27;
  }
  if (token_ptr->token_id == 29) {
    goto case_29;
  }
  if (token_ptr->token_id == 32) {
    goto case_32;
  }
  goto switch_default;
  case_neg_1:
  {
  fprintf((FILE  )stdout, (char const  )"error,\t\"");
  fprintf((FILE  )stdout, (char const  )"%s", token_ptr->token_string);
  fprintf((FILE  )stdout, (char const  )"\".\n");
  }
  return (1);
  case_0:
  {
  fprintf((FILE  )stdout, (char const  )"eof.\n");
  }
  return (1);
  case_6:
  {
  fprintf((FILE  )stdout, (char const  )"keyword,\t\"lambda\".\n");
  }
  return (1);
  case_9:
  {
  fprintf((FILE  )stdout, (char const  )"keyword,\t\"and\".\n");
  }
  return (1);
  case_11:
  {
  fprintf((FILE  )stdout, (char const  )"keyword,\t\"or\".\n");
  }
  return (1);
  case_13:
  {
  fprintf((FILE  )stdout, (char const  )"keyword,\t\"if\".\n");
  }
  return (1);
  case_16:
  {
  fprintf((FILE  )stdout, (char const  )"keyword,\t\"xor\".\n");
  }
  return (1);
  case_17:
  {
  fprintf((FILE  )stdout, (char const  )"identifier,\t\"");
  fprintf((FILE  )stdout, (char const  )"%s", token_ptr->token_string);
  fprintf((FILE  )stdout, (char const  )"\".\n");
  }
  return (1);
  case_18:
  {
  fprintf((FILE  )stdout, (char const  )"numeric,\t");
  fprintf((FILE  )stdout, (char const  )"%s", token_ptr->token_string);
  fprintf((FILE  )stdout, (char const  )".\n");
  }
  return (1);
  case_19:
  {
  fprintf((FILE  )stdout, (char const  )"lparen.\n");
  }
  return (1);
  case_20:
  {
  fprintf((FILE  )stdout, (char const  )"rparen.\n");
  }
  return (1);
  case_21:
  {
  fprintf((FILE  )stdout, (char const  )"lsquare.\n");
  }
  return (1);
  case_22:
  {
  fprintf((FILE  )stdout, (char const  )"rsquare.\n");
  }
  return (1);
  case_23:
  {
  fprintf((FILE  )stdout, (char const  )"quote.\n");
  }
  return (1);
  case_24:
  {
  fprintf((FILE  )stdout, (char const  )"bquote.\n");
  }
  return (1);
  case_25:
  {
  fprintf((FILE  )stdout, (char const  )"comma.\n");
  }
  return (1);
  case_27:
  {
  fprintf((FILE  )stdout, (char const  )"string,\t");
  fprintf((FILE  )stdout, (char const  )"%s", token_ptr->token_string);
  fprintf((FILE  )stdout, (char const  )".\n");
  }
  return (1);
  case_29:
  {
  fprintf((FILE  )stdout, (char const  )"character,\t\"");
  fprintf((FILE  )stdout, (char const  )"%s", token_ptr->token_string);
  fprintf((FILE  )stdout, (char const  )"\".\n");
  }
  return (1);
  case_32:
  {
  fprintf((FILE  )stdout, (char const  )"keyword,\t\"=>\".\n");
  }
  return (1);
  switch_default:
  goto switch_break;
  switch_break: ;
  }
  return (0);
}
}
static void get_actual_token(char *token_str , int token_ind )
{
  int ind ;
  int start ;
  unsigned short const **tmp ;
  unsigned short const **tmp___0 ;

  {
  ind = token_ind;
  {
  while (1) {
    while_continue: ;
    if (ind > 0) {
      {
      tmp = __ctype_b_loc();
      }
      if (! ((int const )*(*tmp + (int )*(token_str + (ind - 1))) & 8192)) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    ind --;
  }
  while_break: ;
  }
  *(token_str + ind) = (char )'\000';
  token_ind = ind;
  ind = 0;
  {
  while (1) {
    while_continue___0: ;
    if (! (ind < token_ind)) {
      goto while_break___0;
    }
    {
    tmp___0 = __ctype_b_loc();
    }
    if (! ((int const )*(*tmp___0 + (int )*(token_str + ind)) & 8192)) {
      goto while_break___0;
    }
    ind ++;
  }
  while_break___0: ;
  }
  start = 0;
  {
  while (1) {
    while_continue___1: ;
    if (! (ind <= token_ind)) {
      goto while_break___1;
    }
    *(token_str + start) = *(token_str + ind);
    start ++;
    ind ++;
  }
  while_break___1: ;
  }
  return;
}
}
