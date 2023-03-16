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
typedef int bool;
#pragma merger("0","/tmp/cil-C6YVQbeH.i","")
#pragma merger("0","/tmp/cil-JY7GYS94.i","")
extern struct _IO_FILE *stdout;
extern int fprintf(FILE *__restrict __stream, const char *__restrict __format, ...);
int Cur_Vertical_Sep;
bool High_Confidence;
bool Two_of_Three_Reports_Valid;
int Own_Tracked_Alt;
int Own_Tracked_Alt_Rate;
int Other_Tracked_Alt;
int Alt_Layer_Value;
int Positive_RA_Alt_Thresh[4];
int Up_Separation;
int Down_Separation;
int Other_RAC;
int Other_Capability;
int Climb_Inhibit;
void initialize(void)
{
  {
    Positive_RA_Alt_Thresh[0] = 400;
    Positive_RA_Alt_Thresh[1] = 500;
    Positive_RA_Alt_Thresh[2] = 640;
    Positive_RA_Alt_Thresh[3] = 740;
    return;
  }
}

int ALIM(void)
{
  {
    return Positive_RA_Alt_Thresh[Alt_Layer_Value];
  }
}

int Inhibit_Biased_Climb(void)
{
  int tmp;
  {
    if (Climb_Inhibit)
    {
      tmp = Up_Separation + 100;
    }
    else
    {
      tmp = Up_Separation;
    }

    return tmp;
  }
}

bool Non_Crossing_Biased_Climb(void)
{
  int upward_preferred;
  bool result;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  {
    {
      tmp = Inhibit_Biased_Climb();
      upward_preferred = tmp > Down_Separation;
    }
    if (upward_preferred)
    {
      {
        tmp___0 = Own_Below_Threat();
      }
      if (tmp___0)
      {
        {
          tmp___1 = Own_Below_Threat();
        }
        if (tmp___1)
        {
          {
            tmp___2 = ALIM();
          }
          if (Down_Separation >= tmp___2)
          {
            tmp___3 = 0;
          }

        }

      }

      result = tmp___3;
    }
    else
    {
      {
        tmp___4 = Own_Above_Threat();
      }
      if (tmp___4)
      {
        if (Cur_Vertical_Sep >= 300)
        {
          {
            tmp___5 = ALIM();
          }
          if (Up_Separation >= tmp___5)
          {
            tmp___6 = 1;
          }

        }

      }

      result = tmp___6;
    }

    return result;
  }
}

bool Non_Crossing_Biased_Descend(void)
{
  int upward_preferred;
  bool result;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  {
    {
      tmp = Inhibit_Biased_Climb();
      upward_preferred = tmp > Down_Separation;
    }
    if (upward_preferred)
    {
      {
        tmp___0 = Own_Below_Threat();
      }
      if (tmp___0)
      {
        if (Cur_Vertical_Sep >= 300)
        {
          {
            tmp___1 = ALIM();
          }
          if (Down_Separation >= tmp___1)
          {
            tmp___2 = 1;
          }

        }

      }

      result = tmp___2;
    }
    else
    {
      {
        tmp___3 = Own_Above_Threat();
      }
      if (tmp___3)
      {
        {
          tmp___4 = Own_Above_Threat();
        }
        if (tmp___4)
        {
          {
            tmp___5 = ALIM();
          }
          if (Up_Separation >= tmp___5)
          {
            tmp___6 = 1;
          }

        }

      }

      result = tmp___6;
    }

    return result;
  }
}

bool Own_Below_Threat(void)
{
  {
    return Own_Tracked_Alt < Other_Tracked_Alt;
  }
}

bool Own_Above_Threat(void)
{
  {
    return Other_Tracked_Alt < Own_Tracked_Alt;
  }
}

int alt_sep_test(void)
{
  bool enabled;
  bool tcas_equipped;
  bool intent_not_known;
  bool need_upward_RA;
  bool need_downward_RA;
  int alt_sep;
  int tmp;
  int tmp___0;
  bool tmp___1;
  bool tmp___2;
  int tmp___3;
  bool tmp___4;
  bool tmp___5;
  int tmp___6;
  {
    if (High_Confidence)
    {
      if (Own_Tracked_Alt_Rate <= 600)
      {
        if (Cur_Vertical_Sep > 600)
        {
          tmp = 1;
        }
        else
        {
          tmp = 0;
        }

      }
      else
      {
        tmp = 0;
      }

    }
    else
    {
      tmp = 0;
    }

    enabled = tmp;
    tcas_equipped = Other_Capability == 1;
    if (Two_of_Three_Reports_Valid)
    {
      if (Other_RAC == 0)
      {
        tmp___0 = 1;
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

    intent_not_known = tmp___0;
    alt_sep = 0;
    if (enabled)
    {
      if (tcas_equipped)
      {
        if (intent_not_known)
        {
          exit(- 1);
        }
        else
        {
          goto _L___1;
        }

      }
      else
      {
        _L___1:
        if (! tcas_equipped)
        {
          _L___0:
          {
            tmp___1 = Non_Crossing_Biased_Climb();
          }

          if (tmp___1)
          {
            {
              tmp___2 = Own_Below_Threat();
            }
            if (tmp___2)
            {
              exit(- 1);
            }
            else
            {
              tmp___3 = 0;
            }

          }
          else
          {
            tmp___3 = 0;
          }

          {
            need_upward_RA = tmp___3;
            tmp___4 = Non_Crossing_Biased_Descend();
          }
          if (tmp___4)
          {
            {
              tmp___5 = Own_Above_Threat();
            }
            if (tmp___5)
            {
              tmp___6 = 1;
            }
            else
            {
              tmp___6 = 0;
            }

          }

          need_downward_RA = tmp___6;
          if (need_upward_RA)
          {
            if (need_downward_RA)
            {
              exit(- 1);
            }

          }
          else
          {
            _L:
            if (need_upward_RA)
            {
              exit(- 1);
            }
            else
            {
              if (need_downward_RA)
              {
                alt_sep = 2;
              }
              else
              {
                alt_sep = 0;
              }

            }


          }

        }


      }

    }

    return alt_sep;
  }
}

int main(int argc, char **argv)
{
  int tmp;
  {
    if (argc < 13)
    {
      exit(- 1);
    }

    {
      initialize();
      Cur_Vertical_Sep = atoi(* (argv + 1));
      High_Confidence = atoi(* (argv + 2));
      Two_of_Three_Reports_Valid = atoi(* (argv + 3));
      Own_Tracked_Alt = atoi(* (argv + 4));
      Own_Tracked_Alt_Rate = atoi(* (argv + 5));
      Other_Tracked_Alt = atoi(* (argv + 6));
      Alt_Layer_Value = atoi(* (argv + 7));
      Up_Separation = atoi(* (argv + 8));
      Down_Separation = atoi(* (argv + 9));
      Other_RAC = atoi(* (argv + 10));
      Other_Capability = atoi(* (argv + 11));
      Climb_Inhibit = atoi(* (argv + 12));
      tmp = alt_sep_test();
      fprintf((FILE *__restrict ) stdout, (const char *__restrict ) "%d\n", tmp);
      exit(0);
    }
  }
}

