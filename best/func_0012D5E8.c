typedef struct 
{
  char a[0x258];
  char b[0x258];
  s32 f0;
  s32 f1;
  s32 f2;
  s32 f3;
  s32 f4;
} Loc;
typedef struct 
{
  char *base;
  s32 p4;
  s32 p8;
  s32 count;
} List;
typedef struct 
{
  char pad[0x4BC];
  s32 id;
} Ent;
extern s32 D_010CD3A0[];
extern s32 D_010CD39C[];
extern s32 D_001C6838[];
extern char *D_001C682C[];
extern List D_001BD948[];
extern s32 D_001BD93C[];
extern char D_004CA450[];
extern char D_004CA460[];
void func_001A3D78(char *, char *, char *);
void func_00110FD0(List *, Loc *);
s32 func_0013B6F0(char *, s32);
void func_001142C8(void);
inline char *inline_fn(int arg0)
{
  return D_001BD948->base + arg0;
}

void func_0012D5E8(void)
{
  Loc s;
  s32 i;
  s32 k;
  s32 found;
  s32 n = D_010CD3A0[0];
  if (n < 3)
  {
    if (n > 0)
    {
      for (i = 0; i < D_001C6838[0]; i++)
      {
        found = 0;
        for (k = 0; k < D_001BD948->count; k++)
        {
          if (((Ent *) inline_fn(k * 0x4C4))->id == i)
          {
            found = 1;
            break;
          }
        }

        if (!found)
        {
          s.f2 = D_010CD39C[0]++;
          s.f0 = 0;
          s.f1 = 4;
          func_001A3D78(s.a, D_004CA460, (D_001C682C[0] + (i * 0x20C)) + 0x10C);
          func_001A3D78(s.b, D_004CA460, (D_001C682C[0] + (i * 0x20C)) + 0x10C);
          s.f4 = -1;
          s.f3 = i;
          func_00110FD0(D_001BD948, &s);
        }
      }

    }
  }
  D_001BD93C[0] = func_0013B6F0(D_004CA450, -1);
  func_001142C8();
}
