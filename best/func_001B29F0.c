extern char func_01000000[], func_01109848[], jtbl_004C006C[];
s32 CreateSema(void *); s32 DeleteSema(s32); s32 WaitSema(s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, s32, s32, s32, s32);
void func_001B1538(s32); void func_001B1568(void); void func_001B1668(void);
s32 func_001B29F0(u8 *arg0, s32 arg1) {
 struct { s32 attr[8]; s32 result; } local;
 volatile u8 reserve[0x50];
 u8 *buf=(u8 *)(func_01000000+0x109800);
 void *entry=func_01109848+0x16B8, *slot=func_01109848+0xBF8;
 s32 i=0, sema, value;
 func_001B1538(arg1);
 if (*(s32 *)(jtbl_004C006C+0x3F30)==0) func_001B1668();
 u8 c=arg0[0]; buf[0xC]=c;
 if ((c<<24)!=0) {
  i=1;
  while (i<0x400) { c=arg0[i]; buf[i+0xC]=c; if ((c<<24)==0) break; i++; }
 }
 if (i==0x400) { buf[0x40B]=0; i=0x3FF; }
 local.attr[2]=0; local.attr[1]=1; local.attr[5]=0;
 sema=CreateSema(local.attr);
 *(void **)(buf+4)=&local.result; *(s32 *)buf=sema; *(s32 *)(buf+8)=4;
 if (func_001B08B0(entry,arg1,0,buf,i+0xD,(s32)slot,4,0,0)<0) { DeleteSema(sema); func_001B1568(); return -11; }
 value=*(s32 *)((u32)slot|0x20000000);
 func_001B1568();
 if (value==0) { DeleteSema(sema); return -11; }
 WaitSema(sema); DeleteSema(sema); return local.result;
}
