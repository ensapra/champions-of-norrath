s32 *D_004868D4;
s32 *D_004868D8;
s32 *D_004868DC;
s32 D_004868FC;
s32 D_00486900;
s32 D_00486904;
s32 *func_002D2CA8(s32);
s32 FlushCache_2(s32);
s32 AddDmacHandler_3(s32, void *, s32);
s32 AddIntcHandler_3(s32, void *, s32);
s32 func_002D5CF8(s32);
s32 func_002D5C28(s32);
extern void func_0015ED18(void);
extern void func_0015FAC8(void);
void func_0015F928(void)
{
  ;
  *func_002D2CA8(0) |= 64;
  FlushCache_2(0);
  D_004868DC = func_002D2CA8(1);
  *D_004868DC |= 64;
  FlushCache_2(0);
  ;
  *func_002D2CA8(2) &= ~64;
  FlushCache_2(0);
  D_004868FC = AddDmacHandler_3(0, func_0015ED18, 0);
  func_002D5CF8(0);
  D_00486900 = AddDmacHandler_3(1, func_0015ED18, 0);
  func_002D5CF8(1);
  D_00486904 = AddDmacHandler_3(2, func_0015ED18, 0);
  func_002D5CF8(2);
  AddIntcHandler_3(0, func_0015FAC8, 0);
  func_002D5C28(0);
  *((volatile u64 *) 0x12001010) = 0x7d00;
  *((volatile u32 *) 0x10003010) = 4;
}
