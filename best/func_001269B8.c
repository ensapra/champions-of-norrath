extern char func_001C6058[]; extern char func_001C6788[]; extern char jtbl_004C006C[];
extern char func_0013E710[], func_0013E738[], func_0013E830[];
s32 func_001A4174(void*, void*); void func_0013E700(s32); void func_00126990(void*);
void func_00118140(void*,s32,void*,void*,void*); void func_00118160(void*,void*);
void func_001269B8(s32 arg0) {
 s32 count, i=0, off=0;
 if(arg0<0) goto done;
 count=*(s32*)(func_001C6788+0x9c);
 if(count>0) {
  i=0;
  do {
   if(func_001A4174(*(void**)(func_001C6788+0x98)+off+0x1c,func_001C6058+0xa8)) goto found;
   if(func_001A4174(*(void**)(func_001C6788+0x98)+off+0x11c,func_001C6058+0x1a8)) goto found;
   func_0013E700(i);
   goto done;
 found:
   i++; off+=0x21c;
  } while(i<count);
 }
 if(i==count) { func_00126990(jtbl_004C006C+0xa124); return; }
 {
  char local[0x50];
  func_00118140(local,1,func_0013E710,func_0013E738,func_0013E830);
  *(void**)(local+8)=func_00126990;
  func_00118160(local,func_00126990);
 }
 done: ;
}
