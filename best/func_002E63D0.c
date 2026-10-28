extern s32 SignalSema_2(s32); extern s32 WaitSema_2(s32);
struct Entry { char x[0x14]; s32 slot; s32 id; s32 state; char y[0xf0]; };
struct G { char x[0x2c]; s32 sema; char y[0x10]; s32 count; char z[0x14]; s32 updates; char w[0x2c]; struct Entry ent[1]; };
extern struct G D_008EBDD8;
s32 func_002E63D0(s32 id,s32 *out) {
 s32 i,n; struct Entry *e;
 if(D_008EBDD8.count<id || id<0 || out==0) return 0x80000004;
 *out=-1;
 n=D_008EBDD8.count;
 if (n > 0) {
 i = 0;
 e = D_008EBDD8.ent;
 do {
   if(e->id==id) {
    if(e->state==4) return 0x80000005;
    if(e->state==6) return 0x80000006;
    if(e->state==2) {
     WaitSema_2(D_008EBDD8.sema);
     e->slot=i+1;
     e->state=4;
     D_008EBDD8.updates++;
     SignalSema_2(D_008EBDD8.sema);
     *out=e->slot;
     return 0;
    }
   }
   i++; e++;
 } while (i<n);
 }
 return 0x80000002;
}
