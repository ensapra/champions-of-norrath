extern s32 D_001C4D74[];
extern s32 D_001BB6C4[];
extern char D_001BB720[];
extern char D_004CA290[];
extern s32 D_010CB038[];
extern s32 D_010CB040[];
extern s32 D_010CB060[];
void func_0010B378(s32, void *);
void func_00114948(s32, s32, s32, s32, void *, s32);
s32 func_001167E0(s32);
s32 func_0011BA18(s32);
void func_00138990(s32);
void func_00129E68(void);
void func_00129EC8(void)
{
  s32 sel = -1;
  func_0010B378(D_010CB038[D_001C4D74[0]], D_004CA290);
  switch (D_001C4D74[0])
  {
    case 0:
      if (D_010CB060[0] != 0)
    {
      sel = 0;
    }
    else
      if (D_010CB060[1] != 0)
    {
      sel = 1;
    }
      break;

    case 1:
      if (D_010CB060[1] != 0)
    {
      sel = 1;
    }
    else
      if (D_010CB060[0] != 0)
    {
      sel = 0;
    }
      break;

  }

  if (sel == (-1))
  {
    func_00114948(2, 500, 250, func_0011BA18(0x47), func_00129E68, D_001BB6C4[0]);
    return;
  }
  sel = (D_001BB6C4[0] = D_010CB040[sel]);
  D_001C4D74[0] = sel;
  if (func_001167E0(sel) != 2)
  {
    return;
  }
  func_0010B378(D_010CB038[D_001C4D74[0]], D_001BB720);
  func_00138990(D_001BB6C4[0]);
}
