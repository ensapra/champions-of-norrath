typedef struct { unsigned char pad[0x5A0]; s32 unk5A0; s32 unk5A4; unsigned char p[0x2C]; s32 unk5D4; unsigned char q[0x28]; s32 unk5FC; } Obj;
extern s32 D_0047FC08;
extern s32 func_0014B41C(void *, s32);
extern void func_0014C900(void *);
extern s32 func_0014D29C(void *);
extern s32 func_0014F418(s32, void *);
extern s32 func_0015123C(void *, s64);
extern s32 func_00151280(void *, void *, s32, s32, void *, s32);
extern s32 func_00151340(void *);
extern s32 func_001513C8(void *, void *, s32, s32, void *, s32, void *, void *);
extern s32 func_00151584(void *, void *, s32, s32, void *);
extern void *func_001515B8(void *, void *);
extern s32 func_00151FA4(void *);
extern s32 func_00152320(void *);
extern s32 (*D_001C74EC)(void *, void *, s32, s32);
s32 func_00151030(void *a0, void *a1, s32 a2, s32 a3) {
 Obj *o=(Obj*)a0; void *item; void *node; s32 convert, mode; s32 x,y; s32 result;
 convert=func_00151FA4(a1); mode=func_00152320(a0);
 x=a2+o->unk5A0+o->unk5D4; y=a3+o->unk5A4+o->unk5D4;
 node=0;
 for (;;) {
   item=func_001515B8(a0,node);
   if (!item) break;
   node=item;
   void *entry=*(void**)((char*)item+0x10);
   if (*(s32*)((char*)entry+0xA4)==0) continue;
   if (*(s32*)((char*)entry+0x5F8)==0) continue;
   if (!func_0015123C(a1,*(s64*)((char*)entry+0x610))) continue;
   entry=*(void**)((char*)item+0x10);
   if (*(s32*)((char*)entry+0xA8)==0 || *(s32*)((char*)entry+0xAC)!=0) continue;
   if (func_0014B41C(entry,D_0047FC08)) {
      if (!func_00151280(a0,a1,x,y,entry,mode)) continue;
   } else if (convert) {
      s32 extra=0, tail=0;
      if (!func_001513C8(a0,a1,x,y,entry,mode,&extra,&tail)) continue;
      if (extra==0) return 1;
   } else {
      if (func_00151584(a0,a1,x,y,entry)) return 1;
      continue;
   }
   if (*(void**)((char*)a0+0x864) != *(void**)((char*)item+0x10)) {
      func_00151340((char*)a0+0x864);
      func_0014F418(func_0014D29C(a0),*(void**)((char*)item+0x10));
      *(void**)((char*)a0+0x864)=*(void**)((char*)item+0x10);
   }
   return 1;
 }
 func_00151340((char*)a0+0x864);
 if (*(s32*)((char*)a0+0x86C)) return 0;
 D_001C74EC(a0,a1,x,y);
 func_0014C900(a0);
 return mode==0;
}
