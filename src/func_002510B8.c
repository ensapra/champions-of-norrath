extern s32 D_00484F50; extern s32 D_00484F94; extern char D_0081E2B0[];
s32 func_0026FC90(s32); s32 func_002847A0(void); s32 func_00304640(void*,void*); s32 func_0025B528(void*,void*,s32);
typedef struct __attribute__((packed)){u64 a;u32 b;} P12;
typedef struct { signed char a, b; } S2;
void func_002510B8(void){
  s32 i; char *p; char *first; S2 ab; P12 temp; P12 *tp;
  p=D_0081E2B0;
  p+=func_0026FC90(D_00484F50);
  p+=func_002847A0();
  p+=0x1008;
  first=0;
  tp=&temp;
  for(i=0;i<4;i++){
    if(i==0){ab=*(S2*)p;}else{*(S2*)p=ab;}
    p+=2;
    if(i==0){*tp=*(P12*)p;}else{*(P12*)p=*tp;}
    p+=0xC;
    if(i==0){first=p;}else{
      func_00304640(p+0x24,first+0x24);
      func_0025B528(p+0x44,first+0x44,12);
      func_0025B528(p+0x4568,first+0x4568,0x1004);
    }
    p+=0x5DB0;
  }
  D_00484F94=1;
}
