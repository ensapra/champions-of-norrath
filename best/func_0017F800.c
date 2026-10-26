s32 D_004844C8,D_004844C4,D_00484468,D_00486680; s8 D_00483F3D,D_004841C8,D_00484318,D_00484B00,D_00483829,D_004841C9,D_004842CE,D_004869E0,D_004841D0; s32 D_00484F50,D_00484538,D_004842D4,D_004842DC,D_00483F14,D_00484300,D_004842D0,D_00485AAC;
extern u8 D_00408600[],D_0037F1A0[],D_0037F220[],D_0037F270[],D_0034B6B1[],D_0034BEB8[],D_00463DD8[],D_004842F0[];
s32 func_001D0E70(void); s32 func_00284830(void); s32 func_001D38B0(void); s32 func_00135438(s32); s32 func_0025ACD8(void); s32 func_001353A8(s32); void func_001C7890(s32,s32); s32 func_003044FC(void*,void*); void func_001940E0(void*,s32); void func_002D0C90(s32); void func_00191490(void*,s32,s32,s32); s32 func_0024ADB8(s32); void func_0024A5D0(s32); void func_001CCA60(s32,s32); void func_00191648(void*); extern void func_0017E738(void);
void func_0017F800(void) {
 s32 *base,*obj,idx,i,was,f; u8 *entry; void *p,*q;
 if ((D_00484468 - ((D_004844C8-D_004844C4)>>3)) < 0xBB8) return;
 if(D_00486680 || D_00483F3D) return;
 if(func_001D0E70()) goto end;
 if(D_00484318 && D_004841C8) goto end;
 if(func_00284830()) goto end;
 if(D_00484B00) goto end;
 if(!D_00483829 && ((*(s32*)(D_00484F50+0x34)^1)!=0)) goto end;
 if(func_001D38B0()) goto end;
 base=(s32*)D_00408600; idx=func_00135438(0); obj=(s32*)((u8*)base+idx*0x5DB0);
 if(obj[0x5570/4]) { idx=func_00135438(0); obj=(s32*)((u8*)base+idx*0x5DB0); if(((u32)obj[3]&0x400000) && !D_004841C8) return; }
 for(i=0;i<D_00484538;i++) {
   if(!func_001353A8(i)) continue;
   entry=D_0034BEB8+i*0x58;
   if(!(*(u32*)(entry+0xC)&0x800)) continue;
   if(!D_00483829 && *(f32*)((u8*)base+i*0x5DB0+0xAC)<=0.0f) continue;
   if(func_0025ACD8()) continue;
   was=D_004841C8;
   if(was && D_004842D4!=(s32)D_0037F1A0) continue;
   D_004869E0=i;
   if(!was) {
     D_004841C8=1; func_001C7890(D_004869E0,1);
     if(!D_00483829) { D_00483F14=1; D_00484300=1; }
     p=D_0037F1A0;
     if(D_00485AAC) p=(*(u32*)(entry+8)==0x803)?D_0037F220:D_0037F1A0;
     D_004842D4=(s32)p;
     if(!func_003044FC(D_0034B6B1,D_004842F0)) D_004841C9=1; else D_004841C9=0;
     q=D_004841C9?D_0037F270:(void*)D_004842D4; D_004842D4=(s32)q; func_001940E0(q,0);
     D_004842D0=0; func_002D0C90(0); D_004842DC=1;
     func_00191490(func_0017E738,0x34,D_00463DD8,1); D_004841D0=0; return;
   } else if(D_004842D4==(s32)D_0037F1A0) {
     if(D_004842DC) { D_004841C8=0; D_004842CE=0; if(!D_00483829) {D_00483F14=0;D_00484300=0;} D_004842DC=0; idx=func_00135438(0); func_001C7890((s8)idx,0); func_00191648(func_0017E738); } else D_004841C8=1;
     f=func_0024ADB8(0)&0x40; if(f) func_0024A5D0(0); func_001CCA60(0,0); return;
   }
   return;
 }
end: ;
}
