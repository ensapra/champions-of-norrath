u8 func_0017DFE8(u8 a){return a-(a>>4)*6;}
void func_0017E008(u8*p){p[7]=func_0017DFE8(p[7]);p[6]=func_0017DFE8(p[6]);p[5]=func_0017DFE8(p[5]);p[3]=func_0017DFE8(p[3]);p[2]=func_0017DFE8(p[2]);p[1]=func_0017DFE8(p[1]);}
s32 func_0017DCF0(void);void GetOsdConfigParam(u32*);void GetOsdConfigParam2(void*,s32,s32);extern u8 func_001D1C80[];
s32 func_0017DF50(void){u32 config;u8 ext[4];if(func_0017DCF0())return func_001D1C80[0x44F];GetOsdConfigParam(&config);if(((config>>13)&7)==0)return 0;GetOsdConfigParam2(ext,1,1);return (ext[0]>>5)&1;}
typedef struct {u8 b0,b1,b2,b3,b4,day,month,year;} Date;
extern s8 jtbl_004C006C[];
void ovl_ntgui2_func_0017E0D8(Date*d){s8 months[12];__builtin_memcpy(months,jtbl_004C006C+0xC6A4,12);d->day++;if(d->year%4==0)months[1]=29;if(months[d->month-1]<d->day){d->day=1;if(++d->month==13){if(d->year==99)d->year=0;else d->year++;d->month=1;}}}
