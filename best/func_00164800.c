typedef struct { unsigned char pad0[0x10]; s32 owner, flag; unsigned char pad1[0xC]; s32 value; } Entry;
extern Entry D_006CB280[];
extern char D_00483FA8[],D_00483FB8[],D_00483FC8[];
s32 D_00483F8C;
extern s32 func_00144558(s32); extern void func_001646F8(s32); extern void func_00166F98(s32); extern void func_001729C8(s32); extern void func_001752F8(s32);
extern s32 func_003044FC(s32,char*); extern s32 func_003052D8(s32,s32);
void func_00164800(s32 arg0){
 s32 count=D_00483F8C, limit=count, i=0,j;
 if(count>0 && D_006CB280[0].owner!=arg0) { i=1; while(i<count && D_006CB280[i].owner!=arg0)i++; }
 if(i==limit)return;
 if(D_006CB280[i].flag&1) {
  s32 pos=func_003052D8(arg0,0x2e);
  if(pos){ pos++;
   if(!func_003044FC(pos,D_00483FA8))func_001729C8(arg0+0x100);
   else if(!func_003044FC(pos,D_00483FB8))func_001752F8(arg0+0x100);
   else if(!func_003044FC(pos,D_00483FC8))func_00166F98(arg0+0x100);
  }
 } else func_001646F8(arg0);
 if(D_006CB280[i].value)func_00144558(arg0);
 count=D_00483F8C-1;
 if(i<count)for(j=i;j<count;j++)D_006CB280[j]=D_006CB280[j+1];
 D_00483F8C=count;
}
