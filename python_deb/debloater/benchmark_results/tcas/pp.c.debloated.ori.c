typedef struct _IO_FILE FILE;
typedef int bool;
extern struct _IO_FILE *stdout;
int Cur_Vertical_Sep;
int Own_Tracked_Alt;
int Own_Tracked_Alt_Rate;
int Other_Tracked_Alt;
int Alt_Layer_Value;
int Positive_RA_Alt_Thresh[4];
int Up_Separation;
int Down_Separation;

int Other_Capability;
int Climb_Inhibit;
void initialize(void)
{
  {
    Positive_RA_Alt_Thresh[0] = 400;
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

bool Non_Crossing_Biased_Descend(void)
{
  int upward_preferred;

  int tmp;
  int tmp___1;
  int tmp___2;


  {
    {
      tmp = Inhibit_Biased_Climb();
      upward_preferred = tmp > Down_Separation;
    }
    if (upward_preferred)
    {
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



    }

  }
}

bool Own_Below_Threat(void)
{
  {

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
    {
      if (Own_Tracked_Alt_Rate <= 600)
      {
        if (Cur_Vertical_Sep > 600)
        {
          tmp = 1;
        }

      }

    }
    enabled = tmp;
    tcas_equipped = Other_Capability == 1;
    intent_not_known = tmp___0;
    if (enabled)
    {
      if (tcas_equipped)
      {
      }
      else
      {
        {
          if (tmp___1)
          {
            {
              tmp___2 = Own_Below_Threat();
            }
          }

          {
            need_upward_RA = tmp___3;
            tmp___4 = Non_Crossing_Biased_Descend();
          }
          if (tmp___4)
          {
            if (tmp___5)
            {
              tmp___6 = 0;
            }

          }
          else
          {
            {
              if (need_downward_RA)
              {
                alt_sep = 2;
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
    {
      Cur_Vertical_Sep = atoi(* (argv + 1));
      Own_Tracked_Alt_Rate = atoi(* (argv + 5));
      Up_Separation = atoi(* (argv + 8));
      Down_Separation = atoi(* (argv + 9));
      Other_Capability = atoi(* (argv + 11));
      tmp = alt_sep_test();
      fprintf((FILE *__restrict ) stdout, (const char *__restrict ) "%d\n", tmp);
    }
  }
}

