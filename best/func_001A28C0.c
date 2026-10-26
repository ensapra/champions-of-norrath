void func_001A28C0(void *b,unsigned n,unsigned z,int(*c)(const void*,const void*)){if(n<7){for(unsigned i=1;i<n;i++)c((char*)b+(i-1)*z,(char*)b+i*z);return;} c(b,(char*)b+(n/2)*z);}
