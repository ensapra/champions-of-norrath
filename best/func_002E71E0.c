s32 func_002E8E28(void*,s32,void*); extern char D_008EBDD8[];
s32 func_002E71E0(s32 index) {
 s32 n=index-1,code,status; char *base=D_008EBDD8; char *p;
 if(*(s32*)(base+0x40)<n || n<0)return 0x80000004;
 p=base+0x88+n*0x110; status=*(s32*)(p+0x1c);
 switch(status) {
 case 4: code=1; break;
 case 6: code=0x80000006; break;
 case 1: case 2: code=0x8000000f; break;
 default: code=0x80000000; break;
 }
 if(code!=1)return code;
 code=*(s32*)(p+0x10); if(code)return code;
 func_002E8E28(p,1,p); return 0;
}
