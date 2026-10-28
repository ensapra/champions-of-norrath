typedef struct { char p0[0xC]; s16 id; char p1[0xA]; u32 f18; char p2[8]; s32 st; } E;
typedef struct { char p0[0x2C]; s32 sema; char p1[0x10]; s32 n1; s32 n2; char p2[0x1C]; s32 fl1; s32 fl2; } B;
extern B D_008EBDD8;
void WaitSema_2(s32);
void SignalSema_2(s32);
void func_002E7F58(s32 id) {
 B *b = &D_008EBDD8;
 E *e;
 s32 i;
 if (b->n1 > 0) {
  b = &D_008EBDD8;
  for (i = 0, e = (E *)((char *)b + 0x80); i < b->n1; i++, e = (E *)((char *)e + 0x110)) {
   if (e->id == id) {
    if (e->st == 6) return;
    WaitSema_2(b->sema);
    e->f18 = 0x80000006; e->id = -1; e->st = 6;
    b->fl1 = 1;
    SignalSema_2(b->sema);
    return;
   }
  }
 }
 if (b->n2 > 0) {
  for (i = 0, e = (E *)((char *)b + 0x4C0); i < b->n2; i++, e = (E *)((char *)e + 0x68)) {
   if (e->id == id) {
    if (e->st == 6) return;
    WaitSema_2(b->sema);
    e->f18 = 0x80000006; e->id = -1; e->st = 6;
    b->fl2 = 1;
    SignalSema_2(b->sema);
    return;
   }
  }
 }
}
