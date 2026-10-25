s32 SignalSema_2(s32); s32 WaitSema_2(s32); s32 func_002D8270(void *,s32,s32,void *,s32,void *,s32,s32,s32); void func_00302560(void *);
struct Rep;
typedef struct { struct Rep *w0; struct Rep *w4; struct Rep *w8; struct Rep *wC; } Q;
typedef struct Rep { s32 f0; char p4[8]; struct Rep *fC; char p10[0x10]; Q q; u16 f30; } Rep;
typedef struct { char p0[0xC]; u16 fC; char pE[2]; } Arg;
extern Rep *D_00447F74[]; extern s32 D_00447F7C[]; extern char D_0047C570[]; extern char D_0047C598[]; extern u8 D_008EA780[];
s32 func_002EA5F8(s32 arg0, Q *in) {
 s32 result;
 Rep *r;
 if (D_00447F7C[0] == -1) return 0x8000000A;
 if (in == 0) { func_00302560(D_0047C570); return 0x80000004; }
 WaitSema_2(D_00447F7C[0]);
 r = D_00447F74[0];
 r->fC = (Rep *)arg0;
 r->q = *in;
 if (func_002D8270(D_008EA780, 0xB, 0, D_00447F74[0], 0x30, D_00447F74[0], 0x30, 0, 0) == 0) {
  result = D_00447F74[0]->f0;
  ((Arg*)in)->fC = *(u16*)((char*)D_00447F74[0] + 0x2C);
  SignalSema_2(D_00447F7C[0]);
  return result;
 }
 func_00302560(D_0047C598);
 SignalSema_2(D_00447F7C[0]);
 return 0x80000000;
}
