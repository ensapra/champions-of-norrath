typedef struct { s32 a; u8 pad[12]; s32 id; s32 flags; u8 pad2[16]; } Ent;
extern Ent D_006CB280[];
extern s32 D_00483F8C;
s32 func_003044FC(Ent *, s32);
s32 func_00166E30(s32 arg) {
 s32 i;
 for(i=0;i<D_00483F8C;i++) {
  if(func_003044FC(&D_006CB280[i],arg)==0 && ((D_006CB280[i].flags^1)&1)) break;
 }
 if(i<D_00483F8C) return D_006CB280[i].id;
 return 0;
}
