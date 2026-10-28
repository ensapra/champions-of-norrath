typedef struct { s32 w[6]; } SemaP;
typedef struct { s32 sema; s32 res; s32 f8; u32 len; s32 buf; u8 name[0x400]; } Job;
s32 CreateSema_2(void *);
void DeleteSema_2(s32);
void WaitSema_2(s32);
s32 func_002D7858(s32, u32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_002D8EF8(s32);
void func_002D8F28(void);
void func_002D9028(void);
extern s32 D_004449F4[];
extern Job D_008E04C0;
extern char D_008E1100[];
extern char D_008E1BC0[];
s32 func_002DBEE8(u8 *a, s32 b, u32 c)
{
  Job *j = &D_008E04C0;
  s32 i = 0;
  s32 sem;
  SemaP sp;
  s32 r;
  u8 ch;
  u32 ok = c < 0x400;
  func_002D8EF8(0x11);
  if (D_004449F4[0] == 0)
    func_002D9028();
  ch = a[0];
  j->name[0] = ch;
  if ((s8)ch != 0) {
    do {
      i++;
      if (i >= 0x400) break;
      ch = a[i];
      j->name[i] = ch;
    } while ((s8)ch != 0);
  }
  if (i == 0x400)
    j->name[0x3FF] = 0;
  if (!ok)
    c = 0x3FF;
  j->buf = b;
  j->len = c;
  func_002D7858(b, c);
  sp.w[2] = 0;
  sp.w[1] = 1;
  sp.w[5] = 0;
  sem = CreateSema_2(&sp);
  j->sema = sem;
  j->res = (s32)&r;
  j->f8 = 4;
  if (func_002D8270(D_008E1BC0, 0x19, 0, j, 0x80C, D_008E1100, 4, 0, 0) < 0) {
    DeleteSema_2(sem);
    func_002D8F28();
    return -11;
  }
  r = *(volatile s32 *)((u32)D_008E1100 | 0x20000000);
  func_002D8F28();
  if (r == 0) {
    DeleteSema_2(sem);
    return -11;
  }
  WaitSema_2(sem);
  DeleteSema_2(sem);
  return r;
}
