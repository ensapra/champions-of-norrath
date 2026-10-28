typedef struct { f32 f[96]; } Blk;
extern Blk D_00476618;
extern f32 D_008D5E40[];
void func_00280510(void) {
 Blk tmp = D_00476618;
 s32 i, j;
 for (i = 0; i < 10; i++)
  for (j = 0; j < 8; j++)
   D_008D5E40[i*8+j] = tmp.f[i*8+j];
}
